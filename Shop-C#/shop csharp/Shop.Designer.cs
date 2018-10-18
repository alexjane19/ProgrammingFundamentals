namespace shop_csharp
{
    public partial class Shop_Form 
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
            this.components = new System.ComponentModel.Container();
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(Shop_Form));
            this.dataGridView_Form1 = new System.Windows.Forms.DataGridView();
            this.colCode = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.colStuff = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.colCpy = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.colPrice = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.colExp = new System.Windows.Forms.DataGridViewTextBoxColumn();
            this.toolTip1 = new System.Windows.Forms.ToolTip(this.components);
            this.Button_Show = new System.Windows.Forms.Button();
            this.button_Exit = new System.Windows.Forms.Button();
            this.button_Changemusic = new System.Windows.Forms.Button();
            this.button_Stop = new System.Windows.Forms.Button();
            this.button_Play = new System.Windows.Forms.Button();
            this.button_About = new System.Windows.Forms.Button();
            this.Button_Sort = new System.Windows.Forms.Button();
            this.Button_Restore = new System.Windows.Forms.Button();
            this.Button_Delete = new System.Windows.Forms.Button();
            this.Button_Search = new System.Windows.Forms.Button();
            this.Button_Insert = new System.Windows.Forms.Button();
            ((System.ComponentModel.ISupportInitialize)(this.dataGridView_Form1)).BeginInit();
            this.SuspendLayout();
            // 
            // dataGridView_Form1
            // 
            this.dataGridView_Form1.ColumnHeadersHeightSizeMode = System.Windows.Forms.DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            this.dataGridView_Form1.Columns.AddRange(new System.Windows.Forms.DataGridViewColumn[] {
            this.colCode,
            this.colStuff,
            this.colCpy,
            this.colPrice,
            this.colExp});
            this.dataGridView_Form1.EditMode = System.Windows.Forms.DataGridViewEditMode.EditProgrammatically;
            resources.ApplyResources(this.dataGridView_Form1, "dataGridView_Form1");
            this.dataGridView_Form1.Name = "dataGridView_Form1";
            this.dataGridView_Form1.SelectionMode = System.Windows.Forms.DataGridViewSelectionMode.FullRowSelect;
            // 
            // colCode
            // 
            this.colCode.DataPropertyName = "Id";
            this.colCode.Frozen = true;
            resources.ApplyResources(this.colCode, "colCode");
            this.colCode.Name = "colCode";
            // 
            // colStuff
            // 
            this.colStuff.DataPropertyName = "stuff";
            this.colStuff.Frozen = true;
            resources.ApplyResources(this.colStuff, "colStuff");
            this.colStuff.Name = "colStuff";
            // 
            // colCpy
            // 
            this.colCpy.DataPropertyName = "company";
            this.colCpy.Frozen = true;
            resources.ApplyResources(this.colCpy, "colCpy");
            this.colCpy.Name = "colCpy";
            // 
            // colPrice
            // 
            this.colPrice.DataPropertyName = "price";
            this.colPrice.Frozen = true;
            resources.ApplyResources(this.colPrice, "colPrice");
            this.colPrice.Name = "colPrice";
            // 
            // colExp
            // 
            this.colExp.AutoSizeMode = System.Windows.Forms.DataGridViewAutoSizeColumnMode.AllCells;
            this.colExp.DataPropertyName = "exp";
            this.colExp.Frozen = true;
            resources.ApplyResources(this.colExp, "colExp");
            this.colExp.Name = "colExp";
            // 
            // Button_Show
            // 
            this.Button_Show.BackColor = System.Drawing.Color.Transparent;
            resources.ApplyResources(this.Button_Show, "Button_Show");
            this.Button_Show.Cursor = System.Windows.Forms.Cursors.Hand;
            this.Button_Show.Name = "Button_Show";
            this.Button_Show.UseVisualStyleBackColor = false;
            this.Button_Show.Click += new System.EventHandler(this.Button_Show_Click);
            // 
            // button_Exit
            // 
            this.button_Exit.BackColor = System.Drawing.Color.Transparent;
            resources.ApplyResources(this.button_Exit, "button_Exit");
            this.button_Exit.Cursor = System.Windows.Forms.Cursors.Hand;
            this.button_Exit.DialogResult = System.Windows.Forms.DialogResult.Cancel;
            this.button_Exit.Name = "button_Exit";
            this.button_Exit.UseVisualStyleBackColor = false;
            this.button_Exit.Click += new System.EventHandler(this.button_Exit_Click);
            // 
            // button_Changemusic
            // 
            this.button_Changemusic.BackColor = System.Drawing.Color.Transparent;
            this.button_Changemusic.BackgroundImage = global::shop_csharp.Properties.Resources.next;
            resources.ApplyResources(this.button_Changemusic, "button_Changemusic");
            this.button_Changemusic.Cursor = System.Windows.Forms.Cursors.Hand;
            this.button_Changemusic.Name = "button_Changemusic";
            this.button_Changemusic.UseVisualStyleBackColor = false;
            this.button_Changemusic.Click += new System.EventHandler(this.button_Changemusic_Click);
            // 
            // button_Stop
            // 
            this.button_Stop.BackColor = System.Drawing.Color.Transparent;
            this.button_Stop.BackgroundImage = global::shop_csharp.Properties.Resources.stop;
            resources.ApplyResources(this.button_Stop, "button_Stop");
            this.button_Stop.Cursor = System.Windows.Forms.Cursors.Hand;
            this.button_Stop.Name = "button_Stop";
            this.button_Stop.UseVisualStyleBackColor = false;
            this.button_Stop.Click += new System.EventHandler(this.button_Stop_Click);
            // 
            // button_Play
            // 
            this.button_Play.BackColor = System.Drawing.Color.Transparent;
            this.button_Play.BackgroundImage = global::shop_csharp.Properties.Resources.play;
            resources.ApplyResources(this.button_Play, "button_Play");
            this.button_Play.Cursor = System.Windows.Forms.Cursors.Hand;
            this.button_Play.Name = "button_Play";
            this.button_Play.UseVisualStyleBackColor = false;
            this.button_Play.Click += new System.EventHandler(this.button_Play_Click);
            // 
            // button_About
            // 
            this.button_About.BackColor = System.Drawing.Color.Transparent;
            resources.ApplyResources(this.button_About, "button_About");
            this.button_About.Cursor = System.Windows.Forms.Cursors.Hand;
            this.button_About.DialogResult = System.Windows.Forms.DialogResult.Cancel;
            this.button_About.Name = "button_About";
            this.button_About.UseVisualStyleBackColor = false;
            this.button_About.Click += new System.EventHandler(this.button_About_Click);
            // 
            // Button_Sort
            // 
            this.Button_Sort.BackColor = System.Drawing.Color.Transparent;
            resources.ApplyResources(this.Button_Sort, "Button_Sort");
            this.Button_Sort.Cursor = System.Windows.Forms.Cursors.Hand;
            this.Button_Sort.DialogResult = System.Windows.Forms.DialogResult.Cancel;
            this.Button_Sort.Name = "Button_Sort";
            this.Button_Sort.UseVisualStyleBackColor = false;
            this.Button_Sort.Click += new System.EventHandler(this.Button_Sort_Click);
            // 
            // Button_Restore
            // 
            this.Button_Restore.BackColor = System.Drawing.Color.Transparent;
            resources.ApplyResources(this.Button_Restore, "Button_Restore");
            this.Button_Restore.Cursor = System.Windows.Forms.Cursors.Hand;
            this.Button_Restore.Name = "Button_Restore";
            this.Button_Restore.UseVisualStyleBackColor = false;
            this.Button_Restore.Click += new System.EventHandler(this.Button_Restore_Click);
            // 
            // Button_Delete
            // 
            this.Button_Delete.BackColor = System.Drawing.Color.Transparent;
            resources.ApplyResources(this.Button_Delete, "Button_Delete");
            this.Button_Delete.Cursor = System.Windows.Forms.Cursors.Hand;
            this.Button_Delete.Name = "Button_Delete";
            this.Button_Delete.UseVisualStyleBackColor = false;
            this.Button_Delete.Click += new System.EventHandler(this.Button_Delete_Click);
            // 
            // Button_Search
            // 
            this.Button_Search.BackColor = System.Drawing.Color.Transparent;
            resources.ApplyResources(this.Button_Search, "Button_Search");
            this.Button_Search.Cursor = System.Windows.Forms.Cursors.Hand;
            this.Button_Search.Name = "Button_Search";
            this.Button_Search.UseVisualStyleBackColor = false;
            this.Button_Search.Click += new System.EventHandler(this.Button_Search_Click);
            // 
            // Button_Insert
            // 
            this.Button_Insert.BackColor = System.Drawing.Color.Transparent;
            resources.ApplyResources(this.Button_Insert, "Button_Insert");
            this.Button_Insert.Cursor = System.Windows.Forms.Cursors.Hand;
            this.Button_Insert.Name = "Button_Insert";
            this.Button_Insert.UseVisualStyleBackColor = false;
            this.Button_Insert.Click += new System.EventHandler(this.Button_Insert_Click);
            // 
            // Shop_Form
            // 
            this.AcceptButton = this.Button_Show;
            resources.ApplyResources(this, "$this");
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.CancelButton = this.button_Exit;
            this.Controls.Add(this.button_Changemusic);
            this.Controls.Add(this.button_Stop);
            this.Controls.Add(this.button_Play);
            this.Controls.Add(this.dataGridView_Form1);
            this.Controls.Add(this.button_About);
            this.Controls.Add(this.button_Exit);
            this.Controls.Add(this.Button_Sort);
            this.Controls.Add(this.Button_Restore);
            this.Controls.Add(this.Button_Delete);
            this.Controls.Add(this.Button_Search);
            this.Controls.Add(this.Button_Show);
            this.Controls.Add(this.Button_Insert);
            this.MaximizeBox = false;
            this.MinimizeBox = false;
            this.Name = "Shop_Form";
            this.SizeGripStyle = System.Windows.Forms.SizeGripStyle.Hide;
            this.Load += new System.EventHandler(this.Shop_Form_Load);
            ((System.ComponentModel.ISupportInitialize)(this.dataGridView_Form1)).EndInit();
            this.ResumeLayout(false);

        }

        #endregion

        internal System.Windows.Forms.Button Button_Sort;
        internal System.Windows.Forms.Button Button_Restore;
        internal System.Windows.Forms.Button Button_Delete;
        internal System.Windows.Forms.Button Button_Search;
        internal System.Windows.Forms.Button Button_Show;
        internal System.Windows.Forms.Button Button_Insert;
        private System.Windows.Forms.DataGridView dataGridView_Form1;
        private System.Windows.Forms.DataGridViewTextBoxColumn colCode;
        private System.Windows.Forms.DataGridViewTextBoxColumn colStuff;
        private System.Windows.Forms.DataGridViewTextBoxColumn colCpy;
        private System.Windows.Forms.DataGridViewTextBoxColumn colPrice;
        private System.Windows.Forms.DataGridViewTextBoxColumn colExp;
        internal System.Windows.Forms.Button button_Exit;
        internal System.Windows.Forms.Button button_About;
        private System.Windows.Forms.ToolTip toolTip1;
        private System.Windows.Forms.Button button_Play;
        private System.Windows.Forms.Button button_Stop;
        private System.Windows.Forms.Button button_Changemusic;

    }
}

