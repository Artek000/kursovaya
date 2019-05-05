#include <string>
#include <vector>
#pragma once

namespace Kursovaya {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	int Stars;
	int TypeHome;
	int costMin;
	int costMax;

	struct hotel_S
	{
		string stars, type, name, cost;
	};
	vector<hotel_S> vHotels;

	/// <summary>
	/// Сводка для Main
	/// </summary>
	public ref class Main : public System::Windows::Forms::Form
	{
	public:
		Main(void)
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
		~Main()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ zaprText;



	protected:

	private: System::Windows::Forms::ComboBox^ starsBox;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ComboBox^ typeBox;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ costMinBox;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ costMaxBox;
	private: System::Windows::Forms::Button^ bAppend;
	private: System::Windows::Forms::ListView^ listHotels;

	private: System::Windows::Forms::ColumnHeader^ colHeader_stars;
	private: System::Windows::Forms::ColumnHeader^ colHeader_type;
	private: System::Windows::Forms::ColumnHeader^ colHeader_name;
	private: System::Windows::Forms::ColumnHeader^ colHeader_cost;
	private: System::Windows::Forms::Button^ bFind;




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
			System::Windows::Forms::ListViewItem^ listViewItem1 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(4) {
				L"5",
					L"для семьи", L"Reagrd Hotel 5 Stars", L"2500"
			}, -1));
			System::Windows::Forms::ListViewItem^ listViewItem2 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(4) {
				L"1",
					L"2", L"3", L"4"
			}, -1));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->zaprText = (gcnew System::Windows::Forms::TextBox());
			this->starsBox = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->typeBox = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->costMinBox = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->costMaxBox = (gcnew System::Windows::Forms::TextBox());
			this->bAppend = (gcnew System::Windows::Forms::Button());
			this->listHotels = (gcnew System::Windows::Forms::ListView());
			this->colHeader_stars = (gcnew System::Windows::Forms::ColumnHeader());
			this->colHeader_type = (gcnew System::Windows::Forms::ColumnHeader());
			this->colHeader_name = (gcnew System::Windows::Forms::ColumnHeader());
			this->colHeader_cost = (gcnew System::Windows::Forms::ColumnHeader());
			this->bFind = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(9, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(99, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Количество звезд";
			// 
			// zaprText
			// 
			this->zaprText->Location = System::Drawing::Point(160, 29);
			this->zaprText->Name = L"zaprText";
			this->zaprText->Size = System::Drawing::Size(551, 20);
			this->zaprText->TabIndex = 20;
			this->zaprText->TextChanged += gcnew System::EventHandler(this, &Main::ZaprText_TextChanged);
			// 
			// starsBox
			// 
			this->starsBox->FormattingEnabled = true;
			this->starsBox->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"1", L"2", L"3", L"4", L"5" });
			this->starsBox->Location = System::Drawing::Point(12, 25);
			this->starsBox->Name = L"starsBox";
			this->starsBox->Size = System::Drawing::Size(142, 21);
			this->starsBox->TabIndex = 1;
			this->starsBox->Text = L"(Не выбрано)";
			this->starsBox->SelectedIndexChanged += gcnew System::EventHandler(this, &Main::StarsBox_SelectedIndexChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 53);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(67, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Тип номера";
			// 
			// typeBox
			// 
			this->typeBox->FormattingEnabled = true;
			this->typeBox->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Одноместный", L"Двухместный", L"Трехместный", L"Семейный" });
			this->typeBox->Location = System::Drawing::Point(12, 69);
			this->typeBox->Name = L"typeBox";
			this->typeBox->Size = System::Drawing::Size(142, 21);
			this->typeBox->TabIndex = 3;
			this->typeBox->Text = L"(Не выбрано)";
			this->typeBox->SelectedIndexChanged += gcnew System::EventHandler(this, &Main::TypeBox_SelectedIndexChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 93);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(36, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Цена:";
			// 
			// costMinBox
			// 
			this->costMinBox->Location = System::Drawing::Point(44, 110);
			this->costMinBox->Name = L"costMinBox";
			this->costMinBox->Size = System::Drawing::Size(110, 20);
			this->costMinBox->TabIndex = 6;
			this->costMinBox->TextChanged += gcnew System::EventHandler(this, &Main::CostMinBox_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 113);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(23, 13);
			this->label4->TabIndex = 5;
			this->label4->Text = L"От:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 140);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(25, 13);
			this->label5->TabIndex = 7;
			this->label5->Text = L"До:";
			// 
			// costMaxBox
			// 
			this->costMaxBox->Location = System::Drawing::Point(44, 137);
			this->costMaxBox->Name = L"costMaxBox";
			this->costMaxBox->Size = System::Drawing::Size(110, 20);
			this->costMaxBox->TabIndex = 8;
			this->costMaxBox->TextChanged += gcnew System::EventHandler(this, &Main::CostMaxBox_TextChanged);
			// 
			// bAppend
			// 
			this->bAppend->Location = System::Drawing::Point(79, 163);
			this->bAppend->Name = L"bAppend";
			this->bAppend->Size = System::Drawing::Size(75, 23);
			this->bAppend->TabIndex = 21;
			this->bAppend->Text = L"Применить";
			this->bAppend->UseVisualStyleBackColor = true;
			this->bAppend->Click += gcnew System::EventHandler(this, &Main::BAppend_Click);
			// 
			// listHotels
			// 
			this->listHotels->BackColor = System::Drawing::Color::Gainsboro;
			this->listHotels->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(4) {
				this->colHeader_stars,
					this->colHeader_type, this->colHeader_name, this->colHeader_cost
			});
			this->listHotels->FullRowSelect = true;
			this->listHotels->Items->AddRange(gcnew cli::array< System::Windows::Forms::ListViewItem^  >(2) { listViewItem1, listViewItem2 });
			this->listHotels->Location = System::Drawing::Point(160, 53);
			this->listHotels->MultiSelect = false;
			this->listHotels->Name = L"listHotels";
			this->listHotels->Size = System::Drawing::Size(632, 315);
			this->listHotels->TabIndex = 22;
			this->listHotels->UseCompatibleStateImageBehavior = false;
			this->listHotels->View = System::Windows::Forms::View::Details;
			// 
			// colHeader_stars
			// 
			this->colHeader_stars->Text = L"Рейтинг";
			// 
			// colHeader_type
			// 
			this->colHeader_type->Text = L"Тип номера";
			this->colHeader_type->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->colHeader_type->Width = 107;
			// 
			// colHeader_name
			// 
			this->colHeader_name->Text = L"Название отеля";
			this->colHeader_name->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->colHeader_name->Width = 342;
			// 
			// colHeader_cost
			// 
			this->colHeader_cost->Text = L"Цена за сутки";
			this->colHeader_cost->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->colHeader_cost->Width = 119;
			// 
			// bFind
			// 
			this->bFind->Location = System::Drawing::Point(717, 29);
			this->bFind->Name = L"bFind";
			this->bFind->Size = System::Drawing::Size(75, 20);
			this->bFind->TabIndex = 23;
			this->bFind->Text = L"Поиск";
			this->bFind->UseVisualStyleBackColor = true;
			// 
			// Main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightGoldenrodYellow;
			this->ClientSize = System::Drawing::Size(919, 492);
			this->Controls->Add(this->bFind);
			this->Controls->Add(this->listHotels);
			this->Controls->Add(this->bAppend);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->costMaxBox);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->costMinBox);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->typeBox);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->starsBox);
			this->Controls->Add(this->zaprText);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"Main";
			this->Text = L"Hotel Booking";
			this->Load += gcnew System::EventHandler(this, &Main::Main_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void addHotel(std::string stars, std::string type, std::string name, std::string cost) {
			vHotels.emplace_back(hotel_S{ stars,type,name,cost });
	}

	private: System::Void addItem() {
		
	}
	private: System::Void Main_Load(System::Object^ sender, System::EventArgs^ e) {
		addHotel("4", "для двоих", "Yamaika hotel star", "4280");
		
	}

		
	private: System::Void StarsBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		switch (starsBox->SelectedIndex)
		{
		case 0: Stars = 1; break;
		case 1: Stars = 2; break;
		case 2: Stars = 3; break;
		case 3: Stars = 4; break;
		case 4: Stars = 5; break;
		}
	}
private: System::Void TypeBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	switch (typeBox->SelectedIndex)
	{
	case 0: TypeHome = 1; break;
	case 1: TypeHome = 2; break;
	case 2: TypeHome = 3; break;
	case 3: TypeHome = 4; break;
	}
}
private: System::Void CostMinBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	costMin = Convert::ToInt16(costMinBox->Text);
}
private: System::Void CostMaxBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	costMax = Convert::ToInt16(costMaxBox->Text);
}


private: System::Void ZaprText_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void BAppend_Click(System::Object^ sender, System::EventArgs^ e) {
	/* zaprText->AppendText(Convert::ToString(Stars));
	zaprText->AppendText(Convert::ToString(TypeHome));
	zaprText->AppendText(Convert::ToString(costMin));
	zaprText->AppendText(Convert::ToString(costMax)); */

}
};
}