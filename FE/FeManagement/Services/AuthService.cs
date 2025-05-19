using Microsoft.AspNetCore.Components;
using Microsoft.JSInterop;

namespace FeManagement.Services
{
    public class AuthService
    {
        private readonly IJSRuntime _js;
        private const string TokenKey = "authToken";
        private NavigationManager _navigation;

        public AuthService(IJSRuntime js,NavigationManager navigator)
        {
            _js = js;
            _navigation = navigator;
        }

        public async Task<bool> LoginAsync(string username, string password)
        {
            if (username == "XikiBaiby" && password == "BO0mBO0m<3")
            {
                await _js.InvokeVoidAsync("localStorage.setItem", TokenKey, "fake-token");
                return true;
            }

            return false;
        }

        public async Task LogoutAsync()
        {
            await _js.InvokeVoidAsync("localStorage.removeItem", TokenKey);
        }

        public async Task<bool> IsLoggedInAsync()
        {
            var token = await _js.InvokeAsync<string>("localStorage.getItem", TokenKey);
            return token == "fake-token";
        }

        public async Task CheckLogged() 
        {
            var result = await IsLoggedInAsync();
            if (!result)
            {
                _navigation.NavigateTo("/");
            }
        }
    }
}
