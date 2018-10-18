using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace shop_csharp
{
    public partial class Restore : Form
    {
        public Restore()
        {
            InitializeComponent();
        }

        private void button_Back_Click(object sender, EventArgs e)
        {
            this.DialogResult = System.Windows.Forms.DialogResult.OK;
        }

        private void Restore_Load(object sender, EventArgs e)
        {
            ShoplinqDataContext data = new ShoplinqDataContext();
            List<RecycleBin> listrb = new List<RecycleBin>();
            listrb = data.RecycleBins.ToList();
            dataGridView_Restore.DataSource = listrb;
        }

        private void button_Restore_Click(object sender, EventArgs e)
        {
            
            ShoplinqDataContext data = new ShoplinqDataContext();
            if(this.dataGridView_Restore.RowCount>0 && this.dataGridView_Restore.SelectedRows.Count>0)
            {
    
                    foreach (DataGridViewRow row in this.dataGridView_Restore.SelectedRows)
                    {
                        RecycleBin deltable;
                        deltable = (RecycleBin)row.DataBoundItem;
                        data.RecycleBins.DeleteAllOnSubmit(data.RecycleBins.Where(s => s.Id == deltable.Id));

                        ShopTable rb = new ShopTable();
                        rb.Id = deltable.Id;
                        rb.stuff = deltable.stuff;
                        rb.company = deltable.company;
                        rb.price = deltable.price;
                        rb.exp = deltable.exp;
                        data.ShopTables.InsertOnSubmit(rb);                  
                    }
                }
            data.SubmitChanges();
       
            List<RecycleBin> listrb = new List<RecycleBin>();
            listrb = data.RecycleBins.ToList();
            dataGridView_Restore.DataSource = listrb;

        }
    }
}
