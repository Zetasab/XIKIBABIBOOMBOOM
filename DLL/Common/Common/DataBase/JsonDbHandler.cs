using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Text.Json;
using System.Threading.Tasks;
using Common.DataModels;

namespace Common.DataBase
{
    public partial class JsonDbHandler
    {
        public JsonDbHandler Current { get; set; }

        JsonSerializerOptions JsonOptions = new JsonSerializerOptions()
        {
            PropertyNameCaseInsensitive = true
        };

        private JsonSerializerOptions options = new JsonSerializerOptions
        {
            PropertyNameCaseInsensitive = true
        };
        public JsonDbHandler() 
        {
            Current = this;
        }

        

        //public bool fileExist()
        //{
        //    return File.Exists(JsonUrl);
        //}


    }
}
