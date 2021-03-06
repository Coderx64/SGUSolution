#pragma once

namespace задание3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  grdLines;
	protected: 
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  x1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  y1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  x2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  y2;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog;
	private: System::Windows::Forms::Button^  btnOpen;





	private: System::Windows::Forms::CheckBox^  checkBox1;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->grdLines = (gcnew System::Windows::Forms::DataGridView());
			this->name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->x1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->y1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->x2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->y2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->openFileDialog = (gcnew System::Windows::Forms::OpenFileDialog());
			this->btnOpen = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->grdLines))->BeginInit();
			this->SuspendLayout();
			// 
			// grdLines
			// 
			this->grdLines->AllowUserToAddRows = false;
			this->grdLines->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->grdLines->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {this->name, this->x1, 
				this->y1, this->x2, this->y2});
			this->grdLines->Location = System::Drawing::Point(81, 0);
			this->grdLines->Name = L"grdLines";
			this->grdLines->Size = System::Drawing::Size(580, 128);
			this->grdLines->TabIndex = 0;
			this->grdLines->Visible = false;
			// 
			// name
			// 
			this->name->HeaderText = L"name";
			this->name->Name = L"name";
			// 
			// x1
			// 
			this->x1->HeaderText = L"x1";
			this->x1->Name = L"x1";
			// 
			// y1
			// 
			this->y1->HeaderText = L"y1";
			this->y1->Name = L"y1";
			// 
			// x2
			// 
			this->x2->HeaderText = L"x2";
			this->x2->Name = L"x2";
			// 
			// y2
			// 
			this->y2->HeaderText = L"y2";
			this->y2->Name = L"y2";
			// 
			// openFileDialog
			// 
			this->openFileDialog->DefaultExt = L"txt";
			this->openFileDialog->FileName = L"openFileDialog1";
			this->openFileDialog->Filter = L"Текстовые файлы (*.txt)|*.txt|Все файлы (*.*)|*.*";
			this->openFileDialog->Title = L"Открыть файл";
			// 
			// btnOpen
			// 
			this->btnOpen->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnOpen->Location = System::Drawing::Point(261, 2);
			this->btnOpen->Name = L"btnOpen";
			this->btnOpen->Size = System::Drawing::Size(75, 23);
			this->btnOpen->TabIndex = 1;
			this->btnOpen->Text = L"Открыть";
			this->btnOpen->UseVisualStyleBackColor = true;
			this->btnOpen->Click += gcnew System::EventHandler(this, &Form1::btnOpen_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->checkBox1->AutoSize = true;
			this->checkBox1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->checkBox1->Location = System::Drawing::Point(346, 6);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(126, 17);
			this->checkBox1->TabIndex = 7;
			this->checkBox1->Text = L"Названия отрезков";
			this->checkBox1->UseVisualStyleBackColor = false;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox1_CheckedChanged);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(484, 212);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->btnOpen);
			this->Controls->Add(this->grdLines);
			this->KeyPreview = true;
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::Form1_Paint);
			this->Resize += gcnew System::EventHandler(this, &Form1::Form1_Resize);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::Form1_KeyDown);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->grdLines))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
	private: System::Void Form1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
				 Rectangle r = Form::ClientRectangle;
				 Graphics^ g = e->Graphics;

				 g->Clear(Color::White);
				 Pen^ blackPen = gcnew Pen(Color::Black);
				 blackPen->Width = 3;

				 Pen^ SilverPen = gcnew Pen(Color::Silver);
				 SilverPen->Width = 1.5;

				 Drawing::SolidBrush^ brush = gcnew Drawing::SolidBrush(Color::Black);
				 Drawing::SolidBrush^ silverBrush = gcnew Drawing::SolidBrush(Color::Silver);
				 Drawing::Font^ fontForm = gcnew System::Drawing::Font("Arial", 7);

				 float R[M][M], T1[M][M];
				 for (int i = 0; i < this->grdLines->RowCount; i++) {
					 System::String^ str = 
						 System::Convert::ToString(this->grdLines->Rows[i]->Cells[0]->Value);
					 float A[M], B[M], A1[M], B1[M], K1[M][M], tmp[N];
					 makeHomogenVec(
						 System::Convert::ToSingle(this->grdLines->Rows[i]->Cells[1]->Value),
						 System::Convert::ToSingle(this->grdLines->Rows[i]->Cells[2]->Value),
						 A);
					 makeHomogenVec(
						 System::Convert::ToSingle(this->grdLines->Rows[i]->Cells[3]->Value),
						 System::Convert::ToSingle(this->grdLines->Rows[i]->Cells[4]->Value),
						 B);

					 //Кадрирование
                     unit(K);
                     move(-Vcx, Vcy, K1);
                     times(K, K1, K);
                     scaleM(Wx, Vx, -Wy, Vy, K1);
                     times(K, K1, K);
                     move(Vcx, Vcy, K1);
                     times(K, K1, K);

                     timesVM(A, T, A1);
                     timesVM(B, T, B1);
                     timesVM(A1, K, A1);
                     timesVM(B1, K, B1);
                     cortesian(A1, A);
                     cortesian(B1, B);

					 //Надписи к отрезкам
					 float xName = A[0] + ((B[0] - A[0]) / 2);
					 float yName = A[1] + ((B[1] - A[1]) / 2); 
					 if(checkBox1->Checked)
						 if(xName > Vcx && xName < Wx + Vcx &&
							 yName > Vcy && yName < Wy + Vcy)
							 g->DrawString(str, fontForm, brush, xName , yName); 
						 else
							 g->DrawString(str, fontForm, silverBrush, xName , yName);

					 //Отсечение отрезков
					 if(kb(A[0], A[1], B[0], B[1], Vcx, Vcy,
						  Wx + Vcx, Wy + Vcy, tmp) == true) {
							  g->DrawLine(SilverPen, A[0], A[1], tmp[0], tmp[1]);
							  g->DrawLine(SilverPen, tmp[2], tmp[3], B[0], B[1]);
							  g->DrawLine(blackPen, tmp[0], tmp[1], tmp[2], tmp[3]);						 
					 }
					 else
						 g->DrawLine(SilverPen, A[0], A[1], B[0], B[1]);
				 }
				 if(Vcx != 0 && Vcy != 0 && Wx != 0 && Wy != 0)
					g->DrawRectangle(blackPen, Vcx, Vcy, Wx, Wy);
			 }

