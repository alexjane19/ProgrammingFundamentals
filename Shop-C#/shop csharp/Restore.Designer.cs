namespace shop_csharp
{
    partial class Restore
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
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(Restore));
            this.button_Back = new System.Windows.Forms.Button();
            this.button_Restore = new System.Windows.Forms.Button();
            this.dataGridView_Restore = new System.Windows.Forms.DataGridView();
            this.colCode = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.colStuff = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.colCpy = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.colPrice = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.colExp = new System.Windows.Forms.DataGridViewTextBoxColumn();
            ((System.ComponentModel.ISupportInitialize)(this.dataGridView_Restore)).BeginInit();
            this.SuspendLayout();
            // 
            // button_Back
            // 
            this.button_Back.Cursor = System.Windows.Forms.Cursors.Hand;
            this.button_Back.DialogResult = System.Windows.Forms.DialogResult.Cancel;
            this.button_Back.ImeMode = System.Windows.Forms.ImeMode.NoControl;
            this.button_Back.Location = new System.Drawing.Point(462, 259);
            this.button_Back.Name = "button_Back";
            this.button_Back.Size = new System.Drawing.Size(67, 28);
            this.button_Back.TabIndex = 1;
            this.button_Back.Text = "بازگشت";
            this.button_Back.UseVisualStyleBackColor = true;
            this.button_Back.Click += new System.EventHandler(this.button_Back_Click);
            // 
            // button_Restore
            // 
            this.button_Restore.Cursor = System.Windows.Forms.Cursors.Hand;
            this.button_Restore.ImeMode = System.Windows.Forms.ImeMode.NoControl;
            this.button_Restore.Location = new System.Drawing.Point(368, 259);
            this.button_Restore.Name = "button_Restore";
            this.button_Restore.Size = new System.Drawing.Size(88, 28);
            this.button_Restore.TabIndex = 0;
            this.button_Restore.Text = "بازگرداندن کالا";
            this.button_Restore.UseVisualStyleBackColor = true;
            this.button_Restore.Click += new System.EventHandler(this.button_Restore_Click);
            // 
            // dataGridView_Restore
            // 
            this.dataGridView_Restore.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            this.dataGridView_Restore.Columns.AddRange(new System.Windows.Forms.DataGridViewColumn[] {
            this.colCode,
            this.colStuff,
            this.colCpy,
            this.colPrice,
            this.colExp});
            this.dataGridView_Restore.EditMode = System.Windows.Forms.DataGridViewEditMode.EditProgrammatically;
            this.dataGridView_Restore.Location = new System.Drawing.Point(12, 12);
            this.dataGridView_Restore.Name = "dataGridView_Restore";
            this.dataGridView_Restore.SelectionMode = System.Windows.Forms.DataGridViewSelectionMode.FullRowSelect;
            this.dataGridView_Restore.Size = new System.Drawing.Size(517, 241);
            this.dataGridView_Restore.TabIndex = 2;
            // 
            // colCode
            // 
            this.colCode.DataPropertyName = "Id";
            this.colCode.Frozen = true;
            this.colCode.HeaderText = "کد کالا";
            this.colCode.Name = "colCode";
            this.colCode.ToolTipText = "کد کالا";
            this.colCode.Width = 80;
            // 
            // colStuff
            // 
            this.colStuff.DataPropertyName = "stuff";
            this.colStuff.Frozen = true;
            this.colStuff.HeaderText = "نام کالا";
            this.colStuff.Name = "colStuff";
            this.colStuff.ToolTipText = "نام کالا";
            this.colStuff.Width = 110;
            // 
            // colCpy
            // 
            this.colCpy.DataPropertyName = "company";
            this.colCpy.Frozen = true;
            this.colCpy.HeaderText = "نام شرکت";
            this.colCpy.Name = "colCpy";
            this.colCpy.ToolTipText = "نام شرکت";
            this.colCpy.Width = 105;
            // 
            // colPrice
            // 
            this.colPrice.DataPropertyName = "price";
            this.colPrice.Frozen = true;
            this.colPrice.HeaderText = "قیمت";
            this.colPrice.Name = "colPrice";
            this.colPrice.ToolTipText = "قیمت";
            // 
            // colExp
            // 
            this.colExp.AutoSizeMode = System.Windows.Forms.DataGridViewAutoSizeColumnMode.AllCells;
            this.colExp.DataPropertyName = "exp";
            this.colExp.Frozen = true;
            this.colExp.HeaderText = "تاریخ انقضا";
            this.colExp.Name = "colExp";
            this.colExp.ToolTipText = "تاریخ انقضا";
            this.colExp.Width = 85;
            // 
            // Restore
            // 
            this.AcceptButton = this.button_Restore;
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.AutoSizeMode = System.Windows.Forms.AutoSizeMode.GrowAndShrink;
            this.CancelButton = this.button_Back;
            this.ClientSize = new System.Drawing.Size(541, 296);
            this.Controls.Add(this.dataGridView_Restore);
            this.Controls.Add(this.button_Restore);
            this.Controls.Add(this.button_Back);
            this.Icon = ((System.Drawing.Icon)(resources.GetObject("$this.Icon")));
            this.MaximizeBox = false;
            this.MinimizeBox = false;
            this.Name = "Restore";
            this.Opacity = 0.92D;
            this.RightToLeft = System.Windows.Forms.RightToLeft.Yes;
            this.RightToLeftLayout = true;
            this.SizeGripStyle = System.Windows.Forms.SizeGripStyle.Hide;
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "سطل بازیافت";
            this.Load += new System.EventHandler(this.Restore_Load);
            ((System.ComponentModel.ISupportInitialize)(this.dataGridView_Restore)).EndInit();
            this.ResumeLayout(false);

        }

        #endregion

        internal System.Windows.Forms.Button button_Back;
        internal System.Windows.Forms.Button button_Restore;
        private System.Windows.Forms.DataGridView dataGridView_Restore;
        private System.Windows.Forms.DataGridViewTextBoxColumn colCode;
        private System.Windows.Forms.DataGridViewTextBoxColumn colStuff;
        private System.Windows.Forms.DataGridViewTextBoxColumn colCpy;
        private System.Windows.Forms.DataGridViewTextBoxColumn colPrice;
        private System.Windows.Forms.DataGridViewTextBoxColumn colExp;
    }
}