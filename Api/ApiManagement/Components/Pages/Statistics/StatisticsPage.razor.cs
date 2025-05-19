using System.Text.Json;
using ApiManagement.Controller;
using Common.DataBase;
using Common.DataModels;
using Microsoft.AspNetCore.Components;

using Models = Common.DataModels;

namespace ApiManagement.Components.Pages.Statistics
{
    public partial class StatisticsPage
    {
        [Inject] JsonDbHandler Db { get; set; }
        [Inject] DataController DController { get; set; }
        public List<Models.Statistics> StatisticsList { get; set; } = new List<Models.Statistics>();
        private DateTime? _startdate = DateTime.Today;
        private DateTime? _selecteddate = DateTime.Today;
        private Models.Statistics SelectedStatistic { get; set; } = new Models.Statistics();

        //modals
        private bool InsertModal { get; set; } = false;
        private bool UpdateModal { get; set; } = false;
        private Models.Statistics InsertStatistic { get; set; } = new Models.Statistics();

        protected override async Task OnInitializedAsync()
        {
            UpdateList();
        }

        #region Insert
        private async Task OnInsertData()
        {
            InsertStatistic.StartDate = _startdate ?? DateTime.Now;
            _ = DController.InsertData(await Db.InsertStatistics(InsertStatistic));
            await UpdateList();
            InsertStatistic= new Models.Statistics();
            InsertModal = false;
        }
        #endregion

        #region Get
        private async Task UpdateList()
        {
            
            var result = await Db.GetAllStatisticsAsync();
            if (result.Result)
            {
                StatisticsList = result.Data;
            }
            StateHasChanged();
        }
        #endregion

        #region Update
        private async Task EditStatistic(Models.Statistics statistic)
        {
            SelectedStatistic = JsonSerializer.Deserialize<Models.Statistics>(JsonSerializer.Serialize(statistic));
            _selecteddate = SelectedStatistic.StartDate;
            UpdateModal = true;
        }
        private async Task OnUpdateData()
        {
            SelectedStatistic.StartDate = _selecteddate ?? DateTime.Now;
            _ = DController.UpdateData(await Db.UpdateStatistics(SelectedStatistic));
            await UpdateList();
            SelectedStatistic = new Models.Statistics();
            UpdateModal = false;
        }
        #endregion
    }
}
