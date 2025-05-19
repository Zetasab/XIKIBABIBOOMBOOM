using Common.DataBase;
using Common.DataModels;
using Microsoft.AspNetCore.Components;

namespace FeManagement.Pages
{
    public partial class Home
    {
        [Inject] JsonDbHandler Db { get; set; }
        private List<Statistics> StatisticsList { get; set; } = new List<Statistics>();
        protected override async Task OnInitializedAsync()
        {
            Db.SetStatisticJsonUrl("XIKIBABIBOOMBOOM/db/Statistics.json");

            var response = await Db.GetAllStatisticsAsync();
            StatisticsList = response.Data ?? new List<Statistics>();

        }
    }
}
