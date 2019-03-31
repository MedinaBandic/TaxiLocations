using Microsoft.Analytics.Interfaces;
using Microsoft.Analytics.Types.Sql;
using System;
using System.Collections.Generic;
using System.Device.Location;
using System.Globalization;
using System.IO;
using System.Linq;
using System.Text;

namespace TaxiDataUtilities
{
    public class TaxiData
    {
        public double? speed;
        public double lat;
        public double lon;
        public DateTime timestamp;
        public int id;
        public int? staying;
        private static string dateFormat = "yyyy-MM-dd HH:mm:ss.FFFFFF+01";
        public static TaxiData FromString(string line)
        {
            TaxiData ret = new TaxiData();
            try
            {
                var tokens = line.Split(';');
                ret.id = int.Parse(tokens[0]);
                ret.timestamp = DateTime.ParseExact(tokens[1], dateFormat, null);
                var p = tokens[2].Substring(6, tokens[2].Length - 7).Split(' ');
                ret.lat = double.Parse(p[0], CultureInfo.InvariantCulture);
                ret.lon = double.Parse(p[1], CultureInfo.InvariantCulture);
                if (tokens.Length >= 4 && tokens[3].Length > 0)
                {
                    ret.speed = double.Parse(tokens[3]);
                }
                if (tokens.Length >= 5 && tokens[4].Length > 0)
                {
                    ret.staying = int.Parse(tokens[4]);
                }
                return ret;
            } catch(Exception)
            {
                return new TaxiData() { id = -1 };
            }
        }
        public override string ToString()
        {
            var ret = id.ToString() + ";" + timestamp.ToString(dateFormat) + ";" + "POINT(" + lat + " " + lon + ");";
            if (speed.HasValue)
                ret += speed.Value.ToString();
            ret += ";";
            if (staying.HasValue)
                ret += staying.Value.ToString();
            return ret;
        }
    }
}