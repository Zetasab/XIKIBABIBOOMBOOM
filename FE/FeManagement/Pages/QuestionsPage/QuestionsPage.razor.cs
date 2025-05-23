using Common.DataBase;
using Common.DataModels;
using Microsoft.AspNetCore.Components;

namespace FeManagement.Pages.QuestionsPage
{
    public partial class QuestionsPage
    {
        [Inject] HttpClient http { get; set; }
        [Inject] JsonDbHandler Db { get; set; }

        private List<Question> QuestionsList = new List<Question>();

        
        protected override async Task OnInitializedAsync()
        {
            var response = await Db.HttpGetAllQuestionsAsync(http);
            QuestionsList = response.Data ?? new List<Question>();

        }

        private static readonly Random _random = new();

        private string GetRandomAnswer()
        {
            if (AnswerList == null || AnswerList.Count == 0)
                return "Sin respuestas disponibles.";

            int indice = _random.Next(AnswerList.Count);
            return AnswerList[indice];
        }

        private List<string> AnswerList = new List<string>
{
            "Sí, por supuesto que sí",
            "Claro que sí",
            "Ni lo dudes",
            "Por supuesto",
            "Obviamente",
            "Desde luego",
            "Sin duda alguna",
            "Sí, totalmente",
            "Cien por cien que sí",
            "Definitivamente sí",
            "Así es",
            "Por descontado",
            "Faltaba más",
            "Con toda seguridad",
            "Absolutamente sí",
            "Es un sí rotundo",
            "Sin ninguna duda",
            "Sí, sin pensarlo",
            "Sí, sin lugar a dudas",
            "Sí, sin titubear",
            "Por supuesto que lo haría",
            "Sí, sin pensarlo dos veces",
            "Sí, evidentemente",
            "Sí, y mil veces sí",
            "Sí, con toda certeza",
            "Claro, cómo no",
            "Obvio que sí",
            "Sí, sin reservas",
            "Desde luego que sí",
            "Cuenta con ello"
        };
    }
}
