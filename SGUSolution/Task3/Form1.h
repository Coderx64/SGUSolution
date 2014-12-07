#pragma once
#include "matrix.h"

namespace TaskN {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// —водка дл€ Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	protected: 
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  x1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  x2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  y2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  y1;
















	private:
		/// <summary>
		/// “ребуетс€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ќб€зательный метод дл€ поддержки конструктора - не измен€йте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->x1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->x2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->y2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->y1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {this->name, this->x1, 
				this->x2, this->y2, this->y1});
			this->dataGridView1->Location = System::Drawing::Point(628, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size(234, 244);
			this->dataGridView1->TabIndex = 0;
			// 
			// name
			// 
			this->name->HeaderText = L"name";
			this->name->Name = L"name";
			this->name->ReadOnly = true;
			this->name->Width = 50;
			// 
			// x1
			// 
			this->x1->HeaderText = L"x1";
			this->x1->Name = L"x1";
			this->x1->ReadOnly = true;
			this->x1->Width = 35;
			// 
			// x2
			// 
			this->x2->HeaderText = L"x2";
			this->x2->Name = L"x2";
			this->x2->ReadOnly = true;
			this->x2->Width = 35;
			// 
			// y2
			// 
			this->y2->HeaderText = L"y2";
			this->y2->Name = L"y2";
			this->y2->ReadOnly = true;
			this->y2->Width = 35;
			// 
			// y1
			// 
			this->y1->HeaderText = L"y1";
			this->y1->Name = L"y1";
			this->y1->ReadOnly = true;
			this->y1->Width = 35;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 262);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(874, 297);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->KeyPreview = true;
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::Form1_Paint);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::Form1_KeyDown);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Form1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
				 Graphics^ g = e->Graphics;
				 Pen^ BlackPen = Pens::Black;
				 float A[M], B[M];

				 for (int i=0; i<dataGridView1->RowCount; i++)
				 {
					 makeHomogenVec(System::Convert::ToSingle(dataGridView1->Rows[i]->Cells["x1"]->Value), 
						 System::Convert::ToSingle(dataGridView1->Rows[i]->Cells["y1"]->Value), A);
					 makeHomogenVec(System::Convert::ToSingle(dataGridView1->Rows[i]->Cells["x2"]->Value), 
						 System::Convert::ToSingle(dataGridView1->Rows[i]->Cells["y2"]->Value), B);

					 float A1[M], B1[M];
					 timesVM(A, T, A1);
					 timesVM(B, T, B1);

					 cortesian(A1, A);
					 cortesian(B1, B);

					 g->DrawLine(BlackPen, A[0], A[1], B[0], B[1]);
				 }
			 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 OpenFileDialog^ of = gcnew OpenFileDialog();
			 Rectangle r = Form::ClientRectangle;
			 dataGridView1->Rows->Clear();
			 unit(T);
			 of->DefaultExt = "txt";
			 of->Filter = "Text files (*.txt)|*.txt|All files (*.*)|*.*";

			 Stream^ s;
			 int i=0;

			 if (of->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			 {
				 if ((s = of->OpenFile()) != nullptr)
				 {
					 StreamReader^ sr = gcnew StreamReader(s);
					 while (! sr->EndOfStream)
					 {
						dataGridView1->Rows->Add();
						dataGridView1->Rows[i]->Cells["name"]->Value = sr->ReadLine();
						dataGridView1->Rows[i]->Cells["x1"]->Value = sr->ReadLine();
						dataGridView1->Rows[i]->Cells["y1"]->Value = sr->ReadLine();
						dataGridView1->Rows[i]->Cells["x2"]->Value = sr->ReadLine();
						dataGridView1->Rows[i]->Cells["y2"]->Value = sr->ReadLine();
						i++;
					 }
					 s->Close();
					 move(0, r.Height, T);
					 T[1][1] = -1;
					 delete sr;
					 this->Refresh();
				 }
			 }
			 delete of;
			 delete s;
		 }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 unit(T);
		 }
private: System::Void Form1_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			float R[M][M], T1[M][M];
			Rectangle r = Form::ClientRectangle;
			switch (e->KeyCode)
			{
			case Keys::W:
				 move(0, -1, R);
				 break;
			case Keys::S:
				 move(0, 1, R);
				 break;
			case Keys::A:
				 move(-1, 0, R);
				 break;
			case Keys::D:
				 move(1, 0, R);
				 break;
			case Keys::Up:
				move(0, -10, R);
				break;
			case Keys::Down:
				move(0, 10, R);
				break;
			case Keys::Left:
				move(-10, 0, R);
				break;
			case Keys::Right:
				move(10, 0, R);
				break;
			case Keys::Q:
				move((r.Width / -2), r.Height / -2, R);
				times(T, R, T1);
				set(T1, T);
				rotate(-0.05, R);
				times(T, R, T1);
				set(T1, T);
				move(r.Width / 2, r.Height / 2, R);
				break;
			case Keys::E:
				move(r.Width / -2, r.Height / -2, R);
				times(T, R, T1);
				set(T1, T);
				rotate(0.05, R);
				times(T, R, T1);
				set(T1, T);
				move(r.Width / 2, r.Height / 2, R);
				break;
			case Keys::Z:
				move(r.Width / -2, r.Height / -2, R);
				times(T, R, T1);
				set(T1, T);
				scale(1.1, R);
				times(T, R, T1);
				set(T1, T);
				move(r.Width / 2, r.Height / 2, R);
				break;
			case Keys::X:
				move(r.Width / -2, r.Height / -2, R);
				times(T, R, T1);
				set(T1, T);
				scale(1 / 1.1, R);
				times(T, R, T1);
				set(T1, T);
				move(r.Width / 2, r.Height / 2, R);
				break;
			case Keys::R:
				unit(T);
				unit(R);
				break;
			case Keys::V:
				move(r.Width / -2, r.Height / -2, R);
				times(T, R, T1);
				set(T1, T);
				unit(R);
				R[1][1] = -1;
				times(T, R, T1);
				set(T1, T);
				move(r.Width / 2, r.Height / 2, R);
				break;
			case Keys::B:
				move(r.Width / -2, r.Height / -2, R);
				times(T, R, T1);
				set(T1, T);
				unit(R);
				R[0][0] = -1;
				times(T, R, T1);
				set(T1, T);
				move(r.Width / 2, r.Height / 2, R);
				break;
			default:
				unit(R);
			}

			times(T, R, T1);
			set(T1, T);
			Refresh();
		 }
};
}

