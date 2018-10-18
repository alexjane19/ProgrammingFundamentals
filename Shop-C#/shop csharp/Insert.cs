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

namespace shop_csharp
{
    public partial class Insert : Form
    {
        public Insert()
        {
            InitializeComponent();
        }

        private void Button_Add_Click(object sender, EventArgs e)
        {
            if (textBox_Id.Text != "" && TextBox_Stuff.Text != "" && TextBox_Company.Text != "" &&
                textBox_Price.Text != "" && maskedTextBox_Exp.Text != "")
            {
                ShopTable sh = new ShopTable();
                sh.Id = int.Parse(textBox_Id.Text);
                sh.stuff = TextBox_Stuff.Text;
                sh.company = TextBox_Company.Text;
                sh.price = Int32.Parse(textBox_Price.Text);
                sh.exp = DateTime.Parse(maskedTextBox_Exp.Text);
                ShoplinqDataContext data = new ShoplinqDataContext();
                data.ShopTables.InsertOnSubmit(sh);
                data.SubmitChanges();
                MessageBox.Show("کالا اضافه شد");
            }

            if (textBox_Id.Text == "")
                textBox_Id.BackColor = Color.Yellow;
            else
                textBox_Id.BackColor = Color.White;

            if (TextBox_Stuff.Text == "")
                TextBox_Stuff.BackColor = Color.Yellow;
            else
                TextBox_Stuff.BackColor = Color.White;

            if (TextBox_Company.Text == "")
                TextBox_Company.BackColor = Color.Yellow;
            else
                TextBox_Company.BackColor = Color.White;

            if (textBox_Price.Text == "")
                textBox_Price.BackColor = Color.Yellow;
            else
                textBox_Price.BackColor = Color.White;

            if (maskedTextBox_Exp.Text == "  /  /")
                maskedTextBox_Exp.BackColor = Color.Yellow;
            else
                maskedTextBox_Exp.BackColor = Color.White;
        }

        private void Button_Back_Click(object sender, EventArgs e)
        {

            this.DialogResult = System.Windows.Forms.DialogResult.OK;
        }

        private void Button_Clear_Click(object sender, EventArgs e)
        {
            textBox_Id.Text = "";
            TextBox_Stuff.Text = "";
            TextBox_Company.Text = "";
            textBox_Price.Text = "";
        }


        private void textBox_Price_KeyPress(object sender, KeyPressEventArgs e)
        {
            if (e.KeyChar < '0' || e.KeyChar > '9')
            {
                if (e.KeyChar != (int)Keys.Back)
                {
                    ToolTip ttp = new ToolTip();
                    ttp.InitialDelay = 50;
                    e.Handled = true;
                }
            }
        }

        private void textBox_Id_KeyPress(object sender, KeyPressEventArgs e)
        {
            if (e.KeyChar < '0' || e.KeyChar > '9')
            {
                if (e.KeyChar != (int)Keys.Back)
                {
                    ToolTip ttp = new ToolTip();
                    ttp.InitialDelay = 50;
                    e.Handled = true;
                }
            }
        }

        private void TextBox_Stuff_Enter(object sender, EventArgs e)
        {
            InputLanguage.CurrentInputLanguage = InputLanguage.FromCulture(
            new System.Globalization.CultureInfo("fa-IR"));
        }

        private void TextBox_Company_Enter(object sender, EventArgs e)
        {
            InputLanguage.CurrentInputLanguage = InputLanguage.FromCulture(
            new System.Globalization.CultureInfo("fa-IR"));
        }
    }
}