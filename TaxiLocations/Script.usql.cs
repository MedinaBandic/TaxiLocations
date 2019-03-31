using Microsoft.Analytics.Interfaces;
using Microsoft.Analytics.Types.Sql;
using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using TaxiDataUtilities;

namespace TaxiLocations
{
    // 156;2014-02-01 00:00:00.739166+01;POINT(41.8836718276551 12.4877775603346)
    [SqlUserDefinedExtractor]
    public class TxtExtractor : IExtractor
    {
        public override IEnumerable<IRow> Extract(IUnstructuredReader input, IUpdatableRow outputrow)
        {
            StreamReader reader = new StreamReader(input.BaseStream);
            string line;
            while ((line = reader.ReadLine()) != null)
            {
                TaxiData data = TaxiData.FromString(line);
                outputrow.Set<int>("TaxiID", data.id);
                outputrow.Set<DateTime>("Timestamp", data.timestamp);
                outputrow.Set<double>("Lat", data.lat);
                outputrow.Set<double>("Lon", data.lon);
                outputrow.Set<double?>("Speed", data.speed);
                outputrow.Set<int?>("Staying", data.staying);
                yield return outputrow.AsReadOnly();
            }
        }
    }
}
