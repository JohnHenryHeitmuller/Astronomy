using System;
using System.Collections;
using System.ComponentModel;
using System.Drawing;
using System.Data;
using System.Windows.Forms;

namespace SampleActiveX
{
	/// <summary>
	/// Summary description for UserControl1.
	/// </summary>
		public class rtfcontrol : System.Windows.Forms.UserControl
		{
			private System.Windows.Forms.RichTextBox richTextBox1;
			private System.Windows.Forms.Panel panel1;
			private System.Windows.Forms.Button btnBold;
			private System.Windows.Forms.Button btnItalic;
			/// <summary>
			/// Required designer variable.
			/// </summary>
			private System.ComponentModel.Container components = null;

			public rtfcontrol()
			{
				// This call is required by the Windows.Forms Form Designer.
				InitializeComponent();
			}

			/// <summary>
			/// Clean up any resources being used.
			/// </summary>
			protected override void Dispose( bool disposing )
			{
				if( disposing )
				{
					if( components != null )
						components.Dispose();
				}
				base.Dispose( disposing );
			}

			#region Component Designer generated code
			/// <summary>
			/// Required method for Designer support - do not modify 
			/// the contents of this method with the code editor.
			/// </summary>
			private void InitializeComponent()
			{
				this.richTextBox1 = new System.Windows.Forms.RichTextBox();
				this.panel1 = new System.Windows.Forms.Panel();
				this.btnItalic = new System.Windows.Forms.Button();
				this.btnBold = new System.Windows.Forms.Button();
				this.panel1.SuspendLayout();
				this.SuspendLayout();
				// 
				// richTextBox1
				// 
				this.richTextBox1.BackColor = System.Drawing.Color.White;
				this.richTextBox1.Location = new System.Drawing.Point(0, 40);
				this.richTextBox1.Name = "richTextBox1";
				this.richTextBox1.Size = new System.Drawing.Size(488, 432);
				this.richTextBox1.TabIndex = 0;
				this.richTextBox1.Text = "";
				// 
				// panel1
				// 
				this.panel1.BackColor = System.Drawing.Color.LightGray;
				this.panel1.Controls.AddRange(new System.Windows.Forms.Control[] {
																					 this.btnItalic,
																					 this.btnBold});
				this.panel1.Name = "panel1";
				this.panel1.Size = new System.Drawing.Size(488, 40);
				this.panel1.TabIndex = 1;
				// 
				// btnItalic
				// 
				this.btnItalic.Font = new System.Drawing.Font("Arial", 9F, System.Drawing.FontStyle.Regular, 
					System.Drawing.GraphicsUnit.Point, ((System.Byte)(0)));
				this.btnItalic.Location = new System.Drawing.Point(72, 8);
				this.btnItalic.Name = "btnItalic";
				this.btnItalic.Size = new System.Drawing.Size(56, 24);
				this.btnItalic.TabIndex = 1;
				this.btnItalic.Text = "Italic";
				this.btnItalic.Click += new System.EventHandler(this.btnItalic_Click);
				// 
				// btnBold
				// 
				this.btnBold.Font = new System.Drawing.Font("Arial", 9F, System.Drawing.FontStyle.Regular, 
					System.Drawing.GraphicsUnit.Point, ((System.Byte)(0)));
				this.btnBold.Location = new System.Drawing.Point(8, 8);
				this.btnBold.Name = "btnBold";
				this.btnBold.Size = new System.Drawing.Size(56, 24);
				this.btnBold.TabIndex = 0;
				this.btnBold.Text = "Bold";
				this.btnBold.Click += new System.EventHandler(this.btnBold_Click);
				// 
				// rtfcontrol
				// 
				this.BackColor = System.Drawing.Color.LightGray;
				this.Controls.AddRange(new System.Windows.Forms.Control[] {
																			  this.panel1,
																			  this.richTextBox1});
				this.Name = "rtfcontrol";
				this.Size = new System.Drawing.Size(488, 472);
				this.panel1.ResumeLayout(false);
				this.ResumeLayout(false);

			}
			#endregion

			private void btnBold_Click(object sender, System.EventArgs e)
			{
				if (this.richTextBox1.SelectionFont.Bold)
					this.richTextBox1.SelectionFont = new Font(this.richTextBox1.SelectionFont, FontStyle.Regular);
				else
					this.richTextBox1.SelectionFont = new Font(this.richTextBox1.SelectionFont, FontStyle.Bold);
			}

			private void btnItalic_Click(object sender, System.EventArgs e)
			{
				if (this.richTextBox1.SelectionFont.Italic)
					this.richTextBox1.SelectionFont = new Font(this.richTextBox1.SelectionFont, FontStyle.Regular);
				else
					this.richTextBox1.SelectionFont = new Font(this.richTextBox1.SelectionFont, FontStyle.Italic);
			}
		}
	}
