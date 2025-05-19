using Common.DataBase;
using Common.DataModels;
using Microsoft.AspNetCore.Components;

namespace FeManagement.Pages
{
    public partial class Home
    {
        [Inject] HttpClient http { get; set; }
        [Inject] JsonDbHandler Db { get; set; }
        private List<Statistics> StatisticsList { get; set; } = new List<Statistics>();
        protected override async Task OnInitializedAsync()
        {
            Db.SetStatisticJsonUrl("db/Statistics.json");

            var response = await Db.HttpGetAllStatisticsAsync(http);
            StatisticsList = response.Data ?? new List<Statistics>();

        }
    }
}
