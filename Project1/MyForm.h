#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<string>
#include<math.h>
#include<windows.h>
#include<sqltypes.h>
#include <stdbool.h>

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::Sql;
	using namespace System::Data::SqlClient;
	using namespace System::Data::SqlTypes;
	using namespace System::IO;
	using namespace System::Threading;



	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::TextBox^  textBox2;





	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox9;






	private: System::Windows::Forms::TextBox^  textBox23;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::TextBox^  textBox15;
	private: System::Windows::Forms::TextBox^  textBox16;
	private: System::Windows::Forms::TextBox^  textBox17;
	private: System::Windows::Forms::TextBox^  textBox18;
	private: System::Windows::Forms::TextBox^  textBox19;
	private: System::Windows::Forms::TextBox^  textBox20;
	private: System::Windows::Forms::TextBox^  textBox21;
	private: System::Windows::Forms::TextBox^  textBox22;
	private: System::Windows::Forms::TextBox^  textBox24;
	private: System::Windows::Forms::TextBox^  textBox25;













	private: System::Windows::Forms::TextBox^  textBox1;



















	private: System::Windows::Forms::TextBox^  textBox51;
	private: System::Windows::Forms::TextBox^  textBox4;



















	private: System::Windows::Forms::TextBox^  textBox66;




















private: System::Windows::Forms::TextBox^  textBox82;

private: System::Windows::Forms::TextBox^  textBox12;
private: System::Windows::Forms::TextBox^  textBox13;
private: System::Windows::Forms::TextBox^  textBox14;
private: System::Windows::Forms::TextBox^  textBox26;
private: System::Windows::Forms::TextBox^  textBox27;
private: System::Windows::Forms::TextBox^  textBox28;
private: System::Windows::Forms::TextBox^  textBox29;
private: System::Windows::Forms::TextBox^  textBox30;
private: System::Windows::Forms::TextBox^  textBox31;
private: System::Windows::Forms::TextBox^  textBox32;
private: System::Windows::Forms::TextBox^  textBox33;
private: System::Windows::Forms::TextBox^  textBox34;
private: System::Windows::Forms::TextBox^  textBox35;
private: System::Windows::Forms::Label^  label5;
private: System::Windows::Forms::TextBox^  textBox36;
private: System::Windows::Forms::Label^  label6;
private: System::Windows::Forms::Label^  label7;
private: System::Windows::Forms::Label^  label8;
private: System::Windows::Forms::TextBox^  textBox83;
private: System::Windows::Forms::TextBox^  textBox3;
private: System::Windows::Forms::TextBox^  textBox52;
private: System::Windows::Forms::TextBox^  textBox53;
private: System::Windows::Forms::TextBox^  textBox54;
private: System::Windows::Forms::TextBox^  textBox55;
private: System::Windows::Forms::TextBox^  textBox56;
private: System::Windows::Forms::TextBox^  textBox57;
private: System::Windows::Forms::TextBox^  textBox58;
private: System::Windows::Forms::TextBox^  textBox59;
private: System::Windows::Forms::TextBox^  textBox60;
private: System::Windows::Forms::TextBox^  textBox61;
private: System::Windows::Forms::TextBox^  textBox62;
private: System::Windows::Forms::TextBox^  textBox63;
private: System::Windows::Forms::TextBox^  textBox65;
private: System::Windows::Forms::Label^  label13;
private: System::Windows::Forms::TextBox^  textBox84;
private: System::Windows::Forms::Label^  label14;
private: System::Windows::Forms::Label^  label15;
private: System::Windows::Forms::Label^  label16;
private: System::Windows::Forms::TextBox^  textBox85;

private: System::Windows::Forms::TextBox^  textBox37;
private: System::Windows::Forms::TextBox^  textBox38;
private: System::Windows::Forms::TextBox^  textBox39;
private: System::Windows::Forms::TextBox^  textBox40;
private: System::Windows::Forms::TextBox^  textBox41;
private: System::Windows::Forms::TextBox^  textBox42;
private: System::Windows::Forms::TextBox^  textBox43;
private: System::Windows::Forms::TextBox^  textBox44;
private: System::Windows::Forms::TextBox^  textBox45;
private: System::Windows::Forms::TextBox^  textBox46;
private: System::Windows::Forms::TextBox^  textBox47;
private: System::Windows::Forms::TextBox^  textBox48;
private: System::Windows::Forms::TextBox^  textBox50;
private: System::Windows::Forms::Label^  label9;
private: System::Windows::Forms::TextBox^  textBox86;
private: System::Windows::Forms::Label^  label10;
private: System::Windows::Forms::Label^  label11;
private: System::Windows::Forms::Label^  label12;
private: System::Windows::Forms::TextBox^  textBox87;
private: System::Windows::Forms::TextBox^  textBox80;

private: System::Windows::Forms::TextBox^  textBox67;
private: System::Windows::Forms::TextBox^  textBox68;
private: System::Windows::Forms::TextBox^  textBox69;
private: System::Windows::Forms::TextBox^  textBox70;
private: System::Windows::Forms::TextBox^  textBox71;
private: System::Windows::Forms::TextBox^  textBox72;
private: System::Windows::Forms::TextBox^  textBox73;
private: System::Windows::Forms::TextBox^  textBox74;
private: System::Windows::Forms::TextBox^  textBox75;
private: System::Windows::Forms::TextBox^  textBox76;
private: System::Windows::Forms::TextBox^  textBox77;
private: System::Windows::Forms::TextBox^  textBox78;
private: System::Windows::Forms::TextBox^  textBox79;
private: System::Windows::Forms::Label^  label17;
private: System::Windows::Forms::TextBox^  textBox81;
private: System::Windows::Forms::Label^  label18;
private: System::Windows::Forms::Label^  label19;
private: System::Windows::Forms::Label^  label20;
private: System::Windows::Forms::TextBox^  textBox88;
private: System::Windows::Forms::TextBox^  textBox5;
private: System::Windows::Forms::TextBox^  textBox6;
private: System::Windows::Forms::TextBox^  textBox11;
private: System::Windows::Forms::TextBox^  textBox89;
private: System::Windows::Forms::Timer^  timer1;
private: System::Windows::Forms::TextBox^  textBox49;

