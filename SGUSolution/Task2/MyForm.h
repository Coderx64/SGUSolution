#pragma once
#include <vector>

namespace Task2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

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
	private:
		float ScaleIMGX;
		float ScaleIMGY;
		array<PointF>^ Points;
		array<PointF>^ PointsToDraw;

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
			Points = gcnew array < PointF> {
				*gcnew PointF(4, 2),
					*gcnew PointF(4, 6),
					*gcnew PointF(5, 6),
					*gcnew PointF(5, 7),
					*gcnew PointF(2, 7),
					*gcnew PointF(2, 8),
					*gcnew PointF(3, 8),
					*gcnew PointF(3, 14),
					*gcnew PointF(4, 14),
					*gcnew PointF(4, 8),
					*gcnew PointF(9, 8),
					*gcnew PointF(9, 14),
					*gcnew PointF(13, 14),
					*gcnew PointF(13, 8),
					*gcnew PointF(14, 8),
					*gcnew PointF(14,7),
					*gcnew PointF(13,7),
					*gcnew PointF(13,1),
					*gcnew PointF(11,1),
					*gcnew PointF(11,7),
					*gcnew PointF(8,7),
					*gcnew PointF(8,6),
					*gcnew PointF(9,6),
					*gcnew PointF(9,2),
					*gcnew PointF(4,2)

			};
			PointsToDraw = gcnew array < PointF> {
				*gcnew PointF(4, 2),
					*gcnew PointF(4, 6),
					*gcnew PointF(5, 6),
					*gcnew PointF(5, 7),
					*gcnew PointF(2, 7),
					*gcnew PointF(2, 8),
					*gcnew PointF(3, 8),
					*gcnew PointF(3, 14),
					*gcnew PointF(4, 14),
					*gcnew PointF(4, 8),
					*gcnew PointF(9, 8),
					*gcnew PointF(9, 14),
					*gcnew PointF(13, 14),
					*gcnew PointF(13, 8),
					*gcnew PointF(14, 8),
					*gcnew PointF(14, 7),
					*gcnew PointF(13, 7),
					*gcnew PointF(13, 1),
					*gcnew PointF(11, 1),
					*gcnew PointF(11, 7),
					*gcnew PointF(8, 7),
					*gcnew PointF(8, 6),
					*gcnew PointF(9, 6),
					*gcnew PointF(9, 2),
					*gcnew PointF(4, 2)
			};
			this->MyForm_Resize(gcnew Object(), gcnew EventArgs());
		}
#pragma endregion
	private: System::Void MyForm_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		Graphics^ g;
		g = e->Graphics;

		if (ScaleIMGX == 0)
		{
			ScaleIMGX = 1;
			ScaleIMGY = 1;
		}

		Pen^ Brush = gcnew Pen(Color::Blue,3);

		g->DrawLines(Brush, PointsToDraw);
		g->DrawLine(Brush, 5 * ScaleIMGX, 6 * ScaleIMGY, 8 * ScaleIMGX, 6 * ScaleIMGY);
		g->DrawLine(Brush, 5 * ScaleIMGX, 7 * ScaleIMGY, 8 * ScaleIMGX, 7 * ScaleIMGY);
		g->DrawLine(Brush, 2 * ScaleIMGX, 7 * ScaleIMGY, 14 * ScaleIMGX, 7 * ScaleIMGY);
		g->DrawLine(Brush, 2 * ScaleIMGX, 8 * ScaleIMGY, 14 * ScaleIMGX, 8 * ScaleIMGY);
		g->DrawLine(Brush, 11.5 * ScaleIMGX, 2 * ScaleIMGY, 12.5 * ScaleIMGX, 2 * ScaleIMGY);
		g->DrawLine(Brush, 10 * ScaleIMGX, 10 * ScaleIMGY, 10 * ScaleIMGX, 11 * ScaleIMGY);
	}
	private: System::Void MyForm_Resize(System::Object^  sender, System::EventArgs^  e) {
		ScaleIMGX = this->ClientRectangle.Width / 16.0;
		ScaleIMGY = this->ClientRectangle.Height / 16.0;

		for (int i = 0; i < Points->Length; i++)
		{
			PointsToDraw[i].X = Points[i].X * ScaleIMGX;
			PointsToDraw[i].Y = Points[i].Y * ScaleIMGY;
		}
		this->Refresh();
	}
	};
}
