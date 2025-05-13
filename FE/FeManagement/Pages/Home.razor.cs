using System.Net.Http.Json;
using Common.Models;
using Microsoft.AspNetCore.Components;
using static System.Net.WebRequestMethods;

namespace FeManagement.Pages
{
    public partial class Home
    {
        [Inject] HttpClient Http { get; set; }
        private List<TestJson>? personas;

        protected override async Task OnInitializedAsync()
        {
            personas = await Http.GetFromJsonAsync<List<TestJson>>("db/test.json");
        }

        public class Persona
        {
            public string Nombre { get; set; } = string.Empty;
            public int Edad { get; set; }
        }
    }
}
