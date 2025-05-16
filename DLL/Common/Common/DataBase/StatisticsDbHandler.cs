using System.Text.Json;
using Common.DataModels;
using static System.Runtime.InteropServices.JavaScript.JSType;


namespace Common.DataBase
{
    public partial class JsonDbHandler
    {
        public string StatisticJsonUrl = Path.Combine("..", "..", "docs", "db", "Statistics.json");

        #region Insert
        public void Add(Statistics item)
        {
            var result = GetAllStatisticsAsync().Result;
            if (result.Result) 
            {
                (result.Data as List<Statistics>).Add(item);
                SaveAll(result.Data);
            }
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
        #endregion

        #region Save
        public void SaveAll(List<Statistics> data)
        {
            string json = JsonSerializer.Serialize(data, JsonOptions);
            File.WriteAllText(StatisticJsonUrl, json);
        }
        #endregion
    }
}
