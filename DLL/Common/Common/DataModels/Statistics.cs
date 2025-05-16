using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Common.DataModels
{
    public class Statistics
    {
        public string Id { get; set; }
        public string Name { get; set; }
        public string Description { get; set; }
        public DateTime StartDate { get; set; }

        public Statistics() { }

        public Statistics(string name, string description, DateTime startDate)
        {
            Id = Guid.NewGuid().ToString();
            Name = name;
            Description = description;
            StartDate = startDate;
        }
    }
}
