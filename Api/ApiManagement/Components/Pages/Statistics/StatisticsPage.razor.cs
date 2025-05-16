using Common.DataBase;
using Common.DataModels;
using Microsoft.AspNetCore.Components;

using Models = Common.DataModels;

namespace ApiManagement.Components.Pages.Statistics
{
    public partial class StatisticsPage
    {
        [Inject] JsonDbHandler Db { get; set; }
        public List<Models.Statistics> StatisticsList { get; set; } = new List<Models.Statistics>();

        private bool InsertModal { get; set; } = false;
        private Models.Statistics InsertStatistic { get; set; } = new Models.Statistics();

        protected override async Task OnInitializedAsync()
        {
            var result = await Db.GetAllStatisticsAsync();
            if (result.Result)
            {
                StatisticsList = result.Data;
            }
        }
    }
}
