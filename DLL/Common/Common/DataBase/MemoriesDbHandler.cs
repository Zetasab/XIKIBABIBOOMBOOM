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
        public string MemoryJsonUrl = Path.Combine("..", "..", "docs", "db", "Memories.json");

        #region Insert
        public async Task<ResponseController> InsertMemorys(Memory item)
        {
            ResponseController response = new ResponseController();
            var result = await GetAllMemorysAsync();
            if (result.Result)
            {
                (result.Data as List<Memory>).Add(item);
                SaveAllMemorys(result.Data);
                response.Result = true;
            }
            return response;
        }
        #endregion

        #region Get
        public async Task<ResponseController> GetAllMemorysAsync()
        {
            ResponseController response = new ResponseController();
            try
            {
                if (File.Exists(MemoryJsonUrl))
                {
                    var json = await File.ReadAllTextAsync(MemoryJsonUrl);
                    var data = System.Text.Json.JsonSerializer.Deserialize<List<Memory>>(json, JsonOptions);
                    response.Data = data;
                    response.Result = true;
                }
                else
                {
                    throw new Exception();
                }
            }
            catch (Exception ex)
            {
                response.Result = false;
                response.Message = ex.Message;
            }

            return response;
        }

        public async Task<ResponseController> HttpGetAllMemorysAsync(HttpClient http, string url = "db/Memories.json")
        {
            ResponseController response = new ResponseController();
            try
            {
                var json = await http.GetStringAsync(url);
                var data = System.Text.Json.JsonSerializer.Deserialize<List<Memory>>(json, JsonOptions);
                response.Data = data;
                response.Result = true;
            }
            catch (Exception ex)
            {
                response.Result = false;
                response.Message = ex.Message;
            }

            return response;
        }
        #endregion

        #region Update
        public async Task<ResponseController> UpdateMemorys(Memory item)
        {
            ResponseController response = new ResponseController();
            var result = await GetAllMemorysAsync();
            if (result.Result)
            {

                var list = (result.Data as List<Memory>);
                var index = list.FindIndex(s => s.Id == item.Id);

                if (index != -1)
                {
                    list[index] = item;
                    SaveAllMemorys(list);
                    response.Result = true;
                }
                else
                {
                    response.Result = false;
                    response.Message = "Elemento no encontrado";
                }
            }
            return response;
        }
        #endregion

        #region Delete
        public async Task<ResponseController> DeleteMemorys(string id)
        {
            ResponseController response = new ResponseController();
            var result = await GetAllMemorysAsync();

            if (result.Result)
            {
                var list = result.Data as List<Memory>;
                var itemToRemove = list.FirstOrDefault(s => s.Id == id);

                if (itemToRemove != null)
                {
                    list.Remove(itemToRemove);
                    SaveAllMemorys(list);
                    response.Result = true;
                }
                else
                {
                    response.Result = false;
                    response.Message = "Elemento no encontrado";
                }
            }

            return response;
        }
        #endregion


        #region Save
        public void SaveAllMemorys(List<Memory> data)
        {
            string json = JsonSerializer.Serialize(data, JsonOptions);
            File.WriteAllText(MemoryJsonUrl, json);
        }
        #endregion
    }
}
