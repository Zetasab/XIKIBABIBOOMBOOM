using Common.DataModels;
using MudBlazor;

namespace FeManagement.DataController
{
    public class DataController
    {
        public ISnackbar Snackbar { get; set; }
        public DataController(ISnackbar snackbar)
        {
            Snackbar = snackbar;
        }

        public bool GetData(ResponseController response)
        {
            if (response.Result)
            {
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