private: System::Void btnOpen_Click(System::Object^  sender, System::EventArgs^  e) {
				 if ( this->openFileDialog->ShowDialog() ==
					 System::Windows::Forms::DialogResult::OK) {
						 System::IO::Stream^ myStream;
						 if ((myStream = openFileDialog->OpenFile()) != nullptr) {
							 this->grdLines->Rows->Clear();
							 System::IO::StreamReader^ sr = gcnew System::IO::StreamReader(myStream);

                             Vcx = System::Convert::ToSingle(sr->ReadLine());
                             Vcy = System::Convert::ToSingle(sr->ReadLine());
                             Vx = System::Convert::ToSingle(sr->ReadLine());
                             Vy = System::Convert::ToSingle(sr->ReadLine());

							 if(Form::Width < Vcx + Vx || Form::Width > Vcx + Vx + Vcx) 
								 Form::Width = Vcx + Vx + Vcx;
							 if(Form::Height < Vcy + Vy || Form::Height > Vcy + Vy + Vcy)
								 Form::Height = Vcy + Vy + Vcy;

							 Rectangle r = Form::ClientRectangle;
							 rWidth = r.Width;
							 rHieght = r.Height;

							 Wx = r.Width - Vcx - (rWidth - Vcx - Vx);
                             Wy = r.Height - Vcy - (rHieght - Vcy - Vy);

							 int i = 0;
							 while(!sr->EndOfStream) {
								 this->grdLines->Rows->Add(1);
								 this->grdLines->Rows[i]->Cells[0]->Value = sr->ReadLine() + 
									 System::Convert::ToSingle(i + 1);
								 this->grdLines->Rows[i]->Cells[1]->Value = sr->ReadLine();
								 this->grdLines->Rows[i]->Cells[2]->Value = sr->ReadLine();
								 this->grdLines->Rows[i]->Cells[3]->Value = sr->ReadLine();
								 this->grdLines->Rows[i]->Cells[4]->Value = sr->ReadLine();
								 i++;
							 }
							 myStream->Close();

							 unit(T);
                             move(Vcx, (r.Height - Vcy + (r.Height - (Vcy + Vy))) * -1, T);
							 this->Refresh();
						 }
				 }
			 }

