using Common.DataBase;
using Common.DataModels;
using FeManagement.Services;
using Microsoft.AspNetCore.Components;
using System.Timers;

namespace FeManagement.Pages.StatisticsPage
{
    public partial class HomePage
    {
        [Inject] HttpClient http { get; set; }
        [Inject] JsonDbHandler Db { get; set; }
        private List<Statistics> StatisticsList { get; set; } = new List<Statistics>();

        private System.Timers.Timer _timer;
        protected override async Task OnInitializedAsync()
        {
            var response = await Db.HttpGetAllStatisticsAsync(http);
            StatisticsList = response.Data ?? new List<Statistics>();


            _timer = new System.Timers.Timer(1000); // Cada 1000ms = 1 segundo
            _timer.Elapsed += (sender, args) =>
            {
                InvokeAsync(StateHasChanged); // Para que actualice la UI en el hilo correcto
                Console.WriteLine("sgue");
            };
            _timer.Start();
        }

        public void Dispose()
        {
            _timer?.Stop();
            _timer?.Dispose();
        }

        public string TiempoTranscurrido(DateTime startdate)
        {
            var desde = startdate;
            var hasta = DateTimeOffset.Now;

            var diferencia = hasta - desde;

            // Convertimos a componentes
            int años = (hasta.Year - desde.Year);
            if (hasta.Month < desde.Month || (hasta.Month == desde.Month && hasta.Day < desde.Day))
                años--;

            // Calculamos los días restantes ignorando los años completos
            var desdeMasAnios = desde.AddYears(años);
            var restante = hasta - desdeMasAnios;

            int dias = restante.Days;
            int horas = restante.Hours;
            int minutos = restante.Minutes;
            int segundos = restante.Seconds;

            // Construimos el string en español
            List<string> partes = new();

            if (años > 0)
                partes.Add($"{años} año{(años > 1 ? "s" : "")}");
            if (dias > 0)
                partes.Add($"{dias} día{(dias > 1 ? "s" : "")}");
            if (horas > 0 || partes.Count > 0)
                partes.Add($"{horas} hora{(horas != 1 ? "s" : "")}");
            if (minutos > 0 || partes.Count > 0)
                partes.Add($"{minutos} minuto{(minutos != 1 ? "s" : "")}");
            if (segundos > 0 || partes.Count > 0)
                partes.Add($"{segundos} segundo{(segundos != 1 ? "s" : "")}");

            return string.Join(", ", partes);
        }
    }
}
