#include <string>
#include <vector>
#include <sstream>
#include <windows.h>
#include "Enter_f.h"
#pragma once

namespace Kursovaya {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	int Stars = -1;
	string TypeHome = "";
	int costMin = -1;
	int costMax = -1;
	int col_click = 0;


	struct hotel_S
	{
		string stars, type, name; int cost;
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
	private: System::Windows::Forms::Label^ label_stars;
	protected:





	protected:

	private: System::Windows::Forms::ComboBox^ starsBox;
	private: System::Windows::Forms::Label^ label_type;

	private: System::Windows::Forms::ComboBox^ typeBox;
	private: System::Windows::Forms::Label^ label_cost;



	private: System::Windows::Forms::TextBox^ costMinBox;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ costMaxBox;
	private: System::Windows::Forms::Button^ bAppend;
	private: System::Windows::Forms::ListViewItem^ listViewItem;
	private: System::Windows::Forms::ListView^ listHotels;

	private: System::Windows::Forms::ColumnHeader^ colHeader_stars;
	private: System::Windows::Forms::ColumnHeader^ colHeader_type;
	private: System::Windows::Forms::ColumnHeader^ colHeader_name;
	private: System::Windows::Forms::ColumnHeader^ colHeader_cost;

	private: System::Windows::Forms::Button^ auth_btn;
	private: System::Windows::Forms::Button^ bCancel;
	private: System::Windows::Forms::Label^ label_promo;


