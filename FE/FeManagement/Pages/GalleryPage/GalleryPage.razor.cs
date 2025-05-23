using Common.DataBase;
using Common.DataModels;
using Microsoft.AspNetCore.Components;
using Microsoft.JSInterop;

namespace FeManagement.Pages.GalleryPage
{
    public partial class GalleryPage
    {
        [Inject] HttpClient http { get; set; }
        [Inject] JsonDbHandler Db { get; set; }
        [Inject] IJSRuntime JS { get; set; }

        private List<Memory> MemorysList = new List<Memory>();

        
        protected override async Task OnInitializedAsync()
        {
            var response = await Db.HttpGetAllMemorysAsync(http);
            MemorysList = response.Data ?? new List<Memory>();
        }

        protected override async Task OnAfterRenderAsync(bool firstRender)
        {
            if (firstRender)
            {
                await JS.InvokeVoidAsync("initGallery");
            }
        }

    }
}
