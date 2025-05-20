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
        public string QuestionJsonUrl = Path.Combine("..", "..", "docs", "db", "Questions.json");

        public void SetQuestionJsonUrl(string url)
        {
            QuestionJsonUrl = url;
        }

        #region Insert
        public async Task<ResponseController> InsertQuestions(Question item)
        {
            ResponseController response = new ResponseController();
            var result = await GetAllQuestionsAsync();
            if (result.Result)
            {
                (result.Data as List<Question>).Add(item);
                SaveAllQuestions(result.Data);
                response.Result = true;
            }
            return response;
        }
        #endregion

        #region Get
        public async Task<ResponseController> GetAllQuestionsAsync()
        {
            ResponseController response = new ResponseController();
            try
            {
                if (File.Exists(QuestionJsonUrl))
                {
                    var json = await File.ReadAllTextAsync(QuestionJsonUrl);
                    var data = System.Text.Json.JsonSerializer.Deserialize<List<Question>>(json, JsonOptions);
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

        public async Task<ResponseController> HttpGetAllQuestionsAsync(HttpClient http)
        {
            ResponseController response = new ResponseController();
            try
            {
                var json = await http.GetStringAsync(QuestionJsonUrl);
                var data = System.Text.Json.JsonSerializer.Deserialize<List<Question>>(json, JsonOptions);
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
        public async Task<ResponseController> UpdateQuestions(Question item)
        {
            ResponseController response = new ResponseController();
            var result = await GetAllQuestionsAsync();
            if (result.Result)
            {

                var list = (result.Data as List<Question>);
                var index = list.FindIndex(s => s.Id == item.Id);

                if (index != -1)
                {
                    list[index] = item;
                    SaveAllQuestions(list);
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
        public async Task<ResponseController> DeleteQuestions(string id)
        {
            ResponseController response = new ResponseController();
            var result = await GetAllQuestionsAsync();

            if (result.Result)
            {
                var list = result.Data as List<Question>;
                var itemToRemove = list.FirstOrDefault(s => s.Id == id);

                if (itemToRemove != null)
                {
                    list.Remove(itemToRemove);
                    SaveAllQuestions(list);
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
        public void SaveAllQuestions(List<Question> data)
        {
            string json = JsonSerializer.Serialize(data, JsonOptions);
            File.WriteAllText(QuestionJsonUrl, json);
        }
        #endregion
    }
}