	private: System::Windows::Forms::Button^ bPromo;
	private: System::Windows::Forms::TextBox^ textBoxPromo;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label6;







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
			this->label_stars = (gcnew System::Windows::Forms::Label());
			this->starsBox = (gcnew System::Windows::Forms::ComboBox());
			this->label_type = (gcnew System::Windows::Forms::Label());
			this->typeBox = (gcnew System::Windows::Forms::ComboBox());
			this->label_cost = (gcnew System::Windows::Forms::Label());
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
			this->auth_btn = (gcnew System::Windows::Forms::Button());
			this->bCancel = (gcnew System::Windows::Forms::Button());
			this->label_promo = (gcnew System::Windows::Forms::Label());
			this->bPromo = (gcnew System::Windows::Forms::Button());
			this->textBoxPromo = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label_stars
			// 
			this->label_stars->AutoSize = true;
			this->label_stars->Location = System::Drawing::Point(9, 9);
			this->label_stars->Name = L"label_stars";
			this->label_stars->Size = System::Drawing::Size(99, 13);
			this->label_stars->TabIndex = 0;
			this->label_stars->Text = L"Количество звезд";
			// 
			// starsBox
			// 
			this->starsBox->FormattingEnabled = true;
			this->starsBox->Items->AddRange(gcnew cli::array< System::Object^  >(6) { L"(Не выбрано)", L"1", L"2", L"3", L"4", L"5" });
			this->starsBox->Location = System::Drawing::Point(12, 25);
			this->starsBox->Name = L"starsBox";
			this->starsBox->Size = System::Drawing::Size(142, 21);
			this->starsBox->TabIndex = 1;
			this->starsBox->Text = L"(Не выбрано)";
			this->starsBox->SelectedIndexChanged += gcnew System::EventHandler(this, &Main::StarsBox_SelectedIndexChanged);
			// 
			// label_type
			// 
			this->label_type->AutoSize = true;
			this->label_type->Location = System::Drawing::Point(9, 53);
			this->label_type->Name = L"label_type";
			this->label_type->Size = System::Drawing::Size(67, 13);
			this->label_type->TabIndex = 2;
			this->label_type->Text = L"Тип номера";
			// 
			// typeBox
			// 
			this->typeBox->FormattingEnabled = true;
			this->typeBox->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"(Не выбрано)", L"Одноместный", L"Двухместный",
					L"Трехместный", L"Семейный"
			});
			this->typeBox->Location = System::Drawing::Point(12, 69);
			this->typeBox->Name = L"typeBox";
			this->typeBox->Size = System::Drawing::Size(142, 21);
			this->typeBox->TabIndex = 3;
			this->typeBox->Text = L"(Не выбрано)";
			this->typeBox->SelectedIndexChanged += gcnew System::EventHandler(this, &Main::TypeBox_SelectedIndexChanged);
			// 
			// label_cost
			// 
			this->label_cost->AutoSize = true;
			this->label_cost->Location = System::Drawing::Point(12, 93);
			this->label_cost->Name = L"label_cost";
			this->label_cost->Size = System::Drawing::Size(36, 13);
			this->label_cost->TabIndex = 4;
			this->label_cost->Text = L"Цена:";
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
			this->bAppend->Location = System::Drawing::Point(15, 163);
			this->bAppend->Name = L"bAppend";
			this->bAppend->Size = System::Drawing::Size(77, 23);
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
			this->listHotels->Location = System::Drawing::Point(160, 12);
			this->listHotels->MultiSelect = false;
			this->listHotels->Name = L"listHotels";
			this->listHotels->Size = System::Drawing::Size(632, 355);
			this->listHotels->TabIndex = 22;
			this->listHotels->UseCompatibleStateImageBehavior = false;
			this->listHotels->View = System::Windows::Forms::View::Details;
			this->listHotels->ColumnClick += gcnew System::Windows::Forms::ColumnClickEventHandler(this, &Main::ListHotels_ColumnClick);
			// 
			// colHeader_stars
			// 
			this->colHeader_stars->Text = L"Звёзд";
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
			// auth_btn
			// 
			this->auth_btn->Location = System::Drawing::Point(870, 344);
			this->auth_btn->Name = L"auth_btn";
			this->auth_btn->Size = System::Drawing::Size(75, 23);
			this->auth_btn->TabIndex = 24;
			this->auth_btn->Text = L"Вход";
			this->auth_btn->UseVisualStyleBackColor = true;
			this->auth_btn->Click += gcnew System::EventHandler(this, &Main::Auth_btn_Click);
			// 
			// bCancel
			// 
			this->bCancel->Location = System::Drawing::Point(95, 163);
			this->bCancel->Name = L"bCancel";
			this->bCancel->Size = System::Drawing::Size(59, 23);
			this->bCancel->TabIndex = 25;
			this->bCancel->Text = L"Отмена";
			this->bCancel->UseVisualStyleBackColor = true;
			this->bCancel->Click += gcnew System::EventHandler(this, &Main::BCancel_Click);
			// 
			// label_promo
			// 
			this->label_promo->AutoSize = true;
			this->label_promo->Location = System::Drawing::Point(825, 90);
			this->label_promo->Name = L"label_promo";
			this->label_promo->Size = System::Drawing::Size(102, 13);
			this->label_promo->TabIndex = 26;
			this->label_promo->Text = L"Введите промокод";
			// 
			// bPromo
			// 
			this->bPromo->Location = System::Drawing::Point(834, 132);
			this->bPromo->Name = L"bPromo";
			this->bPromo->Size = System::Drawing::Size(86, 23);
			this->bPromo->TabIndex = 27;
			this->bPromo->Text = L"Активировать";
			this->bPromo->UseVisualStyleBackColor = true;
			this->bPromo->Click += gcnew System::EventHandler(this, &Main::BPromo_Click);
			// 
			// textBoxPromo
			// 
			this->textBoxPromo->Location = System::Drawing::Point(827, 106);
			this->textBoxPromo->Name = L"textBoxPromo";
			this->textBoxPromo->Size = System::Drawing::Size(100, 20);
			this->textBoxPromo->TabIndex = 28;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(820, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(70, 13);
			this->label1->TabIndex = 29;
			this->label1->Text = L"Промокоды:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(820, 33);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(59, 13);
			this->label2->TabIndex = 30;
			this->label2->Text = L"discount15";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(820, 53);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(59, 13);
			this->label3->TabIndex = 31;
			this->label3->Text = L"discount10";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(820, 69);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(59, 13);
			this->label6->TabIndex = 32;
			this->label6->Text = L"discount50";
			// 
			// Main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightGoldenrodYellow;
			this->ClientSize = System::Drawing::Size(957, 379);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBoxPromo);
			this->Controls->Add(this->bPromo);
			this->Controls->Add(this->label_promo);
			this->Controls->Add(this->bCancel);
			this->Controls->Add(this->auth_btn);
			this->Controls->Add(this->listHotels);
			this->Controls->Add(this->bAppend);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->costMaxBox);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->costMinBox);
			this->Controls->Add(this->label_cost);
			this->Controls->Add(this->typeBox);
			this->Controls->Add(this->label_type);
			this->Controls->Add(this->starsBox);
			this->Controls->Add(this->label_stars);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"Main";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Hotel Booking";
			this->Load += gcnew System::EventHandler(this, &Main::Main_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		String^ user_login;
		String^ user_pass;

	ref class ListViewItemComparer : public IComparer
	{
		private:
			int col;

		public:
			ListViewItemComparer()
			{
				col = 0;
			}

			ListViewItemComparer(int column)
			{
				col = column;
			}

			virtual int Compare(Object^ x, Object^ y)
			{
				return String::Compare((dynamic_cast<ListViewItem^>(x))->SubItems[col]->Text,
					(dynamic_cast<ListViewItem^>(y))->SubItems[col]->Text);
			}
	};

	ref class ListViewItemComparerBack : public IComparer
	{
	private:
		int col;

	public:
		ListViewItemComparerBack()
		{
			col = 0;
		}

		ListViewItemComparerBack(int column)
		{
			col = column;
		}

		virtual int Compare(Object^ y, Object^ x)
		{
			return String::Compare((dynamic_cast<ListViewItem^>(x))->SubItems[col]->Text,
				(dynamic_cast<ListViewItem^>(y))->SubItems[col]->Text);
		}
	};

	string removeSpaces(string input)
	{
		int length = input.length();
		for (int i = 0; i < length; i++) {
			if (input[i] == ' ')
			{
				input.erase(i, 1);
				length--;
				i--;
			}
		}
		return input;
	}

	private: System::Void ClearView() {
		listHotels->Items->Clear();

		starsBox->Text = L"(Не выбрано)";
		typeBox->Text = L"(Не выбрано)";

		for (int i = 0; i < vHotels.size(); i++) {
			string pN = vHotels.at(i).name;
			String^ sS_name = gcnew String(pN.c_str());
			string pS = vHotels.at(i).stars;
			String^ sS_stars = gcnew String(pS.c_str());
			string pT = vHotels.at(i).type;
			String^ sS_type = gcnew String(pT.c_str());
			int pC = vHotels.at(i).cost;
			String^ sS_cost = gcnew String(Convert::ToString(pC));

			listViewItem = gcnew Windows::Forms::ListViewItem(sS_stars);
			listViewItem->SubItems->Add(sS_type);
			listViewItem->SubItems->Add(sS_name);
			listViewItem->SubItems->Add(sS_cost);
			this->listHotels->Items->Add(this->listViewItem);
		}
	}

	private: System::Void Discount(int percent) {
		for (int i = 0; i < vHotels.size(); i++) {
			vHotels.at(i).cost = vHotels.at(i).cost - vHotels.at(i).cost * (percent / 100.00);
		}
		ClearView();
	}

	private: System::Void addHotel(std::string stars, std::string type, std::string name, int cost) {
			vHotels.emplace_back(hotel_S{ stars,type,name,cost });
	}
	private: System::Void Main_Load(System::Object^ sender, System::EventArgs^ e) {
		addHotel("2", "для двоих", "Hotel Pennsylvania", 11045);
		addHotel("4", "для одного", "Hotel on Rivington", 14532);
		addHotel("1", "для двоих", "U.S. Pacific Hotel", 8415);
		addHotel("5", "для троих", "Yamaika hotel", 8294);
		addHotel("4", "для двоих", "Pod Times Square", 12207);
		addHotel("1", "для одного", "World Hotel", 4069);
		addHotel("4", "для троих", "Aliz Hotel Times Square", 21637);
		addHotel("5", "для двоих", "Lord & Moris - Times Square Hotel", 18666);
		addHotel("1", "для одного", "Central Park West Hostel", 3875);	
		addHotel("3", "Семейный", "Riverside Tower Hotel", 11626);
		addHotel("2", "Семейный", "St Marks Hotel", 9934);

		for (int i = 0; i < vHotels.size(); i++) {
			string pN = vHotels.at(i).name;
			String^ sS_name = gcnew String(pN.c_str());
			string pS = vHotels.at(i).stars;
			String^ sS_stars = gcnew String(pS.c_str());
			string pT = vHotels.at(i).type;
			String^ sS_type = gcnew String(pT.c_str());
			int pC = vHotels.at(i).cost;
			String^ sS_cost = gcnew String(Convert::ToString(pC));

			listViewItem = gcnew Windows::Forms::ListViewItem(sS_stars);
			listViewItem->SubItems->Add(sS_type);
			listViewItem->SubItems->Add(sS_name);
			listViewItem->SubItems->Add(sS_cost);
			this->listHotels->Items->Add(this->listViewItem);
		}
	}	
	private: System::Void StarsBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		switch (starsBox->SelectedIndex)
		{
		case 0: Stars = -1; break;
		case 1: Stars = 1; break;
		case 2: Stars = 2; break;
		case 3: Stars = 3; break;
		case 4: Stars = 4; break;
		case 5: Stars = 5; break;
		}
	}
