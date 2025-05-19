using Common.DataModels;
using MudBlazor;

namespace ApiManagement.Controller
{
    public class DataController
    {
        public ISnackbar Snackbar { get; set; }
        public DataController(ISnackbar snackbar)
        {
            Snackbar = snackbar;
        }

        public bool InsertData(ResponseController response)
        {
            if (response.Result)
            {
                Snackbar.Add("Insertado correctamente",Severity.Success);
                return true;
            }
            else
            {
                Snackbar.Add(response.Message,Severity.Error);
                return false;
            }
        }

        public bool UpdateData(ResponseController response)
        {
            if (response.Result)
            {
                Snackbar.Add("Editado correctamente", Severity.Success);
                return true;
            }
            else
            {
                Snackbar.Add(response.Message, Severity.Error);
                return false;
            }
        }

        public bool DeleteData(ResponseController response)
        {
            if (response.Result)
            {
                Snackbar.Add("Borrado correctamente", Severity.Success);
                return true;
            }
            else
            {
                Snackbar.Add(response.Message, Severity.Error);
                return false;
            }
        }
    }
}
