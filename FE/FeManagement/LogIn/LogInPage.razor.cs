using Common.DataModels;
using FeManagement.Services;
using Microsoft.AspNetCore.Components;
using static System.Net.WebRequestMethods;

namespace FeManagement.LogIn
{
    public partial class LogInPage
    {
        [Inject] AuthService AuthService { get; set; }
        [Inject] NavigationManager Navigation { get; set; }


        private string username;
        private string password;
        private bool loginFailed;

        protected override async Task OnInitializedAsync()
        {
            var result = await AuthService.IsLoggedInAsync();
            if (result)
            {
                Navigation.NavigateTo("home");
            }

        }
        
        private async Task HandleLogin()
        {
            var success = await AuthService.LoginAsync(username, password);
            if (success)
            {
                Navigation.NavigateTo("home");
            }
            else
            {
                loginFailed = true;
            }
        }
    }
}