private: System::Void TypeBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	switch (typeBox->SelectedIndex)
	{
	case 0: TypeHome = ""; break;
	case 1: TypeHome = "для одного"; break;
	case 2: TypeHome = "для двоих"; break;
	case 3: TypeHome = "для троих"; break;
	case 4: TypeHome = "Семейный"; break;
	}
}
private: System::Void CostMinBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	costMin = Convert::ToInt64(costMinBox->Text);
}
private: System::Void CostMaxBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	costMax = Convert::ToInt64(costMaxBox->Text);
}
private: System::Void BAppend_Click(System::Object^ sender, System::EventArgs^ e) {	

	vector<hotel_S> sortedHotels;

	for (int i = 0; i < vHotels.size(); i++) {
		string stars = vHotels.at(i).stars;
		int f_stars;
		istringstream iss(stars);
		iss >> f_stars;

		string f_type = vHotels.at(i).type;
		int f_cost = vHotels.at(i).cost;

		if (Stars != -1 && TypeHome != "" && costMax != -1 && costMin != -1){
			if (Stars == f_stars && TypeHome == f_type && costMax >= f_cost && f_cost >= costMin) {
				listHotels->Items->Clear();
				sortedHotels.emplace_back(vHotels.at(i));
			}
		}else if (Stars != -1 && TypeHome != "" && costMin != -1){
			if (Stars == f_stars && TypeHome == f_type && f_cost >= costMin) {
				listHotels->Items->Clear();
				sortedHotels.emplace_back(vHotels.at(i));
			}
		}else if (Stars != -1 && TypeHome != "" && costMax != -1) {
			if (Stars == f_stars && TypeHome == f_type && f_cost <= costMax) {
				listHotels->Items->Clear();
				sortedHotels.emplace_back(vHotels.at(i));
			}
		}else if (Stars != -1 && TypeHome != ""){
			if (Stars == f_stars && TypeHome == f_type) {
				listHotels->Items->Clear();
				sortedHotels.emplace_back(vHotels.at(i));
			}
		}else if (costMax != -1 && costMin != -1) {
			if (costMax >= f_cost && f_cost >= costMin) {
				listHotels->Items->Clear();
				sortedHotels.emplace_back(vHotels.at(i));
			}
		}else if (Stars != -1){
			if (Stars == f_stars) {
				listHotels->Items->Clear();
				sortedHotels.emplace_back(vHotels.at(i));
			}
		}else if (TypeHome != "") {
			if (TypeHome == f_type) {
				listHotels->Items->Clear();
				sortedHotels.emplace_back(vHotels.at(i));
			}
		}else if (costMax != -1) {
			if (f_cost <= costMax) {
				listHotels->Items->Clear();
				sortedHotels.emplace_back(vHotels.at(i));
			}
		}else if (costMin != -1) {
			if (f_cost >= costMin) {
				listHotels->Items->Clear();
				sortedHotels.emplace_back(vHotels.at(i));
			}
		}else{
			MessageBox::Show("Введите правильные параметры");
			break;
		}
	}
	
	for (int i = 0; i < sortedHotels.size(); i++) {
		string pN = sortedHotels.at(i).name;
		String^ sS_name = gcnew String(pN.c_str());
		string pS = sortedHotels.at(i).stars;
		String^ sS_stars = gcnew String(pS.c_str());
		string pT = sortedHotels.at(i).type;
		String^ sS_type = gcnew String(pT.c_str());
		int pC = sortedHotels.at(i).cost;
		String^ sS_cost = gcnew String(Convert::ToString(pC));

		listViewItem = gcnew Windows::Forms::ListViewItem(sS_stars);
		listViewItem->SubItems->Add(sS_type);
		listViewItem->SubItems->Add(sS_name);
		listViewItem->SubItems->Add(sS_cost);
		this->listHotels->Items->Add(this->listViewItem);
	}

}
private: System::Void ListHotels_ColumnClick(System::Object^ sender, System::Windows::Forms::ColumnClickEventArgs^ e) {

	if (e->Empty && col_click == 0)
	{
		listHotels->ListViewItemSorter = gcnew ListViewItemComparer(e->Column);
		col_click = 1;
	}
	else if(e->Empty && col_click == 1)
	{
		listHotels->ListViewItemSorter = gcnew ListViewItemComparerBack(e->Column);
		col_click = 0;
	}
}
private: System::Void Auth_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	Enter_f^ enterForm = gcnew Enter_f();
	enterForm->ShowDialog();

	user_login = enterForm->loginBox->Text;
	user_pass = enterForm->passBox->Text;
	this->Text = L"Hotel Booking -"+" "+user_login;
}
private: System::Void BCancel_Click(System::Object^ sender, System::EventArgs^ e) {
	ClearView();
}
private: System::Void BPromo_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBoxPromo->Text != "") {
		if (textBoxPromo->Text == "discount15") {
			Discount(15);
			label_promo->Text = "Промокод Активирован!";
			textBoxPromo->Visible = false;
			bPromo->Visible = false;
		}else if (textBoxPromo->Text == "discount50") {
			Discount(50);
			label_promo->Text = "Промокод Активирован!";
			textBoxPromo->Visible = false;
			bPromo->Visible = false;
		}else if (textBoxPromo->Text == "discount10") {
			Discount(10);
			label_promo->Text = "Промокод Активирован!";
			textBoxPromo->Visible = false;
			bPromo->Visible = false;
		}
	}else {
		MessageBox::Show("Введите промокод");
	}
}
};
}