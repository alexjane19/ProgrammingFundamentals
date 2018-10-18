namespace shop_csharp
{
    partial class Insert
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(Insert));
            this.GroupBox_Insert = new System.Windows.Forms.GroupBox();
            this.maskedTextBox_Exp = new System.Windows.Forms.MaskedTextBox();
            this.Button_Clear = new System.Windows.Forms.Button();
            this.Button_Add = new System.Windows.Forms.Button();
            this.textBox_Price = new System.Windows.Forms.TextBox();
            this.TextBox_Company = new System.Windows.Forms.TextBox();
            this.textBox_Id = new System.Windows.Forms.TextBox();
            this.TextBox_Stuff = new System.Windows.Forms.TextBox();
            this.Label_Exp = new System.Windows.Forms.Label();
            this.Label_Price = new System.Windows.Forms.Label();
            this.label_Id = new System.Windows.Forms.Label();
            this.Label_Company = new System.Windows.Forms.Label();
            this.Label_Stuff = new System.Windows.Forms.Label();
            this.Button_Back = new System.Windows.Forms.Button();
            this.GroupBox_Insert.SuspendLayout();
            this.SuspendLayout();
            // 
            // GroupBox_Insert
            // 
            this.GroupBox_Insert.Controls.Add(this.maskedTextBox_Exp);
            this.GroupBox_Insert.Controls.Add(this.Button_Clear);
            this.GroupBox_Insert.Controls.Add(this.Button_Add);
            this.GroupBox_Insert.Controls.Add(this.textBox_Price);
            this.GroupBox_Insert.Controls.Add(this.TextBox_Company);
            this.GroupBox_Insert.Controls.Add(this.textBox_Id);
            this.GroupBox_Insert.Controls.Add(this.TextBox_Stuff);
            this.GroupBox_Insert.Controls.Add(this.Label_Exp);
            this.GroupBox_Insert.Controls.Add(this.Label_Price);
            this.GroupBox_Insert.Controls.Add(this.label_Id);
            this.GroupBox_Insert.Controls.Add(this.Label_Company);
            this.GroupBox_Insert.Controls.Add(this.Label_Stuff);
            this.GroupBox_Insert.Location = new System.Drawing.Point(13, 12);
            this.GroupBox_Insert.Name = "GroupBox_Insert";
            this.GroupBox_Insert.Size = new System.Drawing.Size(238, 224);
            this.GroupBox_Insert.TabIndex = 9;
            this.GroupBox_Insert.TabStop = false;
            this.GroupBox_Insert.Text = "وارد کردن";
            // 
            // maskedTextBox_Exp
            // 
            this.maskedTextBox_Exp.Location = new System.Drawing.Point(12, 156);
            this.maskedTextBox_Exp.Mask = "00/00/0000";
            this.maskedTextBox_Exp.Name = "maskedTextBox_Exp";
            this.maskedTextBox_Exp.RightToLeft = System.Windows.Forms.RightToLeft.Yes;
            this.maskedTextBox_Exp.Size = new System.Drawing.Size(144, 20);
            this.maskedTextBox_Exp.TabIndex = 3;
            this.maskedTextBox_Exp.Text = "01282014";
            this.maskedTextBox_Exp.ValidatingType = typeof(System.DateTime);
            // 
            // Button_Clear
            // 
            this.Button_Clear.Cursor = System.Windows.Forms.Cursors.Hand;
            this.Button_Clear.Location = new System.Drawing.Point(27, 189);
            this.Button_Clear.Name = "Button_Clear";
            this.Button_Clear.Size = new System.Drawing.Size(75, 23);
            this.Button_Clear.TabIndex = 5;
            this.Button_Clear.Text = "پاک کردن";
            this.Button_Clear.UseVisualStyleBackColor = true;
            this.Button_Clear.Click += new System.EventHandler(this.Button_Clear_Click);
            // 
            // Button_Add
            // 
            this.Button_Add.Cursor = System.Windows.Forms.Cursors.Hand;
            this.Button_Add.Location = new System.Drawing.Point(117, 189);
            this.Button_Add.Name = "Button_Add";
            this.Button_Add.Size = new System.Drawing.Size(75, 23);
            this.Button_Add.TabIndex = 4;
            this.Button_Add.Text = "اضافه کردن";
            this.Button_Add.UseVisualStyleBackColor = true;
            this.Button_Add.Click += new System.EventHandler(this.Button_Add_Click);
            // 
            // textBox_Price
            // 
            this.textBox_Price.Location = new System.Drawing.Point(12, 122);
            this.textBox_Price.Name = "textBox_Price";
            this.textBox_Price.Size = new System.Drawing.Size(144, 20);
            this.textBox_Price.TabIndex = 2;
            this.textBox_Price.KeyPress += new System.Windows.Forms.KeyPressEventHandler(this.textBox_Price_KeyPress);
            // 
            // TextBox_Company
            // 
            this.TextBox_Company.Location = new System.Drawing.Point(12, 88);
            this.TextBox_Company.Name = "TextBox_Company";
            this.TextBox_Company.Size = new System.Drawing.Size(144, 20);
            this.TextBox_Company.TabIndex = 1;
            this.TextBox_Company.Enter += new System.EventHandler(this.TextBox_Company_Enter);
            // 
            // textBox_Id
            // 
            this.textBox_Id.Location = new System.Drawing.Point(12, 23);
            this.textBox_Id.Name = "textBox_Id";
            this.textBox_Id.Size = new System.Drawing.Size(144, 20);
            this.textBox_Id.TabIndex = 0;
            this.textBox_Id.KeyPress += new System.Windows.Forms.KeyPressEventHandler(this.textBox_Id_KeyPress);
            // 
            // TextBox_Stuff
            // 
            this.TextBox_Stuff.Location = new System.Drawing.Point(12, 54);
            this.TextBox_Stuff.Name = "TextBox_Stuff";
            this.TextBox_Stuff.Size = new System.Drawing.Size(144, 20);
            this.TextBox_Stuff.TabIndex = 0;
            this.TextBox_Stuff.Enter += new System.EventHandler(this.TextBox_Stuff_Enter);
            // 
            // Label_Exp
            // 
            this.Label_Exp.AutoSize = true;
            this.Label_Exp.Location = new System.Drawing.Point(159, 159);
            this.Label_Exp.Name = "Label_Exp";
            this.Label_Exp.Size = new System.Drawing.Size(63, 13);
            this.Label_Exp.TabIndex = 11;
            this.Label_Exp.Text = "تاریخ انقضا:";
            // 
            // Label_Price
            // 
            this.Label_Price.AutoSize = true;
            this.Label_Price.Location = new System.Drawing.Point(159, 125);
            this.Label_Price.Name = "Label_Price";
            this.Label_Price.Size = new System.Drawing.Size(33, 13);
            this.Label_Price.TabIndex = 10;
            this.Label_Price.Text = "قیمت:";
            // 
            // label_Id
            // 
            this.label_Id.AutoSize = true;
            this.label_Id.Location = new System.Drawing.Point(159, 26);
            this.label_Id.Name = "label_Id";
            this.label_Id.Size = new System.Drawing.Size(42, 13);
            this.label_Id.TabIndex = 8;
            this.label_Id.Text = "کد کالا:";
            // 
            // Label_Company
            // 
            this.Label_Company.AutoSize = true;
            this.Label_Company.Location = new System.Drawing.Point(159, 91);
            this.Label_Company.Name = "Label_Company";
            this.Label_Company.Size = new System.Drawing.Size(55, 13);
            this.Label_Company.TabIndex = 9;
            this.Label_Company.Text = "نام شرکت:";
            // 
            // Label_Stuff
            // 
            this.Label_Stuff.AutoSize = true;
            this.Label_Stuff.Location = new System.Drawing.Point(159, 57);
            this.Label_Stuff.Name = "Label_Stuff";
            this.Label_Stuff.Size = new System.Drawing.Size(43, 13);
            this.Label_Stuff.TabIndex = 8;
            this.Label_Stuff.Text = "نام کالا:";
            // 
            // Button_Back
            // 
            this.Button_Back.Cursor = System.Windows.Forms.Cursors.Hand;
            this.Button_Back.DialogResult = System.Windows.Forms.DialogResult.Cancel;
            this.Button_Back.Location = new System.Drawing.Point(172, 242);
            this.Button_Back.Name = "Button_Back";
            this.Button_Back.Size = new System.Drawing.Size(78, 23);
            this.Button_Back.TabIndex = 1;
            this.Button_Back.Text = "بازگشت";
            this.Button_Back.UseVisualStyleBackColor = true;
            this.Button_Back.Click += new System.EventHandler(this.Button_Back_Click);
            // 
            // Insert
            // 
            this.AcceptButton = this.Button_Add;
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.AutoSizeMode = System.Windows.Forms.AutoSizeMode.GrowAndShrink;
            this.CancelButton = this.Button_Back;
            this.ClientSize = new System.Drawing.Size(265, 274);
            this.Controls.Add(this.Button_Back);
            this.Controls.Add(this.GroupBox_Insert);
            this.Icon = ((System.Drawing.Icon)(resources.GetObject("$this.Icon")));
            this.MaximizeBox = false;
            this.MinimizeBox = false;
            this.Name = "Insert";
            this.Opacity = 0.85D;
            this.RightToLeft = System.Windows.Forms.RightToLeft.Yes;
            this.RightToLeftLayout = true;
            this.SizeGripStyle = System.Windows.Forms.SizeGripStyle.Hide;
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "اضافه کردن کالا";
            this.GroupBox_Insert.ResumeLayout(false);
            this.GroupBox_Insert.PerformLayout();
            this.ResumeLayout(false);

        }

        #endregion

        internal System.Windows.Forms.GroupBox GroupBox_Insert;
        internal System.Windows.Forms.Button Button_Clear;
        internal System.Windows.Forms.Button Button_Add;
        internal System.Windows.Forms.TextBox TextBox_Company;
        internal System.Windows.Forms.TextBox TextBox_Stuff;
        internal System.Windows.Forms.Label Label_Exp;
        internal System.Windows.Forms.Label Label_Price;
        internal System.Windows.Forms.Label Label_Company;
        internal System.Windows.Forms.Label Label_Stuff;
        internal System.Windows.Forms.Button Button_Back;
        internal System.Windows.Forms.TextBox textBox_Price;
        private System.Windows.Forms.MaskedTextBox maskedTextBox_Exp;
        internal System.Windows.Forms.TextBox textBox_Id;
        internal System.Windows.Forms.Label label_Id;
    }
}