private: System::ComponentModel::IContainer^  components;


	protected:

	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->textBox24 = (gcnew System::Windows::Forms::TextBox());
			this->textBox25 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox51 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox66 = (gcnew System::Windows::Forms::TextBox());
			this->textBox82 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox26 = (gcnew System::Windows::Forms::TextBox());
			this->textBox27 = (gcnew System::Windows::Forms::TextBox());
			this->textBox28 = (gcnew System::Windows::Forms::TextBox());
			this->textBox29 = (gcnew System::Windows::Forms::TextBox());
			this->textBox30 = (gcnew System::Windows::Forms::TextBox());
			this->textBox31 = (gcnew System::Windows::Forms::TextBox());
			this->textBox32 = (gcnew System::Windows::Forms::TextBox());
			this->textBox33 = (gcnew System::Windows::Forms::TextBox());
			this->textBox34 = (gcnew System::Windows::Forms::TextBox());
			this->textBox35 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox36 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox83 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox52 = (gcnew System::Windows::Forms::TextBox());
			this->textBox53 = (gcnew System::Windows::Forms::TextBox());
			this->textBox54 = (gcnew System::Windows::Forms::TextBox());
			this->textBox55 = (gcnew System::Windows::Forms::TextBox());
			this->textBox56 = (gcnew System::Windows::Forms::TextBox());
			this->textBox57 = (gcnew System::Windows::Forms::TextBox());
			this->textBox58 = (gcnew System::Windows::Forms::TextBox());
			this->textBox59 = (gcnew System::Windows::Forms::TextBox());
			this->textBox60 = (gcnew System::Windows::Forms::TextBox());
			this->textBox61 = (gcnew System::Windows::Forms::TextBox());
			this->textBox62 = (gcnew System::Windows::Forms::TextBox());
			this->textBox63 = (gcnew System::Windows::Forms::TextBox());
			this->textBox65 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox84 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->textBox85 = (gcnew System::Windows::Forms::TextBox());
			this->textBox37 = (gcnew System::Windows::Forms::TextBox());
			this->textBox38 = (gcnew System::Windows::Forms::TextBox());
			this->textBox39 = (gcnew System::Windows::Forms::TextBox());
			this->textBox40 = (gcnew System::Windows::Forms::TextBox());
			this->textBox41 = (gcnew System::Windows::Forms::TextBox());
			this->textBox42 = (gcnew System::Windows::Forms::TextBox());
			this->textBox43 = (gcnew System::Windows::Forms::TextBox());
			this->textBox44 = (gcnew System::Windows::Forms::TextBox());
			this->textBox45 = (gcnew System::Windows::Forms::TextBox());
			this->textBox46 = (gcnew System::Windows::Forms::TextBox());
			this->textBox47 = (gcnew System::Windows::Forms::TextBox());
			this->textBox48 = (gcnew System::Windows::Forms::TextBox());
			this->textBox50 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox86 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox87 = (gcnew System::Windows::Forms::TextBox());
			this->textBox80 = (gcnew System::Windows::Forms::TextBox());
			this->textBox67 = (gcnew System::Windows::Forms::TextBox());
			this->textBox68 = (gcnew System::Windows::Forms::TextBox());
			this->textBox69 = (gcnew System::Windows::Forms::TextBox());
			this->textBox70 = (gcnew System::Windows::Forms::TextBox());
			this->textBox71 = (gcnew System::Windows::Forms::TextBox());
			this->textBox72 = (gcnew System::Windows::Forms::TextBox());
			this->textBox73 = (gcnew System::Windows::Forms::TextBox());
			this->textBox74 = (gcnew System::Windows::Forms::TextBox());
			this->textBox75 = (gcnew System::Windows::Forms::TextBox());
			this->textBox76 = (gcnew System::Windows::Forms::TextBox());
			this->textBox77 = (gcnew System::Windows::Forms::TextBox());
			this->textBox78 = (gcnew System::Windows::Forms::TextBox());
			this->textBox79 = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->textBox81 = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->textBox88 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox89 = (gcnew System::Windows::Forms::TextBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->textBox49 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->textBox2->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox2->Location = System::Drawing::Point(456, 15);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(451, 370);
			this->textBox2->TabIndex = 1;
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->textBox7->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox7->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox7->Location = System::Drawing::Point(82, 308);
			this->textBox7->Multiline = true;
			this->textBox7->Name = L"textBox7";
			this->textBox7->ReadOnly = true;
			this->textBox7->Size = System::Drawing::Size(291, 57);
			this->textBox7->TabIndex = 7;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(94, 325);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(73, 29);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Waste";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Red;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(23, 169);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(73, 26);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Filling";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Red;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(23, 197);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(108, 26);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Efficiency";
			// 
			// textBox8
			// 
			this->textBox8->BackColor = System::Drawing::Color::Red;
			this->textBox8->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox8->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 69.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox8->ForeColor = System::Drawing::Color::White;
			this->textBox8->Location = System::Drawing::Point(156, 144);
			this->textBox8->Margin = System::Windows::Forms::Padding(0);
			this->textBox8->Multiline = true;
			this->textBox8->Name = L"textBox8";
			this->textBox8->ReadOnly = true;
			this->textBox8->Size = System::Drawing::Size(275, 100);
			this->textBox8->TabIndex = 11;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Red;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(91, 28);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(286, 46);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Line 1 - Toyo 1";
			// 
			// textBox9
			// 
			this->textBox9->BackColor = System::Drawing::Color::White;
			this->textBox9->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox9->Location = System::Drawing::Point(26, 75);
			this->textBox9->Multiline = true;
			this->textBox9->Name = L"textBox9";
			this->textBox9->ReadOnly = true;
			this->textBox9->Size = System::Drawing::Size(405, 22);
			this->textBox9->TabIndex = 13;
			// 
			// textBox23
			// 
			this->textBox23->BackColor = System::Drawing::Color::White;
			this->textBox23->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox23->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox23->Location = System::Drawing::Point(33, 80);
			this->textBox23->Name = L"textBox23";
			this->textBox23->ReadOnly = true;
			this->textBox23->Size = System::Drawing::Size(27, 13);
			this->textBox23->TabIndex = 31;
			// 
			// textBox10
			// 
			this->textBox10->BackColor = System::Drawing::Color::White;
			this->textBox10->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox10->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox10->Location = System::Drawing::Point(66, 80);
			this->textBox10->Name = L"textBox10";
			this->textBox10->ReadOnly = true;
			this->textBox10->Size = System::Drawing::Size(27, 13);
			this->textBox10->TabIndex = 32;
			// 
			// textBox15
			// 
			this->textBox15->BackColor = System::Drawing::Color::White;
			this->textBox15->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox15->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox15->Location = System::Drawing::Point(132, 80);
			this->textBox15->Name = L"textBox15";
			this->textBox15->ReadOnly = true;
			this->textBox15->Size = System::Drawing::Size(27, 13);
			this->textBox15->TabIndex = 34;
			// 
			// textBox16
			// 
			this->textBox16->BackColor = System::Drawing::Color::White;
			this->textBox16->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox16->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox16->Location = System::Drawing::Point(99, 80);
			this->textBox16->Name = L"textBox16";
			this->textBox16->ReadOnly = true;
			this->textBox16->Size = System::Drawing::Size(27, 13);
			this->textBox16->TabIndex = 33;
			// 
			// textBox17
			// 
			this->textBox17->BackColor = System::Drawing::Color::White;
			this->textBox17->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox17->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox17->Location = System::Drawing::Point(198, 80);
			this->textBox17->Name = L"textBox17";
			this->textBox17->ReadOnly = true;
			this->textBox17->Size = System::Drawing::Size(27, 13);
			this->textBox17->TabIndex = 36;
			// 
			// textBox18
			// 
			this->textBox18->BackColor = System::Drawing::Color::White;
			this->textBox18->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox18->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox18->Location = System::Drawing::Point(165, 80);
			this->textBox18->Name = L"textBox18";
			this->textBox18->ReadOnly = true;
			this->textBox18->Size = System::Drawing::Size(27, 13);
			this->textBox18->TabIndex = 35;
			// 
			// textBox19
			// 
			this->textBox19->BackColor = System::Drawing::Color::White;
			this->textBox19->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox19->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox19->Location = System::Drawing::Point(264, 80);
			this->textBox19->Name = L"textBox19";
			this->textBox19->ReadOnly = true;
			this->textBox19->Size = System::Drawing::Size(27, 13);
			this->textBox19->TabIndex = 38;
			// 
			// textBox20
			// 
			this->textBox20->BackColor = System::Drawing::Color::White;
			this->textBox20->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox20->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox20->Location = System::Drawing::Point(231, 80);
			this->textBox20->Name = L"textBox20";
			this->textBox20->ReadOnly = true;
			this->textBox20->Size = System::Drawing::Size(27, 13);
			this->textBox20->TabIndex = 37;
			// 
			// textBox21
			// 
			this->textBox21->BackColor = System::Drawing::Color::White;
			this->textBox21->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox21->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox21->Location = System::Drawing::Point(330, 80);
			this->textBox21->Name = L"textBox21";
			this->textBox21->ReadOnly = true;
			this->textBox21->Size = System::Drawing::Size(27, 13);
			this->textBox21->TabIndex = 40;
			// 
			// textBox22
			// 
			this->textBox22->BackColor = System::Drawing::Color::White;
			this->textBox22->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox22->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox22->Location = System::Drawing::Point(297, 80);
			this->textBox22->Name = L"textBox22";
			this->textBox22->ReadOnly = true;
			this->textBox22->Size = System::Drawing::Size(27, 13);
			this->textBox22->TabIndex = 39;
			// 
			// textBox24
			// 
			this->textBox24->BackColor = System::Drawing::Color::White;
			this->textBox24->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox24->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox24->Location = System::Drawing::Point(396, 80);
			this->textBox24->Name = L"textBox24";
			this->textBox24->ReadOnly = true;
			this->textBox24->Size = System::Drawing::Size(27, 13);
			this->textBox24->TabIndex = 42;
			// 
			// textBox25
			// 
			this->textBox25->BackColor = System::Drawing::Color::White;
			this->textBox25->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox25->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox25->Location = System::Drawing::Point(363, 80);
			this->textBox25->Name = L"textBox25";
			this->textBox25->ReadOnly = true;
			this->textBox25->Size = System::Drawing::Size(27, 13);
			this->textBox25->TabIndex = 41;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::Red;
			this->textBox1->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox1->Location = System::Drawing::Point(7, 15);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(449, 370);
			this->textBox1->TabIndex = 0;
			// 
			// textBox51
			// 
			this->textBox51->BackColor = System::Drawing::Color::Red;
			this->textBox51->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox51->Location = System::Drawing::Point(7, 384);
			this->textBox51->Multiline = true;
			this->textBox51->Name = L"textBox51";
			this->textBox51->ReadOnly = true;
			this->textBox51->Size = System::Drawing::Size(449, 370);
			this->textBox51->TabIndex = 56;
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::Red;
			this->textBox4->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox4->Location = System::Drawing::Point(907, 384);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(451, 370);
			this->textBox4->TabIndex = 5;
			// 
			// textBox66
			// 
			this->textBox66->BackColor = System::Drawing::Color::Red;
			this->textBox66->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox66->Location = System::Drawing::Point(907, 15);
			this->textBox66->Multiline = true;
			this->textBox66->Name = L"textBox66";
			this->textBox66->ReadOnly = true;
			this->textBox66->Size = System::Drawing::Size(451, 370);
			this->textBox66->TabIndex = 96;
			// 
			// textBox82
			// 
			this->textBox82->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->textBox82->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox82->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox82->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 38.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox82->ForeColor = System::Drawing::Color::White;
			this->textBox82->Location = System::Drawing::Point(213, 308);
			this->textBox82->Multiline = true;
			this->textBox82->Name = L"textBox82";
			this->textBox82->Size = System::Drawing::Size(146, 54);
			this->textBox82->TabIndex = 136;
			// 
			// textBox12
			// 
			this->textBox12->BackColor = System::Drawing::Color::White;
			this->textBox12->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox12->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox12->Location = System::Drawing::Point(843, 80);
			this->textBox12->Name = L"textBox12";
			this->textBox12->ReadOnly = true;
			this->textBox12->Size = System::Drawing::Size(27, 13);
			this->textBox12->TabIndex = 155;
			// 
			// textBox13
			// 
			this->textBox13->BackColor = System::Drawing::Color::White;
			this->textBox13->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox13->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox13->Location = System::Drawing::Point(810, 80);
			this->textBox13->Name = L"textBox13";
			this->textBox13->ReadOnly = true;
			this->textBox13->Size = System::Drawing::Size(27, 13);
			this->textBox13->TabIndex = 154;
			// 
			// textBox14
			// 
			this->textBox14->BackColor = System::Drawing::Color::White;
			this->textBox14->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox14->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox14->Location = System::Drawing::Point(777, 80);
			this->textBox14->Name = L"textBox14";
			this->textBox14->ReadOnly = true;
			this->textBox14->Size = System::Drawing::Size(27, 13);
			this->textBox14->TabIndex = 153;
			// 
			// textBox26
			// 
			this->textBox26->BackColor = System::Drawing::Color::White;
			this->textBox26->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox26->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox26->Location = System::Drawing::Point(744, 80);
			this->textBox26->Name = L"textBox26";
			this->textBox26->ReadOnly = true;
			this->textBox26->Size = System::Drawing::Size(27, 13);
			this->textBox26->TabIndex = 152;
			// 
			// textBox27
			// 
			this->textBox27->BackColor = System::Drawing::Color::White;
			this->textBox27->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox27->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox27->Location = System::Drawing::Point(711, 80);
			this->textBox27->Name = L"textBox27";
			this->textBox27->ReadOnly = true;
			this->textBox27->Size = System::Drawing::Size(27, 13);
			this->textBox27->TabIndex = 151;
			// 
			// textBox28
			// 
			this->textBox28->BackColor = System::Drawing::Color::White;
			this->textBox28->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox28->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox28->Location = System::Drawing::Point(678, 80);
			this->textBox28->Name = L"textBox28";
			this->textBox28->ReadOnly = true;
			this->textBox28->Size = System::Drawing::Size(27, 13);
			this->textBox28->TabIndex = 150;
			// 
			// textBox29
			// 
			this->textBox29->BackColor = System::Drawing::Color::White;
			this->textBox29->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox29->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox29->Location = System::Drawing::Point(645, 80);
			this->textBox29->Name = L"textBox29";
			this->textBox29->ReadOnly = true;
			this->textBox29->Size = System::Drawing::Size(27, 13);
			this->textBox29->TabIndex = 149;
			// 
			// textBox30
			// 
			this->textBox30->BackColor = System::Drawing::Color::White;
			this->textBox30->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox30->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox30->Location = System::Drawing::Point(612, 80);
			this->textBox30->Name = L"textBox30";
			this->textBox30->ReadOnly = true;
			this->textBox30->Size = System::Drawing::Size(27, 13);
			this->textBox30->TabIndex = 148;
			// 
			// textBox31
			// 
			this->textBox31->BackColor = System::Drawing::Color::White;
			this->textBox31->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox31->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox31->Location = System::Drawing::Point(579, 80);
			this->textBox31->Name = L"textBox31";
			this->textBox31->ReadOnly = true;
			this->textBox31->Size = System::Drawing::Size(27, 13);
			this->textBox31->TabIndex = 147;
			// 
			// textBox32
			// 
			this->textBox32->BackColor = System::Drawing::Color::White;
			this->textBox32->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox32->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox32->Location = System::Drawing::Point(546, 80);
			this->textBox32->Name = L"textBox32";
			this->textBox32->ReadOnly = true;
			this->textBox32->Size = System::Drawing::Size(27, 13);
			this->textBox32->TabIndex = 146;
			// 
			// textBox33
			// 
			this->textBox33->BackColor = System::Drawing::Color::White;
			this->textBox33->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox33->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox33->Location = System::Drawing::Point(513, 80);
			this->textBox33->Name = L"textBox33";
			this->textBox33->ReadOnly = true;
			this->textBox33->Size = System::Drawing::Size(27, 13);
			this->textBox33->TabIndex = 145;
			// 
			// textBox34
			// 
			this->textBox34->BackColor = System::Drawing::Color::White;
			this->textBox34->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox34->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox34->Location = System::Drawing::Point(480, 80);
			this->textBox34->Name = L"textBox34";
			this->textBox34->ReadOnly = true;
			this->textBox34->Size = System::Drawing::Size(27, 13);
			this->textBox34->TabIndex = 144;
			// 
			// textBox35
			// 
			this->textBox35->BackColor = System::Drawing::Color::White;
			this->textBox35->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox35->Location = System::Drawing::Point(473, 75);
			this->textBox35->Multiline = true;
			this->textBox35->Name = L"textBox35";
			this->textBox35->ReadOnly = true;
			this->textBox35->Size = System::Drawing::Size(405, 22);
			this->textBox35->TabIndex = 143;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(538, 28);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(286, 46);
			this->label5->TabIndex = 142;
			this->label5->Text = L"Line 1 - Toyo 2";
			// 
			// textBox36
			// 
			this->textBox36->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->textBox36->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox36->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 69.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox36->ForeColor = System::Drawing::Color::White;
			this->textBox36->Location = System::Drawing::Point(603, 144);
			this->textBox36->Margin = System::Windows::Forms::Padding(0);
			this->textBox36->Multiline = true;
			this->textBox36->Name = L"textBox36";
			this->textBox36->ReadOnly = true;
			this->textBox36->Size = System::Drawing::Size(275, 100);
			this->textBox36->TabIndex = 141;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(470, 197);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(108, 26);
			this->label6->TabIndex = 140;
			this->label6->Text = L"Efficiency";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(470, 169);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(73, 26);
			this->label7->TabIndex = 139;
			this->label7->Text = L"Filling";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Red;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(541, 325);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(73, 29);
			this->label8->TabIndex = 138;
			this->label8->Text = L"Waste";
			// 
			// textBox83
			// 
			this->textBox83->BackColor = System::Drawing::Color::Red;
			this->textBox83->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox83->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox83->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox83->Location = System::Drawing::Point(529, 308);
			this->textBox83->Multiline = true;
			this->textBox83->Name = L"textBox83";
			this->textBox83->ReadOnly = true;
			this->textBox83->Size = System::Drawing::Size(291, 57);
			this->textBox83->TabIndex = 137;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 38.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->ForeColor = System::Drawing::Color::White;
			this->textBox3->Location = System::Drawing::Point(1113, 308);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(146, 54);
			this->textBox3->TabIndex = 176;
			// 
			// textBox52
			// 
			this->textBox52->BackColor = System::Drawing::Color::White;
			this->textBox52->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox52->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox52->Location = System::Drawing::Point(1296, 80);
			this->textBox52->Name = L"textBox52";
			this->textBox52->ReadOnly = true;
			this->textBox52->Size = System::Drawing::Size(27, 13);
			this->textBox52->TabIndex = 175;
			// 
			// textBox53
			// 
			this->textBox53->BackColor = System::Drawing::Color::White;
			this->textBox53->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox53->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox53->Location = System::Drawing::Point(1263, 80);
			this->textBox53->Name = L"textBox53";
			this->textBox53->ReadOnly = true;
			this->textBox53->Size = System::Drawing::Size(27, 13);
			this->textBox53->TabIndex = 174;
			// 
			// textBox54
			// 
			this->textBox54->BackColor = System::Drawing::Color::White;
			this->textBox54->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox54->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox54->Location = System::Drawing::Point(1230, 80);
			this->textBox54->Name = L"textBox54";
			this->textBox54->ReadOnly = true;
			this->textBox54->Size = System::Drawing::Size(27, 13);
			this->textBox54->TabIndex = 173;
			// 
			// textBox55
			// 
			this->textBox55->BackColor = System::Drawing::Color::White;
			this->textBox55->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox55->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox55->Location = System::Drawing::Point(1197, 80);
			this->textBox55->Name = L"textBox55";
			this->textBox55->ReadOnly = true;
			this->textBox55->Size = System::Drawing::Size(27, 13);
			this->textBox55->TabIndex = 172;
			// 
			// textBox56
			// 
			this->textBox56->BackColor = System::Drawing::Color::White;
			this->textBox56->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox56->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox56->Location = System::Drawing::Point(1164, 80);
			this->textBox56->Name = L"textBox56";
			this->textBox56->ReadOnly = true;
			this->textBox56->Size = System::Drawing::Size(27, 13);
			this->textBox56->TabIndex = 171;
			// 
			// textBox57
			// 
			this->textBox57->BackColor = System::Drawing::Color::White;
			this->textBox57->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox57->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox57->Location = System::Drawing::Point(1131, 80);
			this->textBox57->Name = L"textBox57";
			this->textBox57->ReadOnly = true;
			this->textBox57->Size = System::Drawing::Size(27, 13);
			this->textBox57->TabIndex = 170;
			// 
			// textBox58
			// 
			this->textBox58->BackColor = System::Drawing::Color::White;
			this->textBox58->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox58->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox58->Location = System::Drawing::Point(1098, 80);
			this->textBox58->Name = L"textBox58";
			this->textBox58->ReadOnly = true;
			this->textBox58->Size = System::Drawing::Size(27, 13);
			this->textBox58->TabIndex = 169;
			// 
			// textBox59
			// 
			this->textBox59->BackColor = System::Drawing::Color::White;
			this->textBox59->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox59->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox59->Location = System::Drawing::Point(1065, 80);
			this->textBox59->Name = L"textBox59";
			this->textBox59->ReadOnly = true;
			this->textBox59->Size = System::Drawing::Size(27, 13);
			this->textBox59->TabIndex = 168;
			// 
			// textBox60
			// 
			this->textBox60->BackColor = System::Drawing::Color::White;
			this->textBox60->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox60->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox60->Location = System::Drawing::Point(1032, 80);
			this->textBox60->Name = L"textBox60";
			this->textBox60->ReadOnly = true;
			this->textBox60->Size = System::Drawing::Size(27, 13);
			this->textBox60->TabIndex = 167;
			// 
			// textBox61
			// 
			this->textBox61->BackColor = System::Drawing::Color::White;
			this->textBox61->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox61->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox61->Location = System::Drawing::Point(999, 80);
			this->textBox61->Name = L"textBox61";
			this->textBox61->ReadOnly = true;
			this->textBox61->Size = System::Drawing::Size(27, 13);
			this->textBox61->TabIndex = 166;
			// 
			// textBox62
			// 
			this->textBox62->BackColor = System::Drawing::Color::White;
			this->textBox62->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox62->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox62->Location = System::Drawing::Point(966, 80);
			this->textBox62->Name = L"textBox62";
			this->textBox62->ReadOnly = true;
			this->textBox62->Size = System::Drawing::Size(27, 13);
			this->textBox62->TabIndex = 165;
			// 
			// textBox63
			// 
			this->textBox63->BackColor = System::Drawing::Color::White;
			this->textBox63->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox63->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox63->Location = System::Drawing::Point(933, 80);
			this->textBox63->Name = L"textBox63";
			this->textBox63->ReadOnly = true;
			this->textBox63->Size = System::Drawing::Size(27, 13);
			this->textBox63->TabIndex = 164;
			// 
			// textBox65
			// 
			this->textBox65->BackColor = System::Drawing::Color::White;
			this->textBox65->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox65->Location = System::Drawing::Point(926, 75);
			this->textBox65->Multiline = true;
			this->textBox65->Name = L"textBox65";
			this->textBox65->ReadOnly = true;
			this->textBox65->Size = System::Drawing::Size(405, 22);
			this->textBox65->TabIndex = 163;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::Red;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::White;
			this->label13->Location = System::Drawing::Point(1009, 28);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(264, 46);
			this->label13->TabIndex = 162;
			this->label13->Text = L"Line 1 Overall";
			// 
			// textBox84
			// 
			this->textBox84->BackColor = System::Drawing::Color::Red;
			this->textBox84->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox84->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox84->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 69.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox84->ForeColor = System::Drawing::Color::White;
			this->textBox84->Location = System::Drawing::Point(1056, 144);
			this->textBox84->Margin = System::Windows::Forms::Padding(0);
			this->textBox84->Multiline = true;
			this->textBox84->Name = L"textBox84";
			this->textBox84->ReadOnly = true;
			this->textBox84->Size = System::Drawing::Size(275, 100);
			this->textBox84->TabIndex = 161;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::Red;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::White;
			this->label14->Location = System::Drawing::Point(923, 197);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(108, 26);
			this->label14->TabIndex = 160;
			this->label14->Text = L"Efficiency";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::Red;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::Color::White;
			this->label15->Location = System::Drawing::Point(923, 169);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(73, 26);
			this->label15->TabIndex = 159;
			this->label15->Text = L"Filling";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::Color::White;
			this->label16->Location = System::Drawing::Point(994, 325);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(73, 29);
			this->label16->TabIndex = 158;
			this->label16->Text = L"Waste";
			// 
			// textBox85
			// 
			this->textBox85->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->textBox85->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox85->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox85->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox85->Location = System::Drawing::Point(982, 308);
			this->textBox85->Multiline = true;
			this->textBox85->Name = L"textBox85";
			this->textBox85->ReadOnly = true;
			this->textBox85->Size = System::Drawing::Size(291, 57);
			this->textBox85->TabIndex = 157;
			// 
			// textBox37
			// 
			this->textBox37->BackColor = System::Drawing::Color::White;
			this->textBox37->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox37->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox37->Location = System::Drawing::Point(396, 444);
			this->textBox37->Name = L"textBox37";
			this->textBox37->ReadOnly = true;
			this->textBox37->Size = System::Drawing::Size(27, 13);
			this->textBox37->TabIndex = 195;
			// 
			// textBox38
			// 
			this->textBox38->BackColor = System::Drawing::Color::White;
			this->textBox38->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox38->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox38->Location = System::Drawing::Point(363, 444);
			this->textBox38->Name = L"textBox38";
			this->textBox38->ReadOnly = true;
			this->textBox38->Size = System::Drawing::Size(27, 13);
			this->textBox38->TabIndex = 194;
			// 
			// textBox39
			// 
			this->textBox39->BackColor = System::Drawing::Color::White;
			this->textBox39->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox39->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox39->Location = System::Drawing::Point(330, 444);
			this->textBox39->Name = L"textBox39";
			this->textBox39->ReadOnly = true;
			this->textBox39->Size = System::Drawing::Size(27, 13);
			this->textBox39->TabIndex = 193;
			// 
			// textBox40
			// 
			this->textBox40->BackColor = System::Drawing::Color::White;
			this->textBox40->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox40->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox40->Location = System::Drawing::Point(297, 444);
			this->textBox40->Name = L"textBox40";
			this->textBox40->ReadOnly = true;
			this->textBox40->Size = System::Drawing::Size(27, 13);
			this->textBox40->TabIndex = 192;
			// 
			// textBox41
			// 
			this->textBox41->BackColor = System::Drawing::Color::White;
			this->textBox41->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox41->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox41->Location = System::Drawing::Point(264, 444);
			this->textBox41->Name = L"textBox41";
			this->textBox41->ReadOnly = true;
			this->textBox41->Size = System::Drawing::Size(27, 13);
			this->textBox41->TabIndex = 191;
			// 
			// textBox42
			// 
			this->textBox42->BackColor = System::Drawing::Color::White;
			this->textBox42->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox42->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox42->Location = System::Drawing::Point(231, 444);
			this->textBox42->Name = L"textBox42";
			this->textBox42->ReadOnly = true;
			this->textBox42->Size = System::Drawing::Size(27, 13);
			this->textBox42->TabIndex = 190;
			// 
			// textBox43
			// 
			this->textBox43->BackColor = System::Drawing::Color::White;
			this->textBox43->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox43->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox43->Location = System::Drawing::Point(198, 444);
			this->textBox43->Name = L"textBox43";
			this->textBox43->ReadOnly = true;
			this->textBox43->Size = System::Drawing::Size(27, 13);
			this->textBox43->TabIndex = 189;
			// 
			// textBox44
			// 
			this->textBox44->BackColor = System::Drawing::Color::White;
			this->textBox44->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox44->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox44->Location = System::Drawing::Point(165, 444);
			this->textBox44->Name = L"textBox44";
			this->textBox44->ReadOnly = true;
			this->textBox44->Size = System::Drawing::Size(27, 13);
			this->textBox44->TabIndex = 188;
			// 
			// textBox45
			// 
			this->textBox45->BackColor = System::Drawing::Color::White;
			this->textBox45->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox45->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox45->Location = System::Drawing::Point(132, 444);
			this->textBox45->Name = L"textBox45";
			this->textBox45->ReadOnly = true;
			this->textBox45->Size = System::Drawing::Size(27, 13);
			this->textBox45->TabIndex = 187;
			// 
			// textBox46
			// 
			this->textBox46->BackColor = System::Drawing::Color::White;
			this->textBox46->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox46->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox46->Location = System::Drawing::Point(99, 444);
			this->textBox46->Name = L"textBox46";
			this->textBox46->ReadOnly = true;
			this->textBox46->Size = System::Drawing::Size(27, 13);
			this->textBox46->TabIndex = 186;
			// 
			// textBox47
			// 
			this->textBox47->BackColor = System::Drawing::Color::White;
			this->textBox47->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox47->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox47->Location = System::Drawing::Point(66, 444);
			this->textBox47->Name = L"textBox47";
			this->textBox47->ReadOnly = true;
			this->textBox47->Size = System::Drawing::Size(27, 13);
			this->textBox47->TabIndex = 185;
			// 
			// textBox48
			// 
			this->textBox48->BackColor = System::Drawing::Color::White;
			this->textBox48->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox48->Location = System::Drawing::Point(33, 444);
			this->textBox48->Name = L"textBox48";
			this->textBox48->ReadOnly = true;
			this->textBox48->Size = System::Drawing::Size(27, 13);
			this->textBox48->TabIndex = 184;
			// 
			// textBox50
			// 
			this->textBox50->BackColor = System::Drawing::Color::White;
			this->textBox50->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox50->Location = System::Drawing::Point(26, 439);
			this->textBox50->Multiline = true;
			this->textBox50->Name = L"textBox50";
			this->textBox50->ReadOnly = true;
			this->textBox50->Size = System::Drawing::Size(405, 22);
			this->textBox50->TabIndex = 183;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Red;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(91, 392);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(286, 46);
			this->label9->TabIndex = 182;
			this->label9->Text = L"Line 1 - Toyo 3";
			// 
			// textBox86
			// 
			this->textBox86->BackColor = System::Drawing::Color::Red;
			this->textBox86->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox86->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox86->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 69.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox86->ForeColor = System::Drawing::Color::White;
			this->textBox86->Location = System::Drawing::Point(156, 508);
			this->textBox86->Margin = System::Windows::Forms::Padding(0);
			this->textBox86->Multiline = true;
			this->textBox86->Name = L"textBox86";
			this->textBox86->ReadOnly = true;
			this->textBox86->Size = System::Drawing::Size(275, 100);
			this->textBox86->TabIndex = 181;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Red;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::White;
			this->label10->Location = System::Drawing::Point(23, 561);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(108, 26);
			this->label10->TabIndex = 180;
			this->label10->Text = L"Efficiency";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Red;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::White;
			this->label11->Location = System::Drawing::Point(23, 533);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(73, 26);
			this->label11->TabIndex = 179;
			this->label11->Text = L"Filling";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::White;
			this->label12->Location = System::Drawing::Point(94, 689);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(73, 29);
			this->label12->TabIndex = 178;
			this->label12->Text = L"Waste";
			// 
			// textBox87
			// 
			this->textBox87->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->textBox87->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox87->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox87->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox87->Location = System::Drawing::Point(82, 672);
			this->textBox87->Multiline = true;
			this->textBox87->Name = L"textBox87";
			this->textBox87->ReadOnly = true;
			this->textBox87->Size = System::Drawing::Size(291, 57);
			this->textBox87->TabIndex = 177;
			// 
			// textBox80
			// 
			this->textBox80->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->textBox80->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox80->Location = System::Drawing::Point(456, 384);
			this->textBox80->Multiline = true;
			this->textBox80->Name = L"textBox80";
			this->textBox80->Size = System::Drawing::Size(451, 370);
			this->textBox80->TabIndex = 116;
			// 
			// textBox67
			// 
			this->textBox67->BackColor = System::Drawing::Color::White;
			this->textBox67->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox67->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox67->Location = System::Drawing::Point(843, 444);
			this->textBox67->Name = L"textBox67";
			this->textBox67->ReadOnly = true;
			this->textBox67->Size = System::Drawing::Size(27, 13);
			this->textBox67->TabIndex = 215;
			// 
			// textBox68
			// 
			this->textBox68->BackColor = System::Drawing::Color::White;
			this->textBox68->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox68->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox68->Location = System::Drawing::Point(810, 444);
			this->textBox68->Name = L"textBox68";
			this->textBox68->ReadOnly = true;
			this->textBox68->Size = System::Drawing::Size(27, 13);
			this->textBox68->TabIndex = 214;
			// 
			// textBox69
			// 
			this->textBox69->BackColor = System::Drawing::Color::White;
			this->textBox69->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox69->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox69->Location = System::Drawing::Point(777, 444);
			this->textBox69->Name = L"textBox69";
			this->textBox69->ReadOnly = true;
			this->textBox69->Size = System::Drawing::Size(27, 13);
			this->textBox69->TabIndex = 213;
			// 
			// textBox70
			// 
			this->textBox70->BackColor = System::Drawing::Color::White;
			this->textBox70->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox70->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox70->Location = System::Drawing::Point(744, 444);
			this->textBox70->Name = L"textBox70";
			this->textBox70->ReadOnly = true;
			this->textBox70->Size = System::Drawing::Size(27, 13);
			this->textBox70->TabIndex = 212;
			// 
			// textBox71
			// 
			this->textBox71->BackColor = System::Drawing::Color::White;
			this->textBox71->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox71->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox71->Location = System::Drawing::Point(711, 444);
			this->textBox71->Name = L"textBox71";
			this->textBox71->ReadOnly = true;
			this->textBox71->Size = System::Drawing::Size(27, 13);
			this->textBox71->TabIndex = 211;
			// 
			// textBox72
			// 
			this->textBox72->BackColor = System::Drawing::Color::White;
			this->textBox72->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox72->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox72->Location = System::Drawing::Point(678, 444);
			this->textBox72->Name = L"textBox72";
			this->textBox72->ReadOnly = true;
			this->textBox72->Size = System::Drawing::Size(27, 13);
			this->textBox72->TabIndex = 210;
			// 
			// textBox73
			// 
			this->textBox73->BackColor = System::Drawing::Color::White;
			this->textBox73->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox73->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox73->Location = System::Drawing::Point(645, 444);
			this->textBox73->Name = L"textBox73";
			this->textBox73->ReadOnly = true;
			this->textBox73->Size = System::Drawing::Size(27, 13);
			this->textBox73->TabIndex = 209;
			// 
			// textBox74
			// 
			this->textBox74->BackColor = System::Drawing::Color::White;
			this->textBox74->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox74->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox74->Location = System::Drawing::Point(612, 444);
			this->textBox74->Name = L"textBox74";
			this->textBox74->ReadOnly = true;
			this->textBox74->Size = System::Drawing::Size(27, 13);
			this->textBox74->TabIndex = 208;
			// 
			// textBox75
			// 
			this->textBox75->BackColor = System::Drawing::Color::White;
			this->textBox75->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox75->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox75->Location = System::Drawing::Point(579, 444);
			this->textBox75->Name = L"textBox75";
			this->textBox75->ReadOnly = true;
			this->textBox75->Size = System::Drawing::Size(27, 13);
			this->textBox75->TabIndex = 207;
			// 
			// textBox76
			// 
			this->textBox76->BackColor = System::Drawing::Color::White;
			this->textBox76->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox76->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox76->Location = System::Drawing::Point(546, 444);
			this->textBox76->Name = L"textBox76";
			this->textBox76->ReadOnly = true;
			this->textBox76->Size = System::Drawing::Size(27, 13);
			this->textBox76->TabIndex = 206;
			// 
			// textBox77
			// 
			this->textBox77->BackColor = System::Drawing::Color::White;
			this->textBox77->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox77->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox77->Location = System::Drawing::Point(513, 444);
			this->textBox77->Name = L"textBox77";
			this->textBox77->ReadOnly = true;
			this->textBox77->Size = System::Drawing::Size(27, 13);
			this->textBox77->TabIndex = 205;
			// 
			// textBox78
			// 
			this->textBox78->BackColor = System::Drawing::Color::White;
			this->textBox78->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox78->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox78->Location = System::Drawing::Point(480, 444);
			this->textBox78->Name = L"textBox78";
			this->textBox78->ReadOnly = true;
			this->textBox78->Size = System::Drawing::Size(27, 13);
			this->textBox78->TabIndex = 204;
			// 
			// textBox79
			// 
			this->textBox79->BackColor = System::Drawing::Color::White;
			this->textBox79->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox79->Location = System::Drawing::Point(473, 439);
			this->textBox79->Multiline = true;
			this->textBox79->Name = L"textBox79";
			this->textBox79->ReadOnly = true;
			this->textBox79->Size = System::Drawing::Size(405, 22);
			this->textBox79->TabIndex = 203;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::Color::White;
			this->label17->Location = System::Drawing::Point(538, 392);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(286, 46);
			this->label17->TabIndex = 202;
			this->label17->Text = L"Line 1 - Toyo 4";
			// 
			// textBox81
			// 
			this->textBox81->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->textBox81->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox81->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox81->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 69.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox81->ForeColor = System::Drawing::Color::White;
			this->textBox81->Location = System::Drawing::Point(603, 508);
			this->textBox81->Margin = System::Windows::Forms::Padding(0);
			this->textBox81->Multiline = true;
			this->textBox81->Name = L"textBox81";
			this->textBox81->ReadOnly = true;
			this->textBox81->Size = System::Drawing::Size(275, 100);
			this->textBox81->TabIndex = 201;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->ForeColor = System::Drawing::Color::White;
			this->label18->Location = System::Drawing::Point(470, 561);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(108, 26);
			this->label18->TabIndex = 200;
			this->label18->Text = L"Efficiency";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->ForeColor = System::Drawing::Color::White;
			this->label19->Location = System::Drawing::Point(470, 533);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(73, 26);
			this->label19->TabIndex = 199;
			this->label19->Text = L"Filling";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->BackColor = System::Drawing::Color::Red;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->ForeColor = System::Drawing::Color::White;
			this->label20->Location = System::Drawing::Point(541, 689);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(73, 29);
			this->label20->TabIndex = 198;
			this->label20->Text = L"Waste";
			// 
			// textBox88
			// 
			this->textBox88->BackColor = System::Drawing::Color::Red;
			this->textBox88->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox88->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox88->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox88->Location = System::Drawing::Point(529, 672);
			this->textBox88->Multiline = true;
			this->textBox88->Name = L"textBox88";
			this->textBox88->ReadOnly = true;
			this->textBox88->Size = System::Drawing::Size(291, 57);
			this->textBox88->TabIndex = 197;
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::Color::Red;
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox5->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 38.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->ForeColor = System::Drawing::Color::White;
			this->textBox5->Location = System::Drawing::Point(658, 308);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(146, 54);
			this->textBox5->TabIndex = 216;
			// 
			// textBox6
			// 
			this->textBox6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->textBox6->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox6->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 38.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->ForeColor = System::Drawing::Color::White;
			this->textBox6->Location = System::Drawing::Point(1113, 308);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(146, 54);
			this->textBox6->TabIndex = 217;
			// 
			// textBox11
			// 
			this->textBox11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->textBox11->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox11->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 38.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox11->ForeColor = System::Drawing::Color::White;
			this->textBox11->Location = System::Drawing::Point(211, 672);
			this->textBox11->Multiline = true;
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(146, 54);
			this->textBox11->TabIndex = 218;
			// 
			// textBox89
			// 
			this->textBox89->BackColor = System::Drawing::Color::Red;
			this->textBox89->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox89->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox89->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 38.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox89->ForeColor = System::Drawing::Color::White;
			this->textBox89->Location = System::Drawing::Point(658, 672);
			this->textBox89->Multiline = true;
			this->textBox89->Name = L"textBox89";
			this->textBox89->Size = System::Drawing::Size(146, 54);
			this->textBox89->TabIndex = 219;
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// textBox49
			// 
			this->textBox49->BackColor = System::Drawing::Color::Red;
			this->textBox49->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox49->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->textBox49->Location = System::Drawing::Point(1284, 694);
			this->textBox49->Multiline = true;
			this->textBox49->Name = L"textBox49";
			this->textBox49->ReadOnly = true;
			this->textBox49->Size = System::Drawing::Size(62, 48);
			this->textBox49->TabIndex = 220;
			this->textBox49->Click += gcnew System::EventHandler(this, &MyForm::textBox49_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1370, 750);
			this->Controls->Add(this->textBox49);
			this->Controls->Add(this->textBox89);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox67);
			this->Controls->Add(this->textBox68);
			this->Controls->Add(this->textBox69);
			this->Controls->Add(this->textBox70);
			this->Controls->Add(this->textBox71);
			this->Controls->Add(this->textBox72);
			this->Controls->Add(this->textBox73);
			this->Controls->Add(this->textBox74);
			this->Controls->Add(this->textBox75);
			this->Controls->Add(this->textBox76);
			this->Controls->Add(this->textBox77);
			this->Controls->Add(this->textBox78);
			this->Controls->Add(this->textBox79);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->textBox81);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->textBox88);
			this->Controls->Add(this->textBox37);
			this->Controls->Add(this->textBox38);
			this->Controls->Add(this->textBox39);
			this->Controls->Add(this->textBox40);
			this->Controls->Add(this->textBox41);
			this->Controls->Add(this->textBox42);
			this->Controls->Add(this->textBox43);
			this->Controls->Add(this->textBox44);
			this->Controls->Add(this->textBox45);
			this->Controls->Add(this->textBox46);
			this->Controls->Add(this->textBox47);
			this->Controls->Add(this->textBox48);
			this->Controls->Add(this->textBox50);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox86);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->textBox87);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox52);
			this->Controls->Add(this->textBox53);
			this->Controls->Add(this->textBox54);
			this->Controls->Add(this->textBox55);
			this->Controls->Add(this->textBox56);
			this->Controls->Add(this->textBox57);
			this->Controls->Add(this->textBox58);
			this->Controls->Add(this->textBox59);
			this->Controls->Add(this->textBox60);
			this->Controls->Add(this->textBox61);
			this->Controls->Add(this->textBox62);
			this->Controls->Add(this->textBox63);
			this->Controls->Add(this->textBox65);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->textBox84);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->textBox85);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->textBox14);
			this->Controls->Add(this->textBox26);
			this->Controls->Add(this->textBox27);
			this->Controls->Add(this->textBox28);
			this->Controls->Add(this->textBox29);
			this->Controls->Add(this->textBox30);
			this->Controls->Add(this->textBox31);
			this->Controls->Add(this->textBox32);
			this->Controls->Add(this->textBox33);
			this->Controls->Add(this->textBox34);
			this->Controls->Add(this->textBox35);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox36);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox83);
			this->Controls->Add(this->textBox82);
			this->Controls->Add(this->textBox80);
			this->Controls->Add(this->textBox66);
			this->Controls->Add(this->textBox51);
			this->Controls->Add(this->textBox24);
			this->Controls->Add(this->textBox25);
			this->Controls->Add(this->textBox21);
			this->Controls->Add(this->textBox22);
			this->Controls->Add(this->textBox19);
			this->Controls->Add(this->textBox20);
			this->Controls->Add(this->textBox17);
			this->Controls->Add(this->textBox18);
			this->Controls->Add(this->textBox15);
			this->Controls->Add(this->textBox16);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox23);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Statistics";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		int second = 0;
		int minute = 5;
		int read() {
			//array<INT64> ^a = gcnew array<INT64>(22);
			double a1;
			double a2;
			double a3;
			double a4;
			double a5;
			double a6;
			double a7;
			double a8;

			double l1f1;
			double l1f2;
			double l1f3;
			double l1f4;
			double l1fo;
			double waste1;
			double waste2;
			double waste3;
			double waste4;
			double wasteo;

			int time1;
			int time2;
			int time3;

			double b1;
			double b2;
			double b3;
			double b4;
			double b5;
			double b6;
			double b7;
			double b8;
			double b9;
			double b10;
			double b11;
			double b12;
			double c1;
			double c2;
			double c3;
			double c4;
			double c5;
			double c6;
			double c7;
			double c8;
			double c9;
			double c10;
			double c11;
			double c12;
			double d1;
			double d2;
			double d3;
			double d4;
			double d5;
			double d6;
			double d7;
			double d8;
			double d9;
			double d10;
			double d11;
			double d12;
			double e1;
			double e2;
			double e3;
			double e4;
			double e5;
			double e6;
			double e7;
			double e8;
			double e9;
			double e10;
			double e11;
			double e12;
			double f1;
			double f2;
			double f3;
			double f4;
			double f5;
			double f6;
			double f7;
			double f8;
			double f9;
			double f10;
			double f11;
			double f12;

			String ^times;
			String ^line;
			String ^line2;
			String ^line3;
			String ^line4;
			String ^line5;
			String ^line6;
			String ^line7;
			String ^line8;
			String ^line9;
			String ^line10;
			String ^line11;
			String ^line12;
			String ^line13;
			String ^line14;
			String ^line15;
			String ^line16;
			String ^line17;
			String ^line18;
			String ^line19;
			String ^line20;
			String ^line21;
			String ^line22;
			String ^line23;
			String ^line24;
			String ^line25;
			String ^line26;
			String ^line27;

			String ^lines;
			String ^lines2;
			String ^lines3;
			String ^lines4;
			String ^lines5;
			String ^lines6;
			String ^lines7;
			String ^lines8;
			String ^lines9;
			String ^lines10;
			String ^lines11;
			String ^lines12;
			String ^lines13;
			String ^lines14;
			String ^lines15;
			String ^lines16;
			String ^lines17;
			String ^lines18;
			String ^lines19;
			String ^lines20;
			String ^lines21;
			String ^lines22;
			String ^lines23;
			String ^lines24;
			String ^lines25;
			String ^lines26;
			String ^lines27;
			array<int> ^extra = gcnew array<int>(90);
			array<String^> ^var = gcnew array<String^>(90);

			StreamReader ^sr = gcnew StreamReader("output.txt");
			line = sr->ReadLine();
			line2 = sr->ReadLine();
			line3 = sr->ReadLine();
			line4 = sr->ReadLine();
			line5 = sr->ReadLine();
			line6 = sr->ReadLine();
			line7 = sr->ReadLine();
			line8 = sr->ReadLine();
			line9 = sr->ReadLine();
			line10 = sr->ReadLine();
			line11 = sr->ReadLine();
			line12 = sr->ReadLine();
			line13 = sr->ReadLine();
			line14 = sr->ReadLine();
			line15 = sr->ReadLine();
			line16 = sr->ReadLine();
			line17 = sr->ReadLine();
			line18 = sr->ReadLine();
			line19 = sr->ReadLine();
			line20 = sr->ReadLine();
			line21 = sr->ReadLine();
			line22 = sr->ReadLine();
			line23 = sr->ReadLine();
			line24 = sr->ReadLine();
			line25 = sr->ReadLine();
			line26 = sr->ReadLine();
			line27 = sr->ReadLine();

			sr->Close();

			StreamReader ^sr2 = gcnew StreamReader("output3.txt");
			lines = sr2->ReadLine();
			lines2 = sr2->ReadLine();
			lines3 = sr2->ReadLine();
			lines4 = sr2->ReadLine();
			lines5 = sr2->ReadLine();
			lines6 = sr2->ReadLine();
			lines7 = sr2->ReadLine();
			lines8 = sr2->ReadLine();
			lines9 = sr2->ReadLine();
			lines10 = sr2->ReadLine();
			lines11 = sr2->ReadLine();
			lines12 = sr2->ReadLine();
			lines13 = sr2->ReadLine();
			lines14 = sr2->ReadLine();
			lines15 = sr2->ReadLine();
			lines16 = sr2->ReadLine();
			lines17 = sr2->ReadLine();
			lines18 = sr2->ReadLine();
			lines19 = sr2->ReadLine();
			lines20 = sr2->ReadLine();
			lines21 = sr2->ReadLine();
			lines22 = sr2->ReadLine();
			lines23 = sr2->ReadLine();
			lines24 = sr2->ReadLine();
			lines25 = sr2->ReadLine();
			lines26 = sr2->ReadLine();
			lines27 = sr2->ReadLine();

			sr2->Close();

			DateTime localDate = DateTime::Now;

			times = System::Convert::ToString(localDate);
			array<Char> ^delimiterChars2 = { ' ', ':' };
			array<String^> ^time = gcnew array<String^>(90);
			time = times->Split(delimiterChars2);
			time1 = System::Convert::ToInt64(time[1]);
			time2 = System::Convert::ToInt64(time[2]);

			array<Char> ^delimiterChars = { ' ' };
			array<String^> ^words = gcnew array<String^>(90);
			words = line16->Split(delimiterChars);
			array<String^> ^words2 = gcnew array<String^>(90);
			words2 = line17->Split(delimiterChars);
			array<String^> ^words3 = gcnew array<String^>(90);
			words3 = line18->Split(delimiterChars);
			array<String^> ^words4 = gcnew array<String^>(90);
			words4 = line19->Split(delimiterChars);
			array<String^> ^words5 = gcnew array<String^>(90);
			words5 = line20->Split(delimiterChars);
			array<String^> ^words6 = gcnew array<String^>(90);
			words6 = line21->Split(delimiterChars);
			array<String^> ^words7 = gcnew array<String^>(90);
			words7 = line22->Split(delimiterChars);
			array<String^> ^words8 = gcnew array<String^>(90);
			words8 = line23->Split(delimiterChars);
			array<String^> ^words9 = gcnew array<String^>(90);
			words9 = line24->Split(delimiterChars);
			array<String^> ^words10 = gcnew array<String^>(90);
			words10 = line25->Split(delimiterChars);
			array<String^> ^words11 = gcnew array<String^>(90);
			words11 = line26->Split(delimiterChars);
			array<String^> ^words12 = gcnew array<String^>(90);
			words12 = line27->Split(delimiterChars);

			array<String^> ^words13 = gcnew array<String^>(90);
			words13 = lines27->Split(delimiterChars);

			if ((time1 * 100 + time2) >= 730 && (time1 * 100 + time2) < 1930) {
				if ((time1 * 100 + time2) >= 730 && (time1 * 100 + time2) < 830)
					var = words;
				else if ((time1 * 100 + time2) >= 830 && (time1 * 100 + time2) < 930)
					var = words2;
				else if ((time1 * 100 + time2) >= 930 && (time1 * 100 + time2) < 1030)
					var = words3;
				else if ((time1 * 100 + time2) >= 1030 && (time1 * 100 + time2) < 1130)
					var = words4;
				else if ((time1 * 100 + time2) >= 1130 && (time1 * 100 + time2) < 1230)
					var = words5;
				else if ((time1 * 100 + time2) >= 1230 && (time1 * 100 + time2) < 1330)
					var = words6;
				else if ((time1 * 100 + time2) >= 1330 && (time1 * 100 + time2) < 1430)
					var = words7;
				else if ((time1 * 100 + time2) >= 1430 && (time1 * 100 + time2) < 1530)
					var = words8;
				else if ((time1 * 100 + time2) >= 1530 && (time1 * 100 + time2) < 1630)
					var = words9;
				else if ((time1 * 100 + time2) >= 1630 && (time1 * 100 + time2) < 1730)
					var = words10;
				else if ((time1 * 100 + time2) >= 1730 && (time1 * 100 + time2) < 1830)
					var = words11;
				else if ((time1 * 100 + time2) >= 1830 && (time1 * 100 + time2) < 1930)
					var = words12;
			}
			else {
				if ((time1 * 100 + time2) >= 1930 && (time1 * 100 + time2) < 2030)
					var = words;
				else if ((time1 * 100 + time2) >= 2030 && (time1 * 100 + time2) < 2130)
					var = words2;
				else if ((time1 * 100 + time2) >= 2130 && (time1 * 100 + time2) < 2230)
					var = words3;
				else if ((time1 * 100 + time2) >= 2230 && (time1 * 100 + time2) < 2330)
					var = words4;
				else if ((time1 * 100 + time2) >= 2330 && (time1 * 100 + time2) < 2430)
					var = words5;
				else if ((time1 * 100 + time2) >= 2430 && (time1 * 100 + time2) < 130)
					var = words6;
				else if ((time1 * 100 + time2) >= 130 && (time1 * 100 + time2) < 230)
					var = words7;
				else if ((time1 * 100 + time2) >= 230 && (time1 * 100 + time2) < 330)
					var = words8;
				else if ((time1 * 100 + time2) >= 330 && (time1 * 100 + time2) < 430)
					var = words9;
				else if ((time1 * 100 + time2) >= 430 && (time1 * 100 + time2) < 530)
					var = words10;
				else if ((time1 * 100 + time2) >= 530 && (time1 * 100 + time2) < 630)
					var = words11;
				else if ((time1 * 100 + time2) >= 630 && (time1 * 100 + time2) < 730)
					var = words12;
			}

			//this->textBox4->Text = "" + var[0];
			
			if (time2 > 30)
				time3 = time2 - 30;
			else if (time2 < 30)
				time3 = time2 + 30;

			if (var[10]->Length == 0)
				extra[0] = 2;
			this->textBox4->Text = "" + extra[0];

			//Line 1 - Filler 1
			a1 = System::Convert::ToDouble(var[8]);
			l1f1 = a1 / 4800 * 100;
			//l1f1 = a1 / 80*time3 * 100;
			l1f1 = Math::Round(l1f1, 1);
			this->textBox8->Text = "" + l1f1 + "%";

			a2 = System::Convert::ToDouble(var[40]);
			waste1 = (a1 - a2) / a1 * 100;
			waste1 = Math::Round(waste1, 1);
			this->textBox82->Text = "" + waste1 + "%";


			if (l1f1 <= 85) {
				this->label2->BackColor = System::Drawing::Color::Red;
				this->label3->BackColor = System::Drawing::Color::Red;
				this->label4->BackColor = System::Drawing::Color::Red;
				this->textBox1->BackColor = System::Drawing::Color::Red;
				this->textBox8->BackColor = System::Drawing::Color::Red;
			}
			else {
				this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)));
				this->textBox8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)));
				this->label4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)));
				this->label2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)));
				this->label3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)));
			}
			if (waste1 < 3) {
				this->textBox7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)));
				this->textBox82->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)));
				this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)));
			}
			else {
				this->label1->BackColor = System::Drawing::Color::Red;
				this->textBox7->BackColor = System::Drawing::Color::Red;
				this->textBox82->BackColor = System::Drawing::Color::Red;
			}

			//Line 1 filler 2
			a3 = System::Convert::ToDouble(var[16]);
			l1f2 = a3 / 4800 * 100;
			l1f2 = Math::Round(l1f2, 1);
			this->textBox36->Text = "" + l1f2 + "%";

			a4 = System::Convert::ToDouble(var[48]);
			waste2 = (a3 - a4) / a3 * 100;
			waste2 = Math::Round(waste2, 1);
			this->textBox5->Text = "" + waste2 + "%";


			if (l1f2 <= 85) {
				this->label5->BackColor = System::Drawing::Color::Red;
				this->label6->BackColor = System::Drawing::Color::Red;
				this->label7->BackColor = System::Drawing::Color::Red;
				this->textBox2->BackColor = System::Drawing::Color::Red;
				this->textBox36->BackColor = System::Drawing::Color::Red;
			}
			else {
				this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)));
				this->textBox36->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)));
				this->label5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)));
				this->label6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)));
				this->label7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)));
			}
			if (waste2 < 3) {
				this->textBox5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)));
				this->textBox83->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)));
				this->label8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)));
			}
			else {
				this->label8->BackColor = System::Drawing::Color::Red;
				this->textBox5->BackColor = System::Drawing::Color::Red;
				this->textBox83->BackColor = System::Drawing::Color::Red;
			}

			//Line 1 filler 3
			a5 = System::Convert::ToDouble(var[24]);
			l1f3 = a5 / 4800 * 100;
			l1f3 = Math::Round(l1f3, 1);
			this->textBox86->Text = "" + l1f3 + "%";

			a6 = System::Convert::ToDouble(var[56]);
			waste3 = (a5 - a6) / a5 * 100;
			waste3 = Math::Round(waste3, 1);
			this->textBox11->Text = "" + waste3 + "%";


			if (l1f3 <= 85) {
				this->label9->BackColor = System::Drawing::Color::Red;
				this->label10->BackColor = System::Drawing::Color::Red;
				this->label11->BackColor = System::Drawing::Color::Red;
				this->textBox51->BackColor = System::Drawing::Color::Red;
				this->textBox86->BackColor = System::Drawing::Color::Red;
			}
			else {
				this->textBox51->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)));
				this->textBox86->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)));
				this->label9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)));
				this->label10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)));
				this->label11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)));
			}
			if (waste3 < 3) {
				this->textBox11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)));
				this->textBox87->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)));
				this->label12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)));
			}
			else {
				this->label12->BackColor = System::Drawing::Color::Red;
				this->textBox11->BackColor = System::Drawing::Color::Red;
				this->textBox87->BackColor = System::Drawing::Color::Red;
			}

			//Line 1 filler 4
			a7 = System::Convert::ToDouble(var[32]);
			l1f4 = a7 / 4800 * 100;
			l1f4 = Math::Round(l1f4, 1);
			this->textBox81->Text = "" + l1f4 + "%";

			a8 = System::Convert::ToDouble(var[64]);
			waste4 = (a7 - a8) / a7 * 100;
			waste4 = Math::Round(waste4, 1);
			this->textBox89->Text = "" + waste4 + "%";


			if (l1f4 <= 85) {
				this->label17->BackColor = System::Drawing::Color::Red;
				this->label18->BackColor = System::Drawing::Color::Red;
				this->label19->BackColor = System::Drawing::Color::Red;
				this->textBox81->BackColor = System::Drawing::Color::Red;
				this->textBox80->BackColor = System::Drawing::Color::Red;
			}
			else {
				this->textBox81->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)));
				this->textBox80->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)));
				this->label17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)));
				this->label18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)));
				this->label19->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)));
			}
			if (waste4 < 3) {
				this->textBox89->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)));
				this->textBox88->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)));
				this->label20->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)));
			}
			else {
				this->label20->BackColor = System::Drawing::Color::Red;
				this->textBox89->BackColor = System::Drawing::Color::Red;
				this->textBox88->BackColor = System::Drawing::Color::Red;
			}

			//Line 1 Overall
			int toyonum = 4;
			if (a1 == 0)
				toyonum - 1;
			else if (a3 == 0)
				toyonum - 1;
			else if (a5 == 0)
				toyonum - 1;
			else if (a7 == 0)
				toyonum - 1;

			wasteo = (((a7 + a5 + a3 + a1) - (a2 + a4 + a6 + a8)) / (a7 + a5 + a3 + a1) * 100);
			l1fo = ((a7 + a5 + a3 + a1) / 19200 * 100);

			if (l1fo < 85) {
				this->label13->BackColor = System::Drawing::Color::Red;
				this->label14->BackColor = System::Drawing::Color::Red;
				this->label15->BackColor = System::Drawing::Color::Red;
				this->textBox66->BackColor = System::Drawing::Color::Red;
				this->textBox84->BackColor = System::Drawing::Color::Red;
			}
			else {
				this->textBox84->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)));
				this->textBox66->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)));
				this->label14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)));
				this->label15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)));
				this->label13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)));
			}

			if (wasteo < 3) {
				this->textBox85->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)));
				this->textBox6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)));
				this->label16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
					static_cast<System::Int32>(static_cast<System::Byte>(0)));
			}
			else {
				this->label16->BackColor = System::Drawing::Color::Red;
				this->textBox85->BackColor = System::Drawing::Color::Red;
				this->textBox6->BackColor = System::Drawing::Color::Red;
			}

			l1fo = Math::Round(l1fo, 1);
			wasteo = Math::Round(wasteo, 1);
			this->textBox84->Text = "" + l1fo + "%";
			this->textBox6->Text = "" + wasteo + "%";
			

			//Line 1 Toyo 1 - Previous hours
			if ((time1 * 100 + time2) >= 730 && (time1 * 100 + time2) < 830) {
				b1 = System::Convert::ToDouble(words13[8]);
				if (b1 / 4800 * 100 < 85)
					this->textBox23->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox23->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
			}
			else if ((time1 * 100 + time2) >= 830 && (time1 * 100 + time2) < 930) {
				b1 = System::Convert::ToDouble(words13[8]);
				b2 = System::Convert::ToDouble(words[8]);
				if (b1 / 4800 * 100 < 85)
					this->textBox23->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox23->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b2 / 4800 * 100 < 85)
					this->textBox10->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
			}
			else if ((time1 * 100 + time2) >= 930 && (time1 * 100 + time2) < 1030) {
				b1 = System::Convert::ToDouble(words13[8]);
				b2 = System::Convert::ToDouble(words[8]);
				b3 = System::Convert::ToDouble(words2[8]);
				if (b1 / 4800 * 100 < 85)
					this->textBox23->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox23->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b2 / 4800 * 100 < 85)
					this->textBox10->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b3 / 4800 * 100 < 85)
					this->textBox16->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
			}
			else if ((time1 * 100 + time2) >= 1030 && (time1 * 100 + time2) < 1130) {
				b1 = System::Convert::ToDouble(words13[8]);
				b2 = System::Convert::ToDouble(words[8]);
				b3 = System::Convert::ToDouble(words2[8]);
				b4 = System::Convert::ToDouble(words3[8]);
				if (b1 / 4800 * 100 < 85)
					this->textBox23->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox23->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b2 / 4800 * 100 < 85)
					this->textBox10->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b3 / 4800 * 100 < 85)
					this->textBox16->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b4 / 4800 * 100 < 85)
					this->textBox15->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
			}

			else if ((time1 * 100 + time2) >= 1130 && (time1 * 100 + time2) < 1230) {
				b1 = System::Convert::ToDouble(words13[8]);
				b2 = System::Convert::ToDouble(words[8]);
				b3 = System::Convert::ToDouble(words2[8]);
				b4 = System::Convert::ToDouble(words3[8]);
				b5 = System::Convert::ToDouble(words4[8]);
				if (b1 / 4800 * 100 < 85)
					this->textBox23->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox23->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b2 / 4800 * 100 < 85)
					this->textBox10->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b3 / 4800 * 100 < 85)
					this->textBox16->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b4 / 4800 * 100 < 85)
					this->textBox15->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b5 / 4800 * 100 < 85)
					this->textBox18->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
			}
			else if ((time1 * 100 + time2) >= 1230 && (time1 * 100 + time2) < 1330) {
				b1 = System::Convert::ToDouble(words13[8]);
				b2 = System::Convert::ToDouble(words[8]);
				b3 = System::Convert::ToDouble(words2[8]);
				b4 = System::Convert::ToDouble(words3[8]);
				b5 = System::Convert::ToDouble(words4[8]);
				b6 = System::Convert::ToDouble(words5[8]);
				if (b1 / 4800 * 100 < 85)
					this->textBox23->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox23->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b2 / 4800 * 100 < 85)
					this->textBox10->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b3 / 4800 * 100 < 85)
					this->textBox16->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b4 / 4800 * 100 < 85)
					this->textBox15->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b5 / 4800 * 100 < 85)
					this->textBox18->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b6 / 4800 * 100 < 85)
					this->textBox17->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
			}
			else if ((time1 * 100 + time2) >= 1330 && (time1 * 100 + time2) < 1430) {
				b1 = System::Convert::ToDouble(words13[8]);
				b2 = System::Convert::ToDouble(words[8]);
				b3 = System::Convert::ToDouble(words2[8]);
				b4 = System::Convert::ToDouble(words3[8]);
				b5 = System::Convert::ToDouble(words4[8]);
				b6 = System::Convert::ToDouble(words5[8]);
				b7 = System::Convert::ToDouble(words6[8]);
				if (b1 / 4800 * 100 < 85)
					this->textBox23->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox23->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b2 / 4800 * 100 < 85)
					this->textBox10->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b3 / 4800 * 100 < 85)
					this->textBox16->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b4 / 4800 * 100 < 85)
					this->textBox15->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b5 / 4800 * 100 < 85)
					this->textBox18->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b6 / 4800 * 100 < 85)
					this->textBox17->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b7 / 4800 * 100 < 85)
					this->textBox20->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox20->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
			}
			else if ((time1 * 100 + time2) >= 1430 && (time1 * 100 + time2) < 1530) {
				b1 = System::Convert::ToDouble(words13[8]);
				b2 = System::Convert::ToDouble(words[8]);
				b3 = System::Convert::ToDouble(words2[8]);
				b4 = System::Convert::ToDouble(words3[8]);
				b5 = System::Convert::ToDouble(words4[8]);
				b6 = System::Convert::ToDouble(words5[8]);
				b7 = System::Convert::ToDouble(words6[8]);
				b8 = System::Convert::ToDouble(words7[8]);
				if (b1 / 4800 * 100 < 85)
					this->textBox23->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox23->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b2 / 4800 * 100 < 85)
					this->textBox10->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b3 / 4800 * 100 < 85)
					this->textBox16->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b4 / 4800 * 100 < 85)
					this->textBox15->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b5 / 4800 * 100 < 85)
					this->textBox18->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b6 / 4800 * 100 < 85)
					this->textBox17->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b7 / 4800 * 100 < 85)
					this->textBox20->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox20->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b8 / 4800 * 100 < 85)
					this->textBox20->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox20->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
			}
			else if ((time1 * 100 + time2) >= 1530 && (time1 * 100 + time2) < 1630) {
				b1 = System::Convert::ToDouble(words13[8]);
				b2 = System::Convert::ToDouble(words[8]);
				b3 = System::Convert::ToDouble(words2[8]);
				b4 = System::Convert::ToDouble(words4[8]);
				b5 = System::Convert::ToDouble(words5[8]);
				b6 = System::Convert::ToDouble(words6[8]);
				b7 = System::Convert::ToDouble(words7[8]);
				b8 = System::Convert::ToDouble(words8[8]);
				b9 = System::Convert::ToDouble(words9[8]);
				if (b1 / 4800 * 100 < 85)
					this->textBox23->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox23->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b2 / 4800 * 100 < 85)
					this->textBox10->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b3 / 4800 * 100 < 85)
					this->textBox16->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b4 / 4800 * 100 < 85)
					this->textBox15->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b5 / 4800 * 100 < 85)
					this->textBox18->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b6 / 4800 * 100 < 85)
					this->textBox17->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b7 / 4800 * 100 < 85)
					this->textBox20->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox20->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b8 / 4800 * 100 < 85)
					this->textBox20->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox20->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b9 / 4800 * 100 < 85)
					this->textBox20->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox20->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
			}
			else if ((time1 * 100 + time2) >= 1630 && (time1 * 100 + time2) < 1730) {
				b1 = System::Convert::ToDouble(words13[8]);
				b2 = System::Convert::ToDouble(words[8]);
				b3 = System::Convert::ToDouble(words2[8]);
				b4 = System::Convert::ToDouble(words4[8]);
				b5 = System::Convert::ToDouble(words5[8]);
				b6 = System::Convert::ToDouble(words6[8]);
				b7 = System::Convert::ToDouble(words7[8]);
				b8 = System::Convert::ToDouble(words8[8]);
				b9 = System::Convert::ToDouble(words9[8]);
				b10 = System::Convert::ToDouble(words10[8]);
				if (b1 / 4800 * 100 < 85)
					this->textBox23->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox23->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b2 / 4800 * 100 < 85)
					this->textBox10->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b3 / 4800 * 100 < 85)
					this->textBox16->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b4 / 4800 * 100 < 85)
					this->textBox15->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b5 / 4800 * 100 < 85)
					this->textBox18->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b6 / 4800 * 100 < 85)
					this->textBox17->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b7 / 4800 * 100 < 85)
					this->textBox20->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox20->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b8 / 4800 * 100 < 85)
					this->textBox20->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox20->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b9 / 4800 * 100 < 85)
					this->textBox20->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox20->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b10 / 4800 * 100 < 85)
					this->textBox20->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox20->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
			}
			else if ((time1 * 100 + time2) >= 1730 && (time1 * 100 + time2) < 1830){
				b1 = System::Convert::ToDouble(words13[8]);
				b2 = System::Convert::ToDouble(words[8]);
				b3 = System::Convert::ToDouble(words2[8]);
				b4 = System::Convert::ToDouble(words4[8]);
				b5 = System::Convert::ToDouble(words5[8]);
				b6 = System::Convert::ToDouble(words6[8]);
				b7 = System::Convert::ToDouble(words7[8]);
				b8 = System::Convert::ToDouble(words8[8]);
				b9 = System::Convert::ToDouble(words9[8]);
				b10 = System::Convert::ToDouble(words10[8]);
				b11 = System::Convert::ToDouble(words11[8]);
				if (b1 / 4800 * 100 < 85)
					this->textBox23->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox23->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b2 / 4800 * 100 < 85)
					this->textBox10->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b3 / 4800 * 100 < 85)
					this->textBox16->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b4 / 4800 * 100 < 85)
					this->textBox15->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b5 / 4800 * 100 < 85)
					this->textBox18->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b6 / 4800 * 100 < 85)
					this->textBox17->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b7 / 4800 * 100 < 85)
					this->textBox20->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox20->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b8 / 4800 * 100 < 85)
					this->textBox20->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox20->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b9 / 4800 * 100 < 85)
					this->textBox20->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox20->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b10 / 4800 * 100 < 85)
					this->textBox20->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox20->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b11 / 4800 * 100 < 85)
					this->textBox20->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox20->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
		}
			else if ((time1 * 100 + time2) >= 1830 && (time1 * 100 + time2) < 1930) {
				b1 = System::Convert::ToDouble(words13[8]);
				b2 = System::Convert::ToDouble(words[8]);
				b3 = System::Convert::ToDouble(words2[8]);
				b4 = System::Convert::ToDouble(words4[8]);
				b5 = System::Convert::ToDouble(words5[8]);
				b6 = System::Convert::ToDouble(words6[8]);
				b7 = System::Convert::ToDouble(words7[8]);
				b8 = System::Convert::ToDouble(words8[8]);
				b9 = System::Convert::ToDouble(words9[8]);
				b10 = System::Convert::ToDouble(words10[8]);
				b11 = System::Convert::ToDouble(words11[8]);
				b12 = System::Convert::ToDouble(words12[8]);

				if (b1 / 4800 * 100 < 85)
					this->textBox23->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox23->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b2 / 4800 * 100 < 85)
					this->textBox10->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b3 / 4800 * 100 < 85)
					this->textBox16->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b4 / 4800 * 100 < 85)
					this->textBox15->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b5 / 4800 * 100 < 85)
					this->textBox18->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b6 / 4800 * 100 < 85)
					this->textBox17->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b7 / 4800 * 100 < 85)
					this->textBox20->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox20->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b8 / 4800 * 100 < 85)
					this->textBox20->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox20->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b9 / 4800 * 100 < 85)
					this->textBox20->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox20->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b10 / 4800 * 100 < 85)
					this->textBox20->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox20->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b11 / 4800 * 100 < 85)
					this->textBox20->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox20->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b12 / 4800 * 100 < 85)
					this->textBox20->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox20->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
			}
			else if ((time1 * 100 + time2) >= 1930 && (time1 * 100 + time2) < 2030) {
				b1 = System::Convert::ToDouble(words13[8]);

				if (b1 / 4800 * 100 < 85)
					this->textBox23->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox23->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
			}
			else if ((time1 * 100 + time2) >= 2030 && (time1 * 100 + time2) < 2130) {
				b1 = System::Convert::ToDouble(words13[8]);
				b2 = System::Convert::ToDouble(words[8]);

				if (b1 / 4800 * 100 < 85)
					this->textBox23->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox23->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b2 / 4800 * 100 < 85)
					this->textBox10->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
			}
			else if ((time1 * 100 + time2) >= 2130 && (time1 * 100 + time2) < 2230) {
				b1 = System::Convert::ToDouble(words13[8]);
				b2 = System::Convert::ToDouble(words[8]);
				b3 = System::Convert::ToDouble(words2[8]);

				if (b1 / 4800 * 100 < 85)
					this->textBox23->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox23->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b2 / 4800 * 100 < 85)
					this->textBox10->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b3 / 4800 * 100 < 85)
					this->textBox16->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
			}
			else if ((time1 * 100 + time2) >= 2230 && (time1 * 100 + time2) < 2330) {
				b1 = System::Convert::ToDouble(words13[8]);
				b2 = System::Convert::ToDouble(words[8]);
				b3 = System::Convert::ToDouble(words2[8]);
				b4 = System::Convert::ToDouble(words3[8]);

				if (b1 / 4800 * 100 < 85)
					this->textBox23->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox23->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b2 / 4800 * 100 < 85)
					this->textBox10->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b3 / 4800 * 100 < 85)
					this->textBox16->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b4 / 4800 * 100 < 85)
					this->textBox15->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
			}
			else if ((time1 * 100 + time2) >= 2330 && (time1 * 100 + time2) < 2430) {
				b1 = System::Convert::ToDouble(words13[8]);
				b2 = System::Convert::ToDouble(words[8]);
				b3 = System::Convert::ToDouble(words2[8]);
				b4 = System::Convert::ToDouble(words3[8]);
				b5 = System::Convert::ToDouble(words4[8]);

				if (b1 / 4800 * 100 < 85)
					this->textBox23->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox23->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b2 / 4800 * 100 < 85)
					this->textBox10->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b3 / 4800 * 100 < 85)
					this->textBox16->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b4 / 4800 * 100 < 85)
					this->textBox15->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b5 / 4800 * 100 < 85)
					this->textBox18->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
			}
			else if ((time1 * 100 + time2) >= 2430 && (time1 * 100 + time2) < 130) {
				b1 = System::Convert::ToDouble(words13[8]);
				b2 = System::Convert::ToDouble(words[8]);
				b3 = System::Convert::ToDouble(words2[8]);
				b4 = System::Convert::ToDouble(words3[8]);
				b5 = System::Convert::ToDouble(words4[8]);
				b6 = System::Convert::ToDouble(words5[8]);

				if (b1 / 4800 * 100 < 85)
					this->textBox23->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox23->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b2 / 4800 * 100 < 85)
					this->textBox10->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b3 / 4800 * 100 < 85)
					this->textBox16->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b4 / 4800 * 100 < 85)
					this->textBox15->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b5 / 4800 * 100 < 85)
					this->textBox18->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b6 / 4800 * 100 < 85)
					this->textBox17->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
			}
			else if ((time1 * 100 + time2) >= 130 && (time1 * 100 + time2) < 230) {
				b1 = System::Convert::ToDouble(words13[8]);
				b2 = System::Convert::ToDouble(words[8]);
				b3 = System::Convert::ToDouble(words2[8]);
				b4 = System::Convert::ToDouble(words3[8]);
				b5 = System::Convert::ToDouble(words4[8]);
				b6 = System::Convert::ToDouble(words5[8]);
				b7 = System::Convert::ToDouble(words6[8]);

				if (b1 / 4800 * 100 < 85)
					this->textBox23->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox23->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b2 / 4800 * 100 < 85)
					this->textBox10->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b3 / 4800 * 100 < 85)
					this->textBox16->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b4 / 4800 * 100 < 85)
					this->textBox15->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b5 / 4800 * 100 < 85)
					this->textBox18->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b6 / 4800 * 100 < 85)
					this->textBox17->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b7 / 4800 * 100 < 85)
					this->textBox20->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox20->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
			}
			else if ((time1 * 100 + time2) >= 230 && (time1 * 100 + time2) < 330) {
				b1 = System::Convert::ToDouble(words13[8]);
				b2 = System::Convert::ToDouble(words[8]);
				b3 = System::Convert::ToDouble(words2[8]);
				b4 = System::Convert::ToDouble(words3[8]);
				b5 = System::Convert::ToDouble(words4[8]);
				b6 = System::Convert::ToDouble(words5[8]);
				b7 = System::Convert::ToDouble(words6[8]);
				b8 = System::Convert::ToDouble(words7[8]);

				if (b1 / 4800 * 100 < 85)
					this->textBox23->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox23->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b2 / 4800 * 100 < 85)
					this->textBox10->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b3 / 4800 * 100 < 85)
					this->textBox16->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b4 / 4800 * 100 < 85)
					this->textBox15->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b5 / 4800 * 100 < 85)
					this->textBox18->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b6 / 4800 * 100 < 85)
					this->textBox17->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b7 / 4800 * 100 < 85)
					this->textBox20->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox20->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b8 / 4800 * 100 < 85)
					this->textBox19->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox19->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
			}
			else if ((time1 * 100 + time2) >= 330 && (time1 * 100 + time2) < 430) {
				b1 = System::Convert::ToDouble(words13[8]);
				b2 = System::Convert::ToDouble(words[8]);
				b3 = System::Convert::ToDouble(words2[8]);
				b4 = System::Convert::ToDouble(words3[8]);
				b5 = System::Convert::ToDouble(words4[8]);
				b6 = System::Convert::ToDouble(words5[8]);
				b7 = System::Convert::ToDouble(words6[8]);
				b8 = System::Convert::ToDouble(words7[8]);
				b9 = System::Convert::ToDouble(words8[8]);

				if (b1 / 4800 * 100 < 85)
					this->textBox23->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox23->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b2 / 4800 * 100 < 85)
					this->textBox10->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b3 / 4800 * 100 < 85)
					this->textBox16->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b4 / 4800 * 100 < 85)
					this->textBox15->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b5 / 4800 * 100 < 85)
					this->textBox18->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b6 / 4800 * 100 < 85)
					this->textBox17->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b7 / 4800 * 100 < 85)
					this->textBox20->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox20->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b8 / 4800 * 100 < 85)
					this->textBox19->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox19->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b9 / 4800 * 100 < 85)
					this->textBox22->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox22->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
			}
				
			else if ((time1 * 100 + time2) >= 430 && (time1 * 100 + time2) < 530) {
				b1 = System::Convert::ToDouble(words13[8]);
				b2 = System::Convert::ToDouble(words[8]);
				b3 = System::Convert::ToDouble(words2[8]);
				b4 = System::Convert::ToDouble(words3[8]);
				b5 = System::Convert::ToDouble(words4[8]);
				b6 = System::Convert::ToDouble(words5[8]);
				b7 = System::Convert::ToDouble(words6[8]);
				b8 = System::Convert::ToDouble(words7[8]);
				b9 = System::Convert::ToDouble(words8[8]);
				b10 = System::Convert::ToDouble(words9[8]);

				if (b1 / 4800 * 100 < 85)
					this->textBox23->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox23->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b2 / 4800 * 100 < 85)
					this->textBox10->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b3 / 4800 * 100 < 85)
					this->textBox16->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b4 / 4800 * 100 < 85)
					this->textBox15->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b5 / 4800 * 100 < 85)
					this->textBox18->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b6 / 4800 * 100 < 85)
					this->textBox17->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b7 / 4800 * 100 < 85)
					this->textBox20->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox20->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b8 / 4800 * 100 < 85)
					this->textBox19->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox19->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b9 / 4800 * 100 < 85)
					this->textBox22->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox22->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b10 / 4800 * 100 < 85)
					this->textBox21->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox21->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
			}
			else if ((time1 * 100 + time2) >= 530 && (time1 * 100 + time2) < 630) {
				b1 = System::Convert::ToDouble(words13[8]);
				b2 = System::Convert::ToDouble(words[8]);
				b3 = System::Convert::ToDouble(words2[8]);
				b4 = System::Convert::ToDouble(words3[8]);
				b5 = System::Convert::ToDouble(words4[8]);
				b6 = System::Convert::ToDouble(words5[8]);
				b7 = System::Convert::ToDouble(words6[8]);
				b8 = System::Convert::ToDouble(words7[8]);
				b9 = System::Convert::ToDouble(words8[8]);
				b10 = System::Convert::ToDouble(words9[8]);
				b11 = System::Convert::ToDouble(words10[8]);

				if (b1 / 4800 * 100 < 85)
					this->textBox23->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox23->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b2 / 4800 * 100 < 85)
					this->textBox10->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b3 / 4800 * 100 < 85)
					this->textBox16->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b4 / 4800 * 100 < 85)
					this->textBox15->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b5 / 4800 * 100 < 85)
					this->textBox18->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b6 / 4800 * 100 < 85)
					this->textBox17->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b7 / 4800 * 100 < 85)
					this->textBox20->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox20->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b8 / 4800 * 100 < 85)
					this->textBox19->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox19->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b9 / 4800 * 100 < 85)
					this->textBox22->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox22->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b10 / 4800 * 100 < 85)
					this->textBox21->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox21->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b11 / 4800 * 100 < 85)
					this->textBox25->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox25->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
			}
				
			else if ((time1 * 100 + time2) >= 630 && (time1 * 100 + time2) < 730) {
				b1 = System::Convert::ToDouble(words13[8]);
				b2 = System::Convert::ToDouble(words[8]);
				b3 = System::Convert::ToDouble(words2[8]);
				b4 = System::Convert::ToDouble(words3[8]);
				b5 = System::Convert::ToDouble(words4[8]);
				b6 = System::Convert::ToDouble(words5[8]);
				b7 = System::Convert::ToDouble(words6[8]);
				b8 = System::Convert::ToDouble(words7[8]);
				b9 = System::Convert::ToDouble(words8[8]);
				b10 = System::Convert::ToDouble(words9[8]);
				b11 = System::Convert::ToDouble(words10[8]);
				b12 = System::Convert::ToDouble(words11[8]);

				if (b1 / 4800 * 100 < 85)
					this->textBox23->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox23->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b2 / 4800 * 100 < 85)
					this->textBox10->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b3 / 4800 * 100 < 85)
					this->textBox16->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b4 / 4800 * 100 < 85)
					this->textBox15->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b5 / 4800 * 100 < 85)
					this->textBox18->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b6 / 4800 * 100 < 85)
					this->textBox17->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b7 / 4800 * 100 < 85)
					this->textBox20->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox20->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b8 / 4800 * 100 < 85)
					this->textBox19->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox19->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b9 / 4800 * 100 < 85)
					this->textBox22->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox22->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b10 / 4800 * 100 < 85)
					this->textBox21->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox21->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b11 / 4800 * 100 < 85)
					this->textBox25->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox25->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (b12 / 4800 * 100 < 85)
					this->textBox24->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox24->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
			}
				
			//Line 1 Toyo 2 - Previous hours
			if ((time1 * 100 + time2) >= 730 && (time1 * 100 + time2) < 830) {
				c1 = System::Convert::ToDouble(words13[16]);
				if (c1 / 4800 * 100 < 85)
					this->textBox34->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox34->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
			}
			else if ((time1 * 100 + time2) >= 830 && (time1 * 100 + time2) < 930) {
				c1 = System::Convert::ToDouble(words13[16]);
				c2 = System::Convert::ToDouble(words[16]);
				if (c1 / 4800 * 100 < 85)
					this->textBox34->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox34->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c2 / 4800 * 100 < 85)
					this->textBox33->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox33->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
			}
			else if ((time1 * 100 + time2) >= 930 && (time1 * 100 + time2) < 1030) {
				c1 = System::Convert::ToDouble(words13[16]);
				c2 = System::Convert::ToDouble(words[16]);
				c3 = System::Convert::ToDouble(words2[16]);
				if (c1 / 4800 * 100 < 85)
					this->textBox34->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox34->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c2 / 4800 * 100 < 85)
					this->textBox33->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox33->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c3 / 4800 * 100 < 85)
					this->textBox32->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox32->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
			}
			else if ((time1 * 100 + time2) >= 1030 && (time1 * 100 + time2) < 1130) {
				c1 = System::Convert::ToDouble(words13[16]);
				c2 = System::Convert::ToDouble(words[16]);
				c3 = System::Convert::ToDouble(words2[16]);
				c4 = System::Convert::ToDouble(words3[16]);
				if (c1 / 4800 * 100 < 85)
					this->textBox34->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox34->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c2 / 4800 * 100 < 85)
					this->textBox33->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox33->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c3 / 4800 * 100 < 85)
					this->textBox32->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox32->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c4 / 4800 * 100 < 85)
					this->textBox31->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox31->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
			}

			else if ((time1 * 100 + time2) >= 1130 && (time1 * 100 + time2) < 1230) {
				c1 = System::Convert::ToDouble(words13[16]);
				c2 = System::Convert::ToDouble(words[16]);
				c3 = System::Convert::ToDouble(words2[16]);
				c4 = System::Convert::ToDouble(words3[16]);
				c5 = System::Convert::ToDouble(words4[16]);
				if (c1 / 4800 * 100 < 85)
					this->textBox34->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox34->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c2 / 4800 * 100 < 85)
					this->textBox33->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox33->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c3 / 4800 * 100 < 85)
					this->textBox32->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox32->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c4 / 4800 * 100 < 85)
					this->textBox31->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox31->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c5 / 4800 * 100 < 85)
					this->textBox30->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox30->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
			}
			else if ((time1 * 100 + time2) >= 1230 && (time1 * 100 + time2) < 1330) {
				c1 = System::Convert::ToDouble(words13[16]);
				c2 = System::Convert::ToDouble(words[16]);
				c3 = System::Convert::ToDouble(words2[16]);
				c4 = System::Convert::ToDouble(words3[16]);
				c5 = System::Convert::ToDouble(words4[16]);
				c6 = System::Convert::ToDouble(words5[16]);
				if (c1 / 4800 * 100 < 85)
					this->textBox34->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox34->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c2 / 4800 * 100 < 85)
					this->textBox33->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox33->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c3 / 4800 * 100 < 85)
					this->textBox32->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox32->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c4 / 4800 * 100 < 85)
					this->textBox31->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox31->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c5 / 4800 * 100 < 85)
					this->textBox30->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox30->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c6 / 4800 * 100 < 85)
					this->textBox29->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox29->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
			}
			else if ((time1 * 100 + time2) >= 1330 && (time1 * 100 + time2) < 1430) {
				c1 = System::Convert::ToDouble(words13[16]);
				c2 = System::Convert::ToDouble(words[16]);
				c3 = System::Convert::ToDouble(words2[16]);
				c4 = System::Convert::ToDouble(words3[16]);
				c5 = System::Convert::ToDouble(words4[16]);
				c6 = System::Convert::ToDouble(words5[16]);
				c7 = System::Convert::ToDouble(words6[16]);
				if (c1 / 4800 * 100 < 85)
					this->textBox34->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox34->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c2 / 4800 * 100 < 85)
					this->textBox33->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox33->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c3 / 4800 * 100 < 85)
					this->textBox32->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox32->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c4 / 4800 * 100 < 85)
					this->textBox31->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox31->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c5 / 4800 * 100 < 85)
					this->textBox30->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox30->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c6 / 4800 * 100 < 85)
					this->textBox29->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox29->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c7 / 4800 * 100 < 85)
					this->textBox28->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox28->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
			}
			else if ((time1 * 100 + time2) >= 1430 && (time1 * 100 + time2) < 1530) {
				c1 = System::Convert::ToDouble(words13[16]);
				c2 = System::Convert::ToDouble(words[16]);
				c3 = System::Convert::ToDouble(words2[16]);
				c4 = System::Convert::ToDouble(words3[16]);
				c5 = System::Convert::ToDouble(words4[16]);
				c6 = System::Convert::ToDouble(words5[16]);
				c7 = System::Convert::ToDouble(words6[16]);
				c8 = System::Convert::ToDouble(words7[16]);
				if (c1 / 4800 * 100 < 85)
					this->textBox34->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox34->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c2 / 4800 * 100 < 85)
					this->textBox33->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox33->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c3 / 4800 * 100 < 85)
					this->textBox32->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox32->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c4 / 4800 * 100 < 85)
					this->textBox31->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox31->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c5 / 4800 * 100 < 85)
					this->textBox30->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox30->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c6 / 4800 * 100 < 85)
					this->textBox29->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox29->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c7 / 4800 * 100 < 85)
					this->textBox28->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox28->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c8 / 4800 * 100 < 85)
					this->textBox27->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox27->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
			}
			else if ((time1 * 100 + time2) >= 1530 && (time1 * 100 + time2) < 1630) {
				c1 = System::Convert::ToDouble(words13[16]);
				c2 = System::Convert::ToDouble(words[16]);
				c3 = System::Convert::ToDouble(words2[16]);
				c4 = System::Convert::ToDouble(words3[16]);
				c5 = System::Convert::ToDouble(words4[16]);
				c6 = System::Convert::ToDouble(words5[16]);
				c7 = System::Convert::ToDouble(words6[16]);
				c8 = System::Convert::ToDouble(words7[16]);
				c9 = System::Convert::ToDouble(words8[16]);
				if (c1 / 4800 * 100 < 85)
					this->textBox34->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox34->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c2 / 4800 * 100 < 85)
					this->textBox33->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox33->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c3 / 4800 * 100 < 85)
					this->textBox32->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox32->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c4 / 4800 * 100 < 85)
					this->textBox31->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox31->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c5 / 4800 * 100 < 85)
					this->textBox30->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox30->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c6 / 4800 * 100 < 85)
					this->textBox29->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox29->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c7 / 4800 * 100 < 85)
					this->textBox28->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox28->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c8 / 4800 * 100 < 85)
					this->textBox27->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox27->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c9 / 4800 * 100 < 85)
					this->textBox26->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox26->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
			}
			else if ((time1 * 100 + time2) >= 1630 && (time1 * 100 + time2) < 1730) {
				c1 = System::Convert::ToDouble(words13[16]);
				c2 = System::Convert::ToDouble(words[16]);
				c3 = System::Convert::ToDouble(words2[16]);
				c4 = System::Convert::ToDouble(words3[16]);
				c5 = System::Convert::ToDouble(words4[16]);
				c6 = System::Convert::ToDouble(words5[16]);
				c7 = System::Convert::ToDouble(words6[16]);
				c8 = System::Convert::ToDouble(words7[16]);
				c9 = System::Convert::ToDouble(words8[16]);
				c10 = System::Convert::ToDouble(words9[16]);
				if (c1 / 4800 * 100 < 85)
					this->textBox34->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox34->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c2 / 4800 * 100 < 85)
					this->textBox33->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox33->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c3 / 4800 * 100 < 85)
					this->textBox32->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox32->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c4 / 4800 * 100 < 85)
					this->textBox31->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox31->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c5 / 4800 * 100 < 85)
					this->textBox30->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox30->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c6 / 4800 * 100 < 85)
					this->textBox29->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox29->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c7 / 4800 * 100 < 85)
					this->textBox28->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox28->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c8 / 4800 * 100 < 85)
					this->textBox27->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox27->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c9 / 4800 * 100 < 85)
					this->textBox26->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox26->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c10 / 4800 * 100 < 85)
					this->textBox14->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
			}
			else if ((time1 * 100 + time2) >= 1730 && (time1 * 100 + time2) < 1830) {
				c1 = System::Convert::ToDouble(words13[16]);
				c2 = System::Convert::ToDouble(words[16]);
				c3 = System::Convert::ToDouble(words2[16]);
				c4 = System::Convert::ToDouble(words3[16]);
				c5 = System::Convert::ToDouble(words4[16]);
				c6 = System::Convert::ToDouble(words5[16]);
				c7 = System::Convert::ToDouble(words6[16]);
				c8 = System::Convert::ToDouble(words7[16]);
				c9 = System::Convert::ToDouble(words8[16]);
				c10 = System::Convert::ToDouble(words9[16]);
				c11 = System::Convert::ToDouble(words11[16]);
				if (c1 / 4800 * 100 < 85)
					this->textBox34->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox34->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c2 / 4800 * 100 < 85)
					this->textBox33->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox33->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c3 / 4800 * 100 < 85)
					this->textBox32->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox32->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c4 / 4800 * 100 < 85)
					this->textBox31->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox31->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c5 / 4800 * 100 < 85)
					this->textBox30->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox30->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c6 / 4800 * 100 < 85)
					this->textBox29->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox29->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c7 / 4800 * 100 < 85)
					this->textBox28->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox28->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c8 / 4800 * 100 < 85)
					this->textBox27->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox27->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c9 / 4800 * 100 < 85)
					this->textBox26->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox26->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c10 / 4800 * 100 < 85)
					this->textBox14->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c11 / 4800 * 100 < 85)
					this->textBox13->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
			}
			else if ((time1 * 100 + time2) >= 1830 && (time1 * 100 + time2) < 1930) {
				c1 = System::Convert::ToDouble(words13[16]);
				c2 = System::Convert::ToDouble(words[16]);
				c3 = System::Convert::ToDouble(words2[16]);
				c4 = System::Convert::ToDouble(words3[16]);
				c5 = System::Convert::ToDouble(words4[16]);
				c6 = System::Convert::ToDouble(words5[16]);
				c7 = System::Convert::ToDouble(words6[16]);
				c8 = System::Convert::ToDouble(words7[16]);
				c9 = System::Convert::ToDouble(words8[16]);
				c10 = System::Convert::ToDouble(words9[16]);
				c11 = System::Convert::ToDouble(words11[16]);
				c12 = System::Convert::ToDouble(words12[16]);

				if (c1 / 4800 * 100 < 85)
					this->textBox34->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox34->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c2 / 4800 * 100 < 85)
					this->textBox33->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox33->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c3 / 4800 * 100 < 85)
					this->textBox32->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox32->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c4 / 4800 * 100 < 85)
					this->textBox31->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox31->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c5 / 4800 * 100 < 85)
					this->textBox30->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox30->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c6 / 4800 * 100 < 85)
					this->textBox29->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox29->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c7 / 4800 * 100 < 85)
					this->textBox28->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox28->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c8 / 4800 * 100 < 85)
					this->textBox27->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox27->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c9 / 4800 * 100 < 85)
					this->textBox26->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox26->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c10 / 4800 * 100 < 85)
					this->textBox14->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c11 / 4800 * 100 < 85)
					this->textBox13->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c12 / 4800 * 100 < 85)
					this->textBox12->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
			}
			else if ((time1 * 100 + time2) >= 1930 && (time1 * 100 + time2) < 2030) {
				c1 = System::Convert::ToDouble(words13[16]);

				if (c1 / 4800 * 100 < 85)
					this->textBox34->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox34->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
			}
			else if ((time1 * 100 + time2) >= 2030 && (time1 * 100 + time2) < 2130) {
				c1 = System::Convert::ToDouble(words13[16]);
				c2 = System::Convert::ToDouble(words[16]);

				if (c1 / 4800 * 100 < 85)
					this->textBox34->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox34->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c2 / 4800 * 100 < 85)
					this->textBox33->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox33->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
			}
			else if ((time1 * 100 + time2) >= 2130 && (time1 * 100 + time2) < 2230) {
				c1 = System::Convert::ToDouble(words13[16]);
				c2 = System::Convert::ToDouble(words[16]);
				c3 = System::Convert::ToDouble(words2[16]);

				if (c1 / 4800 * 100 < 85)
					this->textBox34->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox34->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c2 / 4800 * 100 < 85)
					this->textBox33->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox33->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c3 / 4800 * 100 < 85)
					this->textBox32->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox32->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
			}
			else if ((time1 * 100 + time2) >= 2230 && (time1 * 100 + time2) < 2330) {
				c1 = System::Convert::ToDouble(words13[16]);
				c2 = System::Convert::ToDouble(words[16]);
				c3 = System::Convert::ToDouble(words2[16]);
				c4 = System::Convert::ToDouble(words3[16]);

				if (c1 / 4800 * 100 < 85)
					this->textBox34->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox34->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c2 / 4800 * 100 < 85)
					this->textBox33->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox33->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c3 / 4800 * 100 < 85)
					this->textBox32->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox32->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c4 / 4800 * 100 < 85)
					this->textBox31->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox31->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
			}

			else if ((time1 * 100 + time2) >= 2330 && (time1 * 100 + time2) < 2430) {
				c1 = System::Convert::ToDouble(words13[16]);
				c2 = System::Convert::ToDouble(words[16]);
				c3 = System::Convert::ToDouble(words2[16]);
				c4 = System::Convert::ToDouble(words3[16]);
				c5 = System::Convert::ToDouble(words4[16]);

				if (c1 / 4800 * 100 < 85)
					this->textBox34->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox34->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c2 / 4800 * 100 < 85)
					this->textBox33->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox33->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c3 / 4800 * 100 < 85)
					this->textBox32->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox32->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c4 / 4800 * 100 < 85)
					this->textBox31->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox31->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c5 / 4800 * 100 < 85)
					this->textBox30->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox30->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
			}
			else if ((time1 * 100 + time2) >= 2430 && (time1 * 100 + time2) < 0130) {
				c1 = System::Convert::ToDouble(words13[16]);
				c2 = System::Convert::ToDouble(words[16]);
				c3 = System::Convert::ToDouble(words2[16]);
				c4 = System::Convert::ToDouble(words3[16]);
				c5 = System::Convert::ToDouble(words4[16]);
				c6 = System::Convert::ToDouble(words5[16]);

				if (c1 / 4800 * 100 < 85)
					this->textBox34->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox34->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c2 / 4800 * 100 < 85)
					this->textBox33->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox33->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c3 / 4800 * 100 < 85)
					this->textBox32->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox32->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c4 / 4800 * 100 < 85)
					this->textBox31->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox31->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c5 / 4800 * 100 < 85)
					this->textBox30->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox30->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c6 / 4800 * 100 < 85)
					this->textBox29->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox29->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
			}
			else if ((time1 * 100 + time2) >= 0130 && (time1 * 100 + time2) < 0230) {
				c1 = System::Convert::ToDouble(words13[16]);
				c2 = System::Convert::ToDouble(words[16]);
				c3 = System::Convert::ToDouble(words2[16]);
				c4 = System::Convert::ToDouble(words3[16]);
				c5 = System::Convert::ToDouble(words4[16]);
				c6 = System::Convert::ToDouble(words5[16]);
				c7 = System::Convert::ToDouble(words6[16]);

				if (c1 / 4800 * 100 < 85)
					this->textBox34->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox34->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c2 / 4800 * 100 < 85)
					this->textBox33->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox33->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c3 / 4800 * 100 < 85)
					this->textBox32->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox32->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c4 / 4800 * 100 < 85)
					this->textBox31->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox31->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c5 / 4800 * 100 < 85)
					this->textBox30->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox30->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c6 / 4800 * 100 < 85)
					this->textBox29->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox29->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c7 / 4800 * 100 < 85)
					this->textBox28->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox28->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
			}
			else if ((time1 * 100 + time2) >= 0230 && (time1 * 100 + time2) < 0330) {
				c1 = System::Convert::ToDouble(words13[16]);
				c2 = System::Convert::ToDouble(words[16]);
				c3 = System::Convert::ToDouble(words2[16]);
				c4 = System::Convert::ToDouble(words3[16]);
				c5 = System::Convert::ToDouble(words4[16]);
				c6 = System::Convert::ToDouble(words5[16]);
				c7 = System::Convert::ToDouble(words6[16]);
				c8 = System::Convert::ToDouble(words7[16]);

				if (c1 / 4800 * 100 < 85)
					this->textBox34->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox34->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c2 / 4800 * 100 < 85)
					this->textBox33->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox33->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c3 / 4800 * 100 < 85)
					this->textBox32->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox32->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c4 / 4800 * 100 < 85)
					this->textBox31->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox31->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c5 / 4800 * 100 < 85)
					this->textBox30->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox30->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c6 / 4800 * 100 < 85)
					this->textBox29->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox29->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c7 / 4800 * 100 < 85)
					this->textBox28->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox28->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c8 / 4800 * 100 < 85)
					this->textBox27->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox27->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
			}
			else if ((time1 * 100 + time2) >= 0330 && (time1 * 100 + time2) < 0430) {
				c1 = System::Convert::ToDouble(words13[16]);
				c2 = System::Convert::ToDouble(words[16]);
				c3 = System::Convert::ToDouble(words2[16]);
				c4 = System::Convert::ToDouble(words3[16]);
				c5 = System::Convert::ToDouble(words4[16]);
				c6 = System::Convert::ToDouble(words5[16]);
				c7 = System::Convert::ToDouble(words6[16]);
				c8 = System::Convert::ToDouble(words7[16]);
				c9 = System::Convert::ToDouble(words8[16]);

				if (c1 / 4800 * 100 < 85)
					this->textBox34->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox34->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c2 / 4800 * 100 < 85)
					this->textBox33->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox33->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c3 / 4800 * 100 < 85)
					this->textBox32->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox32->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c4 / 4800 * 100 < 85)
					this->textBox31->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox31->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c5 / 4800 * 100 < 85)
					this->textBox30->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox30->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c6 / 4800 * 100 < 85)
					this->textBox29->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox29->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c7 / 4800 * 100 < 85)
					this->textBox28->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox28->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c8 / 4800 * 100 < 85)
					this->textBox27->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox27->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c9 / 4800 * 100 < 85)
					this->textBox26->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox26->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
			}
			else if ((time1 * 100 + time2) >= 0430 && (time1 * 100 + time2) < 0530) {
				c1 = System::Convert::ToDouble(words13[16]);
				c2 = System::Convert::ToDouble(words[16]);
				c3 = System::Convert::ToDouble(words2[16]);
				c4 = System::Convert::ToDouble(words3[16]);
				c5 = System::Convert::ToDouble(words4[16]);
				c6 = System::Convert::ToDouble(words5[16]);
				c7 = System::Convert::ToDouble(words6[16]);
				c8 = System::Convert::ToDouble(words7[16]);
				c9 = System::Convert::ToDouble(words8[16]);
				c10 = System::Convert::ToDouble(words9[16]);

				if (c1 / 4800 * 100 < 85)
					this->textBox34->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox34->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c2 / 4800 * 100 < 85)
					this->textBox33->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox33->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c3 / 4800 * 100 < 85)
					this->textBox32->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox32->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c4 / 4800 * 100 < 85)
					this->textBox31->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox31->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c5 / 4800 * 100 < 85)
					this->textBox30->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox30->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c6 / 4800 * 100 < 85)
					this->textBox29->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox29->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c7 / 4800 * 100 < 85)
					this->textBox28->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox28->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c8 / 4800 * 100 < 85)
					this->textBox27->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox27->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c9 / 4800 * 100 < 85)
					this->textBox26->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox26->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c10 / 4800 * 100 < 85)
					this->textBox14->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
			}
			else if ((time1 * 100 + time2) >= 0530 && (time1 * 100 + time2) < 0630) {
				c1 = System::Convert::ToDouble(words13[16]);
				c2 = System::Convert::ToDouble(words[16]);
				c3 = System::Convert::ToDouble(words2[16]);
				c4 = System::Convert::ToDouble(words3[16]);
				c5 = System::Convert::ToDouble(words4[16]);
				c6 = System::Convert::ToDouble(words5[16]);
				c7 = System::Convert::ToDouble(words6[16]);
				c8 = System::Convert::ToDouble(words7[16]);
				c9 = System::Convert::ToDouble(words8[16]);
				c10 = System::Convert::ToDouble(words9[16]);
				c11 = System::Convert::ToDouble(words10[16]);

				if (c1 / 4800 * 100 < 85)
					this->textBox34->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox34->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c2 / 4800 * 100 < 85)
					this->textBox33->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox33->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c3 / 4800 * 100 < 85)
					this->textBox32->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox32->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c4 / 4800 * 100 < 85)
					this->textBox31->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox31->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c5 / 4800 * 100 < 85)
					this->textBox30->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox30->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c6 / 4800 * 100 < 85)
					this->textBox29->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox29->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c7 / 4800 * 100 < 85)
					this->textBox28->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox28->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c8 / 4800 * 100 < 85)
					this->textBox27->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox27->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c9 / 4800 * 100 < 85)
					this->textBox26->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox26->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c10 / 4800 * 100 < 85)
					this->textBox14->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c11 / 4800 * 100 < 85)
					this->textBox13->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
			}
			else if ((time1 * 100 + time2) >= 0630 && (time1 * 100 + time2) < 0730) {
				c1 = System::Convert::ToDouble(words13[16]);
				c2 = System::Convert::ToDouble(words[16]);
				c3 = System::Convert::ToDouble(words2[16]);
				c4 = System::Convert::ToDouble(words3[16]);
				c5 = System::Convert::ToDouble(words4[16]);
				c6 = System::Convert::ToDouble(words5[16]);
				c7 = System::Convert::ToDouble(words6[16]);
				c8 = System::Convert::ToDouble(words7[16]);
				c9 = System::Convert::ToDouble(words8[16]);
				c10 = System::Convert::ToDouble(words9[16]);
				c11 = System::Convert::ToDouble(words10[16]);
				c12 = System::Convert::ToDouble(words11[16]);

				if (c1 / 4800 * 100 < 85)
					this->textBox34->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox34->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c2 / 4800 * 100 < 85)
					this->textBox33->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox33->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c3 / 4800 * 100 < 85)
					this->textBox32->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox32->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c4 / 4800 * 100 < 85)
					this->textBox31->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox31->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c5 / 4800 * 100 < 85)
					this->textBox30->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox30->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c6 / 4800 * 100 < 85)
					this->textBox29->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox29->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c7 / 4800 * 100 < 85)
					this->textBox28->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox28->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c8 / 4800 * 100 < 85)
					this->textBox27->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox27->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c9 / 4800 * 100 < 85)
					this->textBox26->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox26->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c10 / 4800 * 100 < 85)
					this->textBox14->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c11 / 4800 * 100 < 85)
					this->textBox13->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (c12 / 4800 * 100 < 85)
					this->textBox12->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
			}

			//Line 1 Toyo 3 - Previous hours
		 if ((time1 * 100 + time2) >= 730 && (time1 * 100 + time2) < 830) {
				d1 = System::Convert::ToDouble(words13[24]);

				if (d1 / 4800 * 100 < 85)
					this->textBox48->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox48->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
			}
			else if ((time1 * 100 + time2) >= 830 && (time1 * 100 + time2) < 930) {
				d1 = System::Convert::ToDouble(words13[24]);
				d2 = System::Convert::ToDouble(words[24]);

				if (d1 / 4800 * 100 < 85)
					this->textBox48->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox48->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (d2 / 4800 * 100 < 85)
					this->textBox47->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox47->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
			}
			else if ((time1 * 100 + time2) >= 930 && (time1 * 100 + time2) < 1030) {
				d1 = System::Convert::ToDouble(words13[24]);
				d2 = System::Convert::ToDouble(words[24]);
				d3 = System::Convert::ToDouble(words2[24]);

				if (d1 / 4800 * 100 < 85)
					this->textBox48->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox48->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (d2 / 4800 * 100 < 85)
					this->textBox47->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox47->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (d3 / 4800 * 100 < 85)
					this->textBox46->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox46->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
			}
			
			else if ((time1 * 100 + time2) >= 1030 && (time1 * 100 + time2) < 1130) {
				d1 = System::Convert::ToDouble(words13[24]);
				d2 = System::Convert::ToDouble(words[24]);
				d3 = System::Convert::ToDouble(words2[24]);
				d4 = System::Convert::ToDouble(words3[24]);

				if (d1 / 4800 * 100 < 85)
					this->textBox48->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox48->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (d2 / 4800 * 100 < 85)
					this->textBox47->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox47->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (d3 / 4800 * 100 < 85)
					this->textBox46->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox46->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (d4 / 4800 * 100 < 85)
					this->textBox45->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox45->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
			}
				
			else if ((time1 * 100 + time2) >= 1130 && (time1 * 100 + time2) < 1230) {
				d1 = System::Convert::ToDouble(words13[24]);
				d2 = System::Convert::ToDouble(words[24]);
				d3 = System::Convert::ToDouble(words2[24]);
				d4 = System::Convert::ToDouble(words3[24]);
				d5 = System::Convert::ToDouble(words4[24]);

				if (d1 / 4800 * 100 < 85)
					this->textBox48->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox48->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (d2 / 4800 * 100 < 85)
					this->textBox47->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox47->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (d3 / 4800 * 100 < 85)
					this->textBox46->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox46->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (d4 / 4800 * 100 < 85)
					this->textBox45->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox45->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (d5 / 4800 * 100 < 85)
					this->textBox44->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox44->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
			}
				
			else if ((time1 * 100 + time2) >= 1230 && (time1 * 100 + time2) < 1330) {
				d1 = System::Convert::ToDouble(words13[24]);
				d2 = System::Convert::ToDouble(words[24]);
				d3 = System::Convert::ToDouble(words2[24]);
				d4 = System::Convert::ToDouble(words3[24]);
				d5 = System::Convert::ToDouble(words4[24]);
				d6 = System::Convert::ToDouble(words5[24]);

				if (d1 / 4800 * 100 < 85)
					this->textBox48->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox48->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (d2 / 4800 * 100 < 85)
					this->textBox47->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox47->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (d3 / 4800 * 100 < 85)
					this->textBox46->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox46->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (d4 / 4800 * 100 < 85)
					this->textBox45->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox45->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (d5 / 4800 * 100 < 85)
					this->textBox44->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox44->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (d6 / 4800 * 100 < 85)
					this->textBox43->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox43->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
			}
				
			else if ((time1 * 100 + time2) >= 1330 && (time1 * 100 + time2) < 1430) {
				d1 = System::Convert::ToDouble(words13[24]);
				d2 = System::Convert::ToDouble(words[24]);
				d3 = System::Convert::ToDouble(words2[24]);
				d4 = System::Convert::ToDouble(words3[24]);
				d5 = System::Convert::ToDouble(words4[24]);
				d6 = System::Convert::ToDouble(words5[24]);
				d7 = System::Convert::ToDouble(words6[24]);

				if (d1 / 4800 * 100 < 85)
					this->textBox48->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox48->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (d2 / 4800 * 100 < 85)
					this->textBox47->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox47->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (d3 / 4800 * 100 < 85)
					this->textBox46->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox46->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (d4 / 4800 * 100 < 85)
					this->textBox45->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox45->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (d5 / 4800 * 100 < 85)
					this->textBox44->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox44->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (d6 / 4800 * 100 < 85)
					this->textBox43->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox43->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (d7 / 4800 * 100 < 85)
					this->textBox42->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox42->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
			}

			
			else if ((time1 * 100 + time2) >= 1430 && (time1 * 100 + time2) < 1530) {
				d1 = System::Convert::ToDouble(words13[24]);
				d2 = System::Convert::ToDouble(words[24]);
				d3 = System::Convert::ToDouble(words2[24]);
				d4 = System::Convert::ToDouble(words3[24]);
				d5 = System::Convert::ToDouble(words4[24]);
				d6 = System::Convert::ToDouble(words5[24]);
				d7 = System::Convert::ToDouble(words6[24]);
				d8 = System::Convert::ToDouble(words7[24]);

				if (d1 / 4800 * 100 < 85)
					this->textBox48->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox48->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (d2 / 4800 * 100 < 85)
					this->textBox47->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox47->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (d3 / 4800 * 100 < 85)
					this->textBox46->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox46->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (d4 / 4800 * 100 < 85)
					this->textBox45->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox45->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (d5 / 4800 * 100 < 85)
					this->textBox44->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox44->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (d6 / 4800 * 100 < 85)
					this->textBox43->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox43->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (d7 / 4800 * 100 < 85)
					this->textBox42->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox42->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (d8 / 4800 * 100 < 85)
					this->textBox41->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox41->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
			}

				
			else if ((time1 * 100 + time2) >= 1530 && (time1 * 100 + time2) < 1630) {
				d1 = System::Convert::ToDouble(words13[24]);
				d2 = System::Convert::ToDouble(words[24]);
				d3 = System::Convert::ToDouble(words2[24]);
				d4 = System::Convert::ToDouble(words3[24]);
				d5 = System::Convert::ToDouble(words4[24]);
				d6 = System::Convert::ToDouble(words5[24]);
				d7 = System::Convert::ToDouble(words6[24]);
				d8 = System::Convert::ToDouble(words7[24]);
				d9 = System::Convert::ToDouble(words8[24]);

				if (d1 / 4800 * 100 < 85)
					this->textBox48->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox48->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (d2 / 4800 * 100 < 85)
					this->textBox47->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox47->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (d3 / 4800 * 100 < 85)
					this->textBox46->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox46->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (d4 / 4800 * 100 < 85)
					this->textBox45->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox45->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (d5 / 4800 * 100 < 85)
					this->textBox44->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox44->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (d6 / 4800 * 100 < 85)
					this->textBox43->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox43->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (d7 / 4800 * 100 < 85)
					this->textBox42->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox42->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (d8 / 4800 * 100 < 85)
					this->textBox41->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox41->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (d9 / 4800 * 100 < 85)
					this->textBox40->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox40->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
			}

				
			else if ((time1 * 100 + time2) >= 1630 && (time1 * 100 + time2) < 1730) {
				d1 = System::Convert::ToDouble(words13[24]);
				d2 = System::Convert::ToDouble(words[24]);
				d3 = System::Convert::ToDouble(words2[24]);
				d4 = System::Convert::ToDouble(words3[24]);
				d5 = System::Convert::ToDouble(words4[24]);
				d6 = System::Convert::ToDouble(words5[24]);
				d7 = System::Convert::ToDouble(words6[24]);
				d8 = System::Convert::ToDouble(words7[24]);
				d9 = System::Convert::ToDouble(words8[24]);
				d10 = System::Convert::ToDouble(words9[24]);

				if (d1 / 4800 * 100 < 85)
					this->textBox48->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox48->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (d2 / 4800 * 100 < 85)
					this->textBox47->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox47->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (d3 / 4800 * 100 < 85)
					this->textBox46->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox46->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (d4 / 4800 * 100 < 85)
					this->textBox45->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox45->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (d5 / 4800 * 100 < 85)
					this->textBox44->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox44->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (d6 / 4800 * 100 < 85)
					this->textBox43->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox43->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (d7 / 4800 * 100 < 85)
					this->textBox42->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox42->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (d8 / 4800 * 100 < 85)
					this->textBox41->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox41->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (d9 / 4800 * 100 < 85)
					this->textBox40->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox40->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (d10 / 4800 * 100 < 85)
					this->textBox39->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox39->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
			}
				
			else if ((time1 * 100 + time2) >= 1730 && (time1 * 100 + time2) < 1830) {
				d1 = System::Convert::ToDouble(words13[24]);
				d2 = System::Convert::ToDouble(words[24]);
				d3 = System::Convert::ToDouble(words2[24]);
				d4 = System::Convert::ToDouble(words3[24]);
				d5 = System::Convert::ToDouble(words4[24]);
				d6 = System::Convert::ToDouble(words5[24]);
				d7 = System::Convert::ToDouble(words6[24]);
				d8 = System::Convert::ToDouble(words7[24]);
				d9 = System::Convert::ToDouble(words8[24]);
				d10 = System::Convert::ToDouble(words9[24]);
				d11 = System::Convert::ToDouble(words10[24]);

				if (d1 / 4800 * 100 < 85)
					this->textBox48->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox48->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (d2 / 4800 * 100 < 85)
					this->textBox47->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox47->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (d3 / 4800 * 100 < 85)
					this->textBox46->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox46->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (d4 / 4800 * 100 < 85)
					this->textBox45->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox45->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (d5 / 4800 * 100 < 85)
					this->textBox44->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox44->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (d6 / 4800 * 100 < 85)
					this->textBox43->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox43->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (d7 / 4800 * 100 < 85)
					this->textBox42->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox42->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (d8 / 4800 * 100 < 85)
					this->textBox41->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox41->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (d9 / 4800 * 100 < 85)
					this->textBox40->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox40->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (d10 / 4800 * 100 < 85)
					this->textBox39->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox39->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (d11 / 4800 * 100 < 85)
					this->textBox39->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox39->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
			}
				
			else if ((time1 * 100 + time2) >= 1830 && (time1 * 100 + time2) < 1930) {
				d1 = System::Convert::ToDouble(words13[24]);
				d2 = System::Convert::ToDouble(words[24]);
				d3 = System::Convert::ToDouble(words2[24]);
				d4 = System::Convert::ToDouble(words3[24]);
				d5 = System::Convert::ToDouble(words4[24]);
				d6 = System::Convert::ToDouble(words5[24]);
				d7 = System::Convert::ToDouble(words6[24]);
				d8 = System::Convert::ToDouble(words7[24]);
				d9 = System::Convert::ToDouble(words8[24]);
				d10 = System::Convert::ToDouble(words9[24]);
				d11 = System::Convert::ToDouble(words10[24]);
				d12 = System::Convert::ToDouble(words11[24]);

				if (d1 / 4800 * 100 < 85)
					this->textBox48->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox48->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (d2 / 4800 * 100 < 85)
					this->textBox47->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox47->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (d3 / 4800 * 100 < 85)
					this->textBox46->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox46->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (d4 / 4800 * 100 < 85)
					this->textBox45->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox45->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (d5 / 4800 * 100 < 85)
					this->textBox44->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox44->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (d6 / 4800 * 100 < 85)
					this->textBox43->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox43->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (d7 / 4800 * 100 < 85)
					this->textBox42->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox42->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (d8 / 4800 * 100 < 85)
					this->textBox41->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox41->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (d9 / 4800 * 100 < 85)
					this->textBox40->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox40->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (d10 / 4800 * 100 < 85)
					this->textBox39->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox39->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (d11 / 4800 * 100 < 85)
					this->textBox38->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox38->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
				if (d12 / 4800 * 100 < 85)
					this->textBox37->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox37->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
			}
				
			
			else if ((time1 * 100 + time2) >= 1930 && (time1 * 100 + time2) < 2030) {
				d1 = System::Convert::ToDouble(words13[24]);

				if (d1 / 4800 * 100 < 85)
					this->textBox48->BackColor = System::Drawing::Color::Red;
				else {
					this->textBox48->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
						static_cast<System::Int32>(static_cast<System::Byte>(0)));
				}
			}
				else if ((time1 * 100 + time2) >= 2030 && (time1 * 100 + time2) < 2130) {
					d1 = System::Convert::ToDouble(words13[24]);
					d2 = System::Convert::ToDouble(words[24]);

					if (d1 / 4800 * 100 < 85)
						this->textBox48->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox48->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (d2 / 4800 * 100 < 85)
						this->textBox47->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox47->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
				}
					
				else if ((time1 * 100 + time2) >= 2130 && (time1 * 100 + time2) < 2230) {
					d1 = System::Convert::ToDouble(words13[24]);
					d2 = System::Convert::ToDouble(words[24]);
					d3 = System::Convert::ToDouble(words2[24]);

					if (d1 / 4800 * 100 < 85)
						this->textBox48->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox48->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (d2 / 4800 * 100 < 85)
						this->textBox47->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox47->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (d3 / 4800 * 100 < 85)
						this->textBox46->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox46->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
				}
			
				else if ((time1 * 100 + time2) >= 2230 && (time1 * 100 + time2) < 2330) {
					d1 = System::Convert::ToDouble(words13[24]);
					d2 = System::Convert::ToDouble(words[24]);
					d3 = System::Convert::ToDouble(words2[24]);
					d4 = System::Convert::ToDouble(words3[24]);

					if (d1 / 4800 * 100 < 85)
						this->textBox48->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox48->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (d2 / 4800 * 100 < 85)
						this->textBox47->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox47->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (d3 / 4800 * 100 < 85)
						this->textBox46->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox46->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (d4 / 4800 * 100 < 85)
						this->textBox45->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox45->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
				}
					
				else if ((time1 * 100 + time2) >= 2330 && (time1 * 100 + time2) < 2430) {
					d1 = System::Convert::ToDouble(words13[24]);
					d2 = System::Convert::ToDouble(words[24]);
					d3 = System::Convert::ToDouble(words2[24]);
					d4 = System::Convert::ToDouble(words3[24]);
					d5 = System::Convert::ToDouble(words4[24]);

					if (d1 / 4800 * 100 < 85)
						this->textBox48->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox48->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (d2 / 4800 * 100 < 85)
						this->textBox47->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox47->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (d3 / 4800 * 100 < 85)
						this->textBox46->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox46->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (d4 / 4800 * 100 < 85)
						this->textBox45->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox45->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (d5 / 4800 * 100 < 85)
						this->textBox44->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox44->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
				}
					
				else if ((time1 * 100 + time2) >= 2430 && (time1 * 100 + time2) < 130) {
					d1 = System::Convert::ToDouble(words13[24]);
					d2 = System::Convert::ToDouble(words[24]);
					d3 = System::Convert::ToDouble(words2[24]);
					d4 = System::Convert::ToDouble(words3[24]);
					d5 = System::Convert::ToDouble(words4[24]);
					d6 = System::Convert::ToDouble(words5[24]);

					if (d1 / 4800 * 100 < 85)
						this->textBox48->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox48->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (d2 / 4800 * 100 < 85)
						this->textBox47->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox47->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (d3 / 4800 * 100 < 85)
						this->textBox46->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox46->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (d4 / 4800 * 100 < 85)
						this->textBox45->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox45->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (d5 / 4800 * 100 < 85)
						this->textBox44->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox44->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (d6 / 4800 * 100 < 85)
						this->textBox43->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox43->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
				}

					
				else if ((time1 * 100 + time2) >= 130 && (time1 * 100 + time2) < 230)	{
					d1 = System::Convert::ToDouble(words13[24]);
					d2 = System::Convert::ToDouble(words[24]);
					d3 = System::Convert::ToDouble(words2[24]);
					d4 = System::Convert::ToDouble(words3[24]);
					d5 = System::Convert::ToDouble(words4[24]);
					d6 = System::Convert::ToDouble(words5[24]);
					d7 = System::Convert::ToDouble(words6[24]);

					if (d1 / 4800 * 100 < 85)
						this->textBox48->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox48->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (d2 / 4800 * 100 < 85)
						this->textBox47->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox47->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (d3 / 4800 * 100 < 85)
						this->textBox46->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox46->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (d4 / 4800 * 100 < 85)
						this->textBox45->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox45->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (d5 / 4800 * 100 < 85)
						this->textBox44->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox44->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (d6 / 4800 * 100 < 85)
						this->textBox43->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox43->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (d7 / 4800 * 100 < 85)
						this->textBox42->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox42->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
				}

				else if ((time1 * 100 + time2) >= 230 && (time1 * 100 + time2) < 330) {
					d1 = System::Convert::ToDouble(words13[24]);
					d2 = System::Convert::ToDouble(words[24]);
					d3 = System::Convert::ToDouble(words2[24]);
					d4 = System::Convert::ToDouble(words3[24]);
					d5 = System::Convert::ToDouble(words4[24]);
					d6 = System::Convert::ToDouble(words5[24]);
					d7 = System::Convert::ToDouble(words6[24]);
					d8 = System::Convert::ToDouble(words7[24]);

					if (d1 / 4800 * 100 < 85)
						this->textBox48->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox48->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (d2 / 4800 * 100 < 85)
						this->textBox47->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox47->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (d3 / 4800 * 100 < 85)
						this->textBox46->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox46->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (d4 / 4800 * 100 < 85)
						this->textBox45->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox45->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (d5 / 4800 * 100 < 85)
						this->textBox44->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox44->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (d6 / 4800 * 100 < 85)
						this->textBox43->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox43->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (d7 / 4800 * 100 < 85)
						this->textBox42->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox42->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (d8 / 4800 * 100 < 85)
						this->textBox41->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox41->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
				}

					
				else if ((time1 * 100 + time2) >= 330 && (time1 * 100 + time2) < 430) {
					d1 = System::Convert::ToDouble(words13[24]);
					d2 = System::Convert::ToDouble(words[24]);
					d3 = System::Convert::ToDouble(words2[24]);
					d4 = System::Convert::ToDouble(words3[24]);
					d5 = System::Convert::ToDouble(words4[24]);
					d6 = System::Convert::ToDouble(words5[24]);
					d7 = System::Convert::ToDouble(words6[24]);
					d8 = System::Convert::ToDouble(words7[24]);
					d9 = System::Convert::ToDouble(words8[24]);

					if (d1 / 4800 * 100 < 85)
						this->textBox48->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox48->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (d2 / 4800 * 100 < 85)
						this->textBox47->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox47->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (d3 / 4800 * 100 < 85)
						this->textBox46->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox46->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (d4 / 4800 * 100 < 85)
						this->textBox45->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox45->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (d5 / 4800 * 100 < 85)
						this->textBox44->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox44->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (d6 / 4800 * 100 < 85)
						this->textBox43->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox43->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (d7 / 4800 * 100 < 85)
						this->textBox42->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox42->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (d8 / 4800 * 100 < 85)
						this->textBox41->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox41->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (d9 / 4800 * 100 < 85)
						this->textBox40->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox40->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
				}
					
				else if ((time1 * 100 + time2) >= 430 && (time1 * 100 + time2) < 530) {
					d1 = System::Convert::ToDouble(words13[24]);
					d2 = System::Convert::ToDouble(words[24]);
					d3 = System::Convert::ToDouble(words2[24]);
					d4 = System::Convert::ToDouble(words3[24]);
					d5 = System::Convert::ToDouble(words4[24]);
					d6 = System::Convert::ToDouble(words5[24]);
					d7 = System::Convert::ToDouble(words6[24]);
					d8 = System::Convert::ToDouble(words7[24]);
					d9 = System::Convert::ToDouble(words8[24]);
					d10 = System::Convert::ToDouble(words9[24]);

					if (d1 / 4800 * 100 < 85)
						this->textBox48->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox48->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (d2 / 4800 * 100 < 85)
						this->textBox47->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox47->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (d3 / 4800 * 100 < 85)
						this->textBox46->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox46->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (d4 / 4800 * 100 < 85)
						this->textBox45->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox45->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (d5 / 4800 * 100 < 85)
						this->textBox44->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox44->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (d6 / 4800 * 100 < 85)
						this->textBox43->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox43->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (d7 / 4800 * 100 < 85)
						this->textBox42->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox42->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (d8 / 4800 * 100 < 85)
						this->textBox41->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox41->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (d9 / 4800 * 100 < 85)
						this->textBox40->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox40->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (d10 / 4800 * 100 < 85)
						this->textBox39->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox39->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
				}
					
				else if ((time1 * 100 + time2) >= 530 && (time1 * 100 + time2) < 630) {
					d1 = System::Convert::ToDouble(words13[24]);
					d2 = System::Convert::ToDouble(words[24]);
					d3 = System::Convert::ToDouble(words2[24]);
					d4 = System::Convert::ToDouble(words3[24]);
					d5 = System::Convert::ToDouble(words4[24]);
					d6 = System::Convert::ToDouble(words5[24]);
					d7 = System::Convert::ToDouble(words6[24]);
					d8 = System::Convert::ToDouble(words7[24]);
					d9 = System::Convert::ToDouble(words8[24]);
					d10 = System::Convert::ToDouble(words9[24]);
					d11 = System::Convert::ToDouble(words10[24]);

					if (d1 / 4800 * 100 < 85)
						this->textBox48->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox48->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (d2 / 4800 * 100 < 85)
						this->textBox47->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox47->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (d3 / 4800 * 100 < 85)
						this->textBox46->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox46->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (d4 / 4800 * 100 < 85)
						this->textBox45->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox45->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (d5 / 4800 * 100 < 85)
						this->textBox44->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox44->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (d6 / 4800 * 100 < 85)
						this->textBox43->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox43->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (d7 / 4800 * 100 < 85)
						this->textBox42->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox42->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (d8 / 4800 * 100 < 85)
						this->textBox41->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox41->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (d9 / 4800 * 100 < 85)
						this->textBox40->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox40->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (d10 / 4800 * 100 < 85)
						this->textBox39->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox39->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (d11 / 4800 * 100 < 85)
						this->textBox38->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox38->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
				}
					
				else if ((time1 * 100 + time2) >= 630 && (time1 * 100 + time2) < 730){
					d1 = System::Convert::ToDouble(words13[24]);
					d2 = System::Convert::ToDouble(words[24]);
					d3 = System::Convert::ToDouble(words2[24]);
					d4 = System::Convert::ToDouble(words3[24]);
					d5 = System::Convert::ToDouble(words4[24]);
					d6 = System::Convert::ToDouble(words5[24]);
					d7 = System::Convert::ToDouble(words6[24]);
					d8 = System::Convert::ToDouble(words7[24]);
					d9 = System::Convert::ToDouble(words8[24]);
					d10 = System::Convert::ToDouble(words9[24]);
					d11 = System::Convert::ToDouble(words10[24]);
					d12 = System::Convert::ToDouble(words11[24]);

					if (d1 / 4800 * 100 < 85)
						this->textBox48->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox48->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (d2 / 4800 * 100 < 85)
						this->textBox47->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox47->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (d3 / 4800 * 100 < 85)
						this->textBox46->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox46->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (d4 / 4800 * 100 < 85)
						this->textBox45->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox45->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (d5 / 4800 * 100 < 85)
						this->textBox44->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox44->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (d6 / 4800 * 100 < 85)
						this->textBox43->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox43->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (d7 / 4800 * 100 < 85)
						this->textBox42->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox42->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (d8 / 4800 * 100 < 85)
						this->textBox41->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox41->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (d9 / 4800 * 100 < 85)
						this->textBox40->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox40->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (d10 / 4800 * 100 < 85)
						this->textBox39->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox39->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (d11 / 4800 * 100 < 85)
						this->textBox38->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox38->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (d12 / 4800 * 100 < 85)
						this->textBox37->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox37->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
				}
				//Line1 Toyo 4 - Previous hours
				if ((time1 * 100 + time2) >= 730 && (time1 * 100 + time2) < 830) {
					e1 = System::Convert::ToDouble(words[32]);

					if (e1 / 4800 * 100 < 85)
						this->textBox78->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox78->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
				}
					
				else if ((time1 * 100 + time2) >= 830 && (time1 * 100 + time2) < 930) {
					e1 = System::Convert::ToDouble(words13[32]);
					e2 = System::Convert::ToDouble(words[32]);

					if (e1 / 4800 * 100 < 85)
						this->textBox78->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox78->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e2 / 4800 * 100 < 85)
						this->textBox77->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox77->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
				}
					
				else if ((time1 * 100 + time2) >= 930 && (time1 * 100 + time2) < 1030) {
					e1 = System::Convert::ToDouble(words13[32]);
					e2 = System::Convert::ToDouble(words[32]);
					e3 = System::Convert::ToDouble(words2[32]);

					if (e1 / 4800 * 100 < 85)
						this->textBox78->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox78->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e2 / 4800 * 100 < 85)
						this->textBox77->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox77->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e3/ 4800 * 100 < 85)
						this->textBox76->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox76->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
				}
					
				else if ((time1 * 100 + time2) >= 1030 && (time1 * 100 + time2) < 1130) {
					e1 = System::Convert::ToDouble(words13[32]);
					e2 = System::Convert::ToDouble(words[32]);
					e3 = System::Convert::ToDouble(words2[32]);
					e4 = System::Convert::ToDouble(words3[32]);

					if (e1 / 4800 * 100 < 85)
						this->textBox78->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox78->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e2 / 4800 * 100 < 85)
						this->textBox77->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox77->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e3 / 4800 * 100 < 85)
						this->textBox76->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox76->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e4 / 4800 * 100 < 85)
						this->textBox75->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox75->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
				}
					
				else if ((time1 * 100 + time2) >= 1130 && (time1 * 100 + time2) < 1230) {
					e1 = System::Convert::ToDouble(words13[32]);
					e2 = System::Convert::ToDouble(words[32]);
					e3 = System::Convert::ToDouble(words2[32]);
					e4 = System::Convert::ToDouble(words3[32]);
					e5 = System::Convert::ToDouble(words4[32]);

					if (e1 / 4800 * 100 < 85)
						this->textBox78->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox78->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e2 / 4800 * 100 < 85)
						this->textBox77->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox77->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e3 / 4800 * 100 < 85)
						this->textBox76->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox76->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e4 / 4800 * 100 < 85)
						this->textBox75->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox75->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e5 / 4800 * 100 < 85)
						this->textBox74->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox74->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
				}
					
				else if ((time1 * 100 + time2) >= 1230 && (time1 * 100 + time2) < 1330) {
					e1 = System::Convert::ToDouble(words13[32]);
					e2 = System::Convert::ToDouble(words[32]);
					e3 = System::Convert::ToDouble(words2[32]);
					e4 = System::Convert::ToDouble(words3[32]);
					e5 = System::Convert::ToDouble(words4[32]);
					e6 = System::Convert::ToDouble(words5[32]);

					if (e1 / 4800 * 100 < 85)
						this->textBox78->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox78->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e2 / 4800 * 100 < 85)
						this->textBox77->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox77->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e3 / 4800 * 100 < 85)
						this->textBox76->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox76->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e4 / 4800 * 100 < 85)
						this->textBox75->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox75->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e5 / 4800 * 100 < 85)
						this->textBox74->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox74->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e6 / 4800 * 100 < 85)
						this->textBox73->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox73->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
				}
					
				else if ((time1 * 100 + time2) >= 1330 && (time1 * 100 + time2) < 1430) {
					e1 = System::Convert::ToDouble(words13[32]);
					e2 = System::Convert::ToDouble(words[32]);
					e3 = System::Convert::ToDouble(words2[32]);
					e4 = System::Convert::ToDouble(words3[32]);
					e5 = System::Convert::ToDouble(words4[32]);
					e6 = System::Convert::ToDouble(words5[32]);
					e7 = System::Convert::ToDouble(words6[32]);

					if (e1 / 4800 * 100 < 85)
						this->textBox78->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox78->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e2 / 4800 * 100 < 85)
						this->textBox77->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox77->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e3 / 4800 * 100 < 85)
						this->textBox76->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox76->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e4 / 4800 * 100 < 85)
						this->textBox75->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox75->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e5 / 4800 * 100 < 85)
						this->textBox74->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox74->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e6 / 4800 * 100 < 85)
						this->textBox73->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox73->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e7 / 4800 * 100 < 85)
						this->textBox72->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox72->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
				}
					
				else if ((time1 * 100 + time2) >= 1430 && (time1 * 100 + time2) < 1530) {
					e1 = System::Convert::ToDouble(words13[32]);
					e2 = System::Convert::ToDouble(words[32]);
					e3 = System::Convert::ToDouble(words2[32]);
					e4 = System::Convert::ToDouble(words3[32]);
					e5 = System::Convert::ToDouble(words4[32]);
					e6 = System::Convert::ToDouble(words5[32]);
					e7 = System::Convert::ToDouble(words6[32]);
					e8 = System::Convert::ToDouble(words7[32]);

					if (e1 / 4800 * 100 < 85)
						this->textBox78->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox78->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e2 / 4800 * 100 < 85)
						this->textBox77->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox77->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e3 / 4800 * 100 < 85)
						this->textBox76->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox76->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e4 / 4800 * 100 < 85)
						this->textBox75->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox75->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e5 / 4800 * 100 < 85)
						this->textBox74->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox74->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e6 / 4800 * 100 < 85)
						this->textBox73->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox73->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e7 / 4800 * 100 < 85)
						this->textBox72->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox72->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e8 / 4800 * 100 < 85)
						this->textBox71->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox71->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
				}
					
				else if ((time1 * 100 + time2) >= 1530 && (time1 * 100 + time2) < 1630) {
					e1 = System::Convert::ToDouble(words13[32]);
					e2 = System::Convert::ToDouble(words[32]);
					e3 = System::Convert::ToDouble(words2[32]);
					e4 = System::Convert::ToDouble(words3[32]);
					e5 = System::Convert::ToDouble(words4[32]);
					e6 = System::Convert::ToDouble(words5[32]);
					e7 = System::Convert::ToDouble(words6[32]);
					e8 = System::Convert::ToDouble(words7[32]);
					e9 = System::Convert::ToDouble(words8[32]);

					if (e1 / 4800 * 100 < 85)
						this->textBox78->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox78->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e2 / 4800 * 100 < 85)
						this->textBox77->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox77->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e3 / 4800 * 100 < 85)
						this->textBox76->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox76->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e4 / 4800 * 100 < 85)
						this->textBox75->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox75->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e5 / 4800 * 100 < 85)
						this->textBox74->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox74->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e6 / 4800 * 100 < 85)
						this->textBox73->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox73->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e7 / 4800 * 100 < 85)
						this->textBox72->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox72->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e8 / 4800 * 100 < 85)
						this->textBox71->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox71->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e9 / 4800 * 100 < 85)
						this->textBox70->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox70->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
				}
				
				else if ((time1 * 100 + time2) >= 1630 && (time1 * 100 + time2) < 1730) {
					e1 = System::Convert::ToDouble(words13[32]);
					e2 = System::Convert::ToDouble(words[32]);
					e3 = System::Convert::ToDouble(words2[32]);
					e4 = System::Convert::ToDouble(words3[32]);
					e5 = System::Convert::ToDouble(words4[32]);
					e6 = System::Convert::ToDouble(words5[32]);
					e7 = System::Convert::ToDouble(words6[32]);
					e8 = System::Convert::ToDouble(words7[32]);
					e9 = System::Convert::ToDouble(words8[32]);
					e10 = System::Convert::ToDouble(words9[32]);

					if (e1 / 4800 * 100 < 85)
						this->textBox78->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox78->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e2 / 4800 * 100 < 85)
						this->textBox77->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox77->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e3 / 4800 * 100 < 85)
						this->textBox76->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox76->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e4 / 4800 * 100 < 85)
						this->textBox75->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox75->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e5 / 4800 * 100 < 85)
						this->textBox74->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox74->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e6 / 4800 * 100 < 85)
						this->textBox73->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox73->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e7 / 4800 * 100 < 85)
						this->textBox72->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox72->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e8 / 4800 * 100 < 85)
						this->textBox71->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox71->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e9 / 4800 * 100 < 85)
						this->textBox70->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox70->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e10 / 4800 * 100 < 85)
						this->textBox69->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox69->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
				}
					
				else if ((time1 * 100 + time2) >= 1730 && (time1 * 100 + time2) < 1830) {
					e1 = System::Convert::ToDouble(words13[32]);
					e2 = System::Convert::ToDouble(words[32]);
					e3 = System::Convert::ToDouble(words2[32]);
					e4 = System::Convert::ToDouble(words3[32]);
					e5 = System::Convert::ToDouble(words4[32]);
					e6 = System::Convert::ToDouble(words5[32]);
					e7 = System::Convert::ToDouble(words6[32]);
					e8 = System::Convert::ToDouble(words7[32]);
					e9 = System::Convert::ToDouble(words8[32]);
					e10 = System::Convert::ToDouble(words9[32]);
					e11 = System::Convert::ToDouble(words10[32]);

					if (e1 / 4800 * 100 < 85)
						this->textBox78->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox78->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e2 / 4800 * 100 < 85)
						this->textBox77->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox77->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e3 / 4800 * 100 < 85)
						this->textBox76->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox76->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e4 / 4800 * 100 < 85)
						this->textBox75->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox75->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e5 / 4800 * 100 < 85)
						this->textBox74->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox74->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e6 / 4800 * 100 < 85)
						this->textBox73->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox73->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e7 / 4800 * 100 < 85)
						this->textBox72->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox72->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e8 / 4800 * 100 < 85)
						this->textBox71->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox71->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e9 / 4800 * 100 < 85)
						this->textBox70->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox70->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e10 / 4800 * 100 < 85)
						this->textBox69->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox69->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e11 / 4800 * 100 < 85)
						this->textBox68->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox68->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
				}
				
				else if ((time1 * 100 + time2) >= 1830 && (time1 * 100 + time2) < 1930)
				{
					e1 = System::Convert::ToDouble(words13[32]);
					e2 = System::Convert::ToDouble(words[32]);
					e3 = System::Convert::ToDouble(words2[32]);
					e4 = System::Convert::ToDouble(words3[32]);
					e5 = System::Convert::ToDouble(words4[32]);
					e6 = System::Convert::ToDouble(words5[32]);
					e7 = System::Convert::ToDouble(words6[32]);
					e8 = System::Convert::ToDouble(words7[32]);
					e9 = System::Convert::ToDouble(words8[32]);
					e10 = System::Convert::ToDouble(words9[32]);
					e11 = System::Convert::ToDouble(words10[32]);
					e12 = System::Convert::ToDouble(words11[32]);

					if (e1 / 4800 * 100 < 85)
						this->textBox78->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox78->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e2 / 4800 * 100 < 85)
						this->textBox77->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox77->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e3 / 4800 * 100 < 85)
						this->textBox76->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox76->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e4 / 4800 * 100 < 85)
						this->textBox75->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox75->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e5 / 4800 * 100 < 85)
						this->textBox74->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox74->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e6 / 4800 * 100 < 85)
						this->textBox73->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox73->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e7 / 4800 * 100 < 85)
						this->textBox72->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox72->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e8 / 4800 * 100 < 85)
						this->textBox71->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox71->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e9 / 4800 * 100 < 85)
						this->textBox70->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox70->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e10 / 4800 * 100 < 85)
						this->textBox69->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox69->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e11 / 4800 * 100 < 85)
						this->textBox68->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox68->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e12 / 4800 * 100 < 85)
						this->textBox67->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox67->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
				}
			

				else if ((time1 * 100 + time2) >= 1930 && (time1 * 100 + time2) < 2030) {
					e1 = System::Convert::ToDouble(words13[32]);

					if (e1 / 4800 * 100 < 85)
						this->textBox78->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox78->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
				}
				
				else if ((time1 * 100 + time2) >= 2030 && (time1 * 100 + time2) < 2130) {
					e1 = System::Convert::ToDouble(words13[32]);
					e2 = System::Convert::ToDouble(words[32]);

					if (e1 / 4800 * 100 < 85)
						this->textBox78->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox78->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e2 / 4800 * 100 < 85)
						this->textBox77->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox77->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
				}
					
				else if ((time1 * 100 + time2) >= 2130 && (time1 * 100 + time2) < 2230) {
					e1 = System::Convert::ToDouble(words13[32]);
					e2 = System::Convert::ToDouble(words[32]);
					e3 = System::Convert::ToDouble(words2[32]);

					if (e1 / 4800 * 100 < 85)
						this->textBox78->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox78->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e2 / 4800 * 100 < 85)
						this->textBox77->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox77->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e3 / 4800 * 100 < 85)
						this->textBox76->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox76->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
				}
					
				else if ((time1 * 100 + time2) >= 2230 && (time1 * 100 + time2) < 2330) {
					e1 = System::Convert::ToDouble(words13[32]);
					e2 = System::Convert::ToDouble(words[32]);
					e3 = System::Convert::ToDouble(words2[32]);
					e4 = System::Convert::ToDouble(words3[32]);

					if (e1 / 4800 * 100 < 85)
						this->textBox78->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox78->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e2 / 4800 * 100 < 85)
						this->textBox77->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox77->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e3 / 4800 * 100 < 85)
						this->textBox76->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox76->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e4 / 4800 * 100 < 85)
						this->textBox75->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox75->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
				}
					
				else if ((time1 * 100 + time2) >= 2330 && (time1 * 100 + time2) < 2430) {
					e1 = System::Convert::ToDouble(words13[32]);
					e2 = System::Convert::ToDouble(words[32]);
					e3 = System::Convert::ToDouble(words2[32]);
					e4 = System::Convert::ToDouble(words3[32]);
					e5 = System::Convert::ToDouble(words4[32]);

					if (e1 / 4800 * 100 < 85)
						this->textBox78->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox78->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e2 / 4800 * 100 < 85)
						this->textBox77->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox77->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e3 / 4800 * 100 < 85)
						this->textBox76->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox76->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e4 / 4800 * 100 < 85)
						this->textBox75->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox75->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e5 / 4800 * 100 < 85)
						this->textBox74->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox74->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
				}
					
				else if ((time1 * 100 + time2) >= 2430 && (time1 * 100 + time2) < 130) {
					e1 = System::Convert::ToDouble(words13[32]);
					e2 = System::Convert::ToDouble(words[32]);
					e3 = System::Convert::ToDouble(words2[32]);
					e4 = System::Convert::ToDouble(words3[32]);
					e5 = System::Convert::ToDouble(words4[32]);
					e6 = System::Convert::ToDouble(words5[32]);

					if (e1 / 4800 * 100 < 85)
						this->textBox78->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox78->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e2 / 4800 * 100 < 85)
						this->textBox77->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox77->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e3 / 4800 * 100 < 85)
						this->textBox76->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox76->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e4 / 4800 * 100 < 85)
						this->textBox75->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox75->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e5 / 4800 * 100 < 85)
						this->textBox74->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox74->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e6 / 4800 * 100 < 85)
						this->textBox73->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox73->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
				}
					
				else if ((time1 * 100 + time2) >= 130 && (time1 * 100 + time2) < 230) {
					e1 = System::Convert::ToDouble(words13[32]);
					e2 = System::Convert::ToDouble(words[32]);
					e3 = System::Convert::ToDouble(words2[32]);
					e4 = System::Convert::ToDouble(words3[32]);
					e5 = System::Convert::ToDouble(words4[32]);
					e6 = System::Convert::ToDouble(words5[32]);
					e7 = System::Convert::ToDouble(words6[32]);

					if (e1 / 4800 * 100 < 85)
						this->textBox78->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox78->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e2 / 4800 * 100 < 85)
						this->textBox77->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox77->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e3 / 4800 * 100 < 85)
						this->textBox76->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox76->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e4 / 4800 * 100 < 85)
						this->textBox75->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox75->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e5 / 4800 * 100 < 85)
						this->textBox74->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox74->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e6 / 4800 * 100 < 85)
						this->textBox73->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox73->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e7 / 4800 * 100 < 85)
						this->textBox72->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox72->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
				}
					
				else if ((time1 * 100 + time2) >= 230 && (time1 * 100 + time2) < 330) {
					e1 = System::Convert::ToDouble(words13[32]);
					e2 = System::Convert::ToDouble(words[32]);
					e3 = System::Convert::ToDouble(words2[32]);
					e4 = System::Convert::ToDouble(words3[32]);
					e5 = System::Convert::ToDouble(words4[32]);
					e6 = System::Convert::ToDouble(words5[32]);
					e7 = System::Convert::ToDouble(words6[32]);
					e8 = System::Convert::ToDouble(words7[32]);

					if (e1 / 4800 * 100 < 85)
						this->textBox78->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox78->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e2 / 4800 * 100 < 85)
						this->textBox77->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox77->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e3 / 4800 * 100 < 85)
						this->textBox76->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox76->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e4 / 4800 * 100 < 85)
						this->textBox75->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox75->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e5 / 4800 * 100 < 85)
						this->textBox74->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox74->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e6 / 4800 * 100 < 85)
						this->textBox73->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox73->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e7 / 4800 * 100 < 85)
						this->textBox72->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox72->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e8 / 4800 * 100 < 85)
						this->textBox71->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox71->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
				}
			
				else if ((time1 * 100 + time2) >= 330 && (time1 * 100 + time2) < 430) {
					e1 = System::Convert::ToDouble(words13[32]);
					e2 = System::Convert::ToDouble(words[32]);
					e3 = System::Convert::ToDouble(words2[32]);
					e4 = System::Convert::ToDouble(words3[32]);
					e5 = System::Convert::ToDouble(words4[32]);
					e6 = System::Convert::ToDouble(words5[32]);
					e7 = System::Convert::ToDouble(words6[32]);
					e8 = System::Convert::ToDouble(words7[32]);
					e9 = System::Convert::ToDouble(words8[32]);

					if (e1 / 4800 * 100 < 85)
						this->textBox78->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox78->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e2 / 4800 * 100 < 85)
						this->textBox77->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox77->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e3 / 4800 * 100 < 85)
						this->textBox76->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox76->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e4 / 4800 * 100 < 85)
						this->textBox75->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox75->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e5 / 4800 * 100 < 85)
						this->textBox74->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox74->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e6 / 4800 * 100 < 85)
						this->textBox73->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox73->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e7 / 4800 * 100 < 85)
						this->textBox72->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox72->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e8 / 4800 * 100 < 85)
						this->textBox71->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox71->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e9 / 4800 * 100 < 85)
						this->textBox70->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox70->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
				}
					
				else if ((time1 * 100 + time2) >= 430 && (time1 * 100 + time2) < 530) {
					e1 = System::Convert::ToDouble(words13[32]);
					e2 = System::Convert::ToDouble(words[32]);
					e3 = System::Convert::ToDouble(words2[32]);
					e4 = System::Convert::ToDouble(words3[32]);
					e5 = System::Convert::ToDouble(words4[32]);
					e6 = System::Convert::ToDouble(words5[32]);
					e7 = System::Convert::ToDouble(words6[32]);
					e8 = System::Convert::ToDouble(words7[32]);
					e9 = System::Convert::ToDouble(words8[32]);
					e10 = System::Convert::ToDouble(words9[32]);

					if (e1 / 4800 * 100 < 85)
						this->textBox78->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox78->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e2 / 4800 * 100 < 85)
						this->textBox77->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox77->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e3 / 4800 * 100 < 85)
						this->textBox76->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox76->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e4 / 4800 * 100 < 85)
						this->textBox75->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox75->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e5 / 4800 * 100 < 85)
						this->textBox74->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox74->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e6 / 4800 * 100 < 85)
						this->textBox73->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox73->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e7 / 4800 * 100 < 85)
						this->textBox72->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox72->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e8 / 4800 * 100 < 85)
						this->textBox71->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox71->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e9 / 4800 * 100 < 85)
						this->textBox70->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox70->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e10 / 4800 * 100 < 85)
						this->textBox69->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox69->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
				}
					
				else if ((time1 * 100 + time2) >= 530 && (time1 * 100 + time2) < 630) {
					e1 = System::Convert::ToDouble(words13[32]);
					e2 = System::Convert::ToDouble(words[32]);
					e3 = System::Convert::ToDouble(words2[32]);
					e4 = System::Convert::ToDouble(words3[32]);
					e5 = System::Convert::ToDouble(words4[32]);
					e6 = System::Convert::ToDouble(words5[32]);
					e7 = System::Convert::ToDouble(words6[32]);
					e8 = System::Convert::ToDouble(words7[32]);
					e9 = System::Convert::ToDouble(words8[32]);
					e10 = System::Convert::ToDouble(words9[32]);
					e11 = System::Convert::ToDouble(words10[32]);

					if (e1 / 4800 * 100 < 85)
						this->textBox78->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox78->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e2 / 4800 * 100 < 85)
						this->textBox77->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox77->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e3 / 4800 * 100 < 85)
						this->textBox76->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox76->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e4 / 4800 * 100 < 85)
						this->textBox75->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox75->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e5 / 4800 * 100 < 85)
						this->textBox74->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox74->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e6 / 4800 * 100 < 85)
						this->textBox73->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox73->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e7 / 4800 * 100 < 85)
						this->textBox72->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox72->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e8 / 4800 * 100 < 85)
						this->textBox71->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox71->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e9 / 4800 * 100 < 85)
						this->textBox70->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox70->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e10 / 4800 * 100 < 85)
						this->textBox69->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox69->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e11 / 4800 * 100 < 85)
						this->textBox68->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox68->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
				}
					
				else if ((time1 * 100 + time2) >= 630 && (time1 * 100 + time2) < 730) {
					e1 = System::Convert::ToDouble(words13[32]);
					e2 = System::Convert::ToDouble(words[32]);
					e3 = System::Convert::ToDouble(words2[32]);
					e4 = System::Convert::ToDouble(words3[32]);
					e5 = System::Convert::ToDouble(words4[32]);
					e6 = System::Convert::ToDouble(words5[32]);
					e7 = System::Convert::ToDouble(words6[32]);
					e8 = System::Convert::ToDouble(words7[32]);
					e9 = System::Convert::ToDouble(words8[32]);
					e10 = System::Convert::ToDouble(words9[32]);
					e11 = System::Convert::ToDouble(words10[32]);
					e12 = System::Convert::ToDouble(words11[32]);

					if (e1 / 4800 * 100 < 85)
						this->textBox78->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox78->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e2 / 4800 * 100 < 85)
						this->textBox77->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox77->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e3 / 4800 * 100 < 85)
						this->textBox76->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox76->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e4 / 4800 * 100 < 85)
						this->textBox75->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox75->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e5 / 4800 * 100 < 85)
						this->textBox74->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox74->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e6 / 4800 * 100 < 85)
						this->textBox73->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox73->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e7 / 4800 * 100 < 85)
						this->textBox72->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox72->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e8 / 4800 * 100 < 85)
						this->textBox71->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox71->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e9 / 4800 * 100 < 85)
						this->textBox70->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox70->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e10 / 4800 * 100 < 85)
						this->textBox69->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox69->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e11 / 4800 * 100 < 85)
						this->textBox68->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox68->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (e12 / 4800 * 100 < 85)
						this->textBox67->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox67->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
				}
				
				//Line 1 Overall - Previous hours
				
				if ((time1 * 100 + time2) >= 730 && (time1 * 100 + time2) < 830) {
					f1 = System::Convert::ToDouble(words13[8]) + System::Convert::ToDouble(words13[16]) + System::Convert::ToDouble(words13[24]) + System::Convert::ToDouble(words13[32]);

					if (f1 / 19200 * 100 < 85)
						this->textBox63->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox63->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
				}
				else if ((time1 * 100 + time2) >= 830 && (time1 * 100 + time2) < 930) {
					f1 = System::Convert::ToDouble(words13[8]) + System::Convert::ToDouble(words13[16]) + System::Convert::ToDouble(words13[24]) + System::Convert::ToDouble(words13[32]);
					f2 = System::Convert::ToDouble(words[8]) + System::Convert::ToDouble(words[16]) + System::Convert::ToDouble(words[24]) + System::Convert::ToDouble(words[32]);

					if (f1 / 19200 * 100 < 85)
						this->textBox63->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox63->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f2 / 19200 * 100 < 85)
						this->textBox62->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox62->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
				}
					
				else if ((time1 * 100 + time2) >= 930 && (time1 * 100 + time2) < 1030) {
					f1 = System::Convert::ToDouble(words13[8]) + System::Convert::ToDouble(words13[16]) + System::Convert::ToDouble(words13[24]) + System::Convert::ToDouble(words13[32]);
					f2 = System::Convert::ToDouble(words[8]) + System::Convert::ToDouble(words[16]) + System::Convert::ToDouble(words[24]) + System::Convert::ToDouble(words[32]);
					f3 = System::Convert::ToDouble(words2[8]) + System::Convert::ToDouble(words2[16]) + System::Convert::ToDouble(words2[24]) + System::Convert::ToDouble(words2[32]);

					if (f1 / 19200 * 100 < 85)
						this->textBox63->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox63->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f2 / 19200 * 100 < 85)
						this->textBox62->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox62->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f3 / 19200 * 100 < 85)
						this->textBox61->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox61->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
				}
				
				else if ((time1 * 100 + time2) >= 1030 && (time1 * 100 + time2) < 1130) {
					f1 = System::Convert::ToDouble(words13[8]) + System::Convert::ToDouble(words13[16]) + System::Convert::ToDouble(words13[24]) + System::Convert::ToDouble(words13[32]);
					f2 = System::Convert::ToDouble(words[8]) + System::Convert::ToDouble(words[16]) + System::Convert::ToDouble(words[24]) + System::Convert::ToDouble(words[32]);
					f3 = System::Convert::ToDouble(words2[8]) + System::Convert::ToDouble(words2[16]) + System::Convert::ToDouble(words2[24]) + System::Convert::ToDouble(words2[32]);
					f4 = System::Convert::ToDouble(words3[8]) + System::Convert::ToDouble(words3[16]) + System::Convert::ToDouble(words3[24]) + System::Convert::ToDouble(words3[32]);

					if (f1 / 19200 * 100 < 85)
						this->textBox63->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox63->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f2 / 19200 * 100 < 85)
						this->textBox62->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox62->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f3 / 19200 * 100 < 85)
						this->textBox61->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox61->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f4 / 19200 * 100 < 85)
						this->textBox60->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox60->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
				}
		
				else if ((time1 * 100 + time2) >= 1130 && (time1 * 100 + time2) < 1230) {
					f1 = System::Convert::ToDouble(words13[8]) + System::Convert::ToDouble(words13[16]) + System::Convert::ToDouble(words13[24]) + System::Convert::ToDouble(words13[32]);
					f2 = System::Convert::ToDouble(words[8]) + System::Convert::ToDouble(words[16]) + System::Convert::ToDouble(words[24]) + System::Convert::ToDouble(words[32]);
					f3 = System::Convert::ToDouble(words2[8]) + System::Convert::ToDouble(words2[16]) + System::Convert::ToDouble(words2[24]) + System::Convert::ToDouble(words2[32]);
					f4 = System::Convert::ToDouble(words3[8]) + System::Convert::ToDouble(words3[16]) + System::Convert::ToDouble(words3[24]) + System::Convert::ToDouble(words3[32]);
					f5 = System::Convert::ToDouble(words4[8]) + System::Convert::ToDouble(words4[16]) + System::Convert::ToDouble(words4[24]) + System::Convert::ToDouble(words4[32]);

					if (f1 / 19200 * 100 < 85)
						this->textBox63->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox63->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f2 / 19200 * 100 < 85)
						this->textBox62->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox62->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f3 / 19200 * 100 < 85)
						this->textBox61->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox61->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f4 / 19200 * 100 < 85)
						this->textBox60->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox60->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f5 / 19200 * 100 < 85)
						this->textBox59->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox59->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
				}
			
				else if ((time1 * 100 + time2) >= 1230 && (time1 * 100 + time2) < 1330) {
					f1 = System::Convert::ToDouble(words13[8]) + System::Convert::ToDouble(words13[16]) + System::Convert::ToDouble(words13[24]) + System::Convert::ToDouble(words13[32]);
					f2 = System::Convert::ToDouble(words[8]) + System::Convert::ToDouble(words[16]) + System::Convert::ToDouble(words[24]) + System::Convert::ToDouble(words[32]);
					f3 = System::Convert::ToDouble(words2[8]) + System::Convert::ToDouble(words2[16]) + System::Convert::ToDouble(words2[24]) + System::Convert::ToDouble(words2[32]);
					f4 = System::Convert::ToDouble(words3[8]) + System::Convert::ToDouble(words3[16]) + System::Convert::ToDouble(words3[24]) + System::Convert::ToDouble(words3[32]);
					f5 = System::Convert::ToDouble(words4[8]) + System::Convert::ToDouble(words4[16]) + System::Convert::ToDouble(words4[24]) + System::Convert::ToDouble(words4[32]);
					f6 = System::Convert::ToDouble(words5[8]) + System::Convert::ToDouble(words5[16]) + System::Convert::ToDouble(words5[24]) + System::Convert::ToDouble(words5[32]);

					if (f1 / 19200 * 100 < 85)
						this->textBox63->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox63->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f2 / 19200 * 100 < 85)
						this->textBox62->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox62->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f3 / 19200 * 100 < 85)
						this->textBox61->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox61->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f4 / 19200 * 100 < 85)
						this->textBox60->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox60->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f5 / 19200 * 100 < 85)
						this->textBox59->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox59->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f6 / 19200 * 100 < 85)
						this->textBox58->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox58->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
				}
					
				else if ((time1 * 100 + time2) >= 1330 && (time1 * 100 + time2) < 1430) {
					f1 = System::Convert::ToDouble(words13[8]) + System::Convert::ToDouble(words13[16]) + System::Convert::ToDouble(words13[24]) + System::Convert::ToDouble(words13[32]);
					f2 = System::Convert::ToDouble(words[8]) + System::Convert::ToDouble(words[16]) + System::Convert::ToDouble(words[24]) + System::Convert::ToDouble(words[32]);
					f3 = System::Convert::ToDouble(words2[8]) + System::Convert::ToDouble(words2[16]) + System::Convert::ToDouble(words2[24]) + System::Convert::ToDouble(words2[32]);
					f4 = System::Convert::ToDouble(words3[8]) + System::Convert::ToDouble(words3[16]) + System::Convert::ToDouble(words3[24]) + System::Convert::ToDouble(words3[32]);
					f5 = System::Convert::ToDouble(words4[8]) + System::Convert::ToDouble(words4[16]) + System::Convert::ToDouble(words4[24]) + System::Convert::ToDouble(words4[32]);
					f6 = System::Convert::ToDouble(words5[8]) + System::Convert::ToDouble(words5[16]) + System::Convert::ToDouble(words5[24]) + System::Convert::ToDouble(words5[32]);
					f7 = System::Convert::ToDouble(words6[8]) + System::Convert::ToDouble(words6[16]) + System::Convert::ToDouble(words6[24]) + System::Convert::ToDouble(words6[32]);

					if (f1 / 19200 * 100 < 85)
						this->textBox63->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox63->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f2 / 19200 * 100 < 85)
						this->textBox62->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox62->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f3 / 19200 * 100 < 85)
						this->textBox61->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox61->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f4 / 19200 * 100 < 85)
						this->textBox60->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox60->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f5 / 19200 * 100 < 85)
						this->textBox59->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox59->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f6 / 19200 * 100 < 85)
						this->textBox58->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox58->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f7 / 19200 * 100 < 85)
						this->textBox57->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox57->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
				}
					
				else if ((time1 * 100 + time2) >= 1430 && (time1 * 100 + time2) < 1530) {
					f1 = System::Convert::ToDouble(words13[8]) + System::Convert::ToDouble(words13[16]) + System::Convert::ToDouble(words13[24]) + System::Convert::ToDouble(words13[32]);
					f2 = System::Convert::ToDouble(words[8]) + System::Convert::ToDouble(words[16]) + System::Convert::ToDouble(words[24]) + System::Convert::ToDouble(words[32]);
					f3 = System::Convert::ToDouble(words2[8]) + System::Convert::ToDouble(words2[16]) + System::Convert::ToDouble(words2[24]) + System::Convert::ToDouble(words2[32]);
					f4 = System::Convert::ToDouble(words3[8]) + System::Convert::ToDouble(words3[16]) + System::Convert::ToDouble(words3[24]) + System::Convert::ToDouble(words3[32]);
					f5 = System::Convert::ToDouble(words4[8]) + System::Convert::ToDouble(words4[16]) + System::Convert::ToDouble(words4[24]) + System::Convert::ToDouble(words4[32]);
					f6 = System::Convert::ToDouble(words5[8]) + System::Convert::ToDouble(words5[16]) + System::Convert::ToDouble(words5[24]) + System::Convert::ToDouble(words5[32]);
					f7 = System::Convert::ToDouble(words6[8]) + System::Convert::ToDouble(words6[16]) + System::Convert::ToDouble(words6[24]) + System::Convert::ToDouble(words6[32]);
					f8 = System::Convert::ToDouble(words7[8]) + System::Convert::ToDouble(words7[16]) + System::Convert::ToDouble(words7[24]) + System::Convert::ToDouble(words7[32]);

					if (f1 / 19200 * 100 < 85)
						this->textBox63->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox63->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f2 / 19200 * 100 < 85)
						this->textBox62->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox62->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f3 / 19200 * 100 < 85)
						this->textBox61->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox61->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f4 / 19200 * 100 < 85)
						this->textBox60->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox60->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f5 / 19200 * 100 < 85)
						this->textBox59->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox59->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f6 / 19200 * 100 < 85)
						this->textBox58->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox58->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f7 / 19200 * 100 < 85)
						this->textBox57->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox57->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f8 / 19200 * 100 < 85)
						this->textBox56->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox56->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
				}
					
				else if ((time1 * 100 + time2) >= 1530 && (time1 * 100 + time2) < 1630) {
					f1 = System::Convert::ToDouble(words13[8]) + System::Convert::ToDouble(words13[16]) + System::Convert::ToDouble(words13[24]) + System::Convert::ToDouble(words13[32]);
					f2 = System::Convert::ToDouble(words[8]) + System::Convert::ToDouble(words[16]) + System::Convert::ToDouble(words[24]) + System::Convert::ToDouble(words[32]);
					f3 = System::Convert::ToDouble(words2[8]) + System::Convert::ToDouble(words2[16]) + System::Convert::ToDouble(words2[24]) + System::Convert::ToDouble(words2[32]);
					f4 = System::Convert::ToDouble(words3[8]) + System::Convert::ToDouble(words3[16]) + System::Convert::ToDouble(words3[24]) + System::Convert::ToDouble(words3[32]);
					f5 = System::Convert::ToDouble(words4[8]) + System::Convert::ToDouble(words4[16]) + System::Convert::ToDouble(words4[24]) + System::Convert::ToDouble(words4[32]);
					f6 = System::Convert::ToDouble(words5[8]) + System::Convert::ToDouble(words5[16]) + System::Convert::ToDouble(words5[24]) + System::Convert::ToDouble(words5[32]);
					f7 = System::Convert::ToDouble(words6[8]) + System::Convert::ToDouble(words6[16]) + System::Convert::ToDouble(words6[24]) + System::Convert::ToDouble(words6[32]);
					f8 = System::Convert::ToDouble(words7[8]) + System::Convert::ToDouble(words7[16]) + System::Convert::ToDouble(words7[24]) + System::Convert::ToDouble(words7[32]);
					f9 = System::Convert::ToDouble(words8[8]) + System::Convert::ToDouble(words8[16]) + System::Convert::ToDouble(words8[24]) + System::Convert::ToDouble(words8[32]);

					if (f1 / 19200 * 100 < 85)
						this->textBox63->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox63->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f2 / 19200 * 100 < 85)
						this->textBox62->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox62->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f3 / 19200 * 100 < 85)
						this->textBox61->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox61->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f4 / 19200 * 100 < 85)
						this->textBox60->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox60->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f5 / 19200 * 100 < 85)
						this->textBox59->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox59->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f6 / 19200 * 100 < 85)
						this->textBox58->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox58->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f7 / 19200 * 100 < 85)
						this->textBox57->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox57->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f8 / 19200 * 100 < 85)
						this->textBox56->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox56->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f9 / 19200 * 100 < 85)
						this->textBox55->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox55->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
				}
				
				else if ((time1 * 100 + time2) >= 1630 && (time1 * 100 + time2) < 1730) {
					f1 = System::Convert::ToDouble(words13[8]) + System::Convert::ToDouble(words13[16]) + System::Convert::ToDouble(words13[24]) + System::Convert::ToDouble(words13[32]);
					f2 = System::Convert::ToDouble(words[8]) + System::Convert::ToDouble(words[16]) + System::Convert::ToDouble(words[24]) + System::Convert::ToDouble(words[32]);
					f3 = System::Convert::ToDouble(words2[8]) + System::Convert::ToDouble(words2[16]) + System::Convert::ToDouble(words2[24]) + System::Convert::ToDouble(words2[32]);
					f4 = System::Convert::ToDouble(words3[8]) + System::Convert::ToDouble(words3[16]) + System::Convert::ToDouble(words3[24]) + System::Convert::ToDouble(words3[32]);
					f5 = System::Convert::ToDouble(words4[8]) + System::Convert::ToDouble(words4[16]) + System::Convert::ToDouble(words4[24]) + System::Convert::ToDouble(words4[32]);
					f6 = System::Convert::ToDouble(words5[8]) + System::Convert::ToDouble(words5[16]) + System::Convert::ToDouble(words5[24]) + System::Convert::ToDouble(words5[32]);
					f7 = System::Convert::ToDouble(words6[8]) + System::Convert::ToDouble(words6[16]) + System::Convert::ToDouble(words6[24]) + System::Convert::ToDouble(words6[32]);
					f8 = System::Convert::ToDouble(words7[8]) + System::Convert::ToDouble(words7[16]) + System::Convert::ToDouble(words7[24]) + System::Convert::ToDouble(words7[32]);
					f9 = System::Convert::ToDouble(words8[8]) + System::Convert::ToDouble(words8[16]) + System::Convert::ToDouble(words8[24]) + System::Convert::ToDouble(words8[32]);
					f10 = System::Convert::ToDouble(words9[8]) + System::Convert::ToDouble(words9[16]) + System::Convert::ToDouble(words9[24]) + System::Convert::ToDouble(words9[32]);

					if (f1 / 19200 * 100 < 85)
						this->textBox63->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox63->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f2 / 19200 * 100 < 85)
						this->textBox62->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox62->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f3 / 19200 * 100 < 85)
						this->textBox61->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox61->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f4 / 19200 * 100 < 85)
						this->textBox60->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox60->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f5 / 19200 * 100 < 85)
						this->textBox59->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox59->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f6 / 19200 * 100 < 85)
						this->textBox58->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox58->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f7 / 19200 * 100 < 85)
						this->textBox57->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox57->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f8 / 19200 * 100 < 85)
						this->textBox56->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox56->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f9 / 19200 * 100 < 85)
						this->textBox55->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox55->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f10 / 19200 * 100 < 85)
						this->textBox54->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox54->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
				}
					
				else if ((time1 * 100 + time2) >= 1730 && (time1 * 100 + time2) < 1830) {
					f1 = System::Convert::ToDouble(words13[8]) + System::Convert::ToDouble(words13[16]) + System::Convert::ToDouble(words13[24]) + System::Convert::ToDouble(words13[32]);
					f2 = System::Convert::ToDouble(words[8]) + System::Convert::ToDouble(words[16]) + System::Convert::ToDouble(words[24]) + System::Convert::ToDouble(words[32]);
					f3 = System::Convert::ToDouble(words2[8]) + System::Convert::ToDouble(words2[16]) + System::Convert::ToDouble(words2[24]) + System::Convert::ToDouble(words2[32]);
					f4 = System::Convert::ToDouble(words3[8]) + System::Convert::ToDouble(words3[16]) + System::Convert::ToDouble(words3[24]) + System::Convert::ToDouble(words3[32]);
					f5 = System::Convert::ToDouble(words4[8]) + System::Convert::ToDouble(words4[16]) + System::Convert::ToDouble(words4[24]) + System::Convert::ToDouble(words4[32]);
					f6 = System::Convert::ToDouble(words5[8]) + System::Convert::ToDouble(words5[16]) + System::Convert::ToDouble(words5[24]) + System::Convert::ToDouble(words5[32]);
					f7 = System::Convert::ToDouble(words6[8]) + System::Convert::ToDouble(words6[16]) + System::Convert::ToDouble(words6[24]) + System::Convert::ToDouble(words6[32]);
					f8 = System::Convert::ToDouble(words7[8]) + System::Convert::ToDouble(words7[16]) + System::Convert::ToDouble(words7[24]) + System::Convert::ToDouble(words7[32]);
					f9 = System::Convert::ToDouble(words8[8]) + System::Convert::ToDouble(words8[16]) + System::Convert::ToDouble(words8[24]) + System::Convert::ToDouble(words8[32]);
					f10 = System::Convert::ToDouble(words9[8]) + System::Convert::ToDouble(words9[16]) + System::Convert::ToDouble(words9[24]) + System::Convert::ToDouble(words9[32]);
					f11 = System::Convert::ToDouble(words10[8]) + System::Convert::ToDouble(words10[16]) + System::Convert::ToDouble(words10[24]) + System::Convert::ToDouble(words10[32]);

					if (f1 / 19200 * 100 < 85)
						this->textBox63->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox63->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f2 / 19200 * 100 < 85)
						this->textBox62->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox62->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f3 / 19200 * 100 < 85)
						this->textBox61->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox61->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f4 / 19200 * 100 < 85)
						this->textBox60->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox60->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f5 / 19200 * 100 < 85)
						this->textBox59->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox59->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f6 / 19200 * 100 < 85)
						this->textBox58->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox58->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f7 / 19200 * 100 < 85)
						this->textBox57->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox57->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f8 / 19200 * 100 < 85)
						this->textBox56->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox56->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f9 / 19200 * 100 < 85)
						this->textBox55->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox55->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f10 / 19200 * 100 < 85)
						this->textBox54->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox54->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f11 / 19200 * 100 < 85)
						this->textBox53->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox53->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
				}
					
				else if ((time1 * 100 + time2) >= 1830 && (time1 * 100 + time2) < 1930) {
					f1 = System::Convert::ToDouble(words13[8]) + System::Convert::ToDouble(words13[16]) + System::Convert::ToDouble(words13[24]) + System::Convert::ToDouble(words13[32]);
					f2 = System::Convert::ToDouble(words[8]) + System::Convert::ToDouble(words[16]) + System::Convert::ToDouble(words[24]) + System::Convert::ToDouble(words[32]);
					f3 = System::Convert::ToDouble(words2[8]) + System::Convert::ToDouble(words2[16]) + System::Convert::ToDouble(words2[24]) + System::Convert::ToDouble(words2[32]);
					f4 = System::Convert::ToDouble(words3[8]) + System::Convert::ToDouble(words3[16]) + System::Convert::ToDouble(words3[24]) + System::Convert::ToDouble(words3[32]);
					f5 = System::Convert::ToDouble(words4[8]) + System::Convert::ToDouble(words4[16]) + System::Convert::ToDouble(words4[24]) + System::Convert::ToDouble(words4[32]);
					f6 = System::Convert::ToDouble(words5[8]) + System::Convert::ToDouble(words5[16]) + System::Convert::ToDouble(words5[24]) + System::Convert::ToDouble(words5[32]);
					f7 = System::Convert::ToDouble(words6[8]) + System::Convert::ToDouble(words6[16]) + System::Convert::ToDouble(words6[24]) + System::Convert::ToDouble(words6[32]);
					f8 = System::Convert::ToDouble(words7[8]) + System::Convert::ToDouble(words7[16]) + System::Convert::ToDouble(words7[24]) + System::Convert::ToDouble(words7[32]);
					f9 = System::Convert::ToDouble(words8[8]) + System::Convert::ToDouble(words8[16]) + System::Convert::ToDouble(words8[24]) + System::Convert::ToDouble(words8[32]);
					f10 = System::Convert::ToDouble(words9[8]) + System::Convert::ToDouble(words9[16]) + System::Convert::ToDouble(words9[24]) + System::Convert::ToDouble(words9[32]);
					f11 = System::Convert::ToDouble(words10[8]) + System::Convert::ToDouble(words10[16]) + System::Convert::ToDouble(words10[24]) + System::Convert::ToDouble(words10[32]);
					f12 = System::Convert::ToDouble(words11[8]) + System::Convert::ToDouble(words11[16]) + System::Convert::ToDouble(words11[24]) + System::Convert::ToDouble(words11[32]);

					if (f1 / 19200 * 100 < 85)
						this->textBox63->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox63->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f2 / 19200 * 100 < 85)
						this->textBox62->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox62->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f3 / 19200 * 100 < 85)
						this->textBox61->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox61->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f4 / 19200 * 100 < 85)
						this->textBox60->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox60->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f5 / 19200 * 100 < 85)
						this->textBox59->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox59->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f6 / 19200 * 100 < 85)
						this->textBox58->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox58->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f7 / 19200 * 100 < 85)
						this->textBox57->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox57->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f8 / 19200 * 100 < 85)
						this->textBox56->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox56->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f9 / 19200 * 100 < 85)
						this->textBox55->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox55->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f10 / 19200 * 100 < 85)
						this->textBox54->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox54->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f11 / 19200 * 100 < 85)
						this->textBox53->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox53->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f12 / 19200 * 100 < 85)
						this->textBox52->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox52->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
				}

				else if ((time1 * 100 + time2) >= 1930 && (time1 * 100 + time2) < 2030) {
					f1 = System::Convert::ToDouble(words13[8]) + System::Convert::ToDouble(words13[16]) + System::Convert::ToDouble(words13[24]) + System::Convert::ToDouble(words13[32]);

					if (f1 / 19200 * 100 < 85)
						this->textBox63->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox63->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
				}
					
				else if ((time1 * 100 + time2) >= 2030 && (time1 * 100 + time2) < 2130) {
					f1 = System::Convert::ToDouble(words13[8]) + System::Convert::ToDouble(words13[16]) + System::Convert::ToDouble(words13[24]) + System::Convert::ToDouble(words13[32]);
					f2 = System::Convert::ToDouble(words[8]) + System::Convert::ToDouble(words[16]) + System::Convert::ToDouble(words[24]) + System::Convert::ToDouble(words[32]);

					if (f1 / 19200 * 100 < 85)
						this->textBox63->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox63->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f2 / 19200 * 100 < 85)
						this->textBox62->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox62->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
				}
					
				else if ((time1 * 100 + time2) >= 2130 && (time1 * 100 + time2) < 2230) {
					f1 = System::Convert::ToDouble(words13[8]) + System::Convert::ToDouble(words13[16]) + System::Convert::ToDouble(words13[24]) + System::Convert::ToDouble(words13[32]);
					f2 = System::Convert::ToDouble(words[8]) + System::Convert::ToDouble(words[16]) + System::Convert::ToDouble(words[24]) + System::Convert::ToDouble(words[32]);
					f3 = System::Convert::ToDouble(words2[8]) + System::Convert::ToDouble(words2[16]) + System::Convert::ToDouble(words2[24]) + System::Convert::ToDouble(words2[32]);

					if (f1 / 19200 * 100 < 85)
						this->textBox63->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox63->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f2 / 19200 * 100 < 85)
						this->textBox62->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox62->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f3 / 19200 * 100 < 85)
						this->textBox61->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox61->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
				}
					
				else if ((time1 * 100 + time2) >= 2230 && (time1 * 100 + time2) < 2330) {
					f1 = System::Convert::ToDouble(words13[8]) + System::Convert::ToDouble(words13[16]) + System::Convert::ToDouble(words13[24]) + System::Convert::ToDouble(words13[32]);
					f2 = System::Convert::ToDouble(words[8]) + System::Convert::ToDouble(words[16]) + System::Convert::ToDouble(words[24]) + System::Convert::ToDouble(words[32]);
					f3 = System::Convert::ToDouble(words2[8]) + System::Convert::ToDouble(words2[16]) + System::Convert::ToDouble(words2[24]) + System::Convert::ToDouble(words2[32]);
					f4 = System::Convert::ToDouble(words3[8]) + System::Convert::ToDouble(words3[16]) + System::Convert::ToDouble(words3[24]) + System::Convert::ToDouble(words3[32]);

					if (f1 / 19200 * 100 < 85)
						this->textBox63->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox63->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f2 / 19200 * 100 < 85)
						this->textBox62->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox62->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f3 / 19200 * 100 < 85)
						this->textBox61->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox61->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f4 / 19200 * 100 < 85)
						this->textBox60->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox60->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
				}
					
				else if ((time1 * 100 + time2) >= 2330 && (time1 * 100 + time2) < 2430) {
					f1 = System::Convert::ToDouble(words13[8]) + System::Convert::ToDouble(words13[16]) + System::Convert::ToDouble(words13[24]) + System::Convert::ToDouble(words13[32]);
					f2 = System::Convert::ToDouble(words[8]) + System::Convert::ToDouble(words[16]) + System::Convert::ToDouble(words[24]) + System::Convert::ToDouble(words[32]);
					f3 = System::Convert::ToDouble(words2[8]) + System::Convert::ToDouble(words2[16]) + System::Convert::ToDouble(words2[24]) + System::Convert::ToDouble(words2[32]);
					f4 = System::Convert::ToDouble(words3[8]) + System::Convert::ToDouble(words3[16]) + System::Convert::ToDouble(words3[24]) + System::Convert::ToDouble(words3[32]);
					f5 = System::Convert::ToDouble(words4[8]) + System::Convert::ToDouble(words4[16]) + System::Convert::ToDouble(words4[24]) + System::Convert::ToDouble(words4[32]);

					if (f1 / 19200 * 100 < 85)
						this->textBox63->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox63->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f2 / 19200 * 100 < 85)
						this->textBox62->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox62->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f3 / 19200 * 100 < 85)
						this->textBox61->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox61->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f4 / 19200 * 100 < 85)
						this->textBox60->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox60->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f5 / 19200 * 100 < 85)
						this->textBox59->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox59->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
				}
		
				else if ((time1 * 100 + time2) >= 2430 && (time1 * 100 + time2) < 130) {
					f1 = System::Convert::ToDouble(words13[8]) + System::Convert::ToDouble(words13[16]) + System::Convert::ToDouble(words13[24]) + System::Convert::ToDouble(words13[32]);
					f2 = System::Convert::ToDouble(words[8]) + System::Convert::ToDouble(words[16]) + System::Convert::ToDouble(words[24]) + System::Convert::ToDouble(words[32]);
					f3 = System::Convert::ToDouble(words2[8]) + System::Convert::ToDouble(words2[16]) + System::Convert::ToDouble(words2[24]) + System::Convert::ToDouble(words2[32]);
					f4 = System::Convert::ToDouble(words3[8]) + System::Convert::ToDouble(words3[16]) + System::Convert::ToDouble(words3[24]) + System::Convert::ToDouble(words3[32]);
					f5 = System::Convert::ToDouble(words4[8]) + System::Convert::ToDouble(words4[16]) + System::Convert::ToDouble(words4[24]) + System::Convert::ToDouble(words4[32]);
					f6 = System::Convert::ToDouble(words5[8]) + System::Convert::ToDouble(words5[16]) + System::Convert::ToDouble(words5[24]) + System::Convert::ToDouble(words5[32]);

					if (f1 / 19200 * 100 < 85)
						this->textBox63->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox63->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f2 / 19200 * 100 < 85)
						this->textBox62->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox62->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f3 / 19200 * 100 < 85)
						this->textBox61->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox61->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f4 / 19200 * 100 < 85)
						this->textBox60->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox60->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f5 / 19200 * 100 < 85)
						this->textBox59->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox59->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f6 / 19200 * 100 < 85)
						this->textBox58->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox58->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
				}
					
				else if ((time1 * 100 + time2) >= 130 && (time1 * 100 + time2) < 230) {
					f1 = System::Convert::ToDouble(words13[8]) + System::Convert::ToDouble(words13[16]) + System::Convert::ToDouble(words13[24]) + System::Convert::ToDouble(words13[32]);
					f2 = System::Convert::ToDouble(words[8]) + System::Convert::ToDouble(words[16]) + System::Convert::ToDouble(words[24]) + System::Convert::ToDouble(words[32]);
					f3 = System::Convert::ToDouble(words2[8]) + System::Convert::ToDouble(words2[16]) + System::Convert::ToDouble(words2[24]) + System::Convert::ToDouble(words2[32]);
					f4 = System::Convert::ToDouble(words3[8]) + System::Convert::ToDouble(words3[16]) + System::Convert::ToDouble(words3[24]) + System::Convert::ToDouble(words3[32]);
					f5 = System::Convert::ToDouble(words4[8]) + System::Convert::ToDouble(words4[16]) + System::Convert::ToDouble(words4[24]) + System::Convert::ToDouble(words4[32]);
					f6 = System::Convert::ToDouble(words5[8]) + System::Convert::ToDouble(words5[16]) + System::Convert::ToDouble(words5[24]) + System::Convert::ToDouble(words5[32]);
					f7 = System::Convert::ToDouble(words6[8]) + System::Convert::ToDouble(words6[16]) + System::Convert::ToDouble(words6[24]) + System::Convert::ToDouble(words6[32]);

					if (f1 / 19200 * 100 < 85)
						this->textBox63->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox63->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f2 / 19200 * 100 < 85)
						this->textBox62->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox62->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f3 / 19200 * 100 < 85)
						this->textBox61->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox61->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f4 / 19200 * 100 < 85)
						this->textBox60->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox60->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f5 / 19200 * 100 < 85)
						this->textBox59->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox59->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f6 / 19200 * 100 < 85)
						this->textBox58->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox58->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f7 / 19200 * 100 < 85)
						this->textBox57->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox57->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
				}
					
				else if ((time1 * 100 + time2) >= 230 && (time1 * 100 + time2) < 330) {
					f1 = System::Convert::ToDouble(words13[8]) + System::Convert::ToDouble(words13[16]) + System::Convert::ToDouble(words13[24]) + System::Convert::ToDouble(words13[32]);
					f2 = System::Convert::ToDouble(words[8]) + System::Convert::ToDouble(words[16]) + System::Convert::ToDouble(words[24]) + System::Convert::ToDouble(words[32]);
					f3 = System::Convert::ToDouble(words2[8]) + System::Convert::ToDouble(words2[16]) + System::Convert::ToDouble(words2[24]) + System::Convert::ToDouble(words2[32]);
					f4 = System::Convert::ToDouble(words3[8]) + System::Convert::ToDouble(words3[16]) + System::Convert::ToDouble(words3[24]) + System::Convert::ToDouble(words3[32]);
					f5 = System::Convert::ToDouble(words4[8]) + System::Convert::ToDouble(words4[16]) + System::Convert::ToDouble(words4[24]) + System::Convert::ToDouble(words4[32]);
					f6 = System::Convert::ToDouble(words5[8]) + System::Convert::ToDouble(words5[16]) + System::Convert::ToDouble(words5[24]) + System::Convert::ToDouble(words5[32]);
					f7 = System::Convert::ToDouble(words6[8]) + System::Convert::ToDouble(words6[16]) + System::Convert::ToDouble(words6[24]) + System::Convert::ToDouble(words6[32]);
					f8 = System::Convert::ToDouble(words7[8]) + System::Convert::ToDouble(words7[16]) + System::Convert::ToDouble(words7[24]) + System::Convert::ToDouble(words7[32]);

					if (f1 / 19200 * 100 < 85)
						this->textBox63->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox63->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f2 / 19200 * 100 < 85)
						this->textBox62->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox62->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f3 / 19200 * 100 < 85)
						this->textBox61->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox61->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f4 / 19200 * 100 < 85)
						this->textBox60->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox60->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f5 / 19200 * 100 < 85)
						this->textBox59->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox59->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f6 / 19200 * 100 < 85)
						this->textBox58->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox58->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f7 / 19200 * 100 < 85)
						this->textBox57->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox57->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f8 / 19200 * 100 < 85)
						this->textBox56->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox56->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
				}
					
				else if ((time1 * 100 + time2) >= 330 && (time1 * 100 + time2) < 430) {
					f1 = System::Convert::ToDouble(words13[8]) + System::Convert::ToDouble(words13[16]) + System::Convert::ToDouble(words13[24]) + System::Convert::ToDouble(words13[32]);
					f2 = System::Convert::ToDouble(words[8]) + System::Convert::ToDouble(words[16]) + System::Convert::ToDouble(words[24]) + System::Convert::ToDouble(words[32]);
					f3 = System::Convert::ToDouble(words2[8]) + System::Convert::ToDouble(words2[16]) + System::Convert::ToDouble(words2[24]) + System::Convert::ToDouble(words2[32]);
					f4 = System::Convert::ToDouble(words3[8]) + System::Convert::ToDouble(words3[16]) + System::Convert::ToDouble(words3[24]) + System::Convert::ToDouble(words3[32]);
					f5 = System::Convert::ToDouble(words4[8]) + System::Convert::ToDouble(words4[16]) + System::Convert::ToDouble(words4[24]) + System::Convert::ToDouble(words4[32]);
					f6 = System::Convert::ToDouble(words5[8]) + System::Convert::ToDouble(words5[16]) + System::Convert::ToDouble(words5[24]) + System::Convert::ToDouble(words5[32]);
					f7 = System::Convert::ToDouble(words6[8]) + System::Convert::ToDouble(words6[16]) + System::Convert::ToDouble(words6[24]) + System::Convert::ToDouble(words6[32]);
					f8 = System::Convert::ToDouble(words7[8]) + System::Convert::ToDouble(words7[16]) + System::Convert::ToDouble(words7[24]) + System::Convert::ToDouble(words7[32]);
					f9 = System::Convert::ToDouble(words8[8]) + System::Convert::ToDouble(words8[16]) + System::Convert::ToDouble(words8[24]) + System::Convert::ToDouble(words8[32]);

					if (f1 / 19200 * 100 < 85)
						this->textBox63->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox63->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f2 / 19200 * 100 < 85)
						this->textBox62->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox62->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f3 / 19200 * 100 < 85)
						this->textBox61->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox61->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f4 / 19200 * 100 < 85)
						this->textBox60->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox60->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f5 / 19200 * 100 < 85)
						this->textBox59->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox59->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f6 / 19200 * 100 < 85)
						this->textBox58->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox58->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f7 / 19200 * 100 < 85)
						this->textBox57->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox57->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f8 / 19200 * 100 < 85)
						this->textBox56->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox56->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f9 / 19200 * 100 < 85)
						this->textBox55->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox55->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
				}
					
				else if ((time1 * 100 + time2) >= 430 && (time1 * 100 + time2) < 530) {
					f1 = System::Convert::ToDouble(words13[8]) + System::Convert::ToDouble(words13[16]) + System::Convert::ToDouble(words13[24]) + System::Convert::ToDouble(words13[32]);
					f2 = System::Convert::ToDouble(words[8]) + System::Convert::ToDouble(words[16]) + System::Convert::ToDouble(words[24]) + System::Convert::ToDouble(words[32]);
					f3 = System::Convert::ToDouble(words2[8]) + System::Convert::ToDouble(words2[16]) + System::Convert::ToDouble(words2[24]) + System::Convert::ToDouble(words2[32]);
					f4 = System::Convert::ToDouble(words3[8]) + System::Convert::ToDouble(words3[16]) + System::Convert::ToDouble(words3[24]) + System::Convert::ToDouble(words3[32]);
					f5 = System::Convert::ToDouble(words4[8]) + System::Convert::ToDouble(words4[16]) + System::Convert::ToDouble(words4[24]) + System::Convert::ToDouble(words4[32]);
					f6 = System::Convert::ToDouble(words5[8]) + System::Convert::ToDouble(words5[16]) + System::Convert::ToDouble(words5[24]) + System::Convert::ToDouble(words5[32]);
					f7 = System::Convert::ToDouble(words6[8]) + System::Convert::ToDouble(words6[16]) + System::Convert::ToDouble(words6[24]) + System::Convert::ToDouble(words6[32]);
					f8 = System::Convert::ToDouble(words7[8]) + System::Convert::ToDouble(words7[16]) + System::Convert::ToDouble(words7[24]) + System::Convert::ToDouble(words7[32]);
					f9 = System::Convert::ToDouble(words8[8]) + System::Convert::ToDouble(words8[16]) + System::Convert::ToDouble(words8[24]) + System::Convert::ToDouble(words8[32]);
					f10 = System::Convert::ToDouble(words9[8]) + System::Convert::ToDouble(words9[16]) + System::Convert::ToDouble(words9[24]) + System::Convert::ToDouble(words9[32]);

					if (f1 / 19200 * 100 < 85)
						this->textBox63->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox63->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f2 / 19200 * 100 < 85)
						this->textBox62->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox62->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f3 / 19200 * 100 < 85)
						this->textBox61->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox61->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f4 / 19200 * 100 < 85)
						this->textBox60->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox60->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f5 / 19200 * 100 < 85)
						this->textBox59->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox59->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f6 / 19200 * 100 < 85)
						this->textBox58->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox58->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f7 / 19200 * 100 < 85)
						this->textBox57->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox57->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f8 / 19200 * 100 < 85)
						this->textBox56->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox56->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f9 / 19200 * 100 < 85)
						this->textBox55->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox55->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f10 / 19200 * 100 < 85)
						this->textBox54->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox54->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
				}
					
				else if ((time1 * 100 + time2) >= 530 && (time1 * 100 + time2) < 630) {
					f1 = System::Convert::ToDouble(words13[8]) + System::Convert::ToDouble(words13[16]) + System::Convert::ToDouble(words13[24]) + System::Convert::ToDouble(words13[32]);
					f2 = System::Convert::ToDouble(words[8]) + System::Convert::ToDouble(words[16]) + System::Convert::ToDouble(words[24]) + System::Convert::ToDouble(words[32]);
					f3 = System::Convert::ToDouble(words2[8]) + System::Convert::ToDouble(words2[16]) + System::Convert::ToDouble(words2[24]) + System::Convert::ToDouble(words2[32]);
					f4 = System::Convert::ToDouble(words3[8]) + System::Convert::ToDouble(words3[16]) + System::Convert::ToDouble(words3[24]) + System::Convert::ToDouble(words3[32]);
					f5 = System::Convert::ToDouble(words4[8]) + System::Convert::ToDouble(words4[16]) + System::Convert::ToDouble(words4[24]) + System::Convert::ToDouble(words4[32]);
					f6 = System::Convert::ToDouble(words5[8]) + System::Convert::ToDouble(words5[16]) + System::Convert::ToDouble(words5[24]) + System::Convert::ToDouble(words5[32]);
					f7 = System::Convert::ToDouble(words6[8]) + System::Convert::ToDouble(words6[16]) + System::Convert::ToDouble(words6[24]) + System::Convert::ToDouble(words6[32]);
					f8 = System::Convert::ToDouble(words7[8]) + System::Convert::ToDouble(words7[16]) + System::Convert::ToDouble(words7[24]) + System::Convert::ToDouble(words7[32]);
					f9 = System::Convert::ToDouble(words8[8]) + System::Convert::ToDouble(words8[16]) + System::Convert::ToDouble(words8[24]) + System::Convert::ToDouble(words8[32]);
					f10 = System::Convert::ToDouble(words9[8]) + System::Convert::ToDouble(words9[16]) + System::Convert::ToDouble(words9[24]) + System::Convert::ToDouble(words9[32]);
					f11 = System::Convert::ToDouble(words10[8]) + System::Convert::ToDouble(words10[16]) + System::Convert::ToDouble(words10[24]) + System::Convert::ToDouble(words10[32]);
					
					if (f1 / 19200 * 100 < 85)
						this->textBox63->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox63->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f2 / 19200 * 100 < 85)
						this->textBox62->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox62->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f3 / 19200 * 100 < 85)
						this->textBox61->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox61->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f4 / 19200 * 100 < 85)
						this->textBox60->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox60->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f5 / 19200 * 100 < 85)
						this->textBox59->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox59->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f6 / 19200 * 100 < 85)
						this->textBox58->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox58->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f7 / 19200 * 100 < 85)
						this->textBox57->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox57->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f8 / 19200 * 100 < 85)
						this->textBox56->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox56->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f9 / 19200 * 100 < 85)
						this->textBox55->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox55->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f10 / 19200 * 100 < 85)
						this->textBox54->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox54->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f11 / 19200 * 100 < 85)
						this->textBox53->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox53->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
				}
					
				else if ((time1 * 100 + time2) >= 630 && (time1 * 100 + time2) < 730) {
					f1 = System::Convert::ToDouble(words13[8]) + System::Convert::ToDouble(words13[16]) + System::Convert::ToDouble(words13[24]) + System::Convert::ToDouble(words13[32]);
					f2 = System::Convert::ToDouble(words[8]) + System::Convert::ToDouble(words[16]) + System::Convert::ToDouble(words[24]) + System::Convert::ToDouble(words[32]);
					f3 = System::Convert::ToDouble(words2[8]) + System::Convert::ToDouble(words2[16]) + System::Convert::ToDouble(words2[24]) + System::Convert::ToDouble(words2[32]);
					f4 = System::Convert::ToDouble(words3[8]) + System::Convert::ToDouble(words3[16]) + System::Convert::ToDouble(words3[24]) + System::Convert::ToDouble(words3[32]);
					f5 = System::Convert::ToDouble(words4[8]) + System::Convert::ToDouble(words4[16]) + System::Convert::ToDouble(words4[24]) + System::Convert::ToDouble(words4[32]);
					f6 = System::Convert::ToDouble(words5[8]) + System::Convert::ToDouble(words5[16]) + System::Convert::ToDouble(words5[24]) + System::Convert::ToDouble(words5[32]);
					f7 = System::Convert::ToDouble(words6[8]) + System::Convert::ToDouble(words6[16]) + System::Convert::ToDouble(words6[24]) + System::Convert::ToDouble(words6[32]);
					f8 = System::Convert::ToDouble(words7[8]) + System::Convert::ToDouble(words7[16]) + System::Convert::ToDouble(words7[24]) + System::Convert::ToDouble(words7[32]);
					f9 = System::Convert::ToDouble(words8[8]) + System::Convert::ToDouble(words8[16]) + System::Convert::ToDouble(words8[24]) + System::Convert::ToDouble(words8[32]);
					f10 = System::Convert::ToDouble(words9[8]) + System::Convert::ToDouble(words9[16]) + System::Convert::ToDouble(words9[24]) + System::Convert::ToDouble(words9[32]);
					f11 = System::Convert::ToDouble(words10[8]) + System::Convert::ToDouble(words10[16]) + System::Convert::ToDouble(words10[24]) + System::Convert::ToDouble(words10[32]);
					f12 = System::Convert::ToDouble(words11[8]) + System::Convert::ToDouble(words11[16]) + System::Convert::ToDouble(words11[24]) + System::Convert::ToDouble(words11[32]);
					
					if (f1 / 19200 * 100 < 85)
						this->textBox63->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox63->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f2 / 19200 * 100 < 85)
						this->textBox62->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox62->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f3 / 19200 * 100 < 85)
						this->textBox61->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox61->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f4 / 19200 * 100 < 85)
						this->textBox60->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox60->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f5 / 19200 * 100 < 85)
						this->textBox59->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox59->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f6 / 19200 * 100 < 85)
						this->textBox58->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox58->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f7 / 19200 * 100 < 85)
						this->textBox57->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox57->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f8 / 19200 * 100 < 85)
						this->textBox56->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox56->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f9 / 19200 * 100 < 85)
						this->textBox55->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox55->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f10 / 19200 * 100 < 85)
						this->textBox54->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox54->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f11 / 19200 * 100 < 85)
						this->textBox53->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox53->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
					if (f12 / 19200 * 100 < 85)
						this->textBox52->BackColor = System::Drawing::Color::Red;
					else {
						this->textBox52->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(70)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
							static_cast<System::Int32>(static_cast<System::Byte>(0)));
					}
				}
				

			return 0;
		}
		
		
#pragma endregion
		   
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		read();
	}
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
	second = second + 1;
	
	if (second == 550) {
		second = 0;
		minute = minute + 1;
	} 
	
	if (minute%3 == 0)
		read();

	if (minute = 200)
		minute = 5;
}
private: System::Void textBox49_Click(System::Object^  sender, System::EventArgs^  e) {
	Close();
}
};
}
	

