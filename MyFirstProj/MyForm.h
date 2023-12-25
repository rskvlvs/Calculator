#pragma once
#include <string.h> 
#include <iostream>
#include <msclr\marshal_cppstd.h>
namespace MyFirstProj {

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
	private: System::Windows::Forms::Button^ ex_bt;
	private: System::Windows::Forms::Label^ result;
	private: System::Windows::Forms::Button^ bt_clear;
	private: System::Windows::Forms::Button^ bt_change_val;



	private: System::Windows::Forms::Button^ bt_mod;

	private: System::Windows::Forms::Button^ bt_dev;

	private: System::Windows::Forms::Button^ bt_zero;
	private: System::Windows::Forms::Button^ bt_one;
	private: System::Windows::Forms::Button^ bt_two;
	private: System::Windows::Forms::Button^ bt_mult;





	private: System::Windows::Forms::Button^ bt_three;
	private: System::Windows::Forms::Button^ bt_four;
	private: System::Windows::Forms::Button^ bt_five;
	private: System::Windows::Forms::Button^ bt_minus;




	private: System::Windows::Forms::Button^ bt_six;
	private: System::Windows::Forms::Button^ bt_seven;
	private: System::Windows::Forms::Button^ bt_eight;
	private: System::Windows::Forms::Button^ bt_plus;





	private: System::Windows::Forms::Button^ bt_nine;
	private: System::Windows::Forms::Button^ bt_point;


	private: System::Windows::Forms::Button^ bt_equal;

	private: float first_num; 
	private: char us_action = ' ';
	private: float res = 0; 
	private: bool equal = false;

	protected:

