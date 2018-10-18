namespace shop_csharp
{
    partial class Remove
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
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(Remove));
            this.button_Back = new System.Windows.Forms.Button();
            this.button_TemDel = new System.Windows.Forms.Button();
            this.button_PerDel = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // button_Back
            // 
            this.button_Back.Cursor = System.Windows.Forms.Cursors.Hand;
            this.button_Back.DialogResult = System.Windows.Forms.DialogResult.Cancel;
            resources.ApplyResources(this.button_Back, "button_Back");
            this.button_Back.Name = "button_Back";
            this.button_Back.UseVisualStyleBackColor = true;
            this.button_Back.Click += new System.EventHandler(this.button_Back_Click);
            // 
            // button_TemDel
            // 
            this.button_TemDel.Cursor = System.Windows.Forms.Cursors.Hand;
            resources.ApplyResources(this.button_TemDel, "button_TemDel");
            this.button_TemDel.Name = "button_TemDel";
            this.button_TemDel.UseVisualStyleBackColor = true;
            this.button_TemDel.Click += new System.EventHandler(this.button_TemDel_Click);
            // 
            // button_PerDel
            // 
            this.button_PerDel.Cursor = System.Windows.Forms.Cursors.Hand;
            resources.ApplyResources(this.button_PerDel, "button_PerDel");
            this.button_PerDel.Name = "button_PerDel";
            this.button_PerDel.UseVisualStyleBackColor = true;
            this.button_PerDel.Click += new System.EventHandler(this.button_PerDel_Click);
            // 
            // Remove
            // 
            resources.ApplyResources(this, "$this");
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.CancelButton = this.button_Back;
            this.ControlBox = false;
            this.Controls.Add(this.button_Back);
            this.Controls.Add(this.button_PerDel);
            this.Controls.Add(this.button_TemDel);
            this.MaximizeBox = false;
            this.MinimizeBox = false;
            this.Name = "Remove";
            this.Opacity = 0.8D;
            this.ShowIcon = false;
            this.SizeGripStyle = System.Windows.Forms.SizeGripStyle.Hide;
            this.ResumeLayout(false);

        }

        #endregion

        internal System.Windows.Forms.Button button_Back;
        private System.Windows.Forms.Button button_TemDel;
        private System.Windows.Forms.Button button_PerDel;

    }
}