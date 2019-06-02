#include <string>
#include <msclr\marshal_cppstd.h>
#pragma once

namespace Kursovaya {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;
	using namespace std;

	/// <summary>
	/// Сводка для Enter_f
	/// </summary>
	public ref class Enter_f : public System::Windows::Forms::Form
	{
	public:
		Enter_f(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}


	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Enter_f()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	public: System::Windows::Forms::TextBox^ loginBox;
	public: System::Windows::Forms::TextBox^ passBox;
	private: System::Windows::Forms::Button^ acceptBtn;
	public:


	protected:





	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->loginBox = (gcnew System::Windows::Forms::TextBox());
			this->passBox = (gcnew System::Windows::Forms::TextBox());
			this->acceptBtn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(127, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(38, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Логин";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(120, 84);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(45, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Пароль";
			// 
			// loginBox
			// 
			this->loginBox->Location = System::Drawing::Point(92, 41);
			this->loginBox->Name = L"loginBox";
			this->loginBox->Size = System::Drawing::Size(100, 20);
			this->loginBox->TabIndex = 2;
			// 
			// passBox
			// 
			this->passBox->Location = System::Drawing::Point(92, 100);
			this->passBox->Name = L"passBox";
			this->passBox->Size = System::Drawing::Size(100, 20);
			this->passBox->TabIndex = 3;
			this->passBox->UseSystemPasswordChar = true;
			// 
			// acceptBtn
			// 
			this->acceptBtn->Location = System::Drawing::Point(107, 152);
			this->acceptBtn->Name = L"acceptBtn";
			this->acceptBtn->Size = System::Drawing::Size(75, 23);
			this->acceptBtn->TabIndex = 4;
			this->acceptBtn->Text = L"Войти";
			this->acceptBtn->UseVisualStyleBackColor = true;
			this->acceptBtn->Click += gcnew System::EventHandler(this, &Enter_f::AcceptBtn_Click);
			// 
			// Enter_f
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->ClientSize = System::Drawing::Size(285, 216);
			this->Controls->Add(this->acceptBtn);
			this->Controls->Add(this->passBox);
			this->Controls->Add(this->loginBox);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"Enter_f";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Окно входа";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void AcceptBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		Enter_f::Hide();
	}
};
}
