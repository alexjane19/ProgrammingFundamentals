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
    public partial class Sort : Form
    {
        public Sort()
        {
            InitializeComponent();
        }

        public List<ShopTable> ListSort;

        private void radioButton_Id_MouseDown(object sender, MouseEventArgs e)
        {
            radioButton_Des.Checked = !radioButton_Des.Checked;
        }

        private void radioButton_Stuff_MouseDown(object sender, MouseEventArgs e)
        {
                radioButton_Acs.Checked = !radioButton_Acs.Checked;
        }

        private void button_Back_Click(object sender, EventArgs e)
        {
            this.Close();
        }

        private void button_Done_Click(object sender, EventArgs e)
        {
            ShoplinqDataContext data = new ShoplinqDataContext();
            List<ShopTable> tempsort;
            tempsort = data.ShopTables.ToList();

            if (comboBox_sort.SelectedItem == "برحسب کد کالا" && radioButton_Acs.Checked==true)
            ListSort = tempsort.OrderBy(s => s.Id).ToList();
            if (comboBox_sort.SelectedItem == "برحسب کد کالا" && radioButton_Acs.Checked == false)
                ListSort = tempsort.OrderByDescending(s => s.Id).ToList();

            if (comboBox_sort.SelectedItem == "برحسب نام کالا" && radioButton_Acs.Checked == true)
                ListSort = tempsort.OrderBy(s => s.stuff).ToList();
            if (comboBox_sort.SelectedItem == "برحسب نام کالا" && radioButton_Acs.Checked == false)
                ListSort = tempsort.OrderByDescending(s => s.stuff).ToList();

            if (comboBox_sort.SelectedItem == "برحسب نام شرکت" && radioButton_Acs.Checked == true)
                ListSort = tempsort.OrderBy(s => s.company).ToList();
            if (comboBox_sort.SelectedItem == "برحسب نام شرکت" && radioButton_Acs.Checked == false)
                ListSort = tempsort.OrderByDescending(s => s.company).ToList();

            if (comboBox_sort.SelectedItem == "برحسب قیمت" && radioButton_Acs.Checked == true)
                ListSort = tempsort.OrderBy(s => s.price).ToList();
            if (comboBox_sort.SelectedItem == "برحسب قیمت" && radioButton_Acs.Checked == false)
                ListSort = tempsort.OrderByDescending(s => s.price).ToList();

            if (comboBox_sort.SelectedItem == "برحسب تاریخ انقضا" && radioButton_Acs.Checked == true)
                ListSort = tempsort.OrderBy(s => s.exp).ToList();
            if (comboBox_sort.SelectedItem == "برحسب تاریخ انقضا" && radioButton_Acs.Checked == false)
                ListSort = tempsort.OrderByDescending(s => s.exp).ToList();

            this.DialogResult = System.Windows.Forms.DialogResult.OK;
        }

        private void Sort_Load(object sender, EventArgs e)
        {
            comboBox_sort.SelectedIndex = 0;
        }
    }
}
