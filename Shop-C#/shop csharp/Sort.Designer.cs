namespace shop_csharp
{
    partial class Sort
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
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(Sort));
            this.groupBox1 = new System.Windows.Forms.GroupBox();
            this.comboBox_sort = new System.Windows.Forms.ComboBox();
            this.button_Done = new System.Windows.Forms.Button();
            this.radioButton_Des = new System.Windows.Forms.RadioButton();
            this.radioButton_Acs = new System.Windows.Forms.RadioButton();
            this.button_Back = new System.Windows.Forms.Button();
            this.groupBox1.SuspendLayout();
            this.SuspendLayout();
            // 
            // groupBox1
            // 
            this.groupBox1.Controls.Add(this.comboBox_sort);
            this.groupBox1.Controls.Add(this.button_Done);
            this.groupBox1.Controls.Add(this.radioButton_Des);
            this.groupBox1.Controls.Add(this.radioButton_Acs);
            this.groupBox1.Location = new System.Drawing.Point(8, 12);
            this.groupBox1.Name = "groupBox1";
            this.groupBox1.Size = new System.Drawing.Size(136, 137);
            this.groupBox1.TabIndex = 1;
            this.groupBox1.TabStop = false;
            this.groupBox1.Text = "مرتب کردن";
            // 
            // comboBox_sort
            // 
            this.comboBox_sort.DropDownStyle = System.Windows.Forms.ComboBoxStyle.DropDownList;
            this.comboBox_sort.FormattingEnabled = true;
            this.comboBox_sort.Items.AddRange(new object[] {
            "برحسب کد کالا",
            "برحسب نام کالا",
            "برحسب نام شرکت",
            "برحسب قیمت",
            "برحسب تاریخ انقضا"});
            this.comboBox_sort.Location = new System.Drawing.Point(12, 22);
            this.comboBox_sort.Name = "comboBox_sort";
            this.comboBox_sort.Size = new System.Drawing.Size(113, 21);
            this.comboBox_sort.TabIndex = 0;
            // 
            // button_Done
            // 
            this.button_Done.Cursor = System.Windows.Forms.Cursors.Hand;
            this.button_Done.Location = new System.Drawing.Point(29, 104);
            this.button_Done.Name = "button_Done";
            this.button_Done.Size = new System.Drawing.Size(75, 23);
            this.button_Done.TabIndex = 3;
            this.button_Done.Text = "اعمال";
            this.button_Done.UseVisualStyleBackColor = true;
            this.button_Done.Click += new System.EventHandler(this.button_Done_Click);
            // 
            // radioButton_Des
            // 
            this.radioButton_Des.AutoSize = true;
            this.radioButton_Des.Cursor = System.Windows.Forms.Cursors.Hand;
            this.radioButton_Des.Location = new System.Drawing.Point(68, 81);
            this.radioButton_Des.Name = "radioButton_Des";
            this.radioButton_Des.Size = new System.Drawing.Size(53, 17);
            this.radioButton_Des.TabIndex = 2;
            this.radioButton_Des.Text = "نزولی";
            this.radioButton_Des.UseVisualStyleBackColor = true;
            this.radioButton_Des.MouseDown += new System.Windows.Forms.MouseEventHandler(this.radioButton_Stuff_MouseDown);
            // 
            // radioButton_Acs
            // 
            this.radioButton_Acs.AutoSize = true;
            this.radioButton_Acs.Checked = true;
            this.radioButton_Acs.Cursor = System.Windows.Forms.Cursors.Hand;
            this.radioButton_Acs.Location = new System.Drawing.Point(60, 56);
            this.radioButton_Acs.Name = "radioButton_Acs";
            this.radioButton_Acs.Size = new System.Drawing.Size(61, 17);
            this.radioButton_Acs.TabIndex = 1;
            this.radioButton_Acs.TabStop = true;
            this.radioButton_Acs.Text = "صعودی";
            this.radioButton_Acs.UseVisualStyleBackColor = true;
            this.radioButton_Acs.MouseDown += new System.Windows.Forms.MouseEventHandler(this.radioButton_Id_MouseDown);
            // 
            // button_Back
            // 
            this.button_Back.Cursor = System.Windows.Forms.Cursors.Hand;
            this.button_Back.DialogResult = System.Windows.Forms.DialogResult.Cancel;
            this.button_Back.Location = new System.Drawing.Point(69, 155);
            this.button_Back.Name = "button_Back";
            this.button_Back.Size = new System.Drawing.Size(75, 23);
            this.button_Back.TabIndex = 0;
            this.button_Back.Text = "بازگشت";
            this.button_Back.UseVisualStyleBackColor = true;
            this.button_Back.Click += new System.EventHandler(this.button_Back_Click);
            // 
            // Sort
            // 
            this.AcceptButton = this.button_Done;
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.AutoSizeMode = System.Windows.Forms.AutoSizeMode.GrowAndShrink;
            this.CancelButton = this.button_Back;
            this.ClientSize = new System.Drawing.Size(152, 184);
            this.Controls.Add(this.button_Back);
            this.Controls.Add(this.groupBox1);
            this.Icon = ((System.Drawing.Icon)(resources.GetObject("$this.Icon")));
            this.MaximizeBox = false;
            this.MinimizeBox = false;
            this.Name = "Sort";
            this.Opacity = 0.85D;
            this.RightToLeft = System.Windows.Forms.RightToLeft.Yes;
            this.RightToLeftLayout = true;
            this.SizeGripStyle = System.Windows.Forms.SizeGripStyle.Hide;
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "مرتب کردن";
            this.Load += new System.EventHandler(this.Sort_Load);
            this.groupBox1.ResumeLayout(false);
            this.groupBox1.PerformLayout();
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.GroupBox groupBox1;
        private System.Windows.Forms.RadioButton radioButton_Des;
        private System.Windows.Forms.RadioButton radioButton_Acs;
        private System.Windows.Forms.Button button_Done;
        private System.Windows.Forms.Button button_Back;
        private System.Windows.Forms.ComboBox comboBox_sort;
    }
}