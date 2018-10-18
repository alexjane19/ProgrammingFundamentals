using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Data.SqlClient;
using System.Media;
using System.IO;

namespace shop_csharp


{
    public partial class Shop_Form : Form
    {
        public Shop_Form()
        {
            InitializeComponent();
        }
        string[] music = new string[2];
        int i = 0;
        private void Button_Show_Click(object sender, EventArgs e)
        {

            ShoplinqDataContext data = new ShoplinqDataContext();
            List<ShopTable> lshoptable = new List<ShopTable>();
            lshoptable=data.ShopTables.ToList();
            dataGridView_Form1.DataSource = lshoptable;
        }

        private void Button_Search_Click(object sender, EventArgs e)
        {
            Search fSearch = new Search();
            DialogResult dr = fSearch.ShowDialog();
            if(dr== System.Windows.Forms.DialogResult.OK)
            {
                if (fSearch.ListShop.Count == 0)
                    MessageBox.Show("موردی منطبق با جستجوی شما نیست");
                dataGridView_Form1.DataSource = fSearch.ListShop;
            }
        }

        private void Button_Delete_Click(object sender, EventArgs e)
        {
            ShoplinqDataContext data = new ShoplinqDataContext();
            if(this.dataGridView_Form1.RowCount>0 && this.dataGridView_Form1.SelectedRows.Count>0)
            {
                Remove fRemove = new Remove();
                DialogResult dr = fRemove.ShowDialog();
                if (dr == System.Windows.Forms.DialogResult.No)
                {
                    foreach (DataGridViewRow row in this.dataGridView_Form1.SelectedRows)
                    {
                        ShopTable deltable;
                        deltable = (ShopTable)row.DataBoundItem;
                        data.ShopTables.DeleteAllOnSubmit(data.ShopTables.Where(s => s.Id == deltable.Id));

                        RecycleBin rb = new RecycleBin();
                        rb.Id = deltable.Id;
                        rb.stuff = deltable.stuff;
                        rb.company = deltable.company;
                        rb.price = deltable.price;
                        rb.exp = deltable.exp;
                        data.RecycleBins.InsertOnSubmit(rb);                  
                    }
                }
                if (dr == System.Windows.Forms.DialogResult.Yes)
                {
                    foreach (DataGridViewRow row in this.dataGridView_Form1.SelectedRows)
                    {
                        ShopTable deltable;
                        deltable = (ShopTable)row.DataBoundItem;
                        data.ShopTables.DeleteAllOnSubmit(data.ShopTables.Where(s => s.Id == deltable.Id));
                    }
                }
                data.SubmitChanges();
            }
            List<ShopTable> lshoptable = new List<ShopTable>();
            lshoptable = data.ShopTables.ToList();
            dataGridView_Form1.DataSource = lshoptable;
        }

        private void Button_Restore_Click(object sender, EventArgs e)
        {
            Restore fRestore = new Restore();
            DialogResult dr= fRestore.ShowDialog();
            if(dr== System.Windows.Forms.DialogResult.OK)
            {
                ShoplinqDataContext data = new ShoplinqDataContext();
                List<ShopTable> lshoptable = new List<ShopTable>();
                lshoptable = data.ShopTables.ToList();
                dataGridView_Form1.DataSource = lshoptable;
            }
              
        }

        private void Shop_Form_Load(object sender, EventArgs e)
        {

            ShoplinqDataContext data = new ShoplinqDataContext();
            List<ShopTable> lshoptable = new List<ShopTable>();
            lshoptable = data.ShopTables.ToList();
            dataGridView_Form1.DataSource = lshoptable;

            toolTip1.SetToolTip(button_About, "درباره");
            toolTip1.SetToolTip(Button_Show, "نمایش");
            toolTip1.SetToolTip(Button_Insert, "اضافه");
            toolTip1.SetToolTip(Button_Search, "جستجو");
            toolTip1.SetToolTip(Button_Delete, "حذف");
            toolTip1.SetToolTip(Button_Restore, "سطل بازیافت");
            toolTip1.SetToolTip(Button_Sort, "مرتب کردن");
            toolTip1.SetToolTip(button_Exit, "خروج");
            toolTip1.SetToolTip(button_Play, "پخش آهنگ");
            toolTip1.SetToolTip(button_Stop, "توقف آهنگ");
            toolTip1.SetToolTip(button_Changemusic, "تغییر آهنگ");

            music[0] = Application.StartupPath + "//ParandeyeMohajer.wav";
            music[1] = Application.StartupPath + "//Baazi.wav";

            this.playmuisic();
        }

        void p_SoundLocationChanged(object sender, EventArgs e)
        {
        }

        private void Button_Sort_Click(object sender, EventArgs e)
        {
            Sort fSort=new Sort();
            DialogResult dr=fSort.ShowDialog();
            if(dr== System.Windows.Forms.DialogResult.OK)
            dataGridView_Form1.DataSource = fSort.ListSort;
        }

        private void Button_Insert_Click(object sender, EventArgs e)
        {
            Insert fInsert = new Insert();
           DialogResult dr= fInsert.ShowDialog();
            if(dr== System.Windows.Forms.DialogResult.OK)
            {
                ShoplinqDataContext data = new ShoplinqDataContext();
                List<ShopTable> lshoptable = new List<ShopTable>();
                lshoptable = data.ShopTables.ToList();
                dataGridView_Form1.DataSource = lshoptable;
            }
        }

        private void button_Exit_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }

        private void button_About_Click(object sender, EventArgs e)
        {
            About fAbout = new About();
            fAbout.ShowDialog();
        }


        private void button_Stop_Click(object sender, EventArgs e)
        {
            SoundPlayer p = new SoundPlayer();
            p.Stop();
        }

        private void button_Changemusic_Click(object sender, EventArgs e)
        {
            if (i == 0)
                i = 1;
            else
                i = 0;

            this.playmuisic();

        }

        private void button_Play_Click(object sender, EventArgs e)
        {
            this.playmuisic();
        }

        void playmuisic()
        {
            SoundPlayer p = new SoundPlayer();
            p.SoundLocation = music[i];
            if (File.Exists(music[i]))
            {
                p.Load();
                p.Play();
            }
        }

    }
}
    