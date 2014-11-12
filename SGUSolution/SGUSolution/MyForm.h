#pragma once

namespace Task1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

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
			this->SuspendLayout();
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::MyForm_Paint);
			this->Resize += gcnew System::EventHandler(this, &MyForm::MyForm_Resize);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		Graphics^ DrawingContext;
		DrawingContext = (*e).Graphics;
		DrawingContext->Clear(Color::Aquamarine);
		Rectangle rect = this->ClientRectangle;

		Pen^ RedPen = gcnew Pen(Color::Red,5);
		Pen^ BluePen = gcnew Pen(Color::Blue,10);
		System::Drawing::Font^ SomeFont = gcnew System::Drawing::Font("Arial", 10);

		DrawingContext->DrawLine(RedPen, 0, rect.Height, rect.Width, 0 );
		DrawingContext->DrawLine(BluePen, rect.Width, rect.Height, 0, 0);
		DrawingContext->DrawString("Hello world!", SomeFont, gcnew SolidBrush(Color::Black), 40, 100);
	}
			 
	private: System::Void MyForm_Resize(System::Object^  sender, System::EventArgs^  e) {
		this->Refresh();
	}
	};
}