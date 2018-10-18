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
    public partial class Search : Form
    {
        public Search()
        {
            InitializeComponent();
        }

        public List<ShopTable> ListShop;

        private void Button_Back_Click(object sender, EventArgs e)
        {
            this.Close();
        }

        private void radioButton_SeaStuff_MouseDown(object sender, MouseEventArgs e)
        {
            radioButton_SeaCompany.Checked = !radioButton_SeaCompany.Checked;
        }

        private void radioButton_SeaCompany_MouseDown(object sender, MouseEventArgs e)
        {
            radioButton_SeaStuff.Checked = !radioButton_SeaStuff.Checked;
        }

        private void button_Search_Click(object sender, EventArgs e)
        {
            if (textBox_Search.Text != "")
            {
                ShoplinqDataContext data = new ShoplinqDataContext();

                if (radioButton_SeaStuff.Checked)
                {
                    string search = textBox_Search.Text;
                    ListShop = data.ShopTables.Where(s => s.stuff == search).ToList();
                }

                if (radioButton_SeaCompany.Checked)
                {
                    string search = textBox_Search.Text;
                    ListShop = data.ShopTables.Where(s => s.company == search).ToList();
                }

                this.DialogResult = System.Windows.Forms.DialogResult.OK;
            }

            if (textBox_Search.Text == "")
                textBox_Search.BackColor = Color.Yellow;
            else
                textBox_Search.BackColor = Color.White; 
        }

        private void textBox_Search_Enter(object sender, EventArgs e)
        {
            InputLanguage.CurrentInputLanguage = InputLanguage.FromCulture(
            new System.Globalization.CultureInfo("fa-IR"));
        }
    }
}
