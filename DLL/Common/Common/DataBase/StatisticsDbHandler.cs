using System;
using System.Net.Http.Json;
using System.Text.Json;
using Common.DataModels;
using static System.Runtime.InteropServices.JavaScript.JSType;


namespace Common.DataBase
{
    public partial class JsonDbHandler
    {
        public string StatisticJsonUrl = Path.Combine("..", "..", "docs", "db", "Statistics.json");

        public void SetStatisticJsonUrl(string url)
        {
            StatisticJsonUrl = url;
        }

        #region Insert
        public async Task<ResponseController> InsertStatistics(Statistics item)
        {
            ResponseController response = new ResponseController();
            var result = await GetAllStatisticsAsync();
            if (result.Result) 
            {
                (result.Data as List<Statistics>).Add(item);
                SaveAllStatistics(result.Data);
                response.Result = true;
            }
            return response;
        }
        #endregion

        #region Get
        public async Task<ResponseController> GetAllStatisticsAsync()
        {
            ResponseController response = new ResponseController();
            try
            {
                if(File.Exists(StatisticJsonUrl))
                {
                var json = await File.ReadAllTextAsync(StatisticJsonUrl);
                var data = System.Text.Json.JsonSerializer.Deserialize<List<Statistics>>(json, JsonOptions);
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

        public async Task<ResponseController> HttpGetAllStatisticsAsync(HttpClient http, string url = "db/Statistics.json")
        {
            ResponseController response = new ResponseController();
            try
            {
                var json = await http.GetStringAsync(url);
                var data = System.Text.Json.JsonSerializer.Deserialize<List<Statistics>>(json, JsonOptions);
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
        public async Task<ResponseController> UpdateStatistics(Statistics statistic)
        {
            ResponseController response = new ResponseController();
            var result = await GetAllStatisticsAsync();
            if (result.Result)
            {

                var list = (result.Data as List<Statistics>);
                var index = list.FindIndex(s => s.Id == statistic.Id);

                if (index != -1)
                {
                    list[index] = statistic;
                    SaveAllStatistics(list);
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
        public async Task<ResponseController> DeleteStatistics(string id)
        {
            ResponseController response = new ResponseController();
            var result = await GetAllStatisticsAsync();

            if (result.Result)
            {
                var list = result.Data as List<Statistics>;
                var itemToRemove = list.FirstOrDefault(s => s.Id == id);

                if (itemToRemove != null)
                {
                    list.Remove(itemToRemove);
                    SaveAllStatistics(list);
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
        public void SaveAllStatistics(List<Statistics> data)
        {
            string json = JsonSerializer.Serialize(data, JsonOptions);
            File.WriteAllText(StatisticJsonUrl, json);
        }
        #endregion
    }
}
