using System.Text.Json;
using ApiManagement.Controller;
using Common.DataBase;
using Common.DataModels;
using Microsoft.AspNetCore.Components;

using Models = Common.DataModels;

namespace ApiManagement.Components.Pages.Gallery
{
    public partial class GallerysPage
    {
        [Inject] JsonDbHandler Db { get; set; }
        [Inject] DataController DController { get; set; }
        public List<Models.Memory> MemorysList { get; set; } = new List<Models.Memory>();

        private Models.Memory SelectedMemory { get; set; } = new Models.Memory();
        private Models.Memory InsertMemory { get; set; } = new Models.Memory();

        //modals
        private bool InsertModal { get; set; } = false;
        private bool UpdateModal { get; set; } = false;
        private bool DeleteModal { get; set; } = false;

        private DateTime? _insertDate {  get; set; }
        private DateTime? _updateDate { get; set; }

        protected override async Task OnInitializedAsync()
        {
            UpdateList();
        }

        #region Insert
        private async Task OnInsertData()
        {
            InsertMemory.Date = _insertDate ?? DateTime.MinValue;
            _ = DController.InsertData(await Db.InsertMemorys(InsertMemory));
            await UpdateList();
            InsertMemory = new Models.Memory();
            InsertModal = false;
        }
        #endregion

        #region Get
        private async Task UpdateList()
        {
            
            var result = await Db.GetAllMemorysAsync();
            if (result.Result)
            {
                MemorysList = result.Data;
            }
            StateHasChanged();
        }
        #endregion

        #region Update
        private async Task EditMemory(Models.Memory item)
        {
            SelectedMemory = JsonSerializer.Deserialize<Models.Memory>(JsonSerializer.Serialize(item));
            _updateDate = SelectedMemory.Date;
            UpdateModal = true;
        }
        private async Task OnUpdateData()
        {
            SelectedMemory.Date = _updateDate ?? DateTime.MinValue;
            _ = DController.UpdateData(await Db.UpdateMemorys(SelectedMemory));
            await UpdateList();
            SelectedMemory = new Models.Memory();
            UpdateModal = false;
        }
        #endregion

        #region Delete
        private async Task DeleteMemory(Models.Memory item)
        {
            SelectedMemory = JsonSerializer.Deserialize<Models.Memory>(JsonSerializer.Serialize(item));
            DeleteModal = true;
        }
        private async Task OnDeleteData()
        {
            _ = DController.DeleteData(await Db.DeleteMemorys(SelectedMemory.Id));
            await UpdateList();
            SelectedMemory = new Models.Memory();
            DeleteModal = false;
        }
        #endregion
    }
}
