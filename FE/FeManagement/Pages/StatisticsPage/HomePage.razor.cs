using Common.DataBase;
using Common.DataModels;
using FeManagement.Services;
using Microsoft.AspNetCore.Components;

namespace FeManagement.Pages.StatisticsPage
{
    public partial class HomePage
    {
        [Inject] HttpClient http { get; set; }
        [Inject] JsonDbHandler Db { get; set; }
        [Inject] AuthService AuthService { get; set; }
        private List<Statistics> StatisticsList { get; set; } = new List<Statistics>();
        protected override async Task OnInitializedAsync()
        {
           await AuthService.CheckLogged();

            
            Db.SetStatisticJsonUrl("db/Statistics.json");

            var response = await Db.HttpGetAllStatisticsAsync(http);
            StatisticsList = response.Data ?? new List<Statistics>();

        }
    }
}
