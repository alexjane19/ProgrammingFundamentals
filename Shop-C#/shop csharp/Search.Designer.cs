namespace shop_csharp
{
    partial class Search
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
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(Search));
            this.groupBox_Search = new System.Windows.Forms.GroupBox();
            this.radioButton_SeaCompany = new System.Windows.Forms.RadioButton();
            this.button_Search = new System.Windows.Forms.Button();
            this.textBox_Search = new System.Windows.Forms.TextBox();
            this.radioButton_SeaStuff = new System.Windows.Forms.RadioButton();
            this.Button_Back = new System.Windows.Forms.Button();
            this.groupBox_Search.SuspendLayout();
            this.SuspendLayout();
            // 
            // groupBox_Search
            // 
            this.groupBox_Search.Controls.Add(this.radioButton_SeaCompany);
            this.groupBox_Search.Controls.Add(this.button_Search);
            this.groupBox_Search.Controls.Add(this.textBox_Search);
            this.groupBox_Search.Controls.Add(this.radioButton_SeaStuff);
            resources.ApplyResources(this.groupBox_Search, "groupBox_Search");
            this.groupBox_Search.Name = "groupBox_Search";
            this.groupBox_Search.TabStop = false;
            // 
            // radioButton_SeaCompany
            // 
            resources.ApplyResources(this.radioButton_SeaCompany, "radioButton_SeaCompany");
            this.radioButton_SeaCompany.Cursor = System.Windows.Forms.Cursors.Hand;
            this.radioButton_SeaCompany.Name = "radioButton_SeaCompany";
            this.radioButton_SeaCompany.UseVisualStyleBackColor = true;
            this.radioButton_SeaCompany.MouseDown += new System.Windows.Forms.MouseEventHandler(this.radioButton_SeaCompany_MouseDown);
            // 
            // button_Search
            // 
            this.button_Search.Cursor = System.Windows.Forms.Cursors.Hand;
            resources.ApplyResources(this.button_Search, "button_Search");
            this.button_Search.Name = "button_Search";
            this.button_Search.UseVisualStyleBackColor = true;
            this.button_Search.Click += new System.EventHandler(this.button_Search_Click);
            // 
            // textBox_Search
            // 
            resources.ApplyResources(this.textBox_Search, "textBox_Search");
            this.textBox_Search.Name = "textBox_Search";
            this.textBox_Search.Enter += new System.EventHandler(this.textBox_Search_Enter);
            // 
            // radioButton_SeaStuff
            // 
            resources.ApplyResources(this.radioButton_SeaStuff, "radioButton_SeaStuff");
            this.radioButton_SeaStuff.Checked = true;
            this.radioButton_SeaStuff.Cursor = System.Windows.Forms.Cursors.Hand;
            this.radioButton_SeaStuff.Name = "radioButton_SeaStuff";
            this.radioButton_SeaStuff.TabStop = true;
            this.radioButton_SeaStuff.UseVisualStyleBackColor = true;
            this.radioButton_SeaStuff.MouseDown += new System.Windows.Forms.MouseEventHandler(this.radioButton_SeaStuff_MouseDown);
            // 
            // Button_Back
            // 
            this.Button_Back.Cursor = System.Windows.Forms.Cursors.Hand;
            this.Button_Back.DialogResult = System.Windows.Forms.DialogResult.Cancel;
            resources.ApplyResources(this.Button_Back, "Button_Back");
            this.Button_Back.Name = "Button_Back";
            this.Button_Back.UseVisualStyleBackColor = true;
            this.Button_Back.Click += new System.EventHandler(this.Button_Back_Click);
            // 
            // Search
            // 
            this.AcceptButton = this.button_Search;
            resources.ApplyResources(this, "$this");
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.CancelButton = this.Button_Back;
            this.Controls.Add(this.Button_Back);
            this.Controls.Add(this.groupBox_Search);
            this.MaximizeBox = false;
            this.MinimizeBox = false;
            this.Name = "Search";
            this.Opacity = 0.85D;
            this.SizeGripStyle = System.Windows.Forms.SizeGripStyle.Hide;
            this.groupBox_Search.ResumeLayout(false);
            this.groupBox_Search.PerformLayout();
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.GroupBox groupBox_Search;
        private System.Windows.Forms.Button button_Search;
        private System.Windows.Forms.TextBox textBox_Search;
        internal System.Windows.Forms.Button Button_Back;
        private System.Windows.Forms.RadioButton radioButton_SeaStuff;
        private System.Windows.Forms.RadioButton radioButton_SeaCompany;

    }
}