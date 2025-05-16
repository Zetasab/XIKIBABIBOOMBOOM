using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Common.DataModels
{
    public class ResponseController
    {
        public bool Result { get; set; } = false;
        public dynamic? Data { get; set; }
        public string Message { get; set; } = "";

        public ResponseController() 
        {

        }

    }
}
