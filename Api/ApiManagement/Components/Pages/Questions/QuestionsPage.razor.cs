using System.Text.Json;
using ApiManagement.Controller;
using Common.DataBase;
using Common.DataModels;
using Microsoft.AspNetCore.Components;

using Models = Common.DataModels;

namespace ApiManagement.Components.Pages.Questions
{
    public partial class QuestionsPage
    {
        [Inject] JsonDbHandler Db { get; set; }
        [Inject] DataController DController { get; set; }
        public List<Models.Question> QuestionsList { get; set; } = new List<Models.Question>();

        private Models.Question SelectedQuestion { get; set; } = new Models.Question();

        //modals
        private bool InsertModal { get; set; } = false;
        private bool UpdateModal { get; set; } = false;
        private bool DeleteModal { get; set; } = false;
        private Models.Question InsertQuestion { get; set; } = new Models.Question();

        protected override async Task OnInitializedAsync()
        {
            UpdateList();
        }

        #region Insert
        private async Task OnInsertData()
        {
            _ = DController.InsertData(await Db.InsertQuestions(InsertQuestion));
            await UpdateList();
            InsertQuestion = new Models.Question();
            InsertModal = false;
        }
        #endregion

        #region Get
        private async Task UpdateList()
        {
            
            var result = await Db.GetAllQuestionsAsync();
            if (result.Result)
            {
                QuestionsList = result.Data;
            }
            StateHasChanged();
        }
        #endregion

        #region Update
        private async Task EditQuestion(Models.Question question)
        {
            SelectedQuestion = JsonSerializer.Deserialize<Models.Question>(JsonSerializer.Serialize(question));
            UpdateModal = true;
        }
        private async Task OnUpdateData()
        {
            _ = DController.UpdateData(await Db.UpdateQuestions(SelectedQuestion));
            await UpdateList();
            SelectedQuestion = new Models.Question();
            UpdateModal = false;
        }
        #endregion

        #region Delete
        private async Task DeleteQuestion(Models.Question question)
        {
            SelectedQuestion = JsonSerializer.Deserialize<Models.Question>(JsonSerializer.Serialize(question));
            DeleteModal = true;
        }
        private async Task OnDeleteData()
        {
            _ = DController.DeleteData(await Db.DeleteQuestions(SelectedQuestion.Id));
            await UpdateList();
            SelectedQuestion = new Models.Question();
            DeleteModal = false;
        }
        #endregion
    }
}
