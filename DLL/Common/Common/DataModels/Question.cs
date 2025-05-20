using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Common.DataModels
{
    public class Question
    {
        public string Id { get; set; }

        public string PreTitle { get; set; }
        public string Title { get; set; }

        public string Answer { get; set; }

        public Question() 
        {
            Id = Guid.NewGuid().ToString();
            PreTitle = "Me seguirias queriendo si ";
        }
    }
}