	protected:

	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->ex_bt = (gcnew System::Windows::Forms::Button());
			this->result = (gcnew System::Windows::Forms::Label());
			this->bt_clear = (gcnew System::Windows::Forms::Button());
			this->bt_change_val = (gcnew System::Windows::Forms::Button());
			this->bt_mod = (gcnew System::Windows::Forms::Button());
			this->bt_dev = (gcnew System::Windows::Forms::Button());
			this->bt_zero = (gcnew System::Windows::Forms::Button());
			this->bt_one = (gcnew System::Windows::Forms::Button());
			this->bt_two = (gcnew System::Windows::Forms::Button());
			this->bt_mult = (gcnew System::Windows::Forms::Button());
			this->bt_three = (gcnew System::Windows::Forms::Button());
			this->bt_four = (gcnew System::Windows::Forms::Button());
			this->bt_five = (gcnew System::Windows::Forms::Button());
			this->bt_minus = (gcnew System::Windows::Forms::Button());
			this->bt_six = (gcnew System::Windows::Forms::Button());
			this->bt_seven = (gcnew System::Windows::Forms::Button());
			this->bt_eight = (gcnew System::Windows::Forms::Button());
			this->bt_plus = (gcnew System::Windows::Forms::Button());
			this->bt_nine = (gcnew System::Windows::Forms::Button());
			this->bt_point = (gcnew System::Windows::Forms::Button());
			this->bt_equal = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// ex_bt
			// 
			this->ex_bt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(214)), static_cast<System::Int32>(static_cast<System::Byte>(2)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)));
			this->ex_bt->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ex_bt->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ex_bt->Location = System::Drawing::Point(12, 12);
			this->ex_bt->Name = L"ex_bt";
			this->ex_bt->Size = System::Drawing::Size(45, 30);
			this->ex_bt->TabIndex = 0;
			this->ex_bt->Text = L"X";
			this->ex_bt->UseVisualStyleBackColor = false;
			this->ex_bt->Click += gcnew System::EventHandler(this, &MyForm::ex_bt_Click);
			// 
			// result
			// 
			this->result->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->result->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->result->Location = System::Drawing::Point(12, 3);
			this->result->Name = L"result";
			this->result->Size = System::Drawing::Size(325, 61);
			this->result->TabIndex = 1;
			this->result->Text = L"0";
			this->result->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// bt_clear
			// 
			this->bt_clear->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(144)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->bt_clear->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bt_clear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bt_clear->Location = System::Drawing::Point(12, 68);
			this->bt_clear->Name = L"bt_clear";
			this->bt_clear->Size = System::Drawing::Size(60, 60);
			this->bt_clear->TabIndex = 2;
			this->bt_clear->Text = L"C";
			this->bt_clear->UseVisualStyleBackColor = false;
			this->bt_clear->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// bt_change_val
			// 
			this->bt_change_val->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(144)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->bt_change_val->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bt_change_val->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bt_change_val->Location = System::Drawing::Point(92, 68);
			this->bt_change_val->Name = L"bt_change_val";
			this->bt_change_val->Size = System::Drawing::Size(60, 60);
			this->bt_change_val->TabIndex = 3;
			this->bt_change_val->Text = L"+/-";
			this->bt_change_val->UseVisualStyleBackColor = false;
			this->bt_change_val->Click += gcnew System::EventHandler(this, &MyForm::bt_change_val_Click);
			// 
			// bt_mod
			// 
			this->bt_mod->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(144)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->bt_mod->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bt_mod->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bt_mod->Location = System::Drawing::Point(177, 67);
			this->bt_mod->Name = L"bt_mod";
			this->bt_mod->Size = System::Drawing::Size(60, 60);
			this->bt_mod->TabIndex = 4;
			this->bt_mod->Text = L"%";
			this->bt_mod->UseVisualStyleBackColor = false;
			this->bt_mod->Click += gcnew System::EventHandler(this, &MyForm::bt_mod_Click);
			// 
			// bt_dev
			// 
			this->bt_dev->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(144)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->bt_dev->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bt_dev->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bt_dev->Location = System::Drawing::Point(255, 67);
			this->bt_dev->Name = L"bt_dev";
			this->bt_dev->Size = System::Drawing::Size(60, 60);
			this->bt_dev->TabIndex = 5;
			this->bt_dev->Text = L"/";
			this->bt_dev->UseVisualStyleBackColor = false;
			this->bt_dev->Click += gcnew System::EventHandler(this, &MyForm::bt_dev_Click);
			// 
			// bt_zero
			// 
			this->bt_zero->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(75)), static_cast<System::Int32>(static_cast<System::Byte>(75)),
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->bt_zero->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bt_zero->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bt_zero->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->bt_zero->Location = System::Drawing::Point(12, 385);
			this->bt_zero->Name = L"bt_zero";
			this->bt_zero->Size = System::Drawing::Size(140, 60);
			this->bt_zero->TabIndex = 6;
			this->bt_zero->Text = L"0";
			this->bt_zero->UseVisualStyleBackColor = false;
			this->bt_zero->Click += gcnew System::EventHandler(this, &MyForm::num_click);
			// 
			// bt_one
			// 
			this->bt_one->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(75)), static_cast<System::Int32>(static_cast<System::Byte>(75)),
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->bt_one->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bt_one->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bt_one->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->bt_one->Location = System::Drawing::Point(12, 306);
			this->bt_one->Name = L"bt_one";
			this->bt_one->Size = System::Drawing::Size(60, 60);
			this->bt_one->TabIndex = 7;
			this->bt_one->Text = L"1";
			this->bt_one->UseVisualStyleBackColor = false;
			this->bt_one->Click += gcnew System::EventHandler(this, &MyForm::num_click);
			// 
			// bt_two
			// 
			this->bt_two->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(75)), static_cast<System::Int32>(static_cast<System::Byte>(75)),
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->bt_two->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bt_two->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bt_two->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->bt_two->Location = System::Drawing::Point(92, 306);
			this->bt_two->Name = L"bt_two";
			this->bt_two->Size = System::Drawing::Size(60, 60);
			this->bt_two->TabIndex = 8;
			this->bt_two->Text = L"2";
			this->bt_two->UseVisualStyleBackColor = false;
			this->bt_two->Click += gcnew System::EventHandler(this, &MyForm::num_click);
			// 
			// bt_mult
			// 
			this->bt_mult->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(144)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->bt_mult->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bt_mult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bt_mult->Location = System::Drawing::Point(255, 150);
			this->bt_mult->Name = L"bt_mult";
			this->bt_mult->Size = System::Drawing::Size(60, 60);
			this->bt_mult->TabIndex = 9;
			this->bt_mult->Text = L"*";
			this->bt_mult->UseVisualStyleBackColor = false;
			this->bt_mult->Click += gcnew System::EventHandler(this, &MyForm::bt_mult_Click);
			// 
			// bt_three
			// 
			this->bt_three->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(75)), static_cast<System::Int32>(static_cast<System::Byte>(75)),
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->bt_three->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bt_three->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bt_three->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->bt_three->Location = System::Drawing::Point(177, 306);
			this->bt_three->Name = L"bt_three";
			this->bt_three->Size = System::Drawing::Size(60, 60);
			this->bt_three->TabIndex = 10;
			this->bt_three->Text = L"3";
			this->bt_three->UseVisualStyleBackColor = false;
			this->bt_three->Click += gcnew System::EventHandler(this, &MyForm::num_click);
			// 
			// bt_four
			// 
			this->bt_four->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(75)), static_cast<System::Int32>(static_cast<System::Byte>(75)),
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->bt_four->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bt_four->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bt_four->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->bt_four->Location = System::Drawing::Point(12, 230);
			this->bt_four->Name = L"bt_four";
			this->bt_four->Size = System::Drawing::Size(60, 60);
			this->bt_four->TabIndex = 11;
			this->bt_four->Text = L"4";
			this->bt_four->UseVisualStyleBackColor = false;
			this->bt_four->Click += gcnew System::EventHandler(this, &MyForm::num_click);
			// 
			// bt_five
			// 
			this->bt_five->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(75)), static_cast<System::Int32>(static_cast<System::Byte>(75)),
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->bt_five->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bt_five->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bt_five->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->bt_five->Location = System::Drawing::Point(92, 230);
			this->bt_five->Name = L"bt_five";
			this->bt_five->Size = System::Drawing::Size(60, 60);
			this->bt_five->TabIndex = 12;
			this->bt_five->Text = L"5";
			this->bt_five->UseVisualStyleBackColor = false;
			this->bt_five->Click += gcnew System::EventHandler(this, &MyForm::num_click);
			// 
			// bt_minus
			// 
			this->bt_minus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(144)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->bt_minus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bt_minus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bt_minus->Location = System::Drawing::Point(255, 230);
			this->bt_minus->Name = L"bt_minus";
			this->bt_minus->Size = System::Drawing::Size(60, 60);
			this->bt_minus->TabIndex = 13;
			this->bt_minus->Text = L"-";
			this->bt_minus->UseVisualStyleBackColor = false;
			this->bt_minus->Click += gcnew System::EventHandler(this, &MyForm::bt_minus_Click);
			// 
			// bt_six
			// 
			this->bt_six->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(75)), static_cast<System::Int32>(static_cast<System::Byte>(75)),
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->bt_six->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bt_six->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bt_six->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->bt_six->Location = System::Drawing::Point(177, 230);
			this->bt_six->Name = L"bt_six";
			this->bt_six->Size = System::Drawing::Size(60, 60);
			this->bt_six->TabIndex = 14;
			this->bt_six->Text = L"6";
			this->bt_six->UseVisualStyleBackColor = false;
			this->bt_six->Click += gcnew System::EventHandler(this, &MyForm::num_click);
			// 
			// bt_seven
			// 
			this->bt_seven->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(75)), static_cast<System::Int32>(static_cast<System::Byte>(75)),
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->bt_seven->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bt_seven->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bt_seven->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->bt_seven->Location = System::Drawing::Point(12, 150);
			this->bt_seven->Name = L"bt_seven";
			this->bt_seven->Size = System::Drawing::Size(60, 60);
			this->bt_seven->TabIndex = 15;
			this->bt_seven->Text = L"7";
			this->bt_seven->UseVisualStyleBackColor = false;
			this->bt_seven->Click += gcnew System::EventHandler(this, &MyForm::num_click);
			// 
			// bt_eight
			// 
			this->bt_eight->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(75)), static_cast<System::Int32>(static_cast<System::Byte>(75)),
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->bt_eight->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bt_eight->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bt_eight->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->bt_eight->Location = System::Drawing::Point(92, 150);
			this->bt_eight->Name = L"bt_eight";
			this->bt_eight->Size = System::Drawing::Size(60, 60);
			this->bt_eight->TabIndex = 16;
			this->bt_eight->Text = L"8";
			this->bt_eight->UseVisualStyleBackColor = false;
			this->bt_eight->Click += gcnew System::EventHandler(this, &MyForm::num_click);
			// 
			// bt_plus
			// 
			this->bt_plus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(144)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->bt_plus->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bt_plus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bt_plus->Location = System::Drawing::Point(255, 306);
			this->bt_plus->Name = L"bt_plus";
			this->bt_plus->Size = System::Drawing::Size(60, 60);
			this->bt_plus->TabIndex = 17;
			this->bt_plus->Text = L"+";
			this->bt_plus->UseVisualStyleBackColor = false;
			this->bt_plus->Click += gcnew System::EventHandler(this, &MyForm::bt_plus_Click);
			// 
			// bt_nine
			// 
			this->bt_nine->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(75)), static_cast<System::Int32>(static_cast<System::Byte>(75)),
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->bt_nine->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bt_nine->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bt_nine->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->bt_nine->Location = System::Drawing::Point(177, 150);
			this->bt_nine->Name = L"bt_nine";
			this->bt_nine->Size = System::Drawing::Size(60, 60);
			this->bt_nine->TabIndex = 18;
			this->bt_nine->Text = L"9";
			this->bt_nine->UseVisualStyleBackColor = false;
			this->bt_nine->Click += gcnew System::EventHandler(this, &MyForm::num_click);
			// 
			// bt_point
			// 
			this->bt_point->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(75)), static_cast<System::Int32>(static_cast<System::Byte>(75)),
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->bt_point->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bt_point->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bt_point->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->bt_point->Location = System::Drawing::Point(177, 385);
			this->bt_point->Name = L"bt_point";
			this->bt_point->Size = System::Drawing::Size(60, 60);
			this->bt_point->TabIndex = 19;
			this->bt_point->Text = L",";
			this->bt_point->UseVisualStyleBackColor = false;
			this->bt_point->Click += gcnew System::EventHandler(this, &MyForm::bt_point_Click);
			// 
			// bt_equal
			// 
			this->bt_equal->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)), static_cast<System::Int32>(static_cast<System::Byte>(144)),
				static_cast<System::Int32>(static_cast<System::Byte>(77)));
			this->bt_equal->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->bt_equal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bt_equal->Location = System::Drawing::Point(255, 385);
			this->bt_equal->Name = L"bt_equal";
			this->bt_equal->Size = System::Drawing::Size(60, 60);
			this->bt_equal->TabIndex = 20;
			this->bt_equal->Text = L"=";
			this->bt_equal->UseVisualStyleBackColor = false;
			this->bt_equal->Click += gcnew System::EventHandler(this, &MyForm::bt_equal_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(52)),
				static_cast<System::Int32>(static_cast<System::Byte>(49)));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(349, 457);
			this->Controls->Add(this->bt_equal);
			this->Controls->Add(this->bt_point);
			this->Controls->Add(this->bt_nine);
			this->Controls->Add(this->bt_plus);
			this->Controls->Add(this->bt_eight);
			this->Controls->Add(this->bt_seven);
			this->Controls->Add(this->bt_six);
			this->Controls->Add(this->bt_minus);
			this->Controls->Add(this->bt_five);
			this->Controls->Add(this->bt_four);
			this->Controls->Add(this->bt_three);
			this->Controls->Add(this->bt_mult);
			this->Controls->Add(this->bt_two);
			this->Controls->Add(this->bt_one);
			this->Controls->Add(this->bt_zero);
			this->Controls->Add(this->bt_dev);
			this->Controls->Add(this->bt_mod);
			this->Controls->Add(this->bt_change_val);
			this->Controls->Add(this->bt_clear);
			this->Controls->Add(this->ex_bt);
			this->Controls->Add(this->result);
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"App";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void ex_bt_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close(); 
	}
	private: System::Void num_click(System::Object^ sender, System::EventArgs^ e) {
		this->result->ForeColor = Color::White;
		std::string s = msclr::interop::marshal_as < std::string>(this->result->Text); 
		Button^ button = safe_cast<Button^>(sender);
		if (std::size(s) >= 9) {
			this->result->ForeColor = Color::Red;
			MessageBox::Show(this, "—лишком большое значение", "FUCK", MessageBoxButtons::OK, MessageBoxIcon::Error);
			this->result->Text = "0"; 
		}
		if (this->result->Text == "0" || equal) {
			this->result->Text = button->Text;
			equal = false; 
		}
		else
			this->result->Text += button->Text;
	}
	private: System::Void bt_plus_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('+');
	}
	private: System::Void bt_minus_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('-');
	}
	private: System::Void bt_mult_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('*');
	}
	private: System::Void bt_dev_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('/');
	}
	private: System::Void bt_mod_Click(System::Object^ sender, System::EventArgs^ e) {
		math_action('%');
	}
	private: System::Void math_action(char operation) {
		if (res != 0)this->first_num = this->res;
		else this->first_num = System::Convert::ToDouble(this->result->Text); 
		this->us_action = operation;
		this->result->Text = "0";
	}
	private: System::Void bt_equal_Click(System::Object^ sender, System::EventArgs^ e) {
		int second = System::Convert::ToInt32(this->result->Text); 
		if (us_action == ' ')
			return;
		switch (us_action) {
		case '+':
			this->res = this->first_num + second; 
			break; 
		case '-':
			this->res = this->first_num - second;
			break;
		case '*':
			this->res = this->first_num * second;
			break; 
		case '/':
			if (second == 0) {
				res = 0;
				this->result->ForeColor = Color::Red; 
				MessageBox::Show(this, "ƒеление на 0 невозможно", "FUCK", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else
				this->res = this->first_num / second;
			break; 
		case '%':
			this->res = first_num * second / 100;
			break; 
		}
		this->result->Text = System::Convert::ToString(this->res);
		this->equal = true; 
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->result->ForeColor = Color::White;
	equal = false; 
	us_action = ' ';
	this->result->Text = "0"; 
	res = 0;
	first_num = 0;
}
private: System::Void bt_change_val_Click(System::Object^ sender, System::EventArgs^ e) {
	this->result->Text = System::Convert::ToString(System::Convert::ToDouble(this->result->Text) * (-1));
}
private: System::Void bt_point_Click(System::Object^ sender, System::EventArgs^ e) {
	if(!this->result->Text->Contains(","))
		this->result->Text += ",";
	else
		MessageBox::Show(this, "Ќельз€ добавить более одной ','", "FUCK", MessageBoxButtons::OK, MessageBoxIcon::Error);
}
};
}
хциуопа шо”÷ќЋ ѕ“џ÷»јќ÷“”Ћћѕќ“