private: System::Void Form1_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			 Rectangle r = Form::ClientRectangle;
			 float R[M][M], T1[M][M];

			 switch(e->KeyCode) {
				 case Keys::Up :	// Up + ctrl
					 move(0, 1, R);
					 break;
				 case Keys::Down :	// Down + ctrl
					 move(0, -1, R);
					 break;
				 case Keys::Left :	// Left + ctrl
					 move(-1, 0, R);
					 break;
				 case Keys::Right :	// Right + ctrl
					 move(1, 0, R);
					 break;
				 case Keys::Q : 
					 move(Vx / -2 - Vcx,  Vy / 2 + Vcy, R);
					 times(T, R, T1);
					 set(T1, T);
					 rotate(-0.07, R);
					 times(T, R, T1);
					 set(T1, T);
					 move(Vx / 2 + Vcx,  Vy / -2 - Vcy, R);
					 break;
				 case Keys::E :
					 move(Vx / -2 - Vcx,  Vy / 2 + Vcy, R);
					 times(T, R, T1);
					 set(T1, T);
					 rotate(0.07, R);
					 times(T, R, T1);
					 set(T1, T);
					 move(Vx / 2 + Vcx,  Vy / -2 - Vcy, R);
					 break;
				 case Keys::Z :
					 move(Vx / -2 - Vcx,  Vy / 2 + Vcy, R);
					 times(T, R, T1);
					 set(T1, T);
					 scale(1.1, R);
					 times(T, R, T1);
					 set(T1, T);
					 move(Vx / 2 + Vcx,  Vy / -2 - Vcy, R);
					 break;
				 case Keys::X :
					 move(Vx / -2 - Vcx,  Vy / 2 + Vcy, R);
					 times(T, R, T1);
					 set(T1, T);
					 scale(1/1.1, R);
					 times(T, R, T1);
					 set(T1, T);
					 move(Vx / 2 + Vcx,  Vy / -2 - Vcy, R);
					 break;
				 case Keys::C :
					 unit(T);
					 move(Vcx, (r.Height - Vcy + (r.Height - (Vcy + Vy))) * -1, T);;
					 unit(R);
					 break;
				 case Keys::V :
					 move(Vx / -2 - Vcx, Vy / 2 + Vcy, R);
					 times(T, R, T1);
					 set(T1, T);
					 unit(R);
					 R[1][1]= -1;
					 times(T, R, T1);
					 set(T1, T);
					 move(Vx / 2 + Vcx, Vy / -2 - Vcy, R);
					 break;
				 case Keys::B :
					 move(Vx / -2 - Vcx, Vy / 2 + Vcy, R);
					 times(T, R, T1);
					 set(T1, T);
					 unit(R);
					 R[0][0]= -1;
					 times(T, R, T1);
					 set(T1, T);
					 move(Vx / 2 + Vcx, Vy / -2 - Vcy, R);
					 break;
				 case Keys::D :
					 move(40, 0, R);
					 break;
				 case Keys::A :
					 move(-40, 0, R);
					 break;
				 case Keys::S :
					 move(0, -40, R);
					 break;
				 case Keys::W :
					 move(0, 40, R);
					 break;
				 case Keys::I :
					 move(Vx / -2 - Vcx, Vy / 2 + Vcy, R);
					 times(T, R, T1);
					 set(T1, T);
					 unit(R);
					 R[1][1] = 1 / 1.1;
					 times(T, R, T1);
					 set(T1, T);
					 move(Vx / 2 + Vcx, Vy / -2 - Vcy, R);
					 break;
				 case Keys::K :
					 move(Vx / -2 - Vcx, Vy / 2 + Vcy, R);
					 times(T, R, T1);
					 set(T1, T);
					 unit(R);
					 R[1][1] = 1.1;
					 times(T, R, T1);
					 set(T1, T);
					 move(Vx / 2 + Vcx, Vy / -2 - Vcy, R);
					 break;
				 case Keys::J :
					 move(Vx / -2 - Vcx, Vy / 2 + Vcy, R);
					 times(T, R, T1);
					 set(T1, T);
					 unit(R);
					 R[0][0] = 1 / 1.1;
					 times(T, R, T1);
					 set(T1, T);
					 move(Vx / 2 + Vcx, Vy / -2 - Vcy, R);
					 break;
				 case Keys::L :
					 move(Vx / -2 - Vcx, Vy / 2 + Vcy, R);
					 times(T, R, T1);
					 set(T1, T);
					 unit(R);
					 R[0][0] = 1.1;
					 times(T, R, T1);
					 set(T1, T);
					 move(Vx / 2 + Vcx, Vy / -2 - Vcy, R);
					 break;
				 default :
					 unit(R);
			 }
			 times(T, R, T1);
			 set(T1, T);
			 this->Refresh();
		 }

private: System::Void Form1_Resize(System::Object^  sender, System::EventArgs^  e) {
			 Rectangle r = Form::ClientRectangle;
			 Wx = r.Width - Vcx - (rWidth - Vcx - Vx);
			 Wy = r.Height - Vcy - (rHieght - Vcy - Vy);
			 this->Refresh();
			 Form1::Text = System::Convert::ToString(Form1::Width + " " + Form1::Height);
		 }
private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 this->Refresh();
		 }
};
}

