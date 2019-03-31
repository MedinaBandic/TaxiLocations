using System;
using System.Collections.Generic;
using System.Device.Location;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace TaxiDataUtilities
{
    class Program
    {
        public static void Main(string[] args)
        {
            Dictionary<int, TaxiData> dict = new Dictionary<int, TaxiData>();
            StreamReader reader = new StreamReader(args[0]);
            StreamWriter writer = new StreamWriter(args[1]);
            string line;
            while ((line = reader.ReadLine()) != null)
            {
                TaxiData data = TaxiData.FromString(line);
                if (dict.ContainsKey(data.id))
                {
                    GeoCoordinate a = new GeoCoordinate(data.lat, data.lon);
                    GeoCoordinate b = new GeoCoordinate(dict[data.id].lat, dict[data.id].lon);
                    double dist = a.GetDistanceTo(b) * 0.001;
                    TimeSpan diff = data.timestamp.Subtract(dict[data.id].timestamp);
                    double speed = dist / diff.TotalHours;
                    if (diff.TotalSeconds > 13 && speed < 110)
                    {
                        data.speed = speed;
                    }
                    if (data.speed.HasValue && data.speed < 3)
                    {
                        data.staying = (dict[data.id].staying.HasValue ? dict[data.id].staying : 0) + 1;
                    } else
                    {
                        data.staying = 0;
                    }
                }
                dict[data.id] = data;
                writer.WriteLine(data);
            }
        }

    }
}
