using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Common.DataModels
{
    public class Memory
    {
        public string Id { get; set; }
        public string Description { get; set; }
        public string Url { get; set; }
        public DateTime Date { get; set; }

        public Memory()
        {
            Id = Guid.NewGuid().ToString();
        }
    }
}
