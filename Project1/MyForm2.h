#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<string>
#include<math.h>

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


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


	private: System::Windows::Forms::Label^  label1;

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::Button^  button19;
	private: System::Windows::Forms::Button^  button20;
	private: System::Windows::Forms::Button^  button21;
	private: System::Windows::Forms::Button^  button22;
	private: System::Windows::Forms::Button^  button23;
	private: System::Windows::Forms::Button^  button24;
	private: System::Windows::Forms::Button^  button25;
	private: System::Windows::Forms::Button^  button26;
	private: System::Windows::Forms::Button^  button27;
	private: System::Windows::Forms::Button^  button28;
	private: System::Windows::Forms::Button^  button29;
	private: System::Windows::Forms::Button^  button30;
	private: System::Windows::Forms::Button^  button31;
	private: System::Windows::Forms::Button^  button32;
	private: System::Windows::Forms::Button^  button33;
	private: System::Windows::Forms::Button^  button34;
	private: System::Windows::Forms::Button^  button35;

	private: System::Windows::Forms::Button^  button37;
	private: System::Windows::Forms::Button^  button38;
	private: System::Windows::Forms::Button^  button39;
	private: System::Windows::Forms::Button^  button40;
	private: System::Windows::Forms::Button^  button41;
	private: System::Windows::Forms::Button^  button36;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Button^  button42;
	private: System::Windows::Forms::ProgressBar^  progressBar1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  button43;
	private: System::Windows::Forms::Button^  button44;



	protected:

	protected:

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->button38 = (gcnew System::Windows::Forms::Button());
			this->button39 = (gcnew System::Windows::Forms::Button());
			this->button40 = (gcnew System::Windows::Forms::Button());
			this->button41 = (gcnew System::Windows::Forms::Button());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button42 = (gcnew System::Windows::Forms::Button());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button43 = (gcnew System::Windows::Forms::Button());
			this->button44 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(150, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(455, 16);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Enter the SKU\'s from the buttons below and click enter when you are finished";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(28, 42);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(111, 51);
			this->button1->TabIndex = 4;
			this->button1->Text = L"E22310-00  Chicken and Brown (CAN)";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(28, 98);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(111, 51);
			this->button2->TabIndex = 5;
			this->button2->Text = L"U03235-00  Chicken and Brown(US)";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(28, 154);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(111, 51);
			this->button3->TabIndex = 6;
			this->button3->Text = L"E26650-00 -  Veg Harvest (CAD)";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(28, 210);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(111, 51);
			this->button4->TabIndex = 7;
			this->button4->Text = L"U23334-00 - Veg Harvest (US)";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(28, 266);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(111, 51);
			this->button5->TabIndex = 8;
			this->button5->Text = L"E22308-01 - Whole Grain Brown (CAD)";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(28, 322);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(111, 51);
			this->button6->TabIndex = 9;
			this->button6->Text = L"U03177-00 - Whole Grain Brown (US)";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(145, 42);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(111, 51);
			this->button7->TabIndex = 10;
			this->button7->Text = L"E14144-00 - Tomato and Herb (CAN)";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(145, 98);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(111, 51);
			this->button8->TabIndex = 11;
			this->button8->Text = L"E14140-00 - Long Grain (CAN)";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(145, 154);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(111, 51);
			this->button9->TabIndex = 12;
			this->button9->Text = L"U03176-00 - Long Grain (US)";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(145, 210);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(111, 51);
			this->button10->TabIndex = 13;
			this->button10->Text = L"E14143-02 - Oriental (CAN)";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(145, 266);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(111, 51);
			this->button11->TabIndex = 14;
			this->button11->Text = L"E14141-02 - Long Grain and Wild (CAN)";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(145, 322);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(111, 51);
			this->button12->TabIndex = 15;
			this->button12->Text = L"U03077-00 - Long Grain and Wild (US)";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(262, 42);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(111, 51);
			this->button13->TabIndex = 16;
			this->button13->Text = L"E14142-02 - Chicken and Wild (CAN)";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(262, 98);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(111, 51);
			this->button14->TabIndex = 17;
			this->button14->Text = L"E14149-00 - Mushroom and Wild (CAN)";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(262, 154);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(111, 51);
			this->button15->TabIndex = 18;
			this->button15->Text = L"E36127-00 - Basmati (CAN)";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(262, 210);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(111, 51);
			this->button16->TabIndex = 19;
			this->button16->Text = L"U34445-00 - Basmati (US)";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(262, 266);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(111, 51);
			this->button17->TabIndex = 20;
			this->button17->Text = L"U34446-00 - Jasmine (US)";
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(262, 322);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(111, 51);
			this->button18->TabIndex = 21;
			this->button18->Text = L"U03076-00 - Roasted Chicken (US)";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// button19
			// 
			this->button19->Location = System::Drawing::Point(379, 42);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(111, 51);
			this->button19->TabIndex = 22;
			this->button19->Text = L"U08545-00 - Pilaf (US)";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// button20
			// 
			this->button20->Location = System::Drawing::Point(379, 98);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(111, 51);
			this->button20->TabIndex = 23;
			this->button20->Text = L"U08546-00 - Teriyaki (US)";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
			// 
			// button21
			// 
			this->button21->Location = System::Drawing::Point(379, 154);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(111, 51);
			this->button21->TabIndex = 24;
			this->button21->Text = L"U20762-00 - Four Cheese (US)";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::button21_Click);
			// 
			// button22
			// 
			this->button22->Location = System::Drawing::Point(379, 210);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(111, 51);
			this->button22->TabIndex = 25;
			this->button22->Text = L"U28720-00 - Cajun (US)";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::button22_Click);
			// 
			// button23
			// 
			this->button23->Location = System::Drawing::Point(379, 266);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(111, 51);
			this->button23->TabIndex = 26;
			this->button23->Text = L"E38529-00 - Indian Curry (CAN)";
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm::button23_Click);
			// 
			// button24
			// 
			this->button24->Location = System::Drawing::Point(379, 322);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(111, 51);
			this->button24->TabIndex = 27;
			this->button24->Text = L"U23335-00 - Brown and Wild (US)";
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm::button24_Click);
			// 
			// button25
			// 
			this->button25->Location = System::Drawing::Point(496, 42);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(111, 51);
			this->button25->TabIndex = 28;
			this->button25->Text = L"U03234-00 - Garden Veg (US)";
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Click += gcnew System::EventHandler(this, &MyForm::button25_Click);
			// 
			// button26
			// 
			this->button26->Location = System::Drawing::Point(496, 98);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(111, 51);
			this->button26->TabIndex = 29;
			this->button26->Text = L"10105635 - Creamy Cheddar (CAN)";
			this->button26->UseVisualStyleBackColor = true;
			this->button26->Click += gcnew System::EventHandler(this, &MyForm::button26_Click);
			// 
			// button27
			// 
			this->button27->Location = System::Drawing::Point(496, 154);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(111, 51);
			this->button27->TabIndex = 30;
			this->button27->Text = L"U23325-00 - Santa Fe (US)";
			this->button27->UseVisualStyleBackColor = true;
			this->button27->Click += gcnew System::EventHandler(this, &MyForm::button27_Click);
			// 
			// button28
			// 
			this->button28->Location = System::Drawing::Point(496, 210);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(111, 51);
			this->button28->TabIndex = 31;
			this->button28->Text = L"E38085-00- Tomato and Herb Risotto (CAN)";
			this->button28->UseVisualStyleBackColor = true;
			this->button28->Click += gcnew System::EventHandler(this, &MyForm::button28_Click);
			// 
			// button29
			// 
			this->button29->Location = System::Drawing::Point(496, 266);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(111, 51);
			this->button29->TabIndex = 32;
			this->button29->Text = L"E34967-00 - Creamy Carb Risotto (CAN)";
			this->button29->UseVisualStyleBackColor = true;
			this->button29->Click += gcnew System::EventHandler(this, &MyForm::button29_Click);
			// 
			// button30
			// 
			this->button30->Location = System::Drawing::Point(496, 322);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(111, 51);
			this->button30->TabIndex = 33;
			this->button30->Text = L"E38086-00- Med Veg Risotto (CAN)";
			this->button30->UseVisualStyleBackColor = true;
			this->button30->Click += gcnew System::EventHandler(this, &MyForm::button30_Click);
			// 
			// button31
			// 
			this->button31->Location = System::Drawing::Point(613, 42);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(111, 51);
			this->button31->TabIndex = 34;
			this->button31->Text = L"10117500 - Brown Red Black Japonica (US)";
			this->button31->UseVisualStyleBackColor = true;
			this->button31->Click += gcnew System::EventHandler(this, &MyForm::button31_Click);
			// 
			// button32
			// 
			this->button32->Location = System::Drawing::Point(613, 98);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(111, 51);
			this->button32->TabIndex = 35;
			this->button32->Text = L"10105631 - Quinoa & Brown & Garlic (CAN)";
			this->button32->UseVisualStyleBackColor = true;
			this->button32->Click += gcnew System::EventHandler(this, &MyForm::button32_Click);
			// 
			// button33
			// 
			this->button33->Location = System::Drawing::Point(613, 154);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(111, 51);
			this->button33->TabIndex = 36;
			this->button33->Text = L"N28794 - SOC Quinoa & Brown and Garlic (US)";
			this->button33->UseVisualStyleBackColor = true;
			this->button33->Click += gcnew System::EventHandler(this, &MyForm::button33_Click);
			// 
			// button34
			// 
			this->button34->Location = System::Drawing::Point(613, 210);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(111, 51);
			this->button34->TabIndex = 37;
			this->button34->Text = L"U08547 - Butter and Garlic (US)";
			this->button34->UseVisualStyleBackColor = true;
			this->button34->Click += gcnew System::EventHandler(this, &MyForm::button34_Click);
			// 
			// button35
			// 
			this->button35->Location = System::Drawing::Point(613, 266);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(111, 51);
			this->button35->TabIndex = 38;
			this->button35->Text = L"10145682 - Whole Grain and Wild (CAN)";
			this->button35->UseVisualStyleBackColor = true;
			this->button35->Click += gcnew System::EventHandler(this, &MyForm::button35_Click);
			// 
			// button37
			// 
			this->button37->Location = System::Drawing::Point(613, 322);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(111, 51);
			this->button37->TabIndex = 40;
			this->button37->Text = L"E22311-00 - Vegetable Medley (CAN)";
			this->button37->UseVisualStyleBackColor = true;
			this->button37->Click += gcnew System::EventHandler(this, &MyForm::button37_Click);
			// 
			// button38
			// 
			this->button38->Location = System::Drawing::Point(145, 378);
			this->button38->Name = L"button38";
			this->button38->Size = System::Drawing::Size(111, 51);
			this->button38->TabIndex = 41;
			this->button38->Text = L"E14150-01 -Garlic and Wild (CAN)";
			this->button38->UseVisualStyleBackColor = true;
			this->button38->Click += gcnew System::EventHandler(this, &MyForm::button38_Click);
			// 
			// button39
			// 
			this->button39->Location = System::Drawing::Point(262, 378);
			this->button39->Name = L"button39";
			this->button39->Size = System::Drawing::Size(111, 51);
			this->button39->TabIndex = 42;
			this->button39->Text = L"U03080-00 - Spanish (US)";
			this->button39->UseVisualStyleBackColor = true;
			this->button39->Click += gcnew System::EventHandler(this, &MyForm::button39_Click);
			// 
			// button40
			// 
			this->button40->Location = System::Drawing::Point(379, 378);
			this->button40->Name = L"button40";
			this->button40->Size = System::Drawing::Size(111, 51);
			this->button40->TabIndex = 43;
			this->button40->Text = L"E36325-00 - Jasmine (CAN)";
			this->button40->UseVisualStyleBackColor = true;
			this->button40->Click += gcnew System::EventHandler(this, &MyForm::button40_Click);
			// 
			// button41
			// 
			this->button41->Location = System::Drawing::Point(496, 378);
			this->button41->Name = L"button41";
			this->button41->Size = System::Drawing::Size(111, 51);
			this->button41->TabIndex = 44;
			this->button41->Text = L"E34966-00 - Mushroom Risotto (CAN)";
			this->button41->UseVisualStyleBackColor = true;
			this->button41->Click += gcnew System::EventHandler(this, &MyForm::button41_Click);
			// 
			// button36
			// 
			this->button36->Location = System::Drawing::Point(268, 444);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(105, 37);
			this->button36->TabIndex = 45;
			this->button36->Text = L"Enter";
			this->button36->UseVisualStyleBackColor = true;
			this->button36->Click += gcnew System::EventHandler(this, &MyForm::button36_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(835, 404);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(82, 20);
			this->textBox1->TabIndex = 46;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(756, 65);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(171, 314);
			this->textBox2->TabIndex = 47;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(792, 49);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(97, 13);
			this->label2->TabIndex = 48;
			this->label2->Text = L"Original SKU order:";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(944, 65);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(171, 314);
			this->textBox3->TabIndex = 49;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(982, 49);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(97, 13);
			this->label3->TabIndex = 50;
			this->label3->Text = L"Optimal SKU order:";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(1021, 404);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(82, 20);
			this->textBox4->TabIndex = 51;
			// 
			// button42
			// 
			this->button42->Location = System::Drawing::Point(27, 548);
			this->button42->Name = L"button42";
			this->button42->Size = System::Drawing::Size(82, 21);
			this->button42->TabIndex = 52;
			this->button42->Text = L"Clear";
			this->button42->UseVisualStyleBackColor = true;
			this->button42->Click += gcnew System::EventHandler(this, &MyForm::button42_Click);
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(934, 548);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(181, 21);
			this->progressBar1->TabIndex = 53;
			this->progressBar1->Click += gcnew System::EventHandler(this, &MyForm::progressBar1_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(763, 407);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(67, 13);
			this->label4->TabIndex = 54;
			this->label4->Text = L"Original time:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(948, 407);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(67, 13);
			this->label5->TabIndex = 55;
			this->label5->Text = L"Optimal time:";
			// 
			// button43
			// 
			this->button43->Location = System::Drawing::Point(115, 548);
			this->button43->Name = L"button43";
			this->button43->Size = System::Drawing::Size(82, 21);
			this->button43->TabIndex = 56;
			this->button43->Text = L"Backspace";
			this->button43->UseVisualStyleBackColor = true;
			this->button43->Click += gcnew System::EventHandler(this, &MyForm::button43_Click);
			// 
			// button44
			// 
			this->button44->Location = System::Drawing::Point(379, 444);
			this->button44->Name = L"button44";
			this->button44->Size = System::Drawing::Size(105, 37);
			this->button44->TabIndex = 57;
			this->button44->Text = L"Lock- in first SKU";
			this->button44->UseVisualStyleBackColor = true;
			this->button44->Click += gcnew System::EventHandler(this, &MyForm::button44_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1145, 581);
			this->Controls->Add(this->button44);
			this->Controls->Add(this->button43);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->button42);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button36);
			this->Controls->Add(this->button41);
			this->Controls->Add(this->button40);
			this->Controls->Add(this->button39);
			this->Controls->Add(this->button38);
			this->Controls->Add(this->button37);
			this->Controls->Add(this->button35);
			this->Controls->Add(this->button34);
			this->Controls->Add(this->button33);
			this->Controls->Add(this->button32);
			this->Controls->Add(this->button31);
			this->Controls->Add(this->button30);
			this->Controls->Add(this->button29);
			this->Controls->Add(this->button28);
			this->Controls->Add(this->button27);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Changeover Optimization";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		
	
		
			unsigned factorial(unsigned n)
			{
				if (n == 1)
					return 1;
				else
					return n * factorial(n - 1);
			}

	
			void permute(array<Char> ^a, int l, int r, int p, array<Char> ^v, int t)
		{
			static int optimal = 0, s=0, z = 0;
			int i, x, j, time = 0;
			Char temp;
			Char first;
			array<Char> ^b = gcnew array<Char>(20);
			array<Char> ^c = gcnew array<Char>(20);
			array<Char> ^d = gcnew array<Char>(20);
			array<Char> ^e = gcnew array<Char>(20);
			array<Char> ^g = gcnew array<Char>(20);
			array<Char> ^h = gcnew array<Char>(20);
			array<Char> ^k = gcnew array<Char>(20);

			array<String^> ^optarr = gcnew array<String^>(r+1);

			if (p == 0) {
				p = 1;
				for (x = 0; x<r + 1; x++) {
					for (j = 0; j<r + 1; j++) {
						if (j - x == 1) {
							if (v[x] == 'a') {
								if (v[j] == 'b')
									time = time + 90;
								else if (v[j] == 'c')
									time = time + 90;
								else if (v[j] == 'd')
									time = time + 90;
								else if (v[j] == 'e')
									time = time + 90;
								else if (v[j] == 'f')
									time = time + 90;
								else if (v[j] == 'g')
									time = time + 35;
								else if (v[j] == 'h')
									time = time + 90;
								else if (v[j] == 'i')
									time = time + 90;
								else if (v[j] == 'j')
									time = time + 90;
								else if (v[j] == 'k')
									time = time + 90;
								else if (v[j] == 'l')
									time = time + 55;
								else if (v[j] == 'm')
									time = time + 90;
								else if (v[j] == 'n')
									time = time + 90;
								else if (v[j] == 'o')
									time = time + 55;
								else if (v[j] == 'p')
									time = time + 55;
								else if (v[j] == 'q')
									time = time + 90;
								else if (v[j] == 'r')
									time = time + 90;
								else if (v[j] == 's')
									time = time + 90;
								else if (v[j] == 't')
									time = time + 90;
								else if (v[j] == 'u')
									time = time + 90;
								else if (v[j] == 'v')
									time = time + 90;
								else if (v[j] == 'w')
									time = time + 45;
								else if (v[j] == 'x')
									time = time + 40;
								else if (v[j] == 'y')
									time = time + 70;
								else if (v[j] == 'z')
									time = time + 90;
								else if (v[j] == 'A')
									time = time + 90;
								else if (v[j] == 'B')
									time = time + 90;
								else if (v[j] == 'C')
									time = time + 90;
								else if (v[j] == 'D')
									time = time + 40;
								else if (v[j] == 'E')
									time = time + 90;
								else if (v[j] == 'F')
									time = time + 90;
								else if (v[j] == 'G')
									time = time + 40;
								else if (v[j] == 'H')
									time = time + 90;
								else if (v[j] == 'I')
									time = time + 40;
								else if (v[j] == 'J')
									time = time + 90;
								else if (v[j] == 'K')
									time = time + 90;
								else if (v[j] == 'L')
									time = time + 90;
								else if (v[j] == 'M')
									time = time + 90;
								else if (v[j] == 'N')
									time = time + 90;
								else if (v[j] == 'O')
									time = time + 90;
								else if (v[j] == 'P')
									time = time + 90;
								else if (v[j] == 'Q')
									time = time + 90;
								else if (v[j] == 'R')
									time = time + 90;
								else if (v[j] == 'S')
									time = time + 90;
								else if (v[j] == 'T')
									time = time + 90;
							} if (v[x] == 'b') {
								if (v[j] == 'a')
									time = time + 30;
								else if (v[j] == 'c')
									time = time + 60;

								else if (v[j] == 'd')
									time = time + 60;

								else if (v[j] == 'e')
									time = time + 30;

								else if (v[j] == 'f')
									time = time + 30;

								else if (v[j] == 'g')
									time = time + 45;

								else if (v[j] == 'h')
									time = time + 40;

								else if (v[j] == 'i')
									time = time + 40;

								else if (v[j] == 'j')
									time = time + 40;

								else if (v[j] == 'k')
									time = time + 40;

								else if (v[j] == 'l')
									time = time + 55;

								else if (v[j] == 'm')
									time = time + 55;

								else if (v[j] == 'n')
									time = time + 55;

								else if (v[j] == 'o')
									time = time + 55;

								else if (v[j] == 'p')
									time = time + 55;

								else if (v[j] == 'q')
									time = time + 40;

								else if (v[j] == 'r')
									time = time + 40;

								else if (v[j] == 's')
									time = time + 40;

								else if (v[j] == 't')
									time = time + 40;

								else if (v[j] == 'u')
									time = time + 45;

								else if (v[j] == 'v')
									time = time + 40;

								else if (v[j] == 'w')
									time = time + 45;

								else if (v[j] == 'x')
									time = time + 40;

								else if (v[j] == 'y')
									time = time + 70;

								else if (v[j] == 'z')
									time = time + 45;

								else if (v[j] == 'A')
									time = time + 35;

								else if (v[j] == 'B')
									time = time + 40;

								else if (v[j] == 'C')
									time = time + 45;

								else if (v[j] == 'D')
									time = time + 40;

								else if (v[j] == 'E')
									time = time + 65;

								else if (v[j] == 'F')
									time = time + 40;

								else if (v[j] == 'G')
									time = time + 40;

								else if (v[j] == 'H')
									time = time + 45;

								else if (v[j] == 'I')
									time = time + 55;

								else if (v[j] == 'J')
									time = time + 55;

								else if (v[j] == 'K')
									time = time + 55;

								else if (v[j] == 'L')
									time = time + 55;

								else if (v[j] == 'M')
									time = time + 55;

								else if (v[j] == 'N')
									time = time + 55;
								else if (v[j] == 'O')
									time = time + 40;
								else if (v[j] == 'P')
									time = time + 90;
								else if (v[j] == 'Q')
									time = time + 30;
								else if (v[j] == 'R')
									time = time + 40;
								else if (v[j] == 'S')
									time = time + 40;
								else if (v[j] == 'T')
									time = time + 55;
							} if (v[x] == 'c') {
								if (v[j] == 'b')
									time = time + 90;

								else if (v[j] == 'a')
									time = time + 55;

								else if (v[j] == 'd')
									time = time + 30;

								else if (v[j] == 'e')
									time = time + 90;

								else if (v[j] == 'f')
									time = time + 90;

								else if (v[j] == 'g')
									time = time + 70;

								else if (v[j] == 'h')
									time = time + 90;

								else if (v[j] == 'i')
									time = time + 90;

								else if (v[j] == 'j')
									time = time + 90;

								else if (v[j] == 'k')
									time = time + 60;

								else if (v[j] == 'l')
									time = time + 85;

								else if (v[j] == 'm')
									time = time + 85;

								else if (v[j] == 'n')
									time = time + 90;

								else if (v[j] == 'o')
									time = time + 85;

								else if (v[j] == 'p')
									time = time + 85;

								else if (v[j] == 'q')
									time = time + 90;

								else if (v[j] == 'r')
									time = time + 90;

								else if (v[j] == 's')
									time = time + 90;

								else if (v[j] == 't')
									time = time + 90;

								else if (v[j] == 'u')
									time = time + 90;

								else if (v[j] == 'v')
									time = time + 70;

								else if (v[j] == 'w')
									time = time + 70;

								else if (v[j] == 'x')
									time = time + 70;

								else if (v[j] == 'y')
									time = time + 70;

								else if (v[j] == 'z')
									time = time + 90;

								else if (v[j] == 'A')
									time = time + 80;

								else if (v[j] == 'B')
									time = time + 90;

								else if (v[j] == 'C')
									time = time + 90;

								else if (v[j] == 'D')
									time = time + 70;

								else if (v[j] == 'E')
									time = time + 90;

								else if (v[j] == 'F')
									time = time + 90;

								else if (v[j] == 'G')
									time = time + 65;

								else if (v[j] == 'H')
									time = time + 90;

								else if (v[j] == 'I')
									time = time + 70;

								else if (v[j] == 'J')
									time = time + 90;

								else if (v[j] == 'K')
									time = time + 90;

								else if (v[j] == 'L')
									time = time + 90;

								else if (v[j] == 'M')
									time = time + 90;

								else if (v[j] == 'N')
									time = time + 90;
								else if (v[j] == 'O')
									time = time + 90;
								else if (v[j] == 'Q')
									time = time + 90;
								else if (v[j] == 'R')
									time = time + 90;
								else if (v[j] == 'S')
									time = time + 90;
								else if (v[j] == 'T')
									time = time + 85;
							} if (v[x] == 'd') {
								if (v[j] == 'a')
									time = time + 55;

								else if (v[j] == 'b')
									time = time + 90;

								else if (v[j] == 'c')
									time = time + 40;

								else if (v[j] == 'e')
									time = time + 90;

								else if (v[j] == 'f')
									time = time + 90;

								else if (v[j] == 'g')
									time = time + 70;

								else if (v[j] == 'h')
									time = time + 90;

								else if (v[j] == 'i')
									time = time + 90;

								else if (v[j] == 'j')
									time = time + 90;

								else if (v[j] == 'k')
									time = time + 60;

								else if (v[j] == 'l')
									time = time + 85;

								else if (v[j] == 'm')
									time = time + 85;

								else if (v[j] == 'n')
									time = time + 90;

								else if (v[j] == 'o')
									time = time + 85;

								else if (v[j] == 'p')
									time = time + 85;

								else if (v[j] == 'q')
									time = time + 90;

								else if (v[j] == 'r')
									time = time + 90;

								else if (v[j] == 's')
									time = time + 90;

								else if (v[j] == 't')
									time = time + 90;

								else if (v[j] == 'u')
									time = time + 90;

								else if (v[j] == 'v')
									time = time + 70;

								else if (v[j] == 'w')
									time = time + 70;

								else if (v[j] == 'x')
									time = time + 70;

								else if (v[j] == 'y')
									time = time + 70;

								else if (v[j] == 'z')
									time = time + 90;

								else if (v[j] == 'A')
									time = time + 80;

								else if (v[j] == 'B')
									time = time + 90;

								else if (v[j] == 'C')
									time = time + 90;

								else if (v[j] == 'D')
									time = time + 70;

								else if (v[j] == 'E')
									time = time + 90;

								else if (v[j] == 'F')
									time = time + 90;

								else if (v[j] == 'G')
									time = time + 65;

								else if (v[j] == 'H')
									time = time + 90;

								else if (v[j] == 'I')
									time = time + 70;

								else if (v[j] == 'J')
									time = time + 90;

								else if (v[j] == 'K')
									time = time + 90;

								else if (v[j] == 'L')
									time = time + 90;

								else if (v[j] == 'M')
									time = time + 90;

								else if (v[j] == 'N')
									time = time + 90;
								else if (v[j] == 'O')
									time = time + 90;
								else if (v[j] == 'P')
									time = time + 40;
								else if (v[j] == 'Q')
									time = time + 90;
								else if (v[j] == 'R')
									time = time + 90;
								else if (v[j] == 'S')
									time = time + 90;
								else if (v[j] == 'T')
									time = time + 85;
							} if (v[x] == 'e') {
								if (v[j] == 'a')
									time = time + 20;

								else if (v[j] == 'b')
									time = time + 20;

								else if (v[j] == 'c')
									time = time + 30;

								else if (v[j] == 'd')
									time = time + 60;

								else if (v[j] == 'f')
									time = time + 10;

								else if (v[j] == 'g')
									time = time + 40;

								else if (v[j] == 'h')
									time = time + 35;

								else if (v[j] == 'i')
									time = time + 35;

								else if (v[j] == 'j')
									time = time + 20;

								else if (v[j] == 'k')
									time = time + 35;

								else if (v[j] == 'l')
									time = time + 50;

								else if (v[j] == 'm')
									time = time + 50;

								else if (v[j] == 'n')
									time = time + 50;

								else if (v[j] == 'o')
									time = time + 50;

								else if (v[j] == 'p')
									time = time + 50;

								else if (v[j] == 'q')
									time = time + 35;

								else if (v[j] == 'r')
									time = time + 35;

								else if (v[j] == 's')
									time = time + 10;

								else if (v[j] == 't')
									time = time + 35;

								else if (v[j] == 'u')
									time = time + 40;

								else if (v[j] == 'v')
									time = time + 30;

								else if (v[j] == 'w')
									time = time + 40;

								else if (v[j] == 'x')
									time = time + 35;

								else if (v[j] == 'y')
									time = time + 70;

								else if (v[j] == 'z')
									time = time + 35;

								else if (v[j] == 'A')
									time = time + 30;

								else if (v[j] == 'B')
									time = time + 35;

								else if (v[j] == 'C')
									time = time + 40;

								else if (v[j] == 'D')
									time = time + 35;

								else if (v[j] == 'E')
									time = time + 60;

								else if (v[j] == 'F')
									time = time + 35;

								else if (v[j] == 'G')
									time = time + 35;

								else if (v[j] == 'H')
									time = time + 40;

								else if (v[j] == 'I')
									time = time + 45;

								else if (v[j] == 'J')
									time = time + 90;

								else if (v[j] == 'K')
									time = time + 90;

								else if (v[j] == 'L')
									time = time + 90;

								else if (v[j] == 'M')
									time = time + 90;

								else if (v[j] == 'N')
									time = time + 90;
								else if (v[j] == 'O')
									time = time + 35;
								else if (v[j] == 'P')
									time = time + 30;
								else if (v[j] == 'Q')
									time = time + 90;
								else if (v[j] == 'R')
									time = time + 35;
								else if (v[j] == 'S')
									time = time + 35;
								else if (v[j] == 'T')
									time = time + 50;
							} if (v[x] == 'f') {
								if (v[j] == 'a')
									time = time + 20;

								else if (v[j] == 'b')
									time = time + 20;

								else if (v[j] == 'c')
									time = time + 25;

								else if (v[j] == 'd')
									time = time + 40;

								else if (v[j] == 'e')
									time = time + 10;

								else if (v[j] == 'g')
									time = time + 40;

								else if (v[j] == 'h')
									time = time + 35;

								else if (v[j] == 'i')
									time = time + 35;

								else if (v[j] == 'j')
									time = time + 20;

								else if (v[j] == 'k')
									time = time + 30;

								else if (v[j] == 'l')
									time = time + 50;

								else if (v[j] == 'm')
									time = time + 35;

								else if (v[j] == 'n')
									time = time + 35;

								else if (v[j] == 'o')
									time = time + 50;

								else if (v[j] == 'p')
									time = time + 50;

								else if (v[j] == 'q')
									time = time + 35;

								else if (v[j] == 'r')
									time = time + 35;

								else if (v[j] == 's')
									time = time + 25;

								else if (v[j] == 't')
									time = time + 35;

								else if (v[j] == 'u')
									time = time + 25;

								else if (v[j] == 'v')
									time = time + 35;

								else if (v[j] == 'w')
									time = time + 40;

								else if (v[j] == 'x')
									time = time + 35;

								else if (v[j] == 'y')
									time = time + 70;

								else if (v[j] == 'z')
									time = time + 40;

								else if (v[j] == 'A')
									time = time + 25;

								else if (v[j] == 'B')
									time = time + 35;

								else if (v[j] == 'C')
									time = time + 25;

								else if (v[j] == 'D')
									time = time + 30;

								else if (v[j] == 'E')
									time = time + 35;

								else if (v[j] == 'F')
									time = time + 35;

								else if (v[j] == 'G')
									time = time + 35;

								else if (v[j] == 'H')
									time = time + 40;

								else if (v[j] == 'I')
									time = time + 45;

								else if (v[j] == 'J')
									time = time + 35;

								else if (v[j] == 'K')
									time = time + 35;

								else if (v[j] == 'L')
									time = time + 35;

								else if (v[j] == 'M')
									time = time + 35;

								else if (v[j] == 'N')
									time = time + 35;
								else if (v[j] == 'O')
									time = time + 35;
								else if (v[j] == 'P')
									time = time + 25;
								else if (v[j] == 'Q')
									time = time + 10;
								else if (v[j] == 'R')
									time = time + 35;
								else if (v[j] == 'S')
									time = time + 35;
								else if (v[j] == 'T')
									time = time + 35;
							} if (v[x] == 'g') {
								if (v[j] == 'a')
									time = time + 65;

								else if (v[j] == 'b')
									time = time + 90;

								else if (v[j] == 'c')
									time = time + 90;

								else if (v[j] == 'd')
									time = time + 90;

								else if (v[j] == 'e')
									time = time + 90;

								else if (v[j] == 'f')
									time = time + 90;

								else if (v[j] == 'h')
									time = time + 90;

								else if (v[j] == 'i')
									time = time + 90;

								else if (v[j] == 'j')
									time = time + 90;

								else if (v[j] == 'k')
									time = time + 90;

								else if (v[j] == 'l')
									time = time + 60;

								else if (v[j] == 'm')
									time = time + 90;

								else if (v[j] == 'n')
									time = time + 90;

								else if (v[j] == 'o')
									time = time + 60;

								else if (v[j] == 'p')
									time = time + 60;

								else if (v[j] == 'q')
									time = time + 90;

								else if (v[j] == 'r')
									time = time + 90;

								else if (v[j] == 's')
									time = time + 90;

								else if (v[j] == 't')
									time = time + 90;

								else if (v[j] == 'u')
									time = time + 90;

								else if (v[j] == 'v')
									time = time + 90;

								else if (v[j] == 'w')
									time = time + 40;

								else if (v[j] == 'x')
									time = time + 40;

								else if (v[j] == 'y')
									time = time + 30;

								else if (v[j] == 'z')
									time = time + 90;

								else if (v[j] == 'A')
									time = time + 90;

								else if (v[j] == 'B')
									time = time + 90;

								else if (v[j] == 'C')
									time = time + 90;

								else if (v[j] == 'D')
									time = time + 40;

								else if (v[j] == 'E')
									time = time + 90;

								else if (v[j] == 'F')
									time = time + 90;

								else if (v[j] == 'G')
									time = time + 65;

								else if (v[j] == 'H')
									time = time + 90;

								else if (v[j] == 'I')
									time = time + 70;

								else if (v[j] == 'J')
									time = time + 90;

								else if (v[j] == 'K')
									time = time + 90;

								else if (v[j] == 'L')
									time = time + 90;

								else if (v[j] == 'M')
									time = time + 90;

								else if (v[j] == 'N')
									time = time + 90;
								else if (v[j] == 'O')
									time = time + 90;
								else if (v[j] == 'P')
									time = time + 90;
								else if (v[j] == 'Q')
									time = time + 90;
								else if (v[j] == 'R')
									time = time + 90;
								else if (v[j] == 'S')
									time = time + 90;
								else if (v[j] == 'T')
									time = time + 90;
							} if (v[x] == 'h') {
								if (v[j] == 'a')
									time = time + 40;

								else if (v[j] == 'b')
									time = time + 40;

								else if (v[j] == 'c')
									time = time + 70;

								else if (v[j] == 'd')
									time = time + 70;

								else if (v[j] == 'e')
									time = time + 40;

								else if (v[j] == 'f')
									time = time + 40;

								else if (v[j] == 'g')
									time = time + 45;

								else if (v[j] == 'i')
									time = time + 35;

								else if (v[j] == 'j')
									time = time + 35;

								else if (v[j] == 'k')
									time = time + 35;

								else if (v[j] == 'l')
									time = time + 45;

								else if (v[j] == 'm')
									time = time + 45;

								else if (v[j] == 'n')
									time = time + 40;

								else if (v[j] == 'o')
									time = time + 45;

								else if (v[j] == 'p')
									time = time + 45;

								else if (v[j] == 'q')
									time = time + 40;

								else if (v[j] == 'r')
									time = time + 40;

								else if (v[j] == 's')
									time = time + 40;

								else if (v[j] == 't')
									time = time + 35;

								else if (v[j] == 'u')
									time = time + 25;

								else if (v[j] == 'v')
									time = time + 40;

								else if (v[j] == 'w')
									time = time + 45;

								else if (v[j] == 'x')
									time = time + 45;

								else if (v[j] == 'y')
									time = time + 70;

								else if (v[j] == 'z')
									time = time + 35;

								else if (v[j] == 'A')
									time = time + 55;

								else if (v[j] == 'B')
									time = time + 40;

								else if (v[j] == 'C')
									time = time + 45;

								else if (v[j] == 'D')
									time = time + 45;

								else if (v[j] == 'E')
									time = time + 70;

								else if (v[j] == 'F')
									time = time + 40;

								else if (v[j] == 'G')
									time = time + 40;

								else if (v[j] == 'H')
									time = time + 45;

								else if (v[j] == 'I')
									time = time + 55;

								else if (v[j] == 'J')
									time = time + 90;

								else if (v[j] == 'K')
									time = time + 90;

								else if (v[j] == 'L')
									time = time + 90;

								else if (v[j] == 'M')
									time = time + 90;

								else if (v[j] == 'N')
									time = time + 90;
								else if (v[j] == 'O')
									time = time + 40;
								else if (v[j] == 'P')
									time = time + 70;
								else if (v[j] == 'Q')
									time = time + 40;
								else if (v[j] == 'R')
									time = time + 35;
								else if (v[j] == 'S')
									time = time + 40;
								else if (v[j] == 'T')
									time = time + 45;
							}if (v[x] == 'i') {
								if (v[j] == 'a')
									time = time + 35;

								else if (v[j] == 'b')
									time = time + 35;

								else if (v[j] == 'c')
									time = time + 60;

								else if (v[j] == 'd')
									time = time + 40;

								else if (v[j] == 'e')
									time = time + 35;

								else if (v[j] == 'f')
									time = time + 35;

								else if (v[j] == 'g')
									time = time + 30;

								else if (v[j] == 'h')
									time = time + 30;

								else if (v[j] == 'j')
									time = time + 10;

								else if (v[j] == 'k')
									time = time + 20;

								else if (v[j] == 'l')
									time = time + 30;

								else if (v[j] == 'm')
									time = time + 30;

								else if (v[j] == 'n')
									time = time + 30;

								else if (v[j] == 'o')
									time = time + 30;

								else if (v[j] == 'p')
									time = time + 30;

								else if (v[j] == 'q')
									time = time + 35;

								else if (v[j] == 'r')
									time = time + 35;

								else if (v[j] == 's')
									time = time + 35;

								else if (v[j] == 't')
									time = time + 20;

								else if (v[j] == 'u')
									time = time + 35;

								else if (v[j] == 'v')
									time = time + 30;

								else if (v[j] == 'w')
									time = time + 30;

								else if (v[j] == 'x')
									time = time + 15;

								else if (v[j] == 'y')
									time = time + 60;

								else if (v[j] == 'z')
									time = time + 40;

								else if (v[j] == 'A')
									time = time + 50;

								else if (v[j] == 'B')
									time = time + 35;

								else if (v[j] == 'C')
									time = time + 30;

								else if (v[j] == 'D')
									time = time + 15;

								else if (v[j] == 'E')
									time = time + 65;

								else if (v[j] == 'F')
									time = time + 35;

								else if (v[j] == 'G')
									time = time + 35;

								else if (v[j] == 'H')
									time = time + 40;

								else if (v[j] == 'I')
									time = time + 45;

								else if (v[j] == 'J')
									time = time + 90;

								else if (v[j] == 'K')
									time = time + 90;

								else if (v[j] == 'L')
									time = time + 90;

								else if (v[j] == 'M')
									time = time + 90;

								else if (v[j] == 'N')
									time = time + 90;
								else if (v[j] == 'O')
									time = time + 35;
								else if (v[j] == 'P')
									time = time + 60;
								else if (v[j] == 'Q')
									time = time + 35;
								else if (v[j] == 'S')
									time = time + 35;
								else if (v[j] == 'T')
									time = time + 30;
							} if (v[x] == 'j') {
								if (v[j] == 'a')
									time = time + 40;

								else if (v[j] == 'b')
									time = time + 40;

								else if (v[j] == 'c')
									time = time + 70;

								else if (v[j] == 'd')
									time = time + 70;

								else if (v[j] == 'e')
									time = time + 40;

								else if (v[j] == 'f')
									time = time + 40;

								else if (v[j] == 'g')
									time = time + 40;

								else if (v[j] == 'h')
									time = time + 30;

								else if (v[j] == 'i')
									time = time + 30;

								else if (v[j] == 'k')
									time = time + 30;

								else if (v[j] == 'l')
									time = time + 35;

								else if (v[j] == 'm')
									time = time + 35;

								else if (v[j] == 'n')
									time = time + 35;

								else if (v[j] == 'o')
									time = time + 35;

								else if (v[j] == 'p')
									time = time + 35;

								else if (v[j] == 'q')
									time = time + 30;

								else if (v[j] == 'r')
									time = time + 40;

								else if (v[j] == 's')
									time = time + 40;

								else if (v[j] == 't')
									time = time + 30;

								else if (v[j] == 'u')
									time = time + 25;

								else if (v[j] == 'v')
									time = time + 25;

								else if (v[j] == 'w')
									time = time + 40;

								else if (v[j] == 'x')
									time = time + 35;

								else if (v[j] == 'y')
									time = time + 70;

								else if (v[j] == 'z')
									time = time + 45;

								else if (v[j] == 'A')
									time = time + 55;

								else if (v[j] == 'B')
									time = time + 40;

								else if (v[j] == 'C')
									time = time + 25;

								else if (v[j] == 'D')
									time = time + 35;

								else if (v[j] == 'E')
									time = time + 70;

								else if (v[j] == 'F')
									time = time + 40;

								else if (v[j] == 'G')
									time = time + 40;

								else if (v[j] == 'H')
									time = time + 45;

								else if (v[j] == 'I')
									time = time + 55;

								else if (v[j] == 'J')
									time = time + 90;

								else if (v[j] == 'K')
									time = time + 90;

								else if (v[j] == 'L')
									time = time + 90;

								else if (v[j] == 'M')
									time = time + 90;

								else if (v[j] == 'N')
									time = time + 90;
								else if (v[j] == 'O')
									time = time + 30;
								else if (v[j] == 'P')
									time = time + 70;
								else if (v[j] == 'Q')
									time = time + 40;
								else if (v[j] == 'R')
									time = time + 30;
								else if (v[j] == 'S')
									time = time + 40;
								else if (v[j] == 'T')
									time = time + 35;
							} if (v[x] == 'k') {
								if (v[j] == 'a')
									time = time + 40;

								else if (v[j] == 'b')
									time = time + 90;

								else if (v[j] == 'c')
									time = time + 90;

								else if (v[j] == 'd')
									time = time + 90;

								else if (v[j] == 'e')
									time = time + 90;

								else if (v[j] == 'f')
									time = time + 90;

								else if (v[j] == 'g')
									time = time + 35;

								else if (v[j] == 'h')
									time = time + 90;

								else if (v[j] == 'i')
									time = time + 90;

								else if (v[j] == 'j')
									time = time + 90;

								else if (v[j] == 'l')
									time = time + 35;

								else if (v[j] == 'm')
									time = time + 35;

								else if (v[j] == 'n')
									time = time + 90;

								else if (v[j] == 'o')
									time = time + 35;

								else if (v[j] == 'p')
									time = time + 35;

								else if (v[j] == 'q')
									time = time + 90;

								else if (v[j] == 'r')
									time = time + 90;

								else if (v[j] == 's')
									time = time + 90;

								else if (v[j] == 't')
									time = time + 90;

								else if (v[j] == 'u')
									time = time + 90;

								else if (v[j] == 'v')
									time = time + 35;

								else if (v[j] == 'w')
									time = time + 30;

								else if (v[j] == 'x')
									time = time + 35;

								else if (v[j] == 'y')
									time = time + 70;

								else if (v[j] == 'z')
									time = time + 90;

								else if (v[j] == 'A')
									time = time + 55;

								else if (v[j] == 'B')
									time = time + 90;

								else if (v[j] == 'C')
									time = time + 90;

								else if (v[j] == 'D')
									time = time + 45;

								else if (v[j] == 'E')
									time = time + 60;

								else if (v[j] == 'F')
									time = time + 90;

								else if (v[j] == 'G')
									time = time + 40;

								else if (v[j] == 'H')
									time = time + 90;

								else if (v[j] == 'I')
									time = time + 55;

								else if (v[j] == 'J')
									time = time + 90;

								else if (v[j] == 'K')
									time = time + 90;

								else if (v[j] == 'L')
									time = time + 90;

								else if (v[j] == 'M')
									time = time + 90;

								else if (v[j] == 'N')
									time = time + 90;
								else if (v[j] == 'O')
									time = time + 90;
								else if (v[j] == 'P')
									time = time + 90;
								else if (v[j] == 'Q')
									time = time + 90;
								else if (v[j] == 'R')
									time = time + 90;
								else if (v[j] == 'S')
									time = time + 90;
								else if (v[j] == 'T')
									time = time + 35;
							} if (v[x] == 'l') {
								if (v[j] == 'a')
									time = time + 40;

								else if (v[j] == 'b')
									time = time + 90;

								else if (v[j] == 'c')
									time = time + 90;

								else if (v[j] == 'd')
									time = time + 90;

								else if (v[j] == 'e')
									time = time + 90;

								else if (v[j] == 'f')
									time = time + 90;

								else if (v[j] == 'g')
									time = time + 35;

								else if (v[j] == 'h')
									time = time + 90;

								else if (v[j] == 'i')
									time = time + 90;

								else if (v[j] == 'j')
									time = time + 90;

								else if (v[j] == 'k')
									time = time + 90;

								else if (v[j] == 'm')
									time = time + 90;

								else if (v[j] == 'n')
									time = time + 90;

								else if (v[j] == 'o')
									time = time + 20;

								else if (v[j] == 'p')
									time = time + 35;

								else if (v[j] == 'q')
									time = time + 90;

								else if (v[j] == 'r')
									time = time + 90;

								else if (v[j] == 's')
									time = time + 90;

								else if (v[j] == 't')
									time = time + 90;

								else if (v[j] == 'u')
									time = time + 90;

								else if (v[j] == 'v')
									time = time + 90;

								else if (v[j] == 'w')
									time = time + 55;

								else if (v[j] == 'x')
									time = time + 75;

								else if (v[j] == 'y')
									time = time + 80;

								else if (v[j] == 'z')
									time = time + 90;

								else if (v[j] == 'A')
									time = time + 90;

								else if (v[j] == 'B')
									time = time + 90;

								else if (v[j] == 'C')
									time = time + 90;

								else if (v[j] == 'D')
									time = time + 75;

								else if (v[j] == 'E')
									time = time + 90;

								else if (v[j] == 'F')
									time = time + 90;

								else if (v[j] == 'G')
									time = time + 40;

								else if (v[j] == 'H')
									time = time + 90;

								else if (v[j] == 'I')
									time = time + 90;

								else if (v[j] == 'J')
									time = time + 90;

								else if (v[j] == 'K')
									time = time + 90;

								else if (v[j] == 'L')
									time = time + 90;

								else if (v[j] == 'M')
									time = time + 90;

								else if (v[j] == 'N')
									time = time + 90;
								else if (v[j] == 'O')
									time = time + 90;
								else if (v[j] == 'P')
									time = time + 90;
								else if (v[j] == 'Q')
									time = time + 90;
								else if (v[j] == 'R')
									time = time + 90;
								else if (v[j] == 'S')
									time = time + 90;
								else if (v[j] == 'T')
									time = time + 90;
							} if (v[x] == 'm') {
								if (v[j] == 'a')
									time = time + 40;

								else if (v[j] == 'b')
									time = time + 90;

								else if (v[j] == 'c')
									time = time + 90;

								else if (v[j] == 'd')
									time = time + 90;

								else if (v[j] == 'e')
									time = time + 90;

								else if (v[j] == 'f')
									time = time + 90;

								else if (v[j] == 'g')
									time = time + 55;

								else if (v[j] == 'h')
									time = time + 90;

								else if (v[j] == 'i')
									time = time + 90;

								else if (v[j] == 'j')
									time = time + 90;

								else if (v[j] == 'k')
									time = time + 35;

								else if (v[j] == 'l')
									time = time + 15;

								else if (v[j] == 'n')
									time = time + 90;

								else if (v[j] == 'o')
									time = time + 20;

								else if (v[j] == 'p')
									time = time + 20;

								else if (v[j] == 'q')
									time = time + 90;

								else if (v[j] == 'r')
									time = time + 90;

								else if (v[j] == 's')
									time = time + 90;

								else if (v[j] == 't')
									time = time + 90;

								else if (v[j] == 'u')
									time = time + 90;

								else if (v[j] == 'v')
									time = time + 75;

								else if (v[j] == 'w')
									time = time + 55;

								else if (v[j] == 'x')
									time = time + 75;

								else if (v[j] == 'y')
									time = time + 80;

								else if (v[j] == 'z')
									time = time + 90;

								else if (v[j] == 'A')
									time = time + 45;

								else if (v[j] == 'B')
									time = time + 90;

								else if (v[j] == 'C')
									time = time + 90;

								else if (v[j] == 'D')
									time = time + 75;

								else if (v[j] == 'E')
									time = time + 85;

								else if (v[j] == 'F')
									time = time + 90;

								else if (v[j] == 'G')
									time = time + 40;

								else if (v[j] == 'H')
									time = time + 90;

								else if (v[j] == 'I')
									time = time + 90;

								else if (v[j] == 'J')
									time = time + 90;

								else if (v[j] == 'K')
									time = time + 90;

								else if (v[j] == 'L')
									time = time + 90;

								else if (v[j] == 'M')
									time = time + 90;

								else if (v[j] == 'N')
									time = time + 90;
								else if (v[j] == 'O')
									time = time + 90;
								else if (v[j] == 'P')
									time = time + 90;
								else if (v[j] == 'Q')
									time = time + 90;
								else if (v[j] == 'R')
									time = time + 90;
								else if (v[j] == 'S')
									time = time + 90;
							} if (v[x] == 'n') {
								if (v[j] == 'a')
									time = time + 40;

								else if (v[j] == 'b')
									time = time + 90;

								else if (v[j] == 'c')
									time = time + 90;

								else if (v[j] == 'd')
									time = time + 90;

								else if (v[j] == 'e')
									time = time + 90;

								else if (v[j] == 'f')
									time = time + 90;

								else if (v[j] == 'g')
									time = time + 55;

								else if (v[j] == 'h')
									time = time + 90;

								else if (v[j] == 'i')
									time = time + 90;

								else if (v[j] == 'j')
									time = time + 90;

								else if (v[j] == 'k')
									time = time + 90;

								else if (v[j] == 'l')
									time = time + 25;

								else if (v[j] == 'm')
									time = time + 90;

								else if (v[j] == 'o')
									time = time + 25;

								else if (v[j] == 'p')
									time = time + 25;

								else if (v[j] == 'q')
									time = time + 90;

								else if (v[j] == 'r')
									time = time + 90;

								else if (v[j] == 's')
									time = time + 90;

								else if (v[j] == 't')
									time = time + 90;

								else if (v[j] == 'u')
									time = time + 90;

								else if (v[j] == 'v')
									time = time + 90;

								else if (v[j] == 'w')
									time = time + 55;

								else if (v[j] == 'x')
									time = time + 75;

								else if (v[j] == 'y')
									time = time + 80;

								else if (v[j] == 'z')
									time = time + 90;

								else if (v[j] == 'A')
									time = time + 90;

								else if (v[j] == 'B')
									time = time + 90;

								else if (v[j] == 'C')
									time = time + 90;

								else if (v[j] == 'D')
									time = time + 75;

								else if (v[j] == 'E')
									time = time + 90;

								else if (v[j] == 'F')
									time = time + 90;

								else if (v[j] == 'G')
									time = time + 40;

								else if (v[j] == 'H')
									time = time + 90;

								else if (v[j] == 'I')
									time = time + 90;

								else if (v[j] == 'J')
									time = time + 90;

								else if (v[j] == 'K')
									time = time + 90;

								else if (v[j] == 'L')
									time = time + 90;

								else if (v[j] == 'M')
									time = time + 90;

								else if (v[j] == 'N')
									time = time + 90;
								else if (v[j] == 'O')
									time = time + 90;
								else if (v[j] == 'P')
									time = time + 90;
								else if (v[j] == 'Q')
									time = time + 90;
								else if (v[j] == 'R')
									time = time + 90;
								else if (v[j] == 'S')
									time = time + 90;
								else if (v[j] == 'T')
									time = time + 90;
							}if (v[x] == 'o') {
								if (v[j] == 'a')
									time = time + 40;

								else if (v[j] == 'b')
									time = time + 90;

								else if (v[j] == 'c')
									time = time + 90;

								else if (v[j] == 'd')
									time = time + 90;

								else if (v[j] == 'e')
									time = time + 90;

								else if (v[j] == 'f')
									time = time + 90;

								else if (v[j] == 'g')
									time = time + 55;

								else if (v[j] == 'h')
									time = time + 90;

								else if (v[j] == 'i')
									time = time + 90;

								else if (v[j] == 'j')
									time = time + 90;

								else if (v[j] == 'k')
									time = time + 90;

								else if (v[j] == 'l')
									time = time + 25;

								else if (v[j] == 'm')
									time = time + 90;

								else if (v[j] == 'n')
									time = time + 90;

								else if (v[j] == 'p')
									time = time + 25;

								else if (v[j] == 'q')
									time = time + 90;

								else if (v[j] == 'r')
									time = time + 90;

								else if (v[j] == 's')
									time = time + 90;

								else if (v[j] == 't')
									time = time + 90;

								else if (v[j] == 'u')
									time = time + 90;

								else if (v[j] == 'v')
									time = time + 90;

								else if (v[j] == 'w')
									time = time + 55;

								else if (v[j] == 'x')
									time = time + 75;

								else if (v[j] == 'y')
									time = time + 80;

								else if (v[j] == 'z')
									time = time + 90;

								else if (v[j] == 'A')
									time = time + 90;

								else if (v[j] == 'B')
									time = time + 90;

								else if (v[j] == 'C')
									time = time + 90;

								else if (v[j] == 'D')
									time = time + 75;

								else if (v[j] == 'E')
									time = time + 90;

								else if (v[j] == 'F')
									time = time + 90;

								else if (v[j] == 'G')
									time = time + 40;

								else if (v[j] == 'H')
									time = time + 90;

								else if (v[j] == 'I')
									time = time + 70;

								else if (v[j] == 'J')
									time = time + 90;

								else if (v[j] == 'K')
									time = time + 90;

								else if (v[j] == 'L')
									time = time + 90;

								else if (v[j] == 'M')
									time = time + 90;

								else if (v[j] == 'N')
									time = time + 90;
								else if (v[j] == 'O')
									time = time + 90;
								else if (v[j] == 'P')
									time = time + 90;
								else if (v[j] == 'Q')
									time = time + 90;
								else if (v[j] == 'R')
									time = time + 90;
								else if (v[j] == 'S')
									time = time + 90;
								else if (v[j] == 'T')
									time = time + 90;
							} if (v[x] == 'p') {
								if (v[j] == 'a')
									time = time + 40;

								else if (v[j] == 'b')
									time = time + 90;

								else if (v[j] == 'c')
									time = time + 90;

								else if (v[j] == 'd')
									time = time + 90;

								else if (v[j] == 'e')
									time = time + 90;

								else if (v[j] == 'f')
									time = time + 90;

								else if (v[j] == 'g')
									time = time + 55;

								else if (v[j] == 'h')
									time = time + 90;

								else if (v[j] == 'i')
									time = time + 90;

								else if (v[j] == 'j')
									time = time + 90;

								else if (v[j] == 'k')
									time = time + 90;

								else if (v[j] == 'l')
									time = time + 25;

								else if (v[j] == 'm')
									time = time + 90;

								else if (v[j] == 'n')
									time = time + 90;

								else if (v[j] == 'o')
									time = time + 20;

								else if (v[j] == 'q')
									time = time + 90;

								else if (v[j] == 'r')
									time = time + 90;

								else if (v[j] == 's')
									time = time + 90;

								else if (v[j] == 't')
									time = time + 90;

								else if (v[j] == 'u')
									time = time + 90;

								else if (v[j] == 'v')
									time = time + 90;

								else if (v[j] == 'w')
									time = time + 45;

								else if (v[j] == 'x')
									time = time + 75;

								else if (v[j] == 'y')
									time = time + 80;

								else if (v[j] == 'z')
									time = time + 90;

								else if (v[j] == 'A')
									time = time + 90;

								else if (v[j] == 'B')
									time = time + 90;

								else if (v[j] == 'C')
									time = time + 90;

								else if (v[j] == 'D')
									time = time + 75;

								else if (v[j] == 'E')
									time = time + 90;

								else if (v[j] == 'F')
									time = time + 90;

								else if (v[j] == 'G')
									time = time + 40;

								else if (v[j] == 'H')
									time = time + 90;

								else if (v[j] == 'I')
									time = time + 90;

								else if (v[j] == 'J')
									time = time + 90;

								else if (v[j] == 'K')
									time = time + 90;

								else if (v[j] == 'L')
									time = time + 90;

								else if (v[j] == 'M')
									time = time + 90;

								else if (v[j] == 'N')
									time = time + 90;
								else if (v[j] == 'O')
									time = time + 90;
								else if (v[j] == 'P')
									time = time + 90;
								else if (v[j] == 'Q')
									time = time + 90;
								else if (v[j] == 'R')
									time = time + 90;
								else if (v[j] == 'S')
									time = time + 90;
								else if (v[j] == 'T')
									time = time + 90;
							} if (v[x] == 'q') {
								if (v[j] == 'a')
									time = time + 40;

								else if (v[j] == 'b')
									time = time + 90;

								else if (v[j] == 'c')
									time = time + 90;

								else if (v[j] == 'd')
									time = time + 90;

								else if (v[j] == 'e')
									time = time + 90;

								else if (v[j] == 'f')
									time = time + 90;

								else if (v[j] == 'g')
									time = time + 45;

								else if (v[j] == 'h')
									time = time + 90;

								else if (v[j] == 'i')
									time = time + 90;

								else if (v[j] == 'j')
									time = time + 90;

								else if (v[j] == 'k')
									time = time + 40;

								else if (v[j] == 'l')
									time = time + 55;

								else if (v[j] == 'm')
									time = time + 40;

								else if (v[j] == 'n')
									time = time + 35;

								else if (v[j] == 'o')
									time = time + 35;

								else if (v[j] == 'p')
									time = time + 55;

								else if (v[j] == 'r')
									time = time + 15;

								else if (v[j] == 's')
									time = time + 25;

								else if (v[j] == 't')
									time = time + 90;

								else if (v[j] == 'u')
									time = time + 90;

								else if (v[j] == 'v')
									time = time + 30;

								else if (v[j] == 'w')
									time = time + 45;

								else if (v[j] == 'x')
									time = time + 45;

								else if (v[j] == 'y')
									time = time + 70;

								else if (v[j] == 'z')
									time = time + 90;

								else if (v[j] == 'A')
									time = time + 40;

								else if (v[j] == 'B')
									time = time + 25;

								else if (v[j] == 'C')
									time = time + 90;

								else if (v[j] == 'D')
									time = time + 45;

								else if (v[j] == 'E')
									time = time + 70;

								else if (v[j] == 'F')
									time = time + 90;

								else if (v[j] == 'G')
									time = time + 40;

								else if (v[j] == 'H')
									time = time + 90;

								else if (v[j] == 'I')
									time = time + 55;

								else if (v[j] == 'J')
									time = time + 90;

								else if (v[j] == 'K')
									time = time + 55;

								else if (v[j] == 'L')
									time = time + 55;

								else if (v[j] == 'M')
									time = time + 55;

								else if (v[j] == 'N')
									time = time + 55;
								else if (v[j] == 'P')
									time = time + 90;
								else if (v[j] == 'Q')
									time = time + 90;
								else if (v[j] == 'R')
									time = time + 90;
								else if (v[j] == 'S')
									time = time + 25;
								else if (v[j] == 'T')
									time = time + 40;
							} if (v[x] == 'r') {
								if (v[j] == 'a')
									time = time + 40;

								else if (v[j] == 'b')
									time = time + 90;

								else if (v[j] == 'c')
									time = time + 90;

								else if (v[j] == 'd')
									time = time + 90;

								else if (v[j] == 'e')
									time = time + 90;

								else if (v[j] == 'f')
									time = time + 90;

								else if (v[j] == 'g')
									time = time + 45;

								else if (v[j] == 'h')
									time = time + 90;

								else if (v[j] == 'i')
									time = time + 90;

								else if (v[j] == 'j')
									time = time + 90;

								else if (v[j] == 'k')
									time = time + 40;

								else if (v[j] == 'l')
									time = time + 55;

								else if (v[j] == 'm')
									time = time + 55;

								else if (v[j] == 'n')
									time = time + 55;

								else if (v[j] == 'o')
									time = time + 55;

								else if (v[j] == 'p')
									time = time + 55;

								else if (v[j] == 'q')
									time = time + 30;

								else if (v[j] == 's')
									time = time + 25;

								else if (v[j] == 't')
									time = time + 90;

								else if (v[j] == 'u')
									time = time + 90;

								else if (v[j] == 'v')
									time = time + 50;

								else if (v[j] == 'w')
									time = time + 45;

								else if (v[j] == 'x')
									time = time + 45;

								else if (v[j] == 'y')
									time = time + 70;

								else if (v[j] == 'z')
									time = time + 90;

								else if (v[j] == 'A')
									time = time + 55;

								else if (v[j] == 'B')
									time = time + 35;

								else if (v[j] == 'C')
									time = time + 90;

								else if (v[j] == 'D')
									time = time + 45;

								else if (v[j] == 'E')
									time = time + 70;

								else if (v[j] == 'F')
									time = time + 90;

								else if (v[j] == 'G')
									time = time + 40;

								else if (v[j] == 'H')
									time = time + 90;

								else if (v[j] == 'I')
									time = time + 55;

								else if (v[j] == 'J')
									time = time + 35;

								else if (v[j] == 'K')
									time = time + 90;

								else if (v[j] == 'L')
									time = time + 90;

								else if (v[j] == 'M')
									time = time + 55;

								else if (v[j] == 'N')
									time = time + 55;
								else if (v[j] == 'O')
									time = time + 30;
								else if (v[j] == 'P')
									time = time + 90;
								else if (v[j] == 'Q')
									time = time + 90;
								else if (v[j] == 'R')
									time = time + 90;
								else if (v[j] == 'S')
									time = time + 35;
								else if (v[j] == 'T')
									time = time + 55;
							} if (v[x] == 's') {
								if (v[j] == 'a')
									time = time + 40;

								else if (v[j] == 'b')
									time = time + 90;

								else if (v[j] == 'c')
									time = time + 90;

								else if (v[j] == 'd')
									time = time + 90;

								else if (v[j] == 'e')
									time = time + 90;

								else if (v[j] == 'f')
									time = time + 90;

								else if (v[j] == 'g')
									time = time + 45;

								else if (v[j] == 'h')
									time = time + 90;

								else if (v[j] == 'i')
									time = time + 90;

								else if (v[j] == 'j')
									time = time + 90;

								else if (v[j] == 'k')
									time = time + 40;

								else if (v[j] == 'l')
									time = time + 55;

								else if (v[j] == 'm')
									time = time + 40;

								else if (v[j] == 'n')
									time = time + 40;

								else if (v[j] == 'o')
									time = time + 40;

								else if (v[j] == 'p')
									time = time + 55;

								else if (v[j] == 'q')
									time = time + 40;

								else if (v[j] == 'r')
									time = time + 35;

								else if (v[j] == 't')
									time = time + 90;

								else if (v[j] == 'u')
									time = time + 90;

								else if (v[j] == 'v')
									time = time + 35;

								else if (v[j] == 'w')
									time = time + 45;

								else if (v[j] == 'x')
									time = time + 45;

								else if (v[j] == 'y')
									time = time + 70;

								else if (v[j] == 'z')
									time = time + 90;

								else if (v[j] == 'A')
									time = time + 55;

								else if (v[j] == 'B')
									time = time + 30;

								else if (v[j] == 'C')
									time = time + 90;

								else if (v[j] == 'D')
									time = time + 45;

								else if (v[j] == 'E')
									time = time + 70;

								else if (v[j] == 'F')
									time = time + 90;

								else if (v[j] == 'G')
									time = time + 40;

								else if (v[j] == 'H')
									time = time + 90;

								else if (v[j] == 'I')
									time = time + 55;

								else if (v[j] == 'J')
									time = time + 55;

								else if (v[j] == 'K')
									time = time + 90;

								else if (v[j] == 'L')
									time = time + 55;

								else if (v[j] == 'M')
									time = time + 55;

								else if (v[j] == 'N')
									time = time + 55;
								else if (v[j] == 'O')
									time = time + 40;
								else if (v[j] == 'P')
									time = time + 90;
								else if (v[j] == 'Q')
									time = time + 90;
								else if (v[j] == 'R')
									time = time + 90;
								else if (v[j] == 'S')
									time = time + 30;
								else if (v[j] == 'T')
									time = time + 40;
							} if (v[x] == 't') {
								if (v[j] == 'a')
									time = time + 40;

								else if (v[j] == 'b')
									time = time + 40;

								else if (v[j] == 'c')
									time = time + 70;

								else if (v[j] == 'd')
									time = time + 70;

								else if (v[j] == 'e')
									time = time + 40;

								else if (v[j] == 'f')
									time = time + 40;

								else if (v[j] == 'g')
									time = time + 40;

								else if (v[j] == 'h')
									time = time + 90;

								else if (v[j] == 'i')
									time = time + 30;

								else if (v[j] == 'j')
									time = time + 30;

								else if (v[j] == 'k')
									time = time + 30;

								else if (v[j] == 'l')
									time = time + 35;

								else if (v[j] == 'm')
									time = time + 35;

								else if (v[j] == 'n')
									time = time + 35;

								else if (v[j] == 'o')
									time = time + 35;

								else if (v[j] == 'p')
									time = time + 35;

								else if (v[j] == 'q')
									time = time + 40;

								else if (v[j] == 'r')
									time = time + 40;

								else if (v[j] == 's')
									time = time + 40;

								else if (v[j] == 'u')
									time = time + 40;

								else if (v[j] == 'v')
									time = time + 35;

								else if (v[j] == 'w')
									time = time + 40;

								else if (v[j] == 'x')
									time = time + 35;

								else if (v[j] == 'y')
									time = time + 70;

								else if (v[j] == 'z')
									time = time + 45;

								else if (v[j] == 'A')
									time = time + 55;

								else if (v[j] == 'B')
									time = time + 40;

								else if (v[j] == 'C')
									time = time + 40;

								else if (v[j] == 'D')
									time = time + 35;

								else if (v[j] == 'E')
									time = time + 70;

								else if (v[j] == 'F')
									time = time + 40;

								else if (v[j] == 'G')
									time = time + 40;

								else if (v[j] == 'H')
									time = time + 45;

								else if (v[j] == 'I')
									time = time + 55;

								else if (v[j] == 'J')
									time = time + 55;

								else if (v[j] == 'K')
									time = time + 55;

								else if (v[j] == 'L')
									time = time + 55;

								else if (v[j] == 'M')
									time = time + 55;

								else if (v[j] == 'N')
									time = time + 55;
								else if (v[j] == 'O')
									time = time + 40;
								else if (v[j] == 'P')
									time = time + 70;
								else if (v[j] == 'Q')
									time = time + 40;
								else if (v[j] == 'R')
									time = time + 30;
								else if (v[j] == 'S')
									time = time + 40;
								else if (v[j] == 'T')
									time = time + 35;
							} if (v[x] == 'u') {
								if (v[j] == 'a')
									time = time + 65;

								else if (v[j] == 'b')
									time = time + 65;

								else if (v[j] == 'c')
									time = time + 80;

								else if (v[j] == 'd')
									time = time + 55;

								else if (v[j] == 'e')
									time = time + 65;

								else if (v[j] == 'f')
									time = time + 55;

								else if (v[j] == 'g')
									time = time + 70;

								else if (v[j] == 'h')
									time = time + 55;

								else if (v[j] == 'i')
									time = time + 55;

								else if (v[j] == 'j')
									time = time + 55;

								else if (v[j] == 'k')
									time = time + 45;

								else if (v[j] == 'l')
									time = time + 60;

								else if (v[j] == 'm')
									time = time + 50;

								else if (v[j] == 'n')
									time = time + 60;

								else if (v[j] == 'o')
									time = time + 60;

								else if (v[j] == 'p')
									time = time + 60;

								else if (v[j] == 'q')
									time = time + 60;

								else if (v[j] == 'r')
									time = time + 65;

								else if (v[j] == 's')
									time = time + 65;

								else if (v[j] == 't')
									time = time + 55;

								else if (v[j] == 'v')
									time = time + 70;

								else if (v[j] == 'w')
									time = time + 70;

								else if (v[j] == 'x')
									time = time + 70;

								else if (v[j] == 'y')
									time = time + 80;

								else if (v[j] == 'z')
									time = time + 70;

								else if (v[j] == 'A')
									time = time + 70;

								else if (v[j] == 'B')
									time = time + 55;

								else if (v[j] == 'C')
									time = time + 45;

								else if (v[j] == 'D')
									time = time + 70;

								else if (v[j] == 'E')
									time = time + 80;

								else if (v[j] == 'F')
									time = time + 65;

								else if (v[j] == 'G')
									time = time + 65;

								else if (v[j] == 'H')
									time = time + 70;

								else if (v[j] == 'I')
									time = time + 70;

								else if (v[j] == 'J')
									time = time + 55;

								else if (v[j] == 'K')
									time = time + 55;

								else if (v[j] == 'L')
									time = time + 55;

								else if (v[j] == 'M')
									time = time + 55;

								else if (v[j] == 'N')
									time = time + 55;
								else if (v[j] == 'O')
									time = time + 60;
								else if (v[j] == 'P')
									time = time + 80;
								else if (v[j] == 'Q')
									time = time + 65;
								else if (v[j] == 'R')
									time = time + 55;
								else if (v[j] == 'S')
									time = time + 55;
								else if (v[j] == 'T')
									time = time + 50;
							}if (v[x] == 'v') {
								if (v[j] == 'a')
									time = time + 35;

								else if (v[j] == 'b')
									time = time + 90;

								else if (v[j] == 'c')
									time = time + 90;

								else if (v[j] == 'd')
									time = time + 90;

								else if (v[j] == 'e')
									time = time + 90;

								else if (v[j] == 'f')
									time = time + 90;

								else if (v[j] == 'g')
									time = time + 50;

								else if (v[j] == 'h')
									time = time + 90;

								else if (v[j] == 'i')
									time = time + 90;

								else if (v[j] == 'j')
									time = time + 90;

								else if (v[j] == 'k')
									time = time + 45;

								else if (v[j] == 'l')
									time = time + 70;

								else if (v[j] == 'm')
									time = time + 55;

								else if (v[j] == 'n')
									time = time + 90;

								else if (v[j] == 'o')
									time = time + 60;

								else if (v[j] == 'p')
									time = time + 60;

								else if (v[j] == 'q')
									time = time + 90;

								else if (v[j] == 'r')
									time = time + 90;

								else if (v[j] == 's')
									time = time + 90;

								else if (v[j] == 't')
									time = time + 90;

								else if (v[j] == 'u')
									time = time + 90;

								else if (v[j] == 'w')
									time = time + 50;

								else if (v[j] == 'x')
									time = time + 45;

								else if (v[j] == 'y')
									time = time + 60;

								else if (v[j] == 'z')
									time = time + 90;

								else if (v[j] == 'A')
									time = time + 50;

								else if (v[j] == 'B')
									time = time + 90;

								else if (v[j] == 'C')
									time = time + 90;

								else if (v[j] == 'D')
									time = time + 60;

								else if (v[j] == 'E')
									time = time + 100;

								else if (v[j] == 'F')
									time = time + 90;

								else if (v[j] == 'G')
									time = time + 55;

								else if (v[j] == 'H')
									time = time + 90;

								else if (v[j] == 'I')
									time = time + 70;

								else if (v[j] == 'J')
									time = time + 90;

								else if (v[j] == 'K')
									time = time + 90;

								else if (v[j] == 'L')
									time = time + 55;

								else if (v[j] == 'M')
									time = time + 90;

								else if (v[j] == 'N')
									time = time + 55;
								else if (v[j] == 'O')
									time = time + 90;
								else if (v[j] == 'P')
									time = time + 90;
								else if (v[j] == 'Q')
									time = time + 90;
								else if (v[j] == 'R')
									time = time + 90;
								else if (v[j] == 'S')
									time = time + 90;
								else if (v[j] == 'T')
									time = time + 55;
							} if (v[x] == 'w') {
								if (v[j] == 'a')
									time = time + 90;

								else if (v[j] == 'b')
									time = time + 90;

								else if (v[j] == 'c')
									time = time + 90;

								else if (v[j] == 'd')
									time = time + 90;

								else if (v[j] == 'e')
									time = time + 90;

								else if (v[j] == 'f')
									time = time + 90;

								else if (v[j] == 'g')
									time = time + 90;

								else if (v[j] == 'h')
									time = time + 90;

								else if (v[j] == 'i')
									time = time + 90;

								else if (v[j] == 'j')
									time = time + 90;

								else if (v[j] == 'k')
									time = time + 90;

								else if (v[j] == 'l')
									time = time + 90;

								else if (v[j] == 'm')
									time = time + 90;

								else if (v[j] == 'n')
									time = time + 90;

								else if (v[j] == 'o')
									time = time + 90;

								else if (v[j] == 'p')
									time = time + 90;

								else if (v[j] == 'q')
									time = time + 90;

								else if (v[j] == 'r')
									time = time + 90;

								else if (v[j] == 's')
									time = time + 90;

								else if (v[j] == 't')
									time = time + 90;

								else if (v[j] == 'u')
									time = time + 90;

								else if (v[j] == 'v')
									time = time + 90;

								else if (v[j] == 'x')
									time = time + 90;

								else if (v[j] == 'y')
									time = time + 90;

								else if (v[j] == 'z')
									time = time + 90;

								else if (v[j] == 'A')
									time = time + 90;

								else if (v[j] == 'B')
									time = time + 90;

								else if (v[j] == 'C')
									time = time + 90;

								else if (v[j] == 'D')
									time = time + 90;

								else if (v[j] == 'E')
									time = time + 90;

								else if (v[j] == 'F')
									time = time + 90;

								else if (v[j] == 'G')
									time = time + 90;

								else if (v[j] == 'H')
									time = time + 90;

								else if (v[j] == 'I')
									time = time + 90;

								else if (v[j] == 'J')
									time = time + 90;

								else if (v[j] == 'K')
									time = time + 90;

								else if (v[j] == 'L')
									time = time + 90;

								else if (v[j] == 'M')
									time = time + 90;

								else if (v[j] == 'N')
									time = time + 90;
								else if (v[j] == 'O')
									time = time + 90;
								else if (v[j] == 'P')
									time = time + 90;
								else if (v[j] == 'Q')
									time = time + 90;
								else if (v[j] == 'R')
									time = time + 90;
								else if (v[j] == 'S')
									time = time + 90;
								else if (v[j] == 'T')
									time = time + 90;
							} if (v[x] == 'x') {
								if (v[j] == 'a')
									time = time + 55;

								else if (v[j] == 'b')
									time = time + 90;

								else if (v[j] == 'c')
									time = time + 90;

								else if (v[j] == 'd')
									time = time + 90;

								else if (v[j] == 'e')
									time = time + 90;

								else if (v[j] == 'f')
									time = time + 90;

								else if (v[j] == 'g')
									time = time + 50;

								else if (v[j] == 'h')
									time = time + 90;

								else if (v[j] == 'i')
									time = time + 90;

								else if (v[j] == 'j')
									time = time + 90;

								else if (v[j] == 'k')
									time = time + 90;

								else if (v[j] == 'l')
									time = time + 70;

								else if (v[j] == 'm')
									time = time + 90;

								else if (v[j] == 'n')
									time = time + 90;

								else if (v[j] == 'o')
									time = time + 70;

								else if (v[j] == 'p')
									time = time + 70;

								else if (v[j] == 'q')
									time = time + 90;

								else if (v[j] == 'r')
									time = time + 90;

								else if (v[j] == 's')
									time = time + 90;

								else if (v[j] == 't')
									time = time + 90;

								else if (v[j] == 'u')
									time = time + 90;

								else if (v[j] == 'v')
									time = time + 90;

								else if (v[j] == 'w')
									time = time + 50;

								else if (v[j] == 'y')
									time = time + 60;

								else if (v[j] == 'z')
									time = time + 90;

								else if (v[j] == 'A')
									time = time + 90;

								else if (v[j] == 'B')
									time = time + 90;

								else if (v[j] == 'C')
									time = time + 90;

								else if (v[j] == 'D')
									time = time + 30;

								else if (v[j] == 'E')
									time = time + 90;

								else if (v[j] == 'F')
									time = time + 90;

								else if (v[j] == 'G')
									time = time + 55;

								else if (v[j] == 'H')
									time = time + 90;

								else if (v[j] == 'I')
									time = time + 70;

								else if (v[j] == 'J')
									time = time + 90;

								else if (v[j] == 'K')
									time = time + 90;

								else if (v[j] == 'L')
									time = time + 55;

								else if (v[j] == 'M')
									time = time + 90;

								else if (v[j] == 'N')
									time = time + 90;
								else if (v[j] == 'O')
									time = time + 90;
								else if (v[j] == 'P')
									time = time + 90;
								else if (v[j] == 'Q')
									time = time + 90;
								else if (v[j] == 'R')
									time = time + 90;
								else if (v[j] == 'S')
									time = time + 90;
								else if (v[j] == 'T')
									time = time + 90;
							} if (v[x] == 'y') {
								if (v[j] == 'a')
									time = time + 45;

								else if (v[j] == 'b')
									time = time + 90;

								else if (v[j] == 'c')
									time = time + 90;

								else if (v[j] == 'd')
									time = time + 90;

								else if (v[j] == 'e')
									time = time + 90;

								else if (v[j] == 'f')
									time = time + 90;

								else if (v[j] == 'g')
									time = time + 50;

								else if (v[j] == 'h')
									time = time + 90;

								else if (v[j] == 'i')
									time = time + 90;

								else if (v[j] == 'j')
									time = time + 90;

								else if (v[j] == 'k')
									time = time + 90;

								else if (v[j] == 'l')
									time = time + 80;

								else if (v[j] == 'm')
									time = time + 90;

								else if (v[j] == 'n')
									time = time + 90;

								else if (v[j] == 'o')
									time = time + 80;

								else if (v[j] == 'p')
									time = time + 80;

								else if (v[j] == 'q')
									time = time + 90;

								else if (v[j] == 'r')
									time = time + 90;

								else if (v[j] == 's')
									time = time + 90;

								else if (v[j] == 't')
									time = time + 90;

								else if (v[j] == 'u')
									time = time + 90;

								else if (v[j] == 'v')
									time = time + 90;

								else if (v[j] == 'w')
									time = time + 50;

								else if (v[j] == 'x')
									time = time + 60;

								else if (v[j] == 'z')
									time = time + 90;

								else if (v[j] == 'A')
									time = time + 90;

								else if (v[j] == 'B')
									time = time + 90;

								else if (v[j] == 'C')
									time = time + 90;

								else if (v[j] == 'D')
									time = time + 70;

								else if (v[j] == 'E')
									time = time + 90;

								else if (v[j] == 'F')
									time = time + 90;

								else if (v[j] == 'G')
									time = time + 65;

								else if (v[j] == 'H')
									time = time + 90;

								else if (v[j] == 'I')
									time = time + 70;

								else if (v[j] == 'J')
									time = time + 90;

								else if (v[j] == 'K')
									time = time + 90;

								else if (v[j] == 'L')
									time = time + 55;

								else if (v[j] == 'M')
									time = time + 90;

								else if (v[j] == 'N')
									time = time + 90;
								else if (v[j] == 'O')
									time = time + 90;
								else if (v[j] == 'P')
									time = time + 90;
								else if (v[j] == 'Q')
									time = time + 90;
								else if (v[j] == 'R')
									time = time + 90;
								else if (v[j] == 'S')
									time = time + 90;
								else if (v[j] == 'T')
									time = time + 90;
							} if (v[x] == 'z') {
								if (v[j] == 'a')
									time = time + 65;

								else if (v[j] == 'b')
									time = time + 65;

								else if (v[j] == 'c')
									time = time + 80;

								else if (v[j] == 'd')
									time = time + 80;

								else if (v[j] == 'e')
									time = time + 65;

								else if (v[j] == 'f')
									time = time + 65;

								else if (v[j] == 'g')
									time = time + 70;

								else if (v[j] == 'h')
									time = time + 50;

								else if (v[j] == 'i')
									time = time + 65;

								else if (v[j] == 'j')
									time = time + 65;

								else if (v[j] == 'k')
									time = time + 65;

								else if (v[j] == 'l')
									time = time + 70;

								else if (v[j] == 'm')
									time = time + 70;

								else if (v[j] == 'n')
									time = time + 60;

								else if (v[j] == 'o')
									time = time + 70;

								else if (v[j] == 'p')
									time = time + 70;

								else if (v[j] == 'q')
									time = time + 50;

								else if (v[j] == 'r')
									time = time + 55;

								else if (v[j] == 's')
									time = time + 65;

								else if (v[j] == 't')
									time = time + 65;

								else if (v[j] == 'u')
									time = time + 70;

								else if (v[j] == 'v')
									time = time + 70;

								else if (v[j] == 'w')
									time = time + 70;

								else if (v[j] == 'x')
									time = time + 70;

								else if (v[j] == 'y')
									time = time + 80;

								else if (v[j] == 'A')
									time = time + 70;

								else if (v[j] == 'B')
									time = time + 65;

								else if (v[j] == 'C')
									time = time + 70;

								else if (v[j] == 'D')
									time = time + 70;

								else if (v[j] == 'E')
									time = time + 80;

								else if (v[j] == 'F')
									time = time + 65;

								else if (v[j] == 'G')
									time = time + 65;

								else if (v[j] == 'H')
									time = time + 70;

								else if (v[j] == 'I')
									time = time + 70;

								else if (v[j] == 'J')
									time = time + 55;

								else if (v[j] == 'K')
									time = time + 55;

								else if (v[j] == 'L')
									time = time + 55;

								else if (v[j] == 'M')
									time = time + 55;

								else if (v[j] == 'N')
									time = time + 55;
								else if (v[j] == 'O')
									time = time + 50;
								else if (v[j] == 'P')
									time = time + 80;
								else if (v[j] == 'Q')
									time = time + 65;
								else if (v[j] == 'R')
									time = time + 65;
								else if (v[j] == 'S')
									time = time + 65;
								else if (v[j] == 'T')
									time = time + 70;
							} if (v[x] == 'A') {
								if (v[j] == 'a')
									time = time + 40;

								else if (v[j] == 'b')
									time = time + 90;

								else if (v[j] == 'c')
									time = time + 90;

								else if (v[j] == 'd')
									time = time + 90;

								else if (v[j] == 'e')
									time = time + 90;

								else if (v[j] == 'f')
									time = time + 90;

								else if (v[j] == 'g')
									time = time + 45;

								else if (v[j] == 'h')
									time = time + 90;

								else if (v[j] == 'i')
									time = time + 90;

								else if (v[j] == 'j')
									time = time + 90;

								else if (v[j] == 'k')
									time = time + 30;

								else if (v[j] == 'l')
									time = time + 75;

								else if (v[j] == 'm')
									time = time + 90;

								else if (v[j] == 'n')
									time = time + 90;

								else if (v[j] == 'o')
									time = time + 75;

								else if (v[j] == 'p')
									time = time + 75;

								else if (v[j] == 'q')
									time = time + 90;

								else if (v[j] == 'r')
									time = time + 90;

								else if (v[j] == 's')
									time = time + 90;

								else if (v[j] == 't')
									time = time + 90;

								else if (v[j] == 'u')
									time = time + 90;

								else if (v[j] == 'v')
									time = time + 90;

								else if (v[j] == 'w')
									time = time + 60;

								else if (v[j] == 'x')
									time = time + 90;

								else if (v[j] == 'y')
									time = time + 100;

								else if (v[j] == 'z')
									time = time + 90;

								else if (v[j] == 'B')
									time = time + 90;

								else if (v[j] == 'C')
									time = time + 90;

								else if (v[j] == 'D')
									time = time + 90;

								else if (v[j] == 'E')
									time = time + 85;

								else if (v[j] == 'F')
									time = time + 90;

								else if (v[j] == 'G')
									time = time + 40;

								else if (v[j] == 'H')
									time = time + 90;

								else if (v[j] == 'I')
									time = time + 90;

								else if (v[j] == 'J')
									time = time + 90;

								else if (v[j] == 'K')
									time = time + 90;

								else if (v[j] == 'L')
									time = time + 90;

								else if (v[j] == 'M')
									time = time + 90;

								else if (v[j] == 'N')
									time = time + 55;
								else if (v[j] == 'O')
									time = time + 90;
								else if (v[j] == 'P')
									time = time + 90;
								else if (v[j] == 'Q')
									time = time + 90;
								else if (v[j] == 'R')
									time = time + 90;
								else if (v[j] == 'S')
									time = time + 90;
								else if (v[j] == 'T')
									time = time + 90;
							} if (v[x] == 'B') {
								if (v[j] == 'a')
									time = time + 40;

								else if (v[j] == 'b')
									time = time + 90;

								else if (v[j] == 'c')
									time = time + 90;

								else if (v[j] == 'd')
									time = time + 90;

								else if (v[j] == 'e')
									time = time + 90;

								else if (v[j] == 'f')
									time = time + 90;

								else if (v[j] == 'g')
									time = time + 45;

								else if (v[j] == 'h')
									time = time + 90;

								else if (v[j] == 'i')
									time = time + 90;

								else if (v[j] == 'j')
									time = time + 90;

								else if (v[j] == 'k')
									time = time + 40;

								else if (v[j] == 'l')
									time = time + 55;

								else if (v[j] == 'm')
									time = time + 55;

								else if (v[j] == 'n')
									time = time + 55;

								else if (v[j] == 'o')
									time = time + 55;

								else if (v[j] == 'p')
									time = time + 55;

								else if (v[j] == 'q')
									time = time + 35;

								else if (v[j] == 'r')
									time = time + 40;

								else if (v[j] == 's')
									time = time + 15;

								else if (v[j] == 't')
									time = time + 90;

								else if (v[j] == 'u')
									time = time + 90;

								else if (v[j] == 'v')
									time = time + 30;

								else if (v[j] == 'w')
									time = time + 45;

								else if (v[j] == 'x')
									time = time + 45;

								else if (v[j] == 'y')
									time = time + 70;

								else if (v[j] == 'z')
									time = time + 90;

								else if (v[j] == 'A')
									time = time + 55;

								else if (v[j] == 'C')
									time = time + 90;

								else if (v[j] == 'D')
									time = time + 45;

								else if (v[j] == 'E')
									time = time + 70;

								else if (v[j] == 'F')
									time = time + 90;

								else if (v[j] == 'G')
									time = time + 40;

								else if (v[j] == 'H')
									time = time + 90;

								else if (v[j] == 'I')
									time = time + 55;

								else if (v[j] == 'J')
									time = time + 55;

								else if (v[j] == 'K')
									time = time + 90;

								else if (v[j] == 'L')
									time = time + 55;

								else if (v[j] == 'M')
									time = time + 55;

								else if (v[j] == 'N')
									time = time + 55;
								else if (v[j] == 'O')
									time = time + 35;
								else if (v[j] == 'P')
									time = time + 90;
								else if (v[j] == 'Q')
									time = time + 90;
								else if (v[j] == 'R')
									time = time + 90;
								else if (v[j] == 'T')
									time = time + 55;
							} if (v[x] == 'C') {
								if (v[j] == 'a')
									time = time + 65;

								else if (v[j] == 'b')
									time = time + 50;

								else if (v[j] == 'c')
									time = time + 80;

								else if (v[j] == 'd')
									time = time + 80;

								else if (v[j] == 'e')
									time = time + 65;

								else if (v[j] == 'f')
									time = time + 65;

								else if (v[j] == 'g')
									time = time + 30;

								else if (v[j] == 'h')
									time = time + 35;

								else if (v[j] == 'i')
									time = time + 55;

								else if (v[j] == 'j')
									time = time + 55;

								else if (v[j] == 'k')
									time = time + 40;

								else if (v[j] == 'l')
									time = time + 60;

								else if (v[j] == 'm')
									time = time + 40;

								else if (v[j] == 'n')
									time = time + 60;

								else if (v[j] == 'o')
									time = time + 60;

								else if (v[j] == 'p')
									time = time + 60;

								else if (v[j] == 'q')
									time = time + 50;

								else if (v[j] == 'r')
									time = time + 65;

								else if (v[j] == 's')
									time = time + 45;

								else if (v[j] == 't')
									time = time + 55;

								else if (v[j] == 'u')
									time = time + 30;

								else if (v[j] == 'v')
									time = time + 45;

								else if (v[j] == 'w')
									time = time + 70;

								else if (v[j] == 'x')
									time = time + 45;

								else if (v[j] == 'y')
									time = time + 80;

								else if (v[j] == 'z')
									time = time + 70;

								else if (v[j] == 'A')
									time = time + 70;

								else if (v[j] == 'B')
									time = time + 50;

								else if (v[j] == 'D')
									time = time + 70;

								else if (v[j] == 'E')
									time = time + 80;

								else if (v[j] == 'F')
									time = time + 65;

								else if (v[j] == 'G')
									time = time + 65;

								else if (v[j] == 'H')
									time = time + 70;

								else if (v[j] == 'I')
									time = time + 65;

								else if (v[j] == 'J')
									time = time + 55;

								else if (v[j] == 'K')
									time = time + 90;

								else if (v[j] == 'L')
									time = time + 55;

								else if (v[j] == 'M')
									time = time + 55;

								else if (v[j] == 'N')
									time = time + 55;
								else if (v[j] == 'O')
									time = time + 50;
								else if (v[j] == 'P')
									time = time + 90;
								else if (v[j] == 'Q')
									time = time + 65;
								else if (v[j] == 'R')
									time = time + 55;
								else if (v[j] == 'S')
									time = time + 50;
								else if (v[j] == 'T')
									time = time + 40;
							} if (v[x] == 'D') {
								if (v[j] == 'a')
									time = time + 55;

								else if (v[j] == 'b')
									time = time + 90;

								else if (v[j] == 'c')
									time = time + 90;

								else if (v[j] == 'd')
									time = time + 90;

								else if (v[j] == 'e')
									time = time + 90;

								else if (v[j] == 'f')
									time = time + 90;

								else if (v[j] == 'g')
									time = time + 50;

								else if (v[j] == 'h')
									time = time + 90;

								else if (v[j] == 'i')
									time = time + 90;

								else if (v[j] == 'j')
									time = time + 90;

								else if (v[j] == 'k')
									time = time + 90;

								else if (v[j] == 'l')
									time = time + 70;

								else if (v[j] == 'm')
									time = time + 90;

								else if (v[j] == 'n')
									time = time + 90;

								else if (v[j] == 'o')
									time = time + 70;

								else if (v[j] == 'p')
									time = time + 70;

								else if (v[j] == 'q')
									time = time + 90;

								else if (v[j] == 'r')
									time = time + 90;

								else if (v[j] == 's')
									time = time + 90;

								else if (v[j] == 't')
									time = time + 90;

								else if (v[j] == 'u')
									time = time + 90;

								else if (v[j] == 'v')
									time = time + 90;

								else if (v[j] == 'w')
									time = time + 50;

								else if (v[j] == 'x')
									time = time + 20;

								else if (v[j] == 'y')
									time = time + 60;

								else if (v[j] == 'z')
									time = time + 90;

								else if (v[j] == 'A')
									time = time + 90;

								else if (v[j] == 'B')
									time = time + 90;

								else if (v[j] == 'C')
									time = time + 90;

								else if (v[j] == 'E')
									time = time + 90;

								else if (v[j] == 'F')
									time = time + 90;

								else if (v[j] == 'G')
									time = time + 55;

								else if (v[j] == 'H')
									time = time + 90;

								else if (v[j] == 'I')
									time = time + 70;

								else if (v[j] == 'J')
									time = time + 90;

								else if (v[j] == 'K')
									time = time + 90;

								else if (v[j] == 'L')
									time = time + 55;

								else if (v[j] == 'M')
									time = time + 90;

								else if (v[j] == 'N')
									time = time + 90;
								else if (v[j] == 'O')
									time = time + 50;
								else if (v[j] == 'P')
									time = time + 90;
								else if (v[j] == 'Q')
									time = time + 90;
								else if (v[j] == 'R')
									time = time + 90;
								else if (v[j] == 'S')
									time = time + 90;
								else if (v[j] == 'T')
									time = time + 90;
							} if (v[x] == 'E') {
								if (v[j] == 'a')
									time = time + 55;

								else if (v[j] == 'b')
									time = time + 90;

								else if (v[j] == 'c')
									time = time + 90;

								else if (v[j] == 'd')
									time = time + 90;

								else if (v[j] == 'e')
									time = time + 90;

								else if (v[j] == 'f')
									time = time + 90;

								else if (v[j] == 'g')
									time = time + 80;

								else if (v[j] == 'h')
									time = time + 90;

								else if (v[j] == 'i')
									time = time + 90;

								else if (v[j] == 'j')
									time = time + 90;

								else if (v[j] == 'k')
									time = time + 40;

								else if (v[j] == 'l')
									time = time + 85;

								else if (v[j] == 'm')
									time = time + 90;

								else if (v[j] == 'n')
									time = time + 90;

								else if (v[j] == 'o')
									time = time + 85;

								else if (v[j] == 'p')
									time = time + 85;

								else if (v[j] == 'q')
									time = time + 90;

								else if (v[j] == 'r')
									time = time + 90;

								else if (v[j] == 's')
									time = time + 90;

								else if (v[j] == 't')
									time = time + 90;

								else if (v[j] == 'u')
									time = time + 90;

								else if (v[j] == 'v')
									time = time + 90;

								else if (v[j] == 'w')
									time = time + 55;

								else if (v[j] == 'x')
									time = time + 90;

								else if (v[j] == 'y')
									time = time + 100;

								else if (v[j] == 'z')
									time = time + 90;

								else if (v[j] == 'A')
									time = time + 85;

								else if (v[j] == 'B')
									time = time + 90;

								else if (v[j] == 'C')
									time = time + 90;

								else if (v[j] == 'D')
									time = time + 90;

								else if (v[j] == 'F')
									time = time + 90;

								else if (v[j] == 'G')
									time = time + 55;

								else if (v[j] == 'H')
									time = time + 90;

								else if (v[j] == 'I')
									time = time + 90;

								else if (v[j] == 'J')
									time = time + 90;

								else if (v[j] == 'K')
									time = time + 90;

								else if (v[j] == 'L')
									time = time + 55;

								else if (v[j] == 'M')
									time = time + 90;

								else if (v[j] == 'N')
									time = time + 55;
								else if (v[j] == 'O')
									time = time + 90;
								else if (v[j] == 'P')
									time = time + 90;
								else if (v[j] == 'Q')
									time = time + 90;
								else if (v[j] == 'R')
									time = time + 90;
								else if (v[j] == 'S')
									time = time + 90;
								else if (v[j] == 'T')
									time = time + 90;
							} if (v[x] == 'F') {
								if (v[j] == 'a')
									time = time + 40;

								else if (v[j] == 'b')
									time = time + 40;

								else if (v[j] == 'c')
									time = time + 70;

								else if (v[j] == 'd')
									time = time + 70;

								else if (v[j] == 'e')
									time = time + 40;

								else if (v[j] == 'f')
									time = time + 40;

								else if (v[j] == 'g')
									time = time + 45;

								else if (v[j] == 'h')
									time = time + 40;

								else if (v[j] == 'i')
									time = time + 40;

								else if (v[j] == 'j')
									time = time + 40;

								else if (v[j] == 'k')
									time = time + 40;

								else if (v[j] == 'l')
									time = time + 55;

								else if (v[j] == 'm')
									time = time + 55;

								else if (v[j] == 'n')
									time = time + 55;

								else if (v[j] == 'o')
									time = time + 55;

								else if (v[j] == 'p')
									time = time + 55;

								else if (v[j] == 'q')
									time = time + 40;

								else if (v[j] == 'r')
									time = time + 40;

								else if (v[j] == 's')
									time = time + 40;

								else if (v[j] == 't')
									time = time + 40;

								else if (v[j] == 'u')
									time = time + 45;

								else if (v[j] == 'v')
									time = time + 45;

								else if (v[j] == 'w')
									time = time + 45;

								else if (v[j] == 'x')
									time = time + 45;

								else if (v[j] == 'y')
									time = time + 70;

								else if (v[j] == 'z')
									time = time + 45;

								else if (v[j] == 'A')
									time = time + 55;

								else if (v[j] == 'B')
									time = time + 40;

								else if (v[j] == 'C')
									time = time + 45;

								else if (v[j] == 'D')
									time = time + 45;

								else if (v[j] == 'E')
									time = time + 70;

								else if (v[j] == 'G')
									time = time + 35;

								else if (v[j] == 'H')
									time = time + 45;

								else if (v[j] == 'I')
									time = time + 55;

								else if (v[j] == 'J')
									time = time + 55;

								else if (v[j] == 'K')
									time = time + 90;

								else if (v[j] == 'L')
									time = time + 55;

								else if (v[j] == 'M')
									time = time + 55;

								else if (v[j] == 'N')
									time = time + 55;
								else if (v[j] == 'O')
									time = time + 40;
								else if (v[j] == 'P')
									time = time + 70;
								else if (v[j] == 'Q')
									time = time + 40;
								else if (v[j] == 'R')
									time = time + 40;
								else if (v[j] == 'S')
									time = time + 40;
								else if (v[j] == 'T')
									time = time + 55;
							} if (v[x] == 'G') {
								if (v[j] == 'a')
									time = time + 40;

								else if (v[j] == 'b')
									time = time + 90;

								else if (v[j] == 'c')
									time = time + 90;

								else if (v[j] == 'd')
									time = time + 90;

								else if (v[j] == 'e')
									time = time + 90;

								else if (v[j] == 'f')
									time = time + 90;

								else if (v[j] == 'g')
									time = time + 45;

								else if (v[j] == 'h')
									time = time + 90;

								else if (v[j] == 'i')
									time = time + 90;

								else if (v[j] == 'j')
									time = time + 90;

								else if (v[j] == 'k')
									time = time + 90;

								else if (v[j] == 'l')
									time = time + 55;

								else if (v[j] == 'm')
									time = time + 90;

								else if (v[j] == 'n')
									time = time + 90;

								else if (v[j] == 'o')
									time = time + 55;

								else if (v[j] == 'p')
									time = time + 55;

								else if (v[j] == 'q')
									time = time + 90;

								else if (v[j] == 'r')
									time = time + 90;

								else if (v[j] == 's')
									time = time + 90;

								else if (v[j] == 't')
									time = time + 90;

								else if (v[j] == 'u')
									time = time + 90;

								else if (v[j] == 'v')
									time = time + 90;

								else if (v[j] == 'w')
									time = time + 45;

								else if (v[j] == 'x')
									time = time + 45;

								else if (v[j] == 'y')
									time = time + 70;

								else if (v[j] == 'z')
									time = time + 90;

								else if (v[j] == 'A')
									time = time + 90;

								else if (v[j] == 'B')
									time = time + 90;

								else if (v[j] == 'C')
									time = time + 90;

								else if (v[j] == 'D')
									time = time + 45;

								else if (v[j] == 'E')
									time = time + 90;

								else if (v[j] == 'F')
									time = time + 90;

								else if (v[j] == 'H')
									time = time + 90;

								else if (v[j] == 'I')
									time = time + 55;

								else if (v[j] == 'J')
									time = time + 90;

								else if (v[j] == 'K')
									time = time + 90;

								else if (v[j] == 'L')
									time = time + 55;

								else if (v[j] == 'M')
									time = time + 90;

								else if (v[j] == 'N')
									time = time + 90;
								else if (v[j] == 'O')
									time = time + 90;
								else if (v[j] == 'P')
									time = time + 90;
								else if (v[j] == 'Q')
									time = time + 90;
								else if (v[j] == 'R')
									time = time + 90;
								else if (v[j] == 'S')
									time = time + 90;
								else if (v[j] == 'T')
									time = time + 90;
							} if (v[x] == 'H') {
								if (v[j] == 'a')
									time = time + 50;

								else if (v[j] == 'b')
									time = time + 90;

								else if (v[j] == 'c')
									time = time + 90;

								else if (v[j] == 'd')
									time = time + 90;

								else if (v[j] == 'e')
									time = time + 90;

								else if (v[j] == 'f')
									time = time + 90;

								else if (v[j] == 'g')
									time = time + 70;

								else if (v[j] == 'h')
									time = time + 90;

								else if (v[j] == 'i')
									time = time + 90;

								else if (v[j] == 'j')
									time = time + 90;

								else if (v[j] == 'k')
									time = time + 90;

								else if (v[j] == 'l')
									time = time + 70;

								else if (v[j] == 'm')
									time = time + 60;

								else if (v[j] == 'n')
									time = time + 70;

								else if (v[j] == 'o')
									time = time + 70;

								else if (v[j] == 'p')
									time = time + 70;

								else if (v[j] == 'q')
									time = time + 90;

								else if (v[j] == 'r')
									time = time + 90;

								else if (v[j] == 's')
									time = time + 90;

								else if (v[j] == 't')
									time = time + 90;

								else if (v[j] == 'u')
									time = time + 90;

								else if (v[j] == 'v')
									time = time + 90;

								else if (v[j] == 'w')
									time = time + 70;

								else if (v[j] == 'x')
									time = time + 70;

								else if (v[j] == 'y')
									time = time + 80;

								else if (v[j] == 'z')
									time = time + 90;

								else if (v[j] == 'A')
									time = time + 90;

								else if (v[j] == 'B')
									time = time + 90;

								else if (v[j] == 'C')
									time = time + 90;

								else if (v[j] == 'D')
									time = time + 70;

								else if (v[j] == 'E')
									time = time + 90;

								else if (v[j] == 'F')
									time = time + 55;

								else if (v[j] == 'G')
									time = time + 55;

								else if (v[j] == 'I')
									time = time + 60;

								else if (v[j] == 'J')
									time = time + 90;

								else if (v[j] == 'K')
									time = time + 90;

								else if (v[j] == 'L')
									time = time + 55;

								else if (v[j] == 'M')
									time = time + 55;

								else if (v[j] == 'N')
									time = time + 90;
								else if (v[j] == 'O')
									time = time + 90;
								else if (v[j] == 'P')
									time = time + 90;
								else if (v[j] == 'Q')
									time = time + 90;
								else if (v[j] == 'R')
									time = time + 90;
								else if (v[j] == 'S')
									time = time + 90;
								else if (v[j] == 'T')
									time = time + 60;
							} if (v[x] == 'I') {
								if (v[j] == 'a')
									time = time + 55;

								else if (v[j] == 'b')
									time = time + 90;

								else if (v[j] == 'c')
									time = time + 90;

								else if (v[j] == 'd')
									time = time + 90;

								else if (v[j] == 'e')
									time = time + 90;

								else if (v[j] == 'f')
									time = time + 90;

								else if (v[j] == 'g')
									time = time + 60;

								else if (v[j] == 'h')
									time = time + 90;

								else if (v[j] == 'i')
									time = time + 90;

								else if (v[j] == 'j')
									time = time + 90;

								else if (v[j] == 'k')
									time = time + 90;

								else if (v[j] == 'l')
									time = time + 85;

								else if (v[j] == 'm')
									time = time + 90;

								else if (v[j] == 'n')
									time = time + 90;

								else if (v[j] == 'o')
									time = time + 85;

								else if (v[j] == 'p')
									time = time + 85;

								else if (v[j] == 'q')
									time = time + 90;

								else if (v[j] == 'r')
									time = time + 90;

								else if (v[j] == 's')
									time = time + 90;

								else if (v[j] == 't')
									time = time + 90;

								else if (v[j] == 'u')
									time = time + 90;

								else if (v[j] == 'v')
									time = time + 90;

								else if (v[j] == 'w')
									time = time + 60;

								else if (v[j] == 'x')
									time = time + 75;

								else if (v[j] == 'y')
									time = time + 75;

								else if (v[j] == 'z')
									time = time + 90;

								else if (v[j] == 'A')
									time = time + 90;

								else if (v[j] == 'B')
									time = time + 90;

								else if (v[j] == 'C')
									time = time + 90;

								else if (v[j] == 'D')
									time = time + 75;

								else if (v[j] == 'E')
									time = time + 90;

								else if (v[j] == 'F')
									time = time + 90;

								else if (v[j] == 'G')
									time = time + 55;

								else if (v[j] == 'H')
									time = time + 90;

								else if (v[j] == 'J')
									time = time + 90;

								else if (v[j] == 'K')
									time = time + 90;

								else if (v[j] == 'L')
									time = time + 55;

								else if (v[j] == 'M')
									time = time + 90;

								else if (v[j] == 'N')
									time = time + 90;
								else if (v[j] == 'O')
									time = time + 90;
								else if (v[j] == 'P')
									time = time + 90;
								else if (v[j] == 'Q')
									time = time + 90;
								else if (v[j] == 'R')
									time = time + 90;
								else if (v[j] == 'S')
									time = time + 90;
								else if (v[j] == 'T')
									time = time + 90;
							} if (v[x] == 'J') {
								if (v[j] == 'a')
									time = time + 40;

								else if (v[j] == 'b')
									time = time + 90;

								else if (v[j] == 'c')
									time = time + 90;

								else if (v[j] == 'd')
									time = time + 90;

								else if (v[j] == 'e')
									time = time + 90;

								else if (v[j] == 'f')
									time = time + 90;

								else if (v[j] == 'g')
									time = time + 45;

								else if (v[j] == 'h')
									time = time + 90;

								else if (v[j] == 'i')
									time = time + 90;

								else if (v[j] == 'j')
									time = time + 90;

								else if (v[j] == 'k')
									time = time + 35;

								else if (v[j] == 'l')
									time = time + 55;

								else if (v[j] == 'm')
									time = time + 55;

								else if (v[j] == 'n')
									time = time + 55;

								else if (v[j] == 'o')
									time = time + 55;

								else if (v[j] == 'p')
									time = time + 55;

								else if (v[j] == 'q')
									time = time + 40;

								else if (v[j] == 'r')
									time = time + 40;

								else if (v[j] == 's')
									time = time + 15;

								else if (v[j] == 't')
									time = time + 90;

								else if (v[j] == 'u')
									time = time + 90;

								else if (v[j] == 'v')
									time = time + 30;

								else if (v[j] == 'w')
									time = time + 45;

								else if (v[j] == 'x')
									time = time + 45;

								else if (v[j] == 'y')
									time = time + 70;

								else if (v[j] == 'z')
									time = time + 90;

								else if (v[j] == 'A')
									time = time + 55;

								else if (v[j] == 'B')
									time = time + 50;

								else if (v[j] == 'C')
									time = time + 90;

								else if (v[j] == 'D')
									time = time + 45;

								else if (v[j] == 'E')
									time = time + 70;

								else if (v[j] == 'F')
									time = time + 90;

								else if (v[j] == 'G')
									time = time + 40;

								else if (v[j] == 'H')
									time = time + 90;

								else if (v[j] == 'I')
									time = time + 55;

								else if (v[j] == 'K')
									time = time + 90;

								else if (v[j] == 'L')
									time = time + 55;

								else if (v[j] == 'M')
									time = time + 55;

								else if (v[j] == 'N')
									time = time + 55;
								else if (v[j] == 'O')
									time = time + 40;
								else if (v[j] == 'P')
									time = time + 90;
								else if (v[j] == 'Q')
									time = time + 90;
								else if (v[j] == 'R')
									time = time + 90;
								else if (v[j] == 'S')
									time = time + 50;
								else if (v[j] == 'T')
									time = time + 55;
							} if (v[x] == 'K') {
								if (v[j] == 'a')
									time = time + 40;

								else if (v[j] == 'b')
									time = time + 90;

								else if (v[j] == 'c')
									time = time + 90;

								else if (v[j] == 'd')
									time = time + 90;

								else if (v[j] == 'e')
									time = time + 90;

								else if (v[j] == 'f')
									time = time + 90;

								else if (v[j] == 'g')
									time = time + 45;

								else if (v[j] == 'h')
									time = time + 90;

								else if (v[j] == 'i')
									time = time + 90;

								else if (v[j] == 'j')
									time = time + 90;

								else if (v[j] == 'k')
									time = time + 40;

								else if (v[j] == 'l')
									time = time + 55;

								else if (v[j] == 'm')
									time = time + 55;

								else if (v[j] == 'n')
									time = time + 55;

								else if (v[j] == 'o')
									time = time + 55;

								else if (v[j] == 'p')
									time = time + 55;

								else if (v[j] == 'q')
									time = time + 35;

								else if (v[j] == 'r')
									time = time + 40;

								else if (v[j] == 's')
									time = time + 15;

								else if (v[j] == 't')
									time = time + 90;

								else if (v[j] == 'u')
									time = time + 90;

								else if (v[j] == 'v')
									time = time + 30;

								else if (v[j] == 'w')
									time = time + 45;

								else if (v[j] == 'x')
									time = time + 45;

								else if (v[j] == 'y')
									time = time + 70;

								else if (v[j] == 'z')
									time = time + 90;

								else if (v[j] == 'A')
									time = time + 55;

								else if (v[j] == 'B')
									time = time + 90;

								else if (v[j] == 'C')
									time = time + 90;

								else if (v[j] == 'D')
									time = time + 45;

								else if (v[j] == 'E')
									time = time + 70;

								else if (v[j] == 'F')
									time = time + 90;

								else if (v[j] == 'G')
									time = time + 40;

								else if (v[j] == 'H')
									time = time + 90;

								else if (v[j] == 'I')
									time = time + 55;

								else if (v[j] == 'J')
									time = time + 55;

								else if (v[j] == 'L')
									time = time + 55;

								else if (v[j] == 'M')
									time = time + 55;

								else if (v[j] == 'N')
									time = time + 55;
								else if (v[j] == 'O')
									time = time + 35;
								else if (v[j] == 'P')
									time = time + 90;
								else if (v[j] == 'Q')
									time = time + 90;
								else if (v[j] == 'R')
									time = time + 90;
								else if (v[j] == 'S')
									time = time + 90;
								else if (v[j] == 'T')
									time = time + 55;
							} if (v[x] == 'L') {
								if (v[j] == 'a')
									time = time + 40;

								else if (v[j] == 'b')
									time = time + 90;

								else if (v[j] == 'c')
									time = time + 90;

								else if (v[j] == 'd')
									time = time + 90;

								else if (v[j] == 'e')
									time = time + 90;

								else if (v[j] == 'f')
									time = time + 90;

								else if (v[j] == 'g')
									time = time + 45;

								else if (v[j] == 'h')
									time = time + 90;

								else if (v[j] == 'i')
									time = time + 90;

								else if (v[j] == 'j')
									time = time + 90;

								else if (v[j] == 'k')
									time = time + 40;

								else if (v[j] == 'l')
									time = time + 55;

								else if (v[j] == 'm')
									time = time + 55;

								else if (v[j] == 'n')
									time = time + 55;

								else if (v[j] == 'o')
									time = time + 55;

								else if (v[j] == 'p')
									time = time + 55;

								else if (v[j] == 'q')
									time = time + 35;

								else if (v[j] == 'r')
									time = time + 40;

								else if (v[j] == 's')
									time = time + 15;

								else if (v[j] == 't')
									time = time + 90;

								else if (v[j] == 'u')
									time = time + 90;

								else if (v[j] == 'v')
									time = time + 30;

								else if (v[j] == 'w')
									time = time + 45;

								else if (v[j] == 'x')
									time = time + 45;

								else if (v[j] == 'y')
									time = time + 70;

								else if (v[j] == 'z')
									time = time + 90;

								else if (v[j] == 'A')
									time = time + 55;

								else if (v[j] == 'B')
									time = time + 90;

								else if (v[j] == 'C')
									time = time + 90;

								else if (v[j] == 'D')
									time = time + 45;

								else if (v[j] == 'E')
									time = time + 90;

								else if (v[j] == 'F')
									time = time + 90;

								else if (v[j] == 'G')
									time = time + 40;

								else if (v[j] == 'H')
									time = time + 90;

								else if (v[j] == 'I')
									time = time + 55;

								else if (v[j] == 'J')
									time = time + 55;

								else if (v[j] == 'K')
									time = time + 90;

								else if (v[j] == 'M')
									time = time + 55;

								else if (v[j] == 'N')
									time = time + 55;
								else if (v[j] == 'O')
									time = time + 35;
								else if (v[j] == 'P')
									time = time + 90;
								else if (v[j] == 'Q')
									time = time + 90;
								else if (v[j] == 'R')
									time = time + 90;
								else if (v[j] == 'S')
									time = time + 90;
								else if (v[j] == 'T')
									time = time + 55;
							} if (v[x] == 'M') {
								if (v[j] == 'a')
									time = time + 40;

								else if (v[j] == 'b')
									time = time + 90;

								else if (v[j] == 'c')
									time = time + 90;

								else if (v[j] == 'd')
									time = time + 90;

								else if (v[j] == 'e')
									time = time + 90;

								else if (v[j] == 'f')
									time = time + 90;

								else if (v[j] == 'g')
									time = time + 45;

								else if (v[j] == 'h')
									time = time + 90;

								else if (v[j] == 'i')
									time = time + 90;

								else if (v[j] == 'j')
									time = time + 90;

								else if (v[j] == 'k')
									time = time + 90;

								else if (v[j] == 'l')
									time = time + 55;

								else if (v[j] == 'm')
									time = time + 90;

								else if (v[j] == 'n')
									time = time + 55;

								else if (v[j] == 'o')
									time = time + 55;

								else if (v[j] == 'p')
									time = time + 55;

								else if (v[j] == 'q')
									time = time + 90;

								else if (v[j] == 'r')
									time = time + 90;

								else if (v[j] == 's')
									time = time + 90;

								else if (v[j] == 't')
									time = time + 90;

								else if (v[j] == 'u')
									time = time + 90;

								else if (v[j] == 'v')
									time = time + 90;

								else if (v[j] == 'w')
									time = time + 45;

								else if (v[j] == 'x')
									time = time + 45;

								else if (v[j] == 'y')
									time = time + 70;

								else if (v[j] == 'z')
									time = time + 90;

								else if (v[j] == 'A')
									time = time + 90;

								else if (v[j] == 'B')
									time = time + 90;

								else if (v[j] == 'C')
									time = time + 90;

								else if (v[j] == 'D')
									time = time + 45;

								else if (v[j] == 'E')
									time = time + 90;

								else if (v[j] == 'F')
									time = time + 90;

								else if (v[j] == 'G')
									time = time + 40;

								else if (v[j] == 'H')
									time = time + 90;

								else if (v[j] == 'I')
									time = time + 55;

								else if (v[j] == 'J')
									time = time + 90;

								else if (v[j] == 'K')
									time = time + 90;

								else if (v[j] == 'L')
									time = time + 55;

								else if (v[j] == 'N')
									time = time + 90;
								else if (v[j] == 'O')
									time = time + 90;
								else if (v[j] == 'P')
									time = time + 90;
								else if (v[j] == 'Q')
									time = time + 90;
								else if (v[j] == 'R')
									time = time + 90;
								else if (v[j] == 'S')
									time = time + 90;
								else if (v[j] == 'T')
									time = time + 90;
							} if (v[x] == 'N') {
								if (v[j] == 'a')
									time = time + 40;

								else if (v[j] == 'b')
									time = time + 90;

								else if (v[j] == 'c')
									time = time + 90;

								else if (v[j] == 'd')
									time = time + 90;

								else if (v[j] == 'e')
									time = time + 90;

								else if (v[j] == 'f')
									time = time + 90;

								else if (v[j] == 'g')
									time = time + 45;

								else if (v[j] == 'h')
									time = time + 90;

								else if (v[j] == 'i')
									time = time + 90;

								else if (v[j] == 'j')
									time = time + 90;

								else if (v[j] == 'k')
									time = time + 40;

								else if (v[j] == 'l')
									time = time + 55;

								else if (v[j] == 'm')
									time = time + 55;

								else if (v[j] == 'n')
									time = time + 90;

								else if (v[j] == 'o')
									time = time + 55;

								else if (v[j] == 'p')
									time = time + 55;

								else if (v[j] == 'q')
									time = time + 90;

								else if (v[j] == 'r')
									time = time + 90;

								else if (v[j] == 's')
									time = time + 90;

								else if (v[j] == 't')
									time = time + 90;

								else if (v[j] == 'u')
									time = time + 90;

								else if (v[j] == 'v')
									time = time + 30;

								else if (v[j] == 'w')
									time = time + 45;

								else if (v[j] == 'x')
									time = time + 45;

								else if (v[j] == 'y')
									time = time + 70;

								else if (v[j] == 'z')
									time = time + 90;

								else if (v[j] == 'A')
									time = time + 55;

								else if (v[j] == 'B')
									time = time + 90;

								else if (v[j] == 'C')
									time = time + 90;

								else if (v[j] == 'D')
									time = time + 45;

								else if (v[j] == 'E')
									time = time + 70;

								else if (v[j] == 'F')
									time = time + 90;

								else if (v[j] == 'G')
									time = time + 40;

								else if (v[j] == 'H')
									time = time + 90;

								else if (v[j] == 'I')
									time = time + 55;

								else if (v[j] == 'J')
									time = time + 90;

								else if (v[j] == 'K')
									time = time + 90;

								else if (v[j] == 'L')
									time = time + 55;

								else if (v[j] == 'M')
									time = time + 90;
								else if (v[j] == 'O')
									time = time + 90;
								else if (v[j] == 'P')
									time = time + 90;
								else if (v[j] == 'Q')
									time = time + 90;
								else if (v[j] == 'R')
									time = time + 90;
								else if (v[j] == 'S')
									time = time + 90;
								else if (v[j] == 'T')
									time = time + 55;
							}
							if (v[x] == 'O') {
								time = time + 15;
								if (v[j] == 'a')
									time = time + 40;

								else if (v[j] == 'b')
									time = time + 90;

								else if (v[j] == 'c')
									time = time + 90;

								else if (v[j] == 'd')
									time = time + 90;

								else if (v[j] == 'e')
									time = time + 90;

								else if (v[j] == 'f')
									time = time + 90;

								else if (v[j] == 'g')
									time = time + 45;

								else if (v[j] == 'h')
									time = time + 90;

								else if (v[j] == 'i')
									time = time + 90;

								else if (v[j] == 'j')
									time = time + 90;

								else if (v[j] == 'k')
									time = time + 40;

								else if (v[j] == 'l')
									time = time + 55;

								else if (v[j] == 'm')
									time = time + 55;

								else if (v[j] == 'n')
									time = time + 55;

								else if (v[j] == 'o')
									time = time + 55;

								else if (v[j] == 'p')
									time = time + 55;

								else if (v[j] == 'q')
									time = time + 30;

								else if (v[j] == 's')
									time = time + 25;

								else if (v[j] == 't')
									time = time + 90;

								else if (v[j] == 'u')
									time = time + 90;

								else if (v[j] == 'v')
									time = time + 50;

								else if (v[j] == 'w')
									time = time + 45;

								else if (v[j] == 'x')
									time = time + 45;

								else if (v[j] == 'y')
									time = time + 70;

								else if (v[j] == 'z')
									time = time + 90;

								else if (v[j] == 'A')
									time = time + 55;

								else if (v[j] == 'B')
									time = time + 35;

								else if (v[j] == 'C')
									time = time + 90;

								else if (v[j] == 'D')
									time = time + 45;

								else if (v[j] == 'E')
									time = time + 70;

								else if (v[j] == 'F')
									time = time + 90;

								else if (v[j] == 'G')
									time = time + 40;

								else if (v[j] == 'H')
									time = time + 90;

								else if (v[j] == 'I')
									time = time + 55;

								else if (v[j] == 'J')
									time = time + 35;

								else if (v[j] == 'K')
									time = time + 90;

								else if (v[j] == 'L')
									time = time + 90;

								else if (v[j] == 'M')
									time = time + 55;

								else if (v[j] == 'N')
									time = time + 55;
								else if (v[j] == 'O')
									time = time + 30;
								else if (v[j] == 'P')
									time = time + 90;
								else if (v[j] == 'Q')
									time = time + 90;
								else if (v[j] == 'R')
									time = time + 90;
								else if (v[j] == 'S')
									time = time + 35;
								else if (v[j] == 'T')
									time = time + 55;
							}
							if (v[x] == 'P') {
								time = time + 30;
								if (v[j] == 'b')
									time = time + 90;

								else if (v[j] == 'a')
									time = time + 55;

								else if (v[j] == 'd')
									time = time + 30;

								else if (v[j] == 'e')
									time = time + 90;

								else if (v[j] == 'f')
									time = time + 90;

								else if (v[j] == 'g')
									time = time + 70;

								else if (v[j] == 'h')
									time = time + 90;

								else if (v[j] == 'i')
									time = time + 90;

								else if (v[j] == 'j')
									time = time + 90;

								else if (v[j] == 'k')
									time = time + 60;

								else if (v[j] == 'l')
									time = time + 85;

								else if (v[j] == 'm')
									time = time + 85;

								else if (v[j] == 'n')
									time = time + 90;

								else if (v[j] == 'o')
									time = time + 85;

								else if (v[j] == 'p')
									time = time + 85;

								else if (v[j] == 'q')
									time = time + 90;

								else if (v[j] == 'r')
									time = time + 90;

								else if (v[j] == 's')
									time = time + 90;

								else if (v[j] == 't')
									time = time + 90;

								else if (v[j] == 'u')
									time = time + 90;

								else if (v[j] == 'v')
									time = time + 70;

								else if (v[j] == 'w')
									time = time + 70;

								else if (v[j] == 'x')
									time = time + 70;

								else if (v[j] == 'y')
									time = time + 70;

								else if (v[j] == 'z')
									time = time + 90;

								else if (v[j] == 'A')
									time = time + 80;

								else if (v[j] == 'B')
									time = time + 90;

								else if (v[j] == 'C')
									time = time + 90;

								else if (v[j] == 'D')
									time = time + 70;

								else if (v[j] == 'E')
									time = time + 90;

								else if (v[j] == 'F')
									time = time + 90;

								else if (v[j] == 'G')
									time = time + 65;

								else if (v[j] == 'H')
									time = time + 90;

								else if (v[j] == 'I')
									time = time + 70;

								else if (v[j] == 'J')
									time = time + 90;

								else if (v[j] == 'K')
									time = time + 90;

								else if (v[j] == 'L')
									time = time + 90;

								else if (v[j] == 'M')
									time = time + 90;

								else if (v[j] == 'N')
									time = time + 90;
								else if (v[j] == 'O')
									time = time + 90;
								else if (v[j] == 'Q')
									time = time + 90;
								else if (v[j] == 'R')
									time = time + 90;
								else if (v[j] == 'S')
									time = time + 90;
								else if (v[j] == 'T')
									time = time + 85;
							}
							if (v[x] == 'Q') {
								time = time + 10;
								if (v[j] == 'a')
									time = time + 20;

								else if (v[j] == 'b')
									time = time + 20;

								else if (v[j] == 'c')
									time = time + 25;

								else if (v[j] == 'd')
									time = time + 40;

								else if (v[j] == 'e')
									time = time + 10;

								else if (v[j] == 'g')
									time = time + 40;

								else if (v[j] == 'h')
									time = time + 35;

								else if (v[j] == 'i')
									time = time + 35;

								else if (v[j] == 'j')
									time = time + 20;

								else if (v[j] == 'k')
									time = time + 30;

								else if (v[j] == 'l')
									time = time + 50;

								else if (v[j] == 'm')
									time = time + 35;

								else if (v[j] == 'n')
									time = time + 35;

								else if (v[j] == 'o')
									time = time + 50;

								else if (v[j] == 'p')
									time = time + 50;

								else if (v[j] == 'q')
									time = time + 35;

								else if (v[j] == 'r')
									time = time + 35;

								else if (v[j] == 's')
									time = time + 25;

								else if (v[j] == 't')
									time = time + 35;

								else if (v[j] == 'u')
									time = time + 25;

								else if (v[j] == 'v')
									time = time + 35;

								else if (v[j] == 'w')
									time = time + 40;

								else if (v[j] == 'x')
									time = time + 35;

								else if (v[j] == 'y')
									time = time + 70;

								else if (v[j] == 'z')
									time = time + 40;

								else if (v[j] == 'A')
									time = time + 25;

								else if (v[j] == 'B')
									time = time + 35;

								else if (v[j] == 'C')
									time = time + 25;

								else if (v[j] == 'D')
									time = time + 30;

								else if (v[j] == 'E')
									time = time + 35;

								else if (v[j] == 'F')
									time = time + 35;

								else if (v[j] == 'G')
									time = time + 35;

								else if (v[j] == 'H')
									time = time + 40;

								else if (v[j] == 'I')
									time = time + 45;

								else if (v[j] == 'J')
									time = time + 35;

								else if (v[j] == 'K')
									time = time + 35;

								else if (v[j] == 'L')
									time = time + 35;

								else if (v[j] == 'M')
									time = time + 35;

								else if (v[j] == 'N')
									time = time + 35;
								else if (v[j] == 'O')
									time = time + 35;
								else if (v[j] == 'P')
									time = time + 25;
								else if (v[j] == 'Q')
									time = time + 10;
								else if (v[j] == 'R')
									time = time + 35;
								else if (v[j] == 'S')
									time = time + 35;
								else if (v[j] == 'T')
									time = time + 35;
							}
							if (v[x] == 'R') {
								time = time + 10;
								if (v[j] == 'a')
									time = time + 40;

								else if (v[j] == 'b')
									time = time + 40;

								else if (v[j] == 'c')
									time = time + 70;

								else if (v[j] == 'd')
									time = time + 70;

								else if (v[j] == 'e')
									time = time + 40;

								else if (v[j] == 'f')
									time = time + 40;

								else if (v[j] == 'g')
									time = time + 40;

								else if (v[j] == 'h')
									time = time + 30;

								else if (v[j] == 'i')
									time = time + 30;

								else if (v[j] == 'k')
									time = time + 30;

								else if (v[j] == 'l')
									time = time + 35;

								else if (v[j] == 'm')
									time = time + 35;

								else if (v[j] == 'n')
									time = time + 35;

								else if (v[j] == 'o')
									time = time + 35;

								else if (v[j] == 'p')
									time = time + 35;

								else if (v[j] == 'q')
									time = time + 30;

								else if (v[j] == 'r')
									time = time + 40;

								else if (v[j] == 's')
									time = time + 40;

								else if (v[j] == 't')
									time = time + 30;

								else if (v[j] == 'u')
									time = time + 25;

								else if (v[j] == 'v')
									time = time + 25;

								else if (v[j] == 'w')
									time = time + 40;

								else if (v[j] == 'x')
									time = time + 35;

								else if (v[j] == 'y')
									time = time + 70;

								else if (v[j] == 'z')
									time = time + 45;

								else if (v[j] == 'A')
									time = time + 55;

								else if (v[j] == 'B')
									time = time + 40;

								else if (v[j] == 'C')
									time = time + 25;

								else if (v[j] == 'D')
									time = time + 35;

								else if (v[j] == 'E')
									time = time + 70;

								else if (v[j] == 'F')
									time = time + 40;

								else if (v[j] == 'G')
									time = time + 40;

								else if (v[j] == 'H')
									time = time + 45;

								else if (v[j] == 'I')
									time = time + 55;

								else if (v[j] == 'J')
									time = time + 90;

								else if (v[j] == 'K')
									time = time + 90;

								else if (v[j] == 'L')
									time = time + 90;

								else if (v[j] == 'M')
									time = time + 90;

								else if (v[j] == 'N')
									time = time + 90;
								else if (v[j] == 'O')
									time = time + 30;
								else if (v[j] == 'P')
									time = time + 70;
								else if (v[j] == 'Q')
									time = time + 40;
								else if (v[j] == 'R')
									time = time + 30;
								else if (v[j] == 'S')
									time = time + 40;
								else if (v[j] == 'T')
									time = time + 35;
							}
							if (v[x] == 'S') {
								time = time + 15;
								if (v[j] == 'a')
									time = time + 40;

								else if (v[j] == 'b')
									time = time + 90;

								else if (v[j] == 'c')
									time = time + 90;

								else if (v[j] == 'd')
									time = time + 90;

								else if (v[j] == 'e')
									time = time + 90;

								else if (v[j] == 'f')
									time = time + 90;

								else if (v[j] == 'g')
									time = time + 45;

								else if (v[j] == 'h')
									time = time + 90;

								else if (v[j] == 'i')
									time = time + 90;

								else if (v[j] == 'j')
									time = time + 90;

								else if (v[j] == 'k')
									time = time + 40;

								else if (v[j] == 'l')
									time = time + 55;

								else if (v[j] == 'm')
									time = time + 40;

								else if (v[j] == 'n')
									time = time + 40;

								else if (v[j] == 'o')
									time = time + 40;

								else if (v[j] == 'p')
									time = time + 55;

								else if (v[j] == 'q')
									time = time + 40;

								else if (v[j] == 'r')
									time = time + 35;

								else if (v[j] == 't')
									time = time + 90;

								else if (v[j] == 'u')
									time = time + 90;

								else if (v[j] == 'v')
									time = time + 35;

								else if (v[j] == 'w')
									time = time + 45;

								else if (v[j] == 'x')
									time = time + 45;

								else if (v[j] == 'y')
									time = time + 70;

								else if (v[j] == 'z')
									time = time + 90;

								else if (v[j] == 'A')
									time = time + 55;

								else if (v[j] == 'B')
									time = time + 30;

								else if (v[j] == 'C')
									time = time + 90;

								else if (v[j] == 'D')
									time = time + 45;

								else if (v[j] == 'E')
									time = time + 70;

								else if (v[j] == 'F')
									time = time + 90;

								else if (v[j] == 'G')
									time = time + 40;

								else if (v[j] == 'H')
									time = time + 90;

								else if (v[j] == 'I')
									time = time + 55;

								else if (v[j] == 'J')
									time = time + 55;

								else if (v[j] == 'K')
									time = time + 90;

								else if (v[j] == 'L')
									time = time + 55;

								else if (v[j] == 'M')
									time = time + 55;

								else if (v[j] == 'N')
									time = time + 55;
								else if (v[j] == 'O')
									time = time + 40;
								else if (v[j] == 'P')
									time = time + 90;
								else if (v[j] == 'Q')
									time = time + 90;
								else if (v[j] == 'R')
									time = time + 90;
								else if (v[j] == 'T')
									time = time + 40;
							}
							if (v[x] == 'T') {
								time = time + 15;
								if (v[j] == 'a')
									time = time + 40;

								else if (v[j] == 'b')
									time = time + 90;

								else if (v[j] == 'c')
									time = time + 90;

								else if (v[j] == 'd')
									time = time + 90;

								else if (v[j] == 'e')
									time = time + 90;

								else if (v[j] == 'f')
									time = time + 90;

								else if (v[j] == 'g')
									time = time + 35;

								else if (v[j] == 'h')
									time = time + 90;

								else if (v[j] == 'i')
									time = time + 90;

								else if (v[j] == 'j')
									time = time + 90;

								else if (v[j] == 'k')
									time = time + 90;

								else if (v[j] == 'm')
									time = time + 90;

								else if (v[j] == 'n')
									time = time + 90;

								else if (v[j] == 'o')
									time = time + 20;

								else if (v[j] == 'p')
									time = time + 35;

								else if (v[j] == 'q')
									time = time + 90;

								else if (v[j] == 'r')
									time = time + 90;

								else if (v[j] == 's')
									time = time + 90;

								else if (v[j] == 't')
									time = time + 90;

								else if (v[j] == 'u')
									time = time + 90;

								else if (v[j] == 'v')
									time = time + 90;

								else if (v[j] == 'w')
									time = time + 55;

								else if (v[j] == 'x')
									time = time + 75;

								else if (v[j] == 'y')
									time = time + 80;

								else if (v[j] == 'z')
									time = time + 90;

								else if (v[j] == 'A')
									time = time + 90;

								else if (v[j] == 'B')
									time = time + 90;

								else if (v[j] == 'C')
									time = time + 90;

								else if (v[j] == 'D')
									time = time + 75;

								else if (v[j] == 'E')
									time = time + 90;

								else if (v[j] == 'F')
									time = time + 90;

								else if (v[j] == 'G')
									time = time + 40;

								else if (v[j] == 'H')
									time = time + 90;

								else if (v[j] == 'I')
									time = time + 90;

								else if (v[j] == 'J')
									time = time + 90;

								else if (v[j] == 'K')
									time = time + 90;

								else if (v[j] == 'L')
									time = time + 90;

								else if (v[j] == 'M')
									time = time + 90;

								else if (v[j] == 'N')
									time = time + 90;
								else if (v[j] == 'O')
									time = time + 90;
								else if (v[j] == 'P')
									time = time + 90;
								else if (v[j] == 'Q')
									time = time + 90;
								else if (v[j] == 'R')
									time = time + 90;
								else if (v[j] == 'S')
									time = time + 90;
							}
						}
					}
				}
				optimal = time;
				this->textBox1->Text = optimal + " minutes";
				
				if (t == 1) {

                   first = v[0];
				for (x = 0; x<r + 1; x++)
					k[x] = v[x + 1];
                     z = z + 1;

					for (x = 0; x < r + 1; x++) {
						for (j = 0; j < r + 1; j++) {
							if (k[x] == 'q' && k[j] == 'r' && j - x > 0) {
								for (i = 0; i < x; i++)
									e[i] = k[i];
								for (i = x; i < j - 1; i++)
									e[i] = k[i + 1];
								for (i = j - 1; i < r - (z + 1); i++)
									e[i] = k[i + 2];
								e[r - (z + 1)] = 'O';

								e[r - z] = '\0';
								z = z + 1;
							}
							else if (k[x] == 'q' && k[j] == 'r' && j - x < 0) {
								for (i = 0; i < j; i++)
									e[i] = k[i];
								for (i = j; i < x - 1; i++)
									e[i] = k[i + 1];
								for (i = x - 1; i < r - (z + 1); i++)
									e[i] = k[i + 2];
								e[r - (z + 1)] = 'O';

								e[r - z] = '\0';
								z = z + 1;
							}
							else {
								e = k;
							}
						}
					}
				}
				else {
					for (x = 0; x < r + 1; x++) {
						for (j = 0; j < r + 1; j++) {
							if (v[x] == 'q' && v[j] == 'r' && j - x > 0) {
								for (i = 0; i < x; i++)
									e[i] = v[i];
								for (i = x; i < j - 1; i++)
									e[i] = v[i + 1];
								for (i = j - 1; i < r - (z + 1); i++)
									e[i] = v[i + 2];
								e[r - (z + 1)] = 'O';

								e[r - z] = '\0';
								z = z + 1;
							}
							else if (v[x] == 'q' && v[j] == 'r' && j - x < 0) {
								for (i = 0; i < j; i++)
									e[i] = v[i];
								for (i = j; i < x - 1; i++)
									e[i] = v[i + 1];
								for (i = x - 1; i < r - (z + 1); i++)
									e[i] = v[i + 2];
								e[r - (z + 1)] = 'O';

								e[r - z] = '\0';
								z = z + 1;
							}
							else {
								e = v;
							}
						}
					}
				}
				for (x = 0; x<r + 1; x++) {
					for (j = 0; j<r + 1; j++) {
						if (e[x] == 'c' && e[j] == 'd' && j - x > 0) {
							for (i = 0; i<x; i++)
								b[i] = e[i];
							for (i = x; i<j - 1; i++)
								b[i] = e[i + 1];
							for (i = j - 1; i<r - (z + 1); i++)
								b[i] = e[i + 2];
							b[r - (z + 1)] = 'P';

							b[r - z] = '\0';
							z = z + 1;
						}
						else if (e[x] == 'c' && e[j] == 'd' && j - x < 0) {
							for (i = 0; i<j; i++)
								b[i] = e[i];
							for (i = j; i<x - 1; i++)
								b[i] = e[i + 1];
							for (i = x - 1; i<r - (z + 1); i++)
								b[i] = e[i + 2];
							b[r - (z + 1)] = 'P';

							b[r - z] = '\0';
							z = z + 1;
						}
						else {
							b = e;
						}
					}
				}
				for (x = 0; x<r + 1; x++) {
					for (j = 0; j<r + 1; j++) {
						if (b[x] == 'e' && b[j] == 'f' && j - x > 0) {
							for (i = 0; i<x; i++)
								c[i] = b[i];
							for (i = x; i<j - 1; i++)
								c[i] = b[i + 1];
							for (i = j - 1; i<r - (z + 1); i++)
								c[i] = b[i + 2];
							c[r - (z + 1)] = 'Q';

							c[r - z] = '\0';
							z = z + 1;
						}
						else if (b[x] == 'e' && b[j] == 'f' && j - x < 0) {
							for (i = 0; i<j; i++)
								c[i] = b[i];
							for (i = j; i<x - 1; i++)
								c[i] = b[i + 1];
							for (i = x - 1; i<r - (z + 1); i++)
								c[i] = b[i + 2];
							c[r - (z + 1)] = 'Q';

							c[r - z] = '\0';
							z = z + 1;
						}
						else {
							c = b;
						}
					}
				}
				for (x = 0; x<r + 1; x++) {
					for (j = 0; j<r + 1; j++) {
						if (c[x] == 'B' && c[j] == 's' && j - x > 0) {
							for (i = 0; i<x; i++)
								g[i] = c[i];
							for (i = x; i<j - 1; i++)
								g[i] = c[i + 1];
							for (i = j - 1; i<r - (z + 1); i++)
								g[i] = c[i + 2];
							g[r - (z + 1)] = 'S';

							g[r - z] = '\0';
							z = z + 1;
						}
						else if (c[x] == 'B' && c[j] == 's' && j - x < 0) {
							for (i = 0; i<j; i++)
								g[i] = c[i];
							for (i = j; i<x - 1; i++)
								g[i] = c[i + 1];
							for (i = x - 1; i<r - (z + 1); i++)
								g[i] = c[i + 2];
							g[r - (z + 1)] = 'S';

							g[r - z] = '\0';
							z = z + 1;
						}
						else {
							g = c;
						}
					}
				}
				for (x = 0; x<r + 1; x++) {
					for (j = 0; j<r + 1; j++) {
						if (g[x] == 'l' && g[j] == 'm' && j - x > 0) {
							for (i = 0; i<x; i++)
								h[i] = g[i];
							for (i = x; i<j - 1; i++)
								h[i] = g[i + 1];
							for (i = j - 1; i<r - (z + 1); i++)
								h[i] = g[i + 2];
							h[r - (z + 1)] = 'T';

							h[r - z] = '\0';
							z = z + 1;
						}
						else if (g[x] == 'l' && g[j] == 'm' && j - x < 0) {
							for (i = 0; i<j; i++)
								h[i] = g[i];
							for (i = j; i<x - 1; i++)
								h[i] = g[i + 1];
							for (i = x - 1; i<r - (z + 1); i++)
								h[i] = g[i + 2];
							h[r - (z + 1)] = 'T';

							h[r - z] = '\0';
							z = z + 1;
						}
						else {
							h = g;
						}
					}
				}
				for (x = 0; x<r + 1; x++) {
					for (j = 0; j<r + 1; j++) {
						if (h[x] == 'i' && h[j] == 'j' && j - x > 0) {
							for (i = 0; i<x; i++)
								d[i] = h[i];
							for (i = x; i<j - 1; i++)
								d[i] = h[i + 1];
							for (i = j - 1; i<r - (z + 1); i++)
								d[i] = h[i + 2];
							d[r - (z + 1)] = 'R';

							d[r - z] = '\0';
							z = z + 1;
							
						}
						else if (h[x] == 'i' && h[j] == 'j' && j - x < 0) {
							for (i = 0; i<j; i++)
								d[i] = h[i];
							for (i = j; i<x - 1; i++)
								d[i] = h[i + 1];
							for (i = x - 1; i<r - (z + 1); i++)
								d[i] = h[i + 2];
							d[r - (z + 1)] = 'R';

							d[r - z] = '\0';
							z = z + 1;
							
						}
						else {
							d = h;
						}
						for (i = 0; i < r + 1 ; i++)
							a = d;

					s = factorial((r + 1-z));
				progressBar1->Maximum = (s); 
					}
				}
				
			}

			if(l == r-z) {
				time = 0;
			
				this->progressBar1->Increment(1);

				for (x = 0; x<r + 1; x++) {
					for (j = 0; j<r + 1; j++) {
						if (j - x == 1) {
				if (a[x] == 'a') {
					if (a[j] == 'b')
						time = time + 90;
					else if (a[j] == 'c')
						time = time + 90;
					else if (a[j] == 'd')
						time = time + 90;
					else if (a[j] == 'e')
						time = time + 90;
					else if (a[j] == 'f')
						time = time + 90;
					else if (a[j] == 'g')
						time = time + 35;
					else if (a[j] == 'h')
						time = time + 90;
					else if (a[j] == 'i')
						time = time + 90;
					else if (a[j] == 'j')
						time = time + 90;
					else if (a[j] == 'k')
						time = time + 90;
					else if (a[j] == 'l')
						time = time + 55;
					else if (a[j] == 'm')
						time = time + 90;
					else if (a[j] == 'n')
						time = time + 90;
					else if (a[j] == 'o')
						time = time + 55;
					else if (a[j] == 'p')
						time = time + 55;
					else if (a[j] == 'q')
						time = time + 90;
					else if (a[j] == 'r')
						time = time + 90;
					else if (a[j] == 's')
						time = time + 90;
					else if (a[j] == 't')
						time = time + 90;
					else if (a[j] == 'u')
						time = time + 90;
					else if (a[j] == 'v')
						time = time + 90;
					else if (a[j] == 'w')
						time = time + 45;
					else if (a[j] == 'x')
						time = time + 40;
					else if (a[j] == 'y')
						time = time + 70;
					else if (a[j] == 'z')
						time = time + 90;
					else if (a[j] == 'A')
						time = time + 90;
					else if (a[j] == 'B')
						time = time + 90;
					else if (a[j] == 'C')
						time = time + 90;
					else if (a[j] == 'D')
						time = time + 40;
					else if (a[j] == 'E')
						time = time + 90;
					else if (a[j] == 'F')
						time = time + 90;
					else if (a[j] == 'G')
						time = time + 40;
					else if (a[j] == 'H')
						time = time + 90;
					else if (a[j] == 'I')
						time = time + 40;
					else if (a[j] == 'J')
						time = time + 90;
					else if (a[j] == 'K')
						time = time + 90;
					else if (a[j] == 'L')
						time = time + 90;
					else if (a[j] == 'M')
						time = time + 90;
					else if (a[j] == 'N')
						time = time + 90;
					else if (a[j] == 'O')
						time = time + 90;
					else if (a[j] == 'P')
						time = time + 90;
					else if (a[j] == 'Q')
						time = time + 90;
					else if (a[j] == 'R')
						time = time + 90;
					else if (a[j] == 'S')
						time = time + 90;
					else if (a[j] == 'T')
						time = time + 90;
				} if (a[x] == 'b') {
					if (a[j] == 'a')
						time = time + 30;
					else if (a[j] == 'c')
						time = time + 60;

					else if (a[j] == 'd')
						time = time + 60;

					else if (a[j] == 'e')
						time = time + 30;

					else if (a[j] == 'f')
						time = time + 30;

					else if (a[j] == 'g')
						time = time + 45;

					else if (a[j] == 'h')
						time = time + 40;

					else if (a[j] == 'i')
						time = time + 40;

					else if (a[j] == 'j')
						time = time + 40;

					else if (a[j] == 'k')
						time = time + 40;

					else if (a[j] == 'l')
						time = time + 55;

					else if (a[j] == 'm')
						time = time + 55;

					else if (a[j] == 'n')
						time = time + 55;

					else if (a[j] == 'o')
						time = time + 55;

					else if (a[j] == 'p')
						time = time + 55;

					else if (a[j] == 'q')
						time = time + 40;

					else if (a[j] == 'r')
						time = time + 40;

					else if (a[j] == 's')
						time = time + 40;

					else if (a[j] == 't')
						time = time + 40;

					else if (a[j] == 'u')
						time = time + 45;

					else if (a[j] == 'v')
						time = time + 40;

					else if (a[j] == 'w')
						time = time + 45;

					else if (a[j] == 'x')
						time = time + 40;

					else if (a[j] == 'y')
						time = time + 70;

					else if (a[j] == 'z')
						time = time + 45;

					else if (a[j] == 'A')
						time = time + 35;

					else if (a[j] == 'B')
						time = time + 40;

					else if (a[j] == 'C')
						time = time + 45;

					else if (a[j] == 'D')
						time = time + 40;

					else if (a[j] == 'E')
						time = time + 65;

					else if (a[j] == 'F')
						time = time + 40;

					else if (a[j] == 'G')
						time = time + 40;

					else if (a[j] == 'H')
						time = time + 45;

					else if (a[j] == 'I')
						time = time + 55;

					else if (a[j] == 'J')
						time = time + 55;

					else if (a[j] == 'K')
						time = time + 55;

					else if (a[j] == 'L')
						time = time + 55;

					else if (a[j] == 'M')
						time = time + 55;

					else if (a[j] == 'N')
						time = time + 55;
					else if (a[j] == 'O')
						time = time + 40;
					else if (a[j] == 'P')
						time = time + 90;
					else if (a[j] == 'Q')
						time = time + 30;
					else if (a[j] == 'R')
						time = time + 40;
					else if (a[j] == 'S')
						time = time + 40;
					else if (a[j] == 'T')
						time = time + 55;
				} if (a[x] == 'c') {
					if (a[j] == 'b')
						time = time + 90;

					else if (a[j] == 'a')
						time = time + 55;

					else if (a[j] == 'd')
						time = time + 30;

					else if (a[j] == 'e')
						time = time + 90;

					else if (a[j] == 'f')
						time = time + 90;

					else if (a[j] == 'g')
						time = time + 70;

					else if (a[j] == 'h')
						time = time + 90;

					else if (a[j] == 'i')
						time = time + 90;

					else if (a[j] == 'j')
						time = time + 90;

					else if (a[j] == 'k')
						time = time + 60;

					else if (a[j] == 'l')
						time = time + 85;

					else if (a[j] == 'm')
						time = time + 85;

					else if (a[j] == 'n')
						time = time + 90;

					else if (a[j] == 'o')
						time = time + 85;

					else if (a[j] == 'p')
						time = time + 85;

					else if (a[j] == 'q')
						time = time + 90;

					else if (a[j] == 'r')
						time = time + 90;

					else if (a[j] == 's')
						time = time + 90;

					else if (a[j] == 't')
						time = time + 90;

					else if (a[j] == 'u')
						time = time + 90;

					else if (a[j] == 'v')
						time = time + 70;

					else if (a[j] == 'w')
						time = time + 70;

					else if (a[j] == 'x')
						time = time + 70;

					else if (a[j] == 'y')
						time = time + 70;

					else if (a[j] == 'z')
						time = time + 90;

					else if (a[j] == 'A')
						time = time + 80;

					else if (a[j] == 'B')
						time = time + 90;

					else if (a[j] == 'C')
						time = time + 90;

					else if (a[j] == 'D')
						time = time + 70;

					else if (a[j] == 'E')
						time = time + 90;

					else if (a[j] == 'F')
						time = time + 90;

					else if (a[j] == 'G')
						time = time + 65;

					else if (a[j] == 'H')
						time = time + 90;

					else if (a[j] == 'I')
						time = time + 70;

					else if (a[j] == 'J')
						time = time + 90;

					else if (a[j] == 'K')
						time = time + 90;

					else if (a[j] == 'L')
						time = time + 90;

					else if (a[j] == 'M')
						time = time + 90;

					else if (a[j] == 'N')
						time = time + 90;
					else if (a[j] == 'O')
						time = time + 90;
					else if (a[j] == 'Q')
						time = time + 90;
					else if (a[j] == 'R')
						time = time + 90;
					else if (a[j] == 'S')
						time = time + 90;
					else if (a[j] == 'T')
						time = time + 85;
				} if (a[x] == 'd') {
					if (a[j] == 'a')
						time = time + 55;

					else if (a[j] == 'b')
						time = time + 90;

					else if (a[j] == 'c')
						time = time + 40;

					else if (a[j] == 'e')
						time = time + 90;

					else if (a[j] == 'f')
						time = time + 90;

					else if (a[j] == 'g')
						time = time + 70;

					else if (a[j] == 'h')
						time = time + 90;

					else if (a[j] == 'i')
						time = time + 90;

					else if (a[j] == 'j')
						time = time + 90;

					else if (a[j] == 'k')
						time = time + 60;

					else if (a[j] == 'l')
						time = time + 85;

					else if (a[j] == 'm')
						time = time + 85;

					else if (a[j] == 'n')
						time = time + 90;

					else if (a[j] == 'o')
						time = time + 85;

					else if (a[j] == 'p')
						time = time + 85;

					else if (a[j] == 'q')
						time = time + 90;

					else if (a[j] == 'r')
						time = time + 90;

					else if (a[j] == 's')
						time = time + 90;

					else if (a[j] == 't')
						time = time + 90;

					else if (a[j] == 'u')
						time = time + 90;

					else if (a[j] == 'v')
						time = time + 70;

					else if (a[j] == 'w')
						time = time + 70;

					else if (a[j] == 'x')
						time = time + 70;

					else if (a[j] == 'y')
						time = time + 70;

					else if (a[j] == 'z')
						time = time + 90;

					else if (a[j] == 'A')
						time = time + 80;

					else if (a[j] == 'B')
						time = time + 90;

					else if (a[j] == 'C')
						time = time + 90;

					else if (a[j] == 'D')
						time = time + 70;

					else if (a[j] == 'E')
						time = time + 90;

					else if (a[j] == 'F')
						time = time + 90;

					else if (a[j] == 'G')
						time = time + 65;

					else if (a[j] == 'H')
						time = time + 90;

					else if (a[j] == 'I')
						time = time + 70;

					else if (a[j] == 'J')
						time = time + 90;

					else if (a[j] == 'K')
						time = time + 90;

					else if (a[j] == 'L')
						time = time + 90;

					else if (a[j] == 'M')
						time = time + 90;

					else if (a[j] == 'N')
						time = time + 90;
					else if (a[j] == 'O')
						time = time + 90;
					else if (a[j] == 'P')
						time = time + 40;
					else if (a[j] == 'Q')
						time = time + 90;
					else if (a[j] == 'R')
						time = time + 90;
					else if (a[j] == 'S')
						time = time + 90;
					else if (a[j] == 'T')
						time = time + 85;
				} if (a[x] == 'e') {
					if (a[j] == 'a')
						time = time + 20;

					else if (a[j] == 'b')
						time = time + 20;

					else if (a[j] == 'c')
						time = time + 30;

					else if (a[j] == 'd')
						time = time + 60;

					else if (a[j] == 'f')
						time = time + 10;

					else if (a[j] == 'g')
						time = time + 40;

					else if (a[j] == 'h')
						time = time + 35;

					else if (a[j] == 'i')
						time = time + 35;

					else if (a[j] == 'j')
						time = time + 20;

					else if (a[j] == 'k')
						time = time + 35;

					else if (a[j] == 'l')
						time = time + 50;

					else if (a[j] == 'm')
						time = time + 50;

					else if (a[j] == 'n')
						time = time + 50;

					else if (a[j] == 'o')
						time = time + 50;

					else if (a[j] == 'p')
						time = time + 50;

					else if (a[j] == 'q')
						time = time + 35;

					else if (a[j] == 'r')
						time = time + 35;

					else if (a[j] == 's')
						time = time + 10;

					else if (a[j] == 't')
						time = time + 35;

					else if (a[j] == 'u')
						time = time + 40;

					else if (a[j] == 'v')
						time = time + 30;

					else if (a[j] == 'w')
						time = time + 40;

					else if (a[j] == 'x')
						time = time + 35;

					else if (a[j] == 'y')
						time = time + 70;

					else if (a[j] == 'z')
						time = time + 35;

					else if (a[j] == 'A')
						time = time + 30;

					else if (a[j] == 'B')
						time = time + 35;

					else if (a[j] == 'C')
						time = time + 40;

					else if (a[j] == 'D')
						time = time + 35;

					else if (a[j] == 'E')
						time = time + 60;

					else if (a[j] == 'F')
						time = time + 35;

					else if (a[j] == 'G')
						time = time + 35;

					else if (a[j] == 'H')
						time = time + 40;

					else if (a[j] == 'I')
						time = time + 45;

					else if (a[j] == 'J')
						time = time + 90;

					else if (a[j] == 'K')
						time = time + 90;

					else if (a[j] == 'L')
						time = time + 90;

					else if (a[j] == 'M')
						time = time + 90;

					else if (a[j] == 'N')
						time = time + 90;
					else if (a[j] == 'O')
						time = time + 35;
					else if (a[j] == 'P')
						time = time + 30;
					else if (a[j] == 'Q')
						time = time + 90;
					else if (a[j] == 'R')
						time = time + 35;
					else if (a[j] == 'S')
						time = time + 35;
					else if (a[j] == 'T')
						time = time + 50;
				} if (a[x] == 'f') {
					if (a[j] == 'a')
						time = time + 20;

					else if (a[j] == 'b')
						time = time + 20;

					else if (a[j] == 'c')
						time = time + 25;

					else if (a[j] == 'd')
						time = time + 40;

					else if (a[j] == 'e')
						time = time + 10;

					else if (a[j] == 'g')
						time = time + 40;

					else if (a[j] == 'h')
						time = time + 35;

					else if (a[j] == 'i')
						time = time + 35;

					else if (a[j] == 'j')
						time = time + 20;

					else if (a[j] == 'k')
						time = time + 30;

					else if (a[j] == 'l')
						time = time + 50;

					else if (a[j] == 'm')
						time = time + 35;

					else if (a[j] == 'n')
						time = time + 35;

					else if (a[j] == 'o')
						time = time + 50;

					else if (a[j] == 'p')
						time = time + 50;

					else if (a[j] == 'q')
						time = time + 35;

					else if (a[j] == 'r')
						time = time + 35;

					else if (a[j] == 's')
						time = time + 25;

					else if (a[j] == 't')
						time = time + 35;

					else if (a[j] == 'u')
						time = time + 25;

					else if (a[j] == 'v')
						time = time + 35;

					else if (a[j] == 'w')
						time = time + 40;

					else if (a[j] == 'x')
						time = time + 35;

					else if (a[j] == 'y')
						time = time + 70;

					else if (a[j] == 'z')
						time = time + 40;

					else if (a[j] == 'A')
						time = time + 25;

					else if (a[j] == 'B')
						time = time + 35;

					else if (a[j] == 'C')
						time = time + 25;

					else if (a[j] == 'D')
						time = time + 30;

					else if (a[j] == 'E')
						time = time + 35;

					else if (a[j] == 'F')
						time = time + 35;

					else if (a[j] == 'G')
						time = time + 35;

					else if (a[j] == 'H')
						time = time + 40;

					else if (a[j] == 'I')
						time = time + 45;

					else if (a[j] == 'J')
						time = time + 35;

					else if (a[j] == 'K')
						time = time + 35;

					else if (a[j] == 'L')
						time = time + 35;

					else if (a[j] == 'M')
						time = time + 35;

					else if (a[j] == 'N')
						time = time + 35;
					else if (a[j] == 'O')
						time = time + 35;
					else if (a[j] == 'P')
						time = time + 25;
					else if (a[j] == 'Q')
						time = time + 10;
					else if (a[j] == 'R')
						time = time + 35;
					else if (a[j] == 'S')
						time = time + 35;
					else if (a[j] == 'T')
						time = time + 35;
				} if (a[x] == 'g') {
					if (a[j] == 'a')
						time = time + 65;

					else if (a[j] == 'b')
						time = time + 90;

					else if (a[j] == 'c')
						time = time + 90;

					else if (a[j] == 'd')
						time = time + 90;

					else if (a[j] == 'e')
						time = time + 90;

					else if (a[j] == 'f')
						time = time + 90;

					else if (a[j] == 'h')
						time = time + 90;

					else if (a[j] == 'i')
						time = time + 90;

					else if (a[j] == 'j')
						time = time + 90;

					else if (a[j] == 'k')
						time = time + 90;

					else if (a[j] == 'l')
						time = time + 60;

					else if (a[j] == 'm')
						time = time + 90;

					else if (a[j] == 'n')
						time = time + 90;

					else if (a[j] == 'o')
						time = time + 60;

					else if (a[j] == 'p')
						time = time + 60;

					else if (a[j] == 'q')
						time = time + 90;

					else if (a[j] == 'r')
						time = time + 90;

					else if (a[j] == 's')
						time = time + 90;

					else if (a[j] == 't')
						time = time + 90;

					else if (a[j] == 'u')
						time = time + 90;

					else if (a[j] == 'v')
						time = time + 90;

					else if (a[j] == 'w')
						time = time + 40;

					else if (a[j] == 'x')
						time = time + 40;

					else if (a[j] == 'y')
						time = time + 30;

					else if (a[j] == 'z')
						time = time + 90;

					else if (a[j] == 'A')
						time = time + 90;

					else if (a[j] == 'B')
						time = time + 90;

					else if (a[j] == 'C')
						time = time + 90;

					else if (a[j] == 'D')
						time = time + 40;

					else if (a[j] == 'E')
						time = time + 90;

					else if (a[j] == 'F')
						time = time + 90;

					else if (a[j] == 'G')
						time = time + 65;

					else if (a[j] == 'H')
						time = time + 90;

					else if (a[j] == 'I')
						time = time + 70;

					else if (a[j] == 'J')
						time = time + 90;

					else if (a[j] == 'K')
						time = time + 90;

					else if (a[j] == 'L')
						time = time + 90;

					else if (a[j] == 'M')
						time = time + 90;

					else if (a[j] == 'N')
						time = time + 90;
					else if (a[j] == 'O')
						time = time + 90;
					else if (a[j] == 'P')
						time = time + 90;
					else if (a[j] == 'Q')
						time = time + 90;
					else if (a[j] == 'R')
						time = time + 90;
					else if (a[j] == 'S')
						time = time + 90;
					else if (a[j] == 'T')
						time = time + 90;
				} if (a[x] == 'h') {
					if (a[j] == 'a')
						time = time + 40;

					else if (a[j] == 'b')
						time = time + 40;

					else if (a[j] == 'c')
						time = time + 70;

					else if (a[j] == 'd')
						time = time + 70;

					else if (a[j] == 'e')
						time = time + 40;

					else if (a[j] == 'f')
						time = time + 40;

					else if (a[j] == 'g')
						time = time + 45;

					else if (a[j] == 'i')
						time = time + 35;

					else if (a[j] == 'j')
						time = time + 35;

					else if (a[j] == 'k')
						time = time + 35;

					else if (a[j] == 'l')
						time = time + 45;

					else if (a[j] == 'm')
						time = time + 45;

					else if (a[j] == 'n')
						time = time + 40;

					else if (a[j] == 'o')
						time = time + 45;

					else if (a[j] == 'p')
						time = time + 45;

					else if (a[j] == 'q')
						time = time + 40;

					else if (a[j] == 'r')
						time = time + 40;

					else if (a[j] == 's')
						time = time + 40;

					else if (a[j] == 't')
						time = time + 35;

					else if (a[j] == 'u')
						time = time + 25;

					else if (a[j] == 'v')
						time = time + 40;

					else if (a[j] == 'w')
						time = time + 45;

					else if (a[j] == 'x')
						time = time + 45;

					else if (a[j] == 'y')
						time = time + 70;

					else if (a[j] == 'z')
						time = time + 35;

					else if (a[j] == 'A')
						time = time + 55;

					else if (a[j] == 'B')
						time = time + 40;

					else if (a[j] == 'C')
						time = time + 45;

					else if (a[j] == 'D')
						time = time + 45;

					else if (a[j] == 'E')
						time = time + 70;

					else if (a[j] == 'F')
						time = time + 40;

					else if (a[j] == 'G')
						time = time + 40;

					else if (a[j] == 'H')
						time = time + 45;

					else if (a[j] == 'I')
						time = time + 55;

					else if (a[j] == 'J')
						time = time + 90;

					else if (a[j] == 'K')
						time = time + 90;

					else if (a[j] == 'L')
						time = time + 90;

					else if (a[j] == 'M')
						time = time + 90;

					else if (a[j] == 'N')
						time = time + 90;
					else if (a[j] == 'O')
						time = time + 40;
					else if (a[j] == 'P')
						time = time + 70;
					else if (a[j] == 'Q')
						time = time + 40;
					else if (a[j] == 'R')
						time = time + 35;
					else if (a[j] == 'S')
						time = time + 40;
					else if (a[j] == 'T')
						time = time + 45;
				}if (a[x] == 'i') {
					if (a[j] == 'a')
						time = time + 35;

					else if (a[j] == 'b')
						time = time + 35;

					else if (a[j] == 'c')
						time = time + 60;

					else if (a[j] == 'd')
						time = time + 40;

					else if (a[j] == 'e')
						time = time + 35;

					else if (a[j] == 'f')
						time = time + 35;

					else if (a[j] == 'g')
						time = time + 30;

					else if (a[j] == 'h')
						time = time + 30;

					else if (a[j] == 'j')
						time = time + 10;

					else if (a[j] == 'k')
						time = time + 20;

					else if (a[j] == 'l')
						time = time + 30;

					else if (a[j] == 'm')
						time = time + 30;

					else if (a[j] == 'n')
						time = time + 30;

					else if (a[j] == 'o')
						time = time + 30;

					else if (a[j] == 'p')
						time = time + 30;

					else if (a[j] == 'q')
						time = time + 35;

					else if (a[j] == 'r')
						time = time + 35;

					else if (a[j] == 's')
						time = time + 35;

					else if (a[j] == 't')
						time = time + 20;

					else if (a[j] == 'u')
						time = time + 35;

					else if (a[j] == 'v')
						time = time + 30;

					else if (a[j] == 'w')
						time = time + 30;

					else if (a[j] == 'x')
						time = time + 15;

					else if (a[j] == 'y')
						time = time + 60;

					else if (a[j] == 'z')
						time = time + 40;

					else if (a[j] == 'A')
						time = time + 50;

					else if (a[j] == 'B')
						time = time + 35;

					else if (a[j] == 'C')
						time = time + 30;

					else if (a[j] == 'D')
						time = time + 15;

					else if (a[j] == 'E')
						time = time + 65;

					else if (a[j] == 'F')
						time = time + 35;

					else if (a[j] == 'G')
						time = time + 35;

					else if (a[j] == 'H')
						time = time + 40;

					else if (a[j] == 'I')
						time = time + 45;

					else if (a[j] == 'J')
						time = time + 90;

					else if (a[j] == 'K')
						time = time + 90;

					else if (a[j] == 'L')
						time = time + 90;

					else if (a[j] == 'M')
						time = time + 90;

					else if (a[j] == 'N')
						time = time + 90;
					else if (a[j] == 'O')
						time = time + 35;
					else if (a[j] == 'P')
						time = time + 60;
					else if (a[j] == 'Q')
						time = time + 35;
					else if (a[j] == 'S')
						time = time + 35;
					else if (a[j] == 'T')
						time = time + 30;
				} if (a[x] == 'j') {
					if (a[j] == 'a')
						time = time + 40;

					else if (a[j] == 'b')
						time = time + 40;

					else if (a[j] == 'c')
						time = time + 70;

					else if (a[j] == 'd')
						time = time + 70;

					else if (a[j] == 'e')
						time = time + 40;

					else if (a[j] == 'f')
						time = time + 40;

					else if (a[j] == 'g')
						time = time + 40;

					else if (a[j] == 'h')
						time = time + 30;

					else if (a[j] == 'i')
						time = time + 30;

					else if (a[j] == 'k')
						time = time + 30;

					else if (a[j] == 'l')
						time = time + 35;

					else if (a[j] == 'm')
						time = time + 35;

					else if (a[j] == 'n')
						time = time + 35;

					else if (a[j] == 'o')
						time = time + 35;

					else if (a[j] == 'p')
						time = time + 35;

					else if (a[j] == 'q')
						time = time + 30;

					else if (a[j] == 'r')
						time = time + 40;

					else if (a[j] == 's')
						time = time + 40;

					else if (a[j] == 't')
						time = time + 30;

					else if (a[j] == 'u')
						time = time + 25;

					else if (a[j] == 'v')
						time = time + 25;

					else if (a[j] == 'w')
						time = time + 40;

					else if (a[j] == 'x')
						time = time + 35;

					else if (a[j] == 'y')
						time = time + 70;

					else if (a[j] == 'z')
						time = time + 45;

					else if (a[j] == 'A')
						time = time + 55;

					else if (a[j] == 'B')
						time = time + 40;

					else if (a[j] == 'C')
						time = time + 25;

					else if (a[j] == 'D')
						time = time + 35;

					else if (a[j] == 'E')
						time = time + 70;

					else if (a[j] == 'F')
						time = time + 40;

					else if (a[j] == 'G')
						time = time + 40;

					else if (a[j] == 'H')
						time = time + 45;

					else if (a[j] == 'I')
						time = time + 55;

					else if (a[j] == 'J')
						time = time + 90;

					else if (a[j] == 'K')
						time = time + 90;

					else if (a[j] == 'L')
						time = time + 90;

					else if (a[j] == 'M')
						time = time + 90;

					else if (a[j] == 'N')
						time = time + 90;
					else if (a[j] == 'O')
						time = time + 30;
					else if (a[j] == 'P')
						time = time + 70;
					else if (a[j] == 'Q')
						time = time + 40;
					else if (a[j] == 'R')
						time = time + 30;
					else if (a[j] == 'S')
						time = time + 40;
					else if (a[j] == 'T')
						time = time + 35;
				} if (a[x] == 'k') {
					if (a[j] == 'a')
						time = time + 40;

					else if (a[j] == 'b')
						time = time + 90;

					else if (a[j] == 'c')
						time = time + 90;

					else if (a[j] == 'd')
						time = time + 90;

					else if (a[j] == 'e')
						time = time + 90;

					else if (a[j] == 'f')
						time = time + 90;

					else if (a[j] == 'g')
						time = time + 35;

					else if (a[j] == 'h')
						time = time + 90;

					else if (a[j] == 'i')
						time = time + 90;

					else if (a[j] == 'j')
						time = time + 90;

					else if (a[j] == 'l')
						time = time + 35;

					else if (a[j] == 'm')
						time = time + 35;

					else if (a[j] == 'n')
						time = time + 90;

					else if (a[j] == 'o')
						time = time + 35;

					else if (a[j] == 'p')
						time = time + 35;

					else if (a[j] == 'q')
						time = time + 90;

					else if (a[j] == 'r')
						time = time + 90;

					else if (a[j] == 's')
						time = time + 90;

					else if (a[j] == 't')
						time = time + 90;

					else if (a[j] == 'u')
						time = time + 90;

					else if (a[j] == 'v')
						time = time + 35;

					else if (a[j] == 'w')
						time = time + 30;

					else if (a[j] == 'x')
						time = time + 35;

					else if (a[j] == 'y')
						time = time + 70;

					else if (a[j] == 'z')
						time = time + 90;

					else if (a[j] == 'A')
						time = time + 55;

					else if (a[j] == 'B')
						time = time + 90;

					else if (a[j] == 'C')
						time = time + 90;

					else if (a[j] == 'D')
						time = time + 45;

					else if (a[j] == 'E')
						time = time + 60;

					else if (a[j] == 'F')
						time = time + 90;

					else if (a[j] == 'G')
						time = time + 40;

					else if (a[j] == 'H')
						time = time + 90;

					else if (a[j] == 'I')
						time = time + 55;

					else if (a[j] == 'J')
						time = time + 90;

					else if (a[j] == 'K')
						time = time + 90;

					else if (a[j] == 'L')
						time = time + 90;

					else if (a[j] == 'M')
						time = time + 90;

					else if (a[j] == 'N')
						time = time + 90;
					else if (a[j] == 'O')
						time = time + 90;
					else if (a[j] == 'P')
						time = time + 90;
					else if (a[j] == 'Q')
						time = time + 90;
					else if (a[j] == 'R')
						time = time + 90;
					else if (a[j] == 'S')
						time = time + 90;
					else if (a[j] == 'T')
						time = time + 35;
				} if (a[x] == 'l') {
					if (a[j] == 'a')
						time = time + 40;

					else if (a[j] == 'b')
						time = time + 90;

					else if (a[j] == 'c')
						time = time + 90;

					else if (a[j] == 'd')
						time = time + 90;

					else if (a[j] == 'e')
						time = time + 90;

					else if (a[j] == 'f')
						time = time + 90;

					else if (a[j] == 'g')
						time = time + 35;

					else if (a[j] == 'h')
						time = time + 90;

					else if (a[j] == 'i')
						time = time + 90;

					else if (a[j] == 'j')
						time = time + 90;

					else if (a[j] == 'k')
						time = time + 90;

					else if (a[j] == 'm')
						time = time + 90;

					else if (a[j] == 'n')
						time = time + 90;

					else if (a[j] == 'o')
						time = time + 20;

					else if (a[j] == 'p')
						time = time + 35;

					else if (a[j] == 'q')
						time = time + 90;

					else if (a[j] == 'r')
						time = time + 90;

					else if (a[j] == 's')
						time = time + 90;

					else if (a[j] == 't')
						time = time + 90;

					else if (a[j] == 'u')
						time = time + 90;

					else if (a[j] == 'v')
						time = time + 90;

					else if (a[j] == 'w')
						time = time + 55;

					else if (a[j] == 'x')
						time = time + 75;

					else if (a[j] == 'y')
						time = time + 80;

					else if (a[j] == 'z')
						time = time + 90;

					else if (a[j] == 'A')
						time = time + 90;

					else if (a[j] == 'B')
						time = time + 90;

					else if (a[j] == 'C')
						time = time + 90;

					else if (a[j] == 'D')
						time = time + 75;

					else if (a[j] == 'E')
						time = time + 90;

					else if (a[j] == 'F')
						time = time + 90;

					else if (a[j] == 'G')
						time = time + 40;

					else if (a[j] == 'H')
						time = time + 90;

					else if (a[j] == 'I')
						time = time + 90;

					else if (a[j] == 'J')
						time = time + 90;

					else if (a[j] == 'K')
						time = time + 90;

					else if (a[j] == 'L')
						time = time + 90;

					else if (a[j] == 'M')
						time = time + 90;

					else if (a[j] == 'N')
						time = time + 90;
					else if (a[j] == 'O')
						time = time + 90;
					else if (a[j] == 'P')
						time = time + 90;
					else if (a[j] == 'Q')
						time = time + 90;
					else if (a[j] == 'R')
						time = time + 90;
					else if (a[j] == 'S')
						time = time + 90;
					else if (a[j] == 'T')
						time = time + 90;
				} if (a[x] == 'm') {
					if (a[j] == 'a')
						time = time + 40;

					else if (a[j] == 'b')
						time = time + 90;

					else if (a[j] == 'c')
						time = time + 90;

					else if (a[j] == 'd')
						time = time + 90;

					else if (a[j] == 'e')
						time = time + 90;

					else if (a[j] == 'f')
						time = time + 90;

					else if (a[j] == 'g')
						time = time + 55;

					else if (a[j] == 'h')
						time = time + 90;

					else if (a[j] == 'i')
						time = time + 90;

					else if (a[j] == 'j')
						time = time + 90;

					else if (a[j] == 'k')
						time = time + 35;

					else if (a[j] == 'l')
						time = time + 15;

					else if (a[j] == 'n')
						time = time + 90;

					else if (a[j] == 'o')
						time = time + 20;

					else if (a[j] == 'p')
						time = time + 20;

					else if (a[j] == 'q')
						time = time + 90;

					else if (a[j] == 'r')
						time = time + 90;

					else if (a[j] == 's')
						time = time + 90;

					else if (a[j] == 't')
						time = time + 90;

					else if (a[j] == 'u')
						time = time + 90;

					else if (a[j] == 'v')
						time = time + 75;

					else if (a[j] == 'w')
						time = time + 55;

					else if (a[j] == 'x')
						time = time + 75;

					else if (a[j] == 'y')
						time = time + 80;

					else if (a[j] == 'z')
						time = time + 90;

					else if (a[j] == 'A')
						time = time + 45;

					else if (a[j] == 'B')
						time = time + 90;

					else if (a[j] == 'C')
						time = time + 90;

					else if (a[j] == 'D')
						time = time + 75;

					else if (a[j] == 'E')
						time = time + 85;

					else if (a[j] == 'F')
						time = time + 90;

					else if (a[j] == 'G')
						time = time + 40;

					else if (a[j] == 'H')
						time = time + 90;

					else if (a[j] == 'I')
						time = time + 90;

					else if (a[j] == 'J')
						time = time + 90;

					else if (a[j] == 'K')
						time = time + 90;

					else if (a[j] == 'L')
						time = time + 90;

					else if (a[j] == 'M')
						time = time + 90;

					else if (a[j] == 'N')
						time = time + 90;
					else if (a[j] == 'O')
						time = time + 90;
					else if (a[j] == 'P')
						time = time + 90;
					else if (a[j] == 'Q')
						time = time + 90;
					else if (a[j] == 'R')
						time = time + 90;
					else if (a[j] == 'S')
						time = time + 90;
				} if (a[x] == 'n') {
					if (a[j] == 'a')
						time = time + 40;

					else if (a[j] == 'b')
						time = time + 90;

					else if (a[j] == 'c')
						time = time + 90;

					else if (a[j] == 'd')
						time = time + 90;

					else if (a[j] == 'e')
						time = time + 90;

					else if (a[j] == 'f')
						time = time + 90;

					else if (a[j] == 'g')
						time = time + 55;

					else if (a[j] == 'h')
						time = time + 90;

					else if (a[j] == 'i')
						time = time + 90;

					else if (a[j] == 'j')
						time = time + 90;

					else if (a[j] == 'k')
						time = time + 90;

					else if (a[j] == 'l')
						time = time + 25;

					else if (a[j] == 'm')
						time = time + 90;

					else if (a[j] == 'o')
						time = time + 25;

					else if (a[j] == 'p')
						time = time + 25;

					else if (a[j] == 'q')
						time = time + 90;

					else if (a[j] == 'r')
						time = time + 90;

					else if (a[j] == 's')
						time = time + 90;

					else if (a[j] == 't')
						time = time + 90;

					else if (a[j] == 'u')
						time = time + 90;

					else if (a[j] == 'v')
						time = time + 90;

					else if (a[j] == 'w')
						time = time + 55;

					else if (a[j] == 'x')
						time = time + 75;

					else if (a[j] == 'y')
						time = time + 80;

					else if (a[j] == 'z')
						time = time + 90;

					else if (a[j] == 'A')
						time = time + 90;

					else if (a[j] == 'B')
						time = time + 90;

					else if (a[j] == 'C')
						time = time + 90;

					else if (a[j] == 'D')
						time = time + 75;

					else if (a[j] == 'E')
						time = time + 90;

					else if (a[j] == 'F')
						time = time + 90;

					else if (a[j] == 'G')
						time = time + 40;

					else if (a[j] == 'H')
						time = time + 90;

					else if (a[j] == 'I')
						time = time + 90;

					else if (a[j] == 'J')
						time = time + 90;

					else if (a[j] == 'K')
						time = time + 90;

					else if (a[j] == 'L')
						time = time + 90;

					else if (a[j] == 'M')
						time = time + 90;

					else if (a[j] == 'N')
						time = time + 90;
					else if (a[j] == 'O')
						time = time + 90;
					else if (a[j] == 'P')
						time = time + 90;
					else if (a[j] == 'Q')
						time = time + 90;
					else if (a[j] == 'R')
						time = time + 90;
					else if (a[j] == 'S')
						time = time + 90;
					else if (a[j] == 'T')
						time = time + 90;
				}if (a[x] == 'o') {
					if (a[j] == 'a')
						time = time + 40;

					else if (a[j] == 'b')
						time = time + 90;

					else if (a[j] == 'c')
						time = time + 90;

					else if (a[j] == 'd')
						time = time + 90;

					else if (a[j] == 'e')
						time = time + 90;

					else if (a[j] == 'f')
						time = time + 90;

					else if (a[j] == 'g')
						time = time + 55;

					else if (a[j] == 'h')
						time = time + 90;

					else if (a[j] == 'i')
						time = time + 90;

					else if (a[j] == 'j')
						time = time + 90;

					else if (a[j] == 'k')
						time = time + 90;

					else if (a[j] == 'l')
						time = time + 25;

					else if (a[j] == 'm')
						time = time + 90;

					else if (a[j] == 'n')
						time = time + 90;

					else if (a[j] == 'p')
						time = time + 25;

					else if (a[j] == 'q')
						time = time + 90;

					else if (a[j] == 'r')
						time = time + 90;

					else if (a[j] == 's')
						time = time + 90;

					else if (a[j] == 't')
						time = time + 90;

					else if (a[j] == 'u')
						time = time + 90;

					else if (a[j] == 'v')
						time = time + 90;

					else if (a[j] == 'w')
						time = time + 55;

					else if (a[j] == 'x')
						time = time + 75;

					else if (a[j] == 'y')
						time = time + 80;

					else if (a[j] == 'z')
						time = time + 90;

					else if (a[j] == 'A')
						time = time + 90;

					else if (a[j] == 'B')
						time = time + 90;

					else if (a[j] == 'C')
						time = time + 90;

					else if (a[j] == 'D')
						time = time + 75;

					else if (a[j] == 'E')
						time = time + 90;

					else if (a[j] == 'F')
						time = time + 90;

					else if (a[j] == 'G')
						time = time + 40;

					else if (a[j] == 'H')
						time = time + 90;

					else if (a[j] == 'I')
						time = time + 70;

					else if (a[j] == 'J')
						time = time + 90;

					else if (a[j] == 'K')
						time = time + 90;

					else if (a[j] == 'L')
						time = time + 90;

					else if (a[j] == 'M')
						time = time + 90;

					else if (a[j] == 'N')
						time = time + 90;
					else if (a[j] == 'O')
						time = time + 90;
					else if (a[j] == 'P')
						time = time + 90;
					else if (a[j] == 'Q')
						time = time + 90;
					else if (a[j] == 'R')
						time = time + 90;
					else if (a[j] == 'S')
						time = time + 90;
					else if (a[j] == 'T')
						time = time + 90;
				} if (a[x] == 'p') {
					if (a[j] == 'a')
						time = time + 40;

					else if (a[j] == 'b')
						time = time + 90;

					else if (a[j] == 'c')
						time = time + 90;

					else if (a[j] == 'd')
						time = time + 90;

					else if (a[j] == 'e')
						time = time + 90;

					else if (a[j] == 'f')
						time = time + 90;

					else if (a[j] == 'g')
						time = time + 55;

					else if (a[j] == 'h')
						time = time + 90;

					else if (a[j] == 'i')
						time = time + 90;

					else if (a[j] == 'j')
						time = time + 90;

					else if (a[j] == 'k')
						time = time + 90;

					else if (a[j] == 'l')
						time = time + 25;

					else if (a[j] == 'm')
						time = time + 90;

					else if (a[j] == 'n')
						time = time + 90;

					else if (a[j] == 'o')
						time = time + 20;

					else if (a[j] == 'q')
						time = time + 90;

					else if (a[j] == 'r')
						time = time + 90;

					else if (a[j] == 's')
						time = time + 90;

					else if (a[j] == 't')
						time = time + 90;

					else if (a[j] == 'u')
						time = time + 90;

					else if (a[j] == 'v')
						time = time + 90;

					else if (a[j] == 'w')
						time = time + 45;

					else if (a[j] == 'x')
						time = time + 75;

					else if (a[j] == 'y')
						time = time + 80;

					else if (a[j] == 'z')
						time = time + 90;

					else if (a[j] == 'A')
						time = time + 90;

					else if (a[j] == 'B')
						time = time + 90;

					else if (a[j] == 'C')
						time = time + 90;

					else if (a[j] == 'D')
						time = time + 75;

					else if (a[j] == 'E')
						time = time + 90;

					else if (a[j] == 'F')
						time = time + 90;

					else if (a[j] == 'G')
						time = time + 40;

					else if (a[j] == 'H')
						time = time + 90;

					else if (a[j] == 'I')
						time = time + 90;

					else if (a[j] == 'J')
						time = time + 90;

					else if (a[j] == 'K')
						time = time + 90;

					else if (a[j] == 'L')
						time = time + 90;

					else if (a[j] == 'M')
						time = time + 90;

					else if (a[j] == 'N')
						time = time + 90;
					else if (a[j] == 'O')
						time = time + 90;
					else if (a[j] == 'P')
						time = time + 90;
					else if (a[j] == 'Q')
						time = time + 90;
					else if (a[j] == 'R')
						time = time + 90;
					else if (a[j] == 'S')
						time = time + 90;
					else if (a[j] == 'T')
						time = time + 90;
				} if (a[x] == 'q') {
					if (a[j] == 'a')
						time = time + 40;

					else if (a[j] == 'b')
						time = time + 90;

					else if (a[j] == 'c')
						time = time + 90;

					else if (a[j] == 'd')
						time = time + 90;

					else if (a[j] == 'e')
						time = time + 90;

					else if (a[j] == 'f')
						time = time + 90;

					else if (a[j] == 'g')
						time = time + 45;

					else if (a[j] == 'h')
						time = time + 90;

					else if (a[j] == 'i')
						time = time + 90;

					else if (a[j] == 'j')
						time = time + 90;

					else if (a[j] == 'k')
						time = time + 40;

					else if (a[j] == 'l')
						time = time + 55;

					else if (a[j] == 'm')
						time = time + 40;

					else if (a[j] == 'n')
						time = time + 35;

					else if (a[j] == 'o')
						time = time + 35;

					else if (a[j] == 'p')
						time = time + 55;

					else if (a[j] == 'r')
						time = time + 15;

					else if (a[j] == 's')
						time = time + 25;

					else if (a[j] == 't')
						time = time + 90;

					else if (a[j] == 'u')
						time = time + 90;

					else if (a[j] == 'v')
						time = time + 30;

					else if (a[j] == 'w')
						time = time + 45;

					else if (a[j] == 'x')
						time = time + 45;

					else if (a[j] == 'y')
						time = time + 70;

					else if (a[j] == 'z')
						time = time + 90;

					else if (a[j] == 'A')
						time = time + 40;

					else if (a[j] == 'B')
						time = time + 25;

					else if (a[j] == 'C')
						time = time + 90;

					else if (a[j] == 'D')
						time = time + 45;

					else if (a[j] == 'E')
						time = time + 70;

					else if (a[j] == 'F')
						time = time + 90;

					else if (a[j] == 'G')
						time = time + 40;

					else if (a[j] == 'H')
						time = time + 90;

					else if (a[j] == 'I')
						time = time + 55;

					else if (a[j] == 'J')
						time = time + 90;

					else if (a[j] == 'K')
						time = time + 55;

					else if (a[j] == 'L')
						time = time + 55;

					else if (a[j] == 'M')
						time = time + 55;

					else if (a[j] == 'N')
						time = time + 55;
					else if (a[j] == 'P')
						time = time + 90;
					else if (a[j] == 'Q')
						time = time + 90;
					else if (a[j] == 'R')
						time = time + 90;
					else if (a[j] == 'S')
						time = time + 25;
					else if (a[j] == 'T')
						time = time + 40;
				} if (a[x] == 'r') {
					if (a[j] == 'a')
						time = time + 40;

					else if (a[j] == 'b')
						time = time + 90;

					else if (a[j] == 'c')
						time = time + 90;

					else if (a[j] == 'd')
						time = time + 90;

					else if (a[j] == 'e')
						time = time + 90;

					else if (a[j] == 'f')
						time = time + 90;

					else if (a[j] == 'g')
						time = time + 45;

					else if (a[j] == 'h')
						time = time + 90;

					else if (a[j] == 'i')
						time = time + 90;

					else if (a[j] == 'j')
						time = time + 90;

					else if (a[j] == 'k')
						time = time + 40;

					else if (a[j] == 'l')
						time = time + 55;

					else if (a[j] == 'm')
						time = time + 55;

					else if (a[j] == 'n')
						time = time + 55;

					else if (a[j] == 'o')
						time = time + 55;

					else if (a[j] == 'p')
						time = time + 55;

					else if (a[j] == 'q')
						time = time + 30;

					else if (a[j] == 's')
						time = time + 25;

					else if (a[j] == 't')
						time = time + 90;

					else if (a[j] == 'u')
						time = time + 90;

					else if (a[j] == 'v')
						time = time + 50;

					else if (a[j] == 'w')
						time = time + 45;

					else if (a[j] == 'x')
						time = time + 45;

					else if (a[j] == 'y')
						time = time + 70;

					else if (a[j] == 'z')
						time = time + 90;

					else if (a[j] == 'A')
						time = time + 55;

					else if (a[j] == 'B')
						time = time + 35;

					else if (a[j] == 'C')
						time = time + 90;

					else if (a[j] == 'D')
						time = time + 45;

					else if (a[j] == 'E')
						time = time + 70;

					else if (a[j] == 'F')
						time = time + 90;

					else if (a[j] == 'G')
						time = time + 40;

					else if (a[j] == 'H')
						time = time + 90;

					else if (a[j] == 'I')
						time = time + 55;

					else if (a[j] == 'J')
						time = time + 35;

					else if (a[j] == 'K')
						time = time + 90;

					else if (a[j] == 'L')
						time = time + 90;

					else if (a[j] == 'M')
						time = time + 55;

					else if (a[j] == 'N')
						time = time + 55;
					else if (a[j] == 'O')
						time = time + 30;
					else if (a[j] == 'P')
						time = time + 90;
					else if (a[j] == 'Q')
						time = time + 90;
					else if (a[j] == 'R')
						time = time + 90;
					else if (a[j] == 'S')
						time = time + 35;
					else if (a[j] == 'T')
						time = time + 55;
				} if (a[x] == 's') {
					if (a[j] == 'a')
						time = time + 40;

					else if (a[j] == 'b')
						time = time + 90;

					else if (a[j] == 'c')
						time = time + 90;

					else if (a[j] == 'd')
						time = time + 90;

					else if (a[j] == 'e')
						time = time + 90;

					else if (a[j] == 'f')
						time = time + 90;

					else if (a[j] == 'g')
						time = time + 45;

					else if (a[j] == 'h')
						time = time + 90;

					else if (a[j] == 'i')
						time = time + 90;

					else if (a[j] == 'j')
						time = time + 90;

					else if (a[j] == 'k')
						time = time + 40;

					else if (a[j] == 'l')
						time = time + 55;

					else if (a[j] == 'm')
						time = time + 40;

					else if (a[j] == 'n')
						time = time + 40;

					else if (a[j] == 'o')
						time = time + 40;

					else if (a[j] == 'p')
						time = time + 55;

					else if (a[j] == 'q')
						time = time + 40;

					else if (a[j] == 'r')
						time = time + 35;

					else if (a[j] == 't')
						time = time + 90;

					else if (a[j] == 'u')
						time = time + 90;

					else if (a[j] == 'v')
						time = time + 35;

					else if (a[j] == 'w')
						time = time + 45;

					else if (a[j] == 'x')
						time = time + 45;

					else if (a[j] == 'y')
						time = time + 70;

					else if (a[j] == 'z')
						time = time + 90;

					else if (a[j] == 'A')
						time = time + 55;

					else if (a[j] == 'B')
						time = time + 30;

					else if (a[j] == 'C')
						time = time + 90;

					else if (a[j] == 'D')
						time = time + 45;

					else if (a[j] == 'E')
						time = time + 70;

					else if (a[j] == 'F')
						time = time + 90;

					else if (a[j] == 'G')
						time = time + 40;

					else if (a[j] == 'H')
						time = time + 90;

					else if (a[j] == 'I')
						time = time + 55;

					else if (a[j] == 'J')
						time = time + 55;

					else if (a[j] == 'K')
						time = time + 90;

					else if (a[j] == 'L')
						time = time + 55;

					else if (a[j] == 'M')
						time = time + 55;

					else if (a[j] == 'N')
						time = time + 55;
					else if (a[j] == 'O')
						time = time + 40;
					else if (a[j] == 'P')
						time = time + 90;
					else if (a[j] == 'Q')
						time = time + 90;
					else if (a[j] == 'R')
						time = time + 90;
					else if (a[j] == 'S')
						time = time + 30;
					else if (a[j] == 'T')
						time = time + 40;
				} if (a[x] == 't') {
					if (a[j] == 'a')
						time = time + 40;

					else if (a[j] == 'b')
						time = time + 40;

					else if (a[j] == 'c')
						time = time + 70;

					else if (a[j] == 'd')
						time = time + 70;

					else if (a[j] == 'e')
						time = time + 40;

					else if (a[j] == 'f')
						time = time + 40;

					else if (a[j] == 'g')
						time = time + 40;

					else if (a[j] == 'h')
						time = time + 90;

					else if (a[j] == 'i')
						time = time + 30;

					else if (a[j] == 'j')
						time = time + 30;

					else if (a[j] == 'k')
						time = time + 30;

					else if (a[j] == 'l')
						time = time + 35;

					else if (a[j] == 'm')
						time = time + 35;

					else if (a[j] == 'n')
						time = time + 35;

					else if (a[j] == 'o')
						time = time + 35;

					else if (a[j] == 'p')
						time = time + 35;

					else if (a[j] == 'q')
						time = time + 40;

					else if (a[j] == 'r')
						time = time + 40;

					else if (a[j] == 's')
						time = time + 40;

					else if (a[j] == 'u')
						time = time + 40;

					else if (a[j] == 'v')
						time = time + 35;

					else if (a[j] == 'w')
						time = time + 40;

					else if (a[j] == 'x')
						time = time + 35;

					else if (a[j] == 'y')
						time = time + 70;

					else if (a[j] == 'z')
						time = time + 45;

					else if (a[j] == 'A')
						time = time + 55;

					else if (a[j] == 'B')
						time = time + 40;

					else if (a[j] == 'C')
						time = time + 40;

					else if (a[j] == 'D')
						time = time + 35;

					else if (a[j] == 'E')
						time = time + 70;

					else if (a[j] == 'F')
						time = time + 40;

					else if (a[j] == 'G')
						time = time + 40;

					else if (a[j] == 'H')
						time = time + 45;

					else if (a[j] == 'I')
						time = time + 55;

					else if (a[j] == 'J')
						time = time + 55;

					else if (a[j] == 'K')
						time = time + 55;

					else if (a[j] == 'L')
						time = time + 55;

					else if (a[j] == 'M')
						time = time + 55;

					else if (a[j] == 'N')
						time = time + 55;
					else if (a[j] == 'O')
						time = time + 40;
					else if (a[j] == 'P')
						time = time + 70;
					else if (a[j] == 'Q')
						time = time + 40;
					else if (a[j] == 'R')
						time = time + 30;
					else if (a[j] == 'S')
						time = time + 40;
					else if (a[j] == 'T')
						time = time + 35;
				} if (a[x] == 'u') {
					if (a[j] == 'a')
						time = time + 65;

					else if (a[j] == 'b')
						time = time + 65;

					else if (a[j] == 'c')
						time = time + 80;

					else if (a[j] == 'd')
						time = time + 55;

					else if (a[j] == 'e')
						time = time + 65;

					else if (a[j] == 'f')
						time = time + 55;

					else if (a[j] == 'g')
						time = time + 70;

					else if (a[j] == 'h')
						time = time + 55;

					else if (a[j] == 'i')
						time = time + 55;

					else if (a[j] == 'j')
						time = time + 55;

					else if (a[j] == 'k')
						time = time + 45;

					else if (a[j] == 'l')
						time = time + 60;

					else if (a[j] == 'm')
						time = time + 50;

					else if (a[j] == 'n')
						time = time + 60;

					else if (a[j] == 'o')
						time = time + 60;

					else if (a[j] == 'p')
						time = time + 60;

					else if (a[j] == 'q')
						time = time + 60;

					else if (a[j] == 'r')
						time = time + 65;

					else if (a[j] == 's')
						time = time + 65;

					else if (a[j] == 't')
						time = time + 55;

					else if (a[j] == 'v')
						time = time + 70;

					else if (a[j] == 'w')
						time = time + 70;

					else if (a[j] == 'x')
						time = time + 70;

					else if (a[j] == 'y')
						time = time + 80;

					else if (a[j] == 'z')
						time = time + 70;

					else if (a[j] == 'A')
						time = time + 70;

					else if (a[j] == 'B')
						time = time + 55;

					else if (a[j] == 'C')
						time = time + 45;

					else if (a[j] == 'D')
						time = time + 70;

					else if (a[j] == 'E')
						time = time + 80;

					else if (a[j] == 'F')
						time = time + 65;

					else if (a[j] == 'G')
						time = time + 65;

					else if (a[j] == 'H')
						time = time + 70;

					else if (a[j] == 'I')
						time = time + 70;

					else if (a[j] == 'J')
						time = time + 55;

					else if (a[j] == 'K')
						time = time + 55;

					else if (a[j] == 'L')
						time = time + 55;

					else if (a[j] == 'M')
						time = time + 55;

					else if (a[j] == 'N')
						time = time + 55;
					else if (a[j] == 'O')
						time = time + 60;
					else if (a[j] == 'P')
						time = time + 80;
					else if (a[j] == 'Q')
						time = time + 65;
					else if (a[j] == 'R')
						time = time + 55;
					else if (a[j] == 'S')
						time = time + 55;
					else if (a[j] == 'T')
						time = time + 50;
				}if (a[x] == 'v') {
					if (a[j] == 'a')
						time = time + 35;

					else if (a[j] == 'b')
						time = time + 90;

					else if (a[j] == 'c')
						time = time + 90;

					else if (a[j] == 'd')
						time = time + 90;

					else if (a[j] == 'e')
						time = time + 90;

					else if (a[j] == 'f')
						time = time + 90;

					else if (a[j] == 'g')
						time = time + 50;

					else if (a[j] == 'h')
						time = time + 90;

					else if (a[j] == 'i')
						time = time + 90;

					else if (a[j] == 'j')
						time = time + 90;

					else if (a[j] == 'k')
						time = time + 45;

					else if (a[j] == 'l')
						time = time + 70;

					else if (a[j] == 'm')
						time = time + 55;

					else if (a[j] == 'n')
						time = time + 90;

					else if (a[j] == 'o')
						time = time + 60;

					else if (a[j] == 'p')
						time = time + 60;

					else if (a[j] == 'q')
						time = time + 90;

					else if (a[j] == 'r')
						time = time + 90;

					else if (a[j] == 's')
						time = time + 90;

					else if (a[j] == 't')
						time = time + 90;

					else if (a[j] == 'u')
						time = time + 90;

					else if (a[j] == 'w')
						time = time + 50;

					else if (a[j] == 'x')
						time = time + 45;

					else if (a[j] == 'y')
						time = time + 60;

					else if (a[j] == 'z')
						time = time + 90;

					else if (a[j] == 'A')
						time = time + 50;

					else if (a[j] == 'B')
						time = time + 90;

					else if (a[j] == 'C')
						time = time + 90;

					else if (a[j] == 'D')
						time = time + 60;

					else if (a[j] == 'E')
						time = time + 100;

					else if (a[j] == 'F')
						time = time + 90;

					else if (a[j] == 'G')
						time = time + 55;

					else if (a[j] == 'H')
						time = time + 90;

					else if (a[j] == 'I')
						time = time + 70;

					else if (a[j] == 'J')
						time = time + 90;

					else if (a[j] == 'K')
						time = time + 90;

					else if (a[j] == 'L')
						time = time + 55;

					else if (a[j] == 'M')
						time = time + 90;

					else if (a[j] == 'N')
						time = time + 55;
					else if (a[j] == 'O')
						time = time + 90;
					else if (a[j] == 'P')
						time = time + 90;
					else if (a[j] == 'Q')
						time = time + 90;
					else if (a[j] == 'R')
						time = time + 90;
					else if (a[j] == 'S')
						time = time + 90;
					else if (a[j] == 'T')
						time = time + 55;
				} if (a[x] == 'w') {
					if (a[j] == 'a')
						time = time + 90;

					else if (a[j] == 'b')
						time = time + 90;

					else if (a[j] == 'c')
						time = time + 90;

					else if (a[j] == 'd')
						time = time + 90;

					else if (a[j] == 'e')
						time = time + 90;

					else if (a[j] == 'f')
						time = time + 90;

					else if (a[j] == 'g')
						time = time + 90;

					else if (a[j] == 'h')
						time = time + 90;

					else if (a[j] == 'i')
						time = time + 90;

					else if (a[j] == 'j')
						time = time + 90;

					else if (a[j] == 'k')
						time = time + 90;

					else if (a[j] == 'l')
						time = time + 90;

					else if (a[j] == 'm')
						time = time + 90;

					else if (a[j] == 'n')
						time = time + 90;

					else if (a[j] == 'o')
						time = time + 90;

					else if (a[j] == 'p')
						time = time + 90;

					else if (a[j] == 'q')
						time = time + 90;

					else if (a[j] == 'r')
						time = time + 90;

					else if (a[j] == 's')
						time = time + 90;

					else if (a[j] == 't')
						time = time + 90;

					else if (a[j] == 'u')
						time = time + 90;

					else if (a[j] == 'v')
						time = time + 90;

					else if (a[j] == 'x')
						time = time + 90;

					else if (a[j] == 'y')
						time = time + 90;

					else if (a[j] == 'z')
						time = time + 90;

					else if (a[j] == 'A')
						time = time + 90;

					else if (a[j] == 'B')
						time = time + 90;

					else if (a[j] == 'C')
						time = time + 90;

					else if (a[j] == 'D')
						time = time + 90;

					else if (a[j] == 'E')
						time = time + 90;

					else if (a[j] == 'F')
						time = time + 90;

					else if (a[j] == 'G')
						time = time + 90;

					else if (a[j] == 'H')
						time = time + 90;

					else if (a[j] == 'I')
						time = time + 90;

					else if (a[j] == 'J')
						time = time + 90;

					else if (a[j] == 'K')
						time = time + 90;

					else if (a[j] == 'L')
						time = time + 90;

					else if (a[j] == 'M')
						time = time + 90;

					else if (a[j] == 'N')
						time = time + 90;
					else if (a[j] == 'O')
						time = time + 90;
					else if (a[j] == 'P')
						time = time + 90;
					else if (a[j] == 'Q')
						time = time + 90;
					else if (a[j] == 'R')
						time = time + 90;
					else if (a[j] == 'S')
						time = time + 90;
					else if (a[j] == 'T')
						time = time + 90;
				} if (a[x] == 'x') {
					if (a[j] == 'a')
						time = time + 55;

					else if (a[j] == 'b')
						time = time + 90;

					else if (a[j] == 'c')
						time = time + 90;

					else if (a[j] == 'd')
						time = time + 90;

					else if (a[j] == 'e')
						time = time + 90;

					else if (a[j] == 'f')
						time = time + 90;

					else if (a[j] == 'g')
						time = time + 50;

					else if (a[j] == 'h')
						time = time + 90;

					else if (a[j] == 'i')
						time = time + 90;

					else if (a[j] == 'j')
						time = time + 90;

					else if (a[j] == 'k')
						time = time + 90;

					else if (a[j] == 'l')
						time = time + 70;

					else if (a[j] == 'm')
						time = time + 90;

					else if (a[j] == 'n')
						time = time + 90;

					else if (a[j] == 'o')
						time = time + 70;

					else if (a[j] == 'p')
						time = time + 70;

					else if (a[j] == 'q')
						time = time + 90;

					else if (a[j] == 'r')
						time = time + 90;

					else if (a[j] == 's')
						time = time + 90;

					else if (a[j] == 't')
						time = time + 90;

					else if (a[j] == 'u')
						time = time + 90;

					else if (a[j] == 'v')
						time = time + 90;

					else if (a[j] == 'w')
						time = time + 50;

					else if (a[j] == 'y')
						time = time + 60;

					else if (a[j] == 'z')
						time = time + 90;

					else if (a[j] == 'A')
						time = time + 90;

					else if (a[j] == 'B')
						time = time + 90;

					else if (a[j] == 'C')
						time = time + 90;

					else if (a[j] == 'D')
						time = time + 30;

					else if (a[j] == 'E')
						time = time + 90;

					else if (a[j] == 'F')
						time = time + 90;

					else if (a[j] == 'G')
						time = time + 55;

					else if (a[j] == 'H')
						time = time + 90;

					else if (a[j] == 'I')
						time = time + 70;

					else if (a[j] == 'J')
						time = time + 90;

					else if (a[j] == 'K')
						time = time + 90;

					else if (a[j] == 'L')
						time = time + 55;

					else if (a[j] == 'M')
						time = time + 90;

					else if (a[j] == 'N')
						time = time + 90;
					else if (a[j] == 'O')
						time = time + 90;
					else if (a[j] == 'P')
						time = time + 90;
					else if (a[j] == 'Q')
						time = time + 90;
					else if (a[j] == 'R')
						time = time + 90;
					else if (a[j] == 'S')
						time = time + 90;
					else if (a[j] == 'T')
						time = time + 90;
				} if (a[x] == 'y') {
					if (a[j] == 'a')
						time = time + 45;

					else if (a[j] == 'b')
						time = time + 90;

					else if (a[j] == 'c')
						time = time + 90;

					else if (a[j] == 'd')
						time = time + 90;

					else if (a[j] == 'e')
						time = time + 90;

					else if (a[j] == 'f')
						time = time + 90;

					else if (a[j] == 'g')
						time = time + 50;

					else if (a[j] == 'h')
						time = time + 90;

					else if (a[j] == 'i')
						time = time + 90;

					else if (a[j] == 'j')
						time = time + 90;

					else if (a[j] == 'k')
						time = time + 90;

					else if (a[j] == 'l')
						time = time + 80;

					else if (a[j] == 'm')
						time = time + 90;

					else if (a[j] == 'n')
						time = time + 90;

					else if (a[j] == 'o')
						time = time + 80;

					else if (a[j] == 'p')
						time = time + 80;

					else if (a[j] == 'q')
						time = time + 90;

					else if (a[j] == 'r')
						time = time + 90;

					else if (a[j] == 's')
						time = time + 90;

					else if (a[j] == 't')
						time = time + 90;

					else if (a[j] == 'u')
						time = time + 90;

					else if (a[j] == 'v')
						time = time + 90;

					else if (a[j] == 'w')
						time = time + 50;

					else if (a[j] == 'x')
						time = time + 60;

					else if (a[j] == 'z')
						time = time + 90;

					else if (a[j] == 'A')
						time = time + 90;

					else if (a[j] == 'B')
						time = time + 90;

					else if (a[j] == 'C')
						time = time + 90;

					else if (a[j] == 'D')
						time = time + 70;

					else if (a[j] == 'E')
						time = time + 90;

					else if (a[j] == 'F')
						time = time + 90;

					else if (a[j] == 'G')
						time = time + 65;

					else if (a[j] == 'H')
						time = time + 90;

					else if (a[j] == 'I')
						time = time + 70;

					else if (a[j] == 'J')
						time = time + 90;

					else if (a[j] == 'K')
						time = time + 90;

					else if (a[j] == 'L')
						time = time + 55;

					else if (a[j] == 'M')
						time = time + 90;

					else if (a[j] == 'N')
						time = time + 90;
					else if (a[j] == 'O')
						time = time + 90;
					else if (a[j] == 'P')
						time = time + 90;
					else if (a[j] == 'Q')
						time = time + 90;
					else if (a[j] == 'R')
						time = time + 90;
					else if (a[j] == 'S')
						time = time + 90;
					else if (a[j] == 'T')
						time = time + 90;
				} if (a[x] == 'z') {
					if (a[j] == 'a')
						time = time + 65;

					else if (a[j] == 'b')
						time = time + 65;

					else if (a[j] == 'c')
						time = time + 80;

					else if (a[j] == 'd')
						time = time + 80;

					else if (a[j] == 'e')
						time = time + 65;

					else if (a[j] == 'f')
						time = time + 65;

					else if (a[j] == 'g')
						time = time + 70;

					else if (a[j] == 'h')
						time = time + 50;

					else if (a[j] == 'i')
						time = time + 65;

					else if (a[j] == 'j')
						time = time + 65;

					else if (a[j] == 'k')
						time = time + 65;

					else if (a[j] == 'l')
						time = time + 70;

					else if (a[j] == 'm')
						time = time + 70;

					else if (a[j] == 'n')
						time = time + 60;

					else if (a[j] == 'o')
						time = time + 70;

					else if (a[j] == 'p')
						time = time + 70;

					else if (a[j] == 'q')
						time = time + 50;

					else if (a[j] == 'r')
						time = time + 55;

					else if (a[j] == 's')
						time = time + 65;

					else if (a[j] == 't')
						time = time + 65;

					else if (a[j] == 'u')
						time = time + 70;

					else if (a[j] == 'v')
						time = time + 70;

					else if (a[j] == 'w')
						time = time + 70;

					else if (a[j] == 'x')
						time = time + 70;

					else if (a[j] == 'y')
						time = time + 80;

					else if (a[j] == 'A')
						time = time + 70;

					else if (a[j] == 'B')
						time = time + 65;

					else if (a[j] == 'C')
						time = time + 70;

					else if (a[j] == 'D')
						time = time + 70;

					else if (a[j] == 'E')
						time = time + 80;

					else if (a[j] == 'F')
						time = time + 65;

					else if (a[j] == 'G')
						time = time + 65;

					else if (a[j] == 'H')
						time = time + 70;

					else if (a[j] == 'I')
						time = time + 70;

					else if (a[j] == 'J')
						time = time + 55;

					else if (a[j] == 'K')
						time = time + 55;

					else if (a[j] == 'L')
						time = time + 55;

					else if (a[j] == 'M')
						time = time + 55;

					else if (a[j] == 'N')
						time = time + 55;
					else if (a[j] == 'O')
						time = time + 50;
					else if (a[j] == 'P')
						time = time + 80;
					else if (a[j] == 'Q')
						time = time + 65;
					else if (a[j] == 'R')
						time = time + 65;
					else if (a[j] == 'S')
						time = time + 65;
					else if (a[j] == 'T')
						time = time + 70;
				} if (a[x] == 'A') {
					if (a[j] == 'a')
						time = time + 40;

					else if (a[j] == 'b')
						time = time + 90;

					else if (a[j] == 'c')
						time = time + 90;

					else if (a[j] == 'd')
						time = time + 90;

					else if (a[j] == 'e')
						time = time + 90;

					else if (a[j] == 'f')
						time = time + 90;

					else if (a[j] == 'g')
						time = time + 45;

					else if (a[j] == 'h')
						time = time + 90;

					else if (a[j] == 'i')
						time = time + 90;

					else if (a[j] == 'j')
						time = time + 90;

					else if (a[j] == 'k')
						time = time + 30;

					else if (a[j] == 'l')
						time = time + 75;

					else if (a[j] == 'm')
						time = time + 90;

					else if (a[j] == 'n')
						time = time + 90;

					else if (a[j] == 'o')
						time = time + 75;

					else if (a[j] == 'p')
						time = time + 75;

					else if (a[j] == 'q')
						time = time + 90;

					else if (a[j] == 'r')
						time = time + 90;

					else if (a[j] == 's')
						time = time + 90;

					else if (a[j] == 't')
						time = time + 90;

					else if (a[j] == 'u')
						time = time + 90;

					else if (a[j] == 'v')
						time = time + 90;

					else if (a[j] == 'w')
						time = time + 60;

					else if (a[j] == 'x')
						time = time + 90;

					else if (a[j] == 'y')
						time = time + 100;

					else if (a[j] == 'z')
						time = time + 90;

					else if (a[j] == 'B')
						time = time + 90;

					else if (a[j] == 'C')
						time = time + 90;

					else if (a[j] == 'D')
						time = time + 90;

					else if (a[j] == 'E')
						time = time + 85;

					else if (a[j] == 'F')
						time = time + 90;

					else if (a[j] == 'G')
						time = time + 40;

					else if (a[j] == 'H')
						time = time + 90;

					else if (a[j] == 'I')
						time = time + 90;

					else if (a[j] == 'J')
						time = time + 90;

					else if (a[j] == 'K')
						time = time + 90;

					else if (a[j] == 'L')
						time = time + 90;

					else if (a[j] == 'M')
						time = time + 90;

					else if (a[j] == 'N')
						time = time + 55;
					else if (a[j] == 'O')
						time = time + 90;
					else if (a[j] == 'P')
						time = time + 90;
					else if (a[j] == 'Q')
						time = time + 90;
					else if (a[j] == 'R')
						time = time + 90;
					else if (a[j] == 'S')
						time = time + 90;
					else if (a[j] == 'T')
						time = time + 90;
				} if (a[x] == 'B') {
					if (a[j] == 'a')
						time = time + 40;

					else if (a[j] == 'b')
						time = time + 90;

					else if (a[j] == 'c')
						time = time + 90;

					else if (a[j] == 'd')
						time = time + 90;

					else if (a[j] == 'e')
						time = time + 90;

					else if (a[j] == 'f')
						time = time + 90;

					else if (a[j] == 'g')
						time = time + 45;

					else if (a[j] == 'h')
						time = time + 90;

					else if (a[j] == 'i')
						time = time + 90;

					else if (a[j] == 'j')
						time = time + 90;

					else if (a[j] == 'k')
						time = time + 40;

					else if (a[j] == 'l')
						time = time + 55;

					else if (a[j] == 'm')
						time = time + 55;

					else if (a[j] == 'n')
						time = time + 55;

					else if (a[j] == 'o')
						time = time + 55;

					else if (a[j] == 'p')
						time = time + 55;

					else if (a[j] == 'q')
						time = time + 35;

					else if (a[j] == 'r')
						time = time + 40;

					else if (a[j] == 's')
						time = time + 15;

					else if (a[j] == 't')
						time = time + 90;

					else if (a[j] == 'u')
						time = time + 90;

					else if (a[j] == 'v')
						time = time + 30;

					else if (a[j] == 'w')
						time = time + 45;

					else if (a[j] == 'x')
						time = time + 45;

					else if (a[j] == 'y')
						time = time + 70;

					else if (a[j] == 'z')
						time = time + 90;

					else if (a[j] == 'A')
						time = time + 55;

					else if (a[j] == 'C')
						time = time + 90;

					else if (a[j] == 'D')
						time = time + 45;

					else if (a[j] == 'E')
						time = time + 70;

					else if (a[j] == 'F')
						time = time + 90;

					else if (a[j] == 'G')
						time = time + 40;

					else if (a[j] == 'H')
						time = time + 90;

					else if (a[j] == 'I')
						time = time + 55;

					else if (a[j] == 'J')
						time = time + 55;

					else if (a[j] == 'K')
						time = time + 90;

					else if (a[j] == 'L')
						time = time + 55;

					else if (a[j] == 'M')
						time = time + 55;

					else if (a[j] == 'N')
						time = time + 55;
					else if (a[j] == 'O')
						time = time + 35;
					else if (a[j] == 'P')
						time = time + 90;
					else if (a[j] == 'Q')
						time = time + 90;
					else if (a[j] == 'R')
						time = time + 90;
					else if (a[j] == 'T')
						time = time + 55;
				} if (a[x] == 'C') {
					if (a[j] == 'a')
						time = time + 65;

					else if (a[j] == 'b')
						time = time + 50;

					else if (a[j] == 'c')
						time = time + 80;

					else if (a[j] == 'd')
						time = time + 80;

					else if (a[j] == 'e')
						time = time + 65;

					else if (a[j] == 'f')
						time = time + 65;

					else if (a[j] == 'g')
						time = time + 30;

					else if (a[j] == 'h')
						time = time + 35;

					else if (a[j] == 'i')
						time = time + 55;

					else if (a[j] == 'j')
						time = time + 55;

					else if (a[j] == 'k')
						time = time + 40;

					else if (a[j] == 'l')
						time = time + 60;

					else if (a[j] == 'm')
						time = time + 40;

					else if (a[j] == 'n')
						time = time + 60;

					else if (a[j] == 'o')
						time = time + 60;

					else if (a[j] == 'p')
						time = time + 60;

					else if (a[j] == 'q')
						time = time + 50;

					else if (a[j] == 'r')
						time = time + 65;

					else if (a[j] == 's')
						time = time + 45;

					else if (a[j] == 't')
						time = time + 55;

					else if (a[j] == 'u')
						time = time + 30;

					else if (a[j] == 'v')
						time = time + 45;

					else if (a[j] == 'w')
						time = time + 70;

					else if (a[j] == 'x')
						time = time + 45;

					else if (a[j] == 'y')
						time = time + 80;

					else if (a[j] == 'z')
						time = time + 70;

					else if (a[j] == 'A')
						time = time + 70;

					else if (a[j] == 'B')
						time = time + 50;

					else if (a[j] == 'D')
						time = time + 70;

					else if (a[j] == 'E')
						time = time + 80;

					else if (a[j] == 'F')
						time = time + 65;

					else if (a[j] == 'G')
						time = time + 65;

					else if (a[j] == 'H')
						time = time + 70;

					else if (a[j] == 'I')
						time = time + 65;

					else if (a[j] == 'J')
						time = time + 55;

					else if (a[j] == 'K')
						time = time + 90;

					else if (a[j] == 'L')
						time = time + 55;

					else if (a[j] == 'M')
						time = time + 55;

					else if (a[j] == 'N')
						time = time + 55;
					else if (a[j] == 'O')
						time = time + 50;
					else if (a[j] == 'P')
						time = time + 90;
					else if (a[j] == 'Q')
						time = time + 65;
					else if (a[j] == 'R')
						time = time + 55;
					else if (a[j] == 'S')
						time = time + 50;
					else if (a[j] == 'T')
						time = time + 40;
				} if (a[x] == 'D') {
					if (a[j] == 'a')
						time = time + 55;

					else if (a[j] == 'b')
						time = time + 90;

					else if (a[j] == 'c')
						time = time + 90;

					else if (a[j] == 'd')
						time = time + 90;

					else if (a[j] == 'e')
						time = time + 90;

					else if (a[j] == 'f')
						time = time + 90;

					else if (a[j] == 'g')
						time = time + 50;

					else if (a[j] == 'h')
						time = time + 90;

					else if (a[j] == 'i')
						time = time + 90;

					else if (a[j] == 'j')
						time = time + 90;

					else if (a[j] == 'k')
						time = time + 90;

					else if (a[j] == 'l')
						time = time + 70;

					else if (a[j] == 'm')
						time = time + 90;

					else if (a[j] == 'n')
						time = time + 90;

					else if (a[j] == 'o')
						time = time + 70;

					else if (a[j] == 'p')
						time = time + 70;

					else if (a[j] == 'q')
						time = time + 90;

					else if (a[j] == 'r')
						time = time + 90;

					else if (a[j] == 's')
						time = time + 90;

					else if (a[j] == 't')
						time = time + 90;

					else if (a[j] == 'u')
						time = time + 90;

					else if (a[j] == 'v')
						time = time + 90;

					else if (a[j] == 'w')
						time = time + 50;

					else if (a[j] == 'x')
						time = time + 20;

					else if (a[j] == 'y')
						time = time + 60;

					else if (a[j] == 'z')
						time = time + 90;

					else if (a[j] == 'A')
						time = time + 90;

					else if (a[j] == 'B')
						time = time + 90;

					else if (a[j] == 'C')
						time = time + 90;

					else if (a[j] == 'E')
						time = time + 90;

					else if (a[j] == 'F')
						time = time + 90;

					else if (a[j] == 'G')
						time = time + 55;

					else if (a[j] == 'H')
						time = time + 90;

					else if (a[j] == 'I')
						time = time + 70;

					else if (a[j] == 'J')
						time = time + 90;

					else if (a[j] == 'K')
						time = time + 90;

					else if (a[j] == 'L')
						time = time + 55;

					else if (a[j] == 'M')
						time = time + 90;

					else if (a[j] == 'N')
						time = time + 90;
					else if (a[j] == 'O')
						time = time + 50;
					else if (a[j] == 'P')
						time = time + 90;
					else if (a[j] == 'Q')
						time = time + 90;
					else if (a[j] == 'R')
						time = time + 90;
					else if (a[j] == 'S')
						time = time + 90;
					else if (a[j] == 'T')
						time = time + 90;
				} if (a[x] == 'E') {
					if (a[j] == 'a')
						time = time + 55;

					else if (a[j] == 'b')
						time = time + 90;

					else if (a[j] == 'c')
						time = time + 90;

					else if (a[j] == 'd')
						time = time + 90;

					else if (a[j] == 'e')
						time = time + 90;

					else if (a[j] == 'f')
						time = time + 90;

					else if (a[j] == 'g')
						time = time + 80;

					else if (a[j] == 'h')
						time = time + 90;

					else if (a[j] == 'i')
						time = time + 90;

					else if (a[j] == 'j')
						time = time + 90;

					else if (a[j] == 'k')
						time = time + 40;

					else if (a[j] == 'l')
						time = time + 85;

					else if (a[j] == 'm')
						time = time + 90;

					else if (a[j] == 'n')
						time = time + 90;

					else if (a[j] == 'o')
						time = time + 85;

					else if (a[j] == 'p')
						time = time + 85;

					else if (a[j] == 'q')
						time = time + 90;

					else if (a[j] == 'r')
						time = time + 90;

					else if (a[j] == 's')
						time = time + 90;

					else if (a[j] == 't')
						time = time + 90;

					else if (a[j] == 'u')
						time = time + 90;

					else if (a[j] == 'v')
						time = time + 90;

					else if (a[j] == 'w')
						time = time + 55;

					else if (a[j] == 'x')
						time = time + 90;

					else if (a[j] == 'y')
						time = time + 100;

					else if (a[j] == 'z')
						time = time + 90;

					else if (a[j] == 'A')
						time = time + 85;

					else if (a[j] == 'B')
						time = time + 90;

					else if (a[j] == 'C')
						time = time + 90;

					else if (a[j] == 'D')
						time = time + 90;

					else if (a[j] == 'F')
						time = time + 90;

					else if (a[j] == 'G')
						time = time + 55;

					else if (a[j] == 'H')
						time = time + 90;

					else if (a[j] == 'I')
						time = time + 90;

					else if (a[j] == 'J')
						time = time + 90;

					else if (a[j] == 'K')
						time = time + 90;

					else if (a[j] == 'L')
						time = time + 55;

					else if (a[j] == 'M')
						time = time + 90;

					else if (a[j] == 'N')
						time = time + 55;
					else if (a[j] == 'O')
						time = time + 90;
					else if (a[j] == 'P')
						time = time + 90;
					else if (a[j] == 'Q')
						time = time + 90;
					else if (a[j] == 'R')
						time = time + 90;
					else if (a[j] == 'S')
						time = time + 90;
					else if (a[j] == 'T')
						time = time + 90;
				} if (a[x] == 'F') {
					if (a[j] == 'a')
						time = time + 40;

					else if (a[j] == 'b')
						time = time + 40;

					else if (a[j] == 'c')
						time = time + 70;

					else if (a[j] == 'd')
						time = time + 70;

					else if (a[j] == 'e')
						time = time + 40;

					else if (a[j] == 'f')
						time = time + 40;

					else if (a[j] == 'g')
						time = time + 45;

					else if (a[j] == 'h')
						time = time + 40;

					else if (a[j] == 'i')
						time = time + 40;

					else if (a[j] == 'j')
						time = time + 40;

					else if (a[j] == 'k')
						time = time + 40;

					else if (a[j] == 'l')
						time = time + 55;

					else if (a[j] == 'm')
						time = time + 55;

					else if (a[j] == 'n')
						time = time + 55;

					else if (a[j] == 'o')
						time = time + 55;

					else if (a[j] == 'p')
						time = time + 55;

					else if (a[j] == 'q')
						time = time + 40;

					else if (a[j] == 'r')
						time = time + 40;

					else if (a[j] == 's')
						time = time + 40;

					else if (a[j] == 't')
						time = time + 40;

					else if (a[j] == 'u')
						time = time + 45;

					else if (a[j] == 'v')
						time = time + 45;

					else if (a[j] == 'w')
						time = time + 45;

					else if (a[j] == 'x')
						time = time + 45;

					else if (a[j] == 'y')
						time = time + 70;

					else if (a[j] == 'z')
						time = time + 45;

					else if (a[j] == 'A')
						time = time + 55;

					else if (a[j] == 'B')
						time = time + 40;

					else if (a[j] == 'C')
						time = time + 45;

					else if (a[j] == 'D')
						time = time + 45;

					else if (a[j] == 'E')
						time = time + 70;

					else if (a[j] == 'G')
						time = time + 35;

					else if (a[j] == 'H')
						time = time + 45;

					else if (a[j] == 'I')
						time = time + 55;

					else if (a[j] == 'J')
						time = time + 55;

					else if (a[j] == 'K')
						time = time + 90;

					else if (a[j] == 'L')
						time = time + 55;

					else if (a[j] == 'M')
						time = time + 55;

					else if (a[j] == 'N')
						time = time + 55;
					else if (a[j] == 'O')
						time = time + 40;
					else if (a[j] == 'P')
						time = time + 70;
					else if (a[j] == 'Q')
						time = time + 40;
					else if (a[j] == 'R')
						time = time + 40;
					else if (a[j] == 'S')
						time = time + 40;
					else if (a[j] == 'T')
						time = time + 55;
				} if (a[x] == 'G') {
					if (a[j] == 'a')
						time = time + 40;

					else if (a[j] == 'b')
						time = time + 90;

					else if (a[j] == 'c')
						time = time + 90;

					else if (a[j] == 'd')
						time = time + 90;

					else if (a[j] == 'e')
						time = time + 90;

					else if (a[j] == 'f')
						time = time + 90;

					else if (a[j] == 'g')
						time = time + 45;

					else if (a[j] == 'h')
						time = time + 90;

					else if (a[j] == 'i')
						time = time + 90;

					else if (a[j] == 'j')
						time = time + 90;

					else if (a[j] == 'k')
						time = time + 90;

					else if (a[j] == 'l')
						time = time + 55;

					else if (a[j] == 'm')
						time = time + 90;

					else if (a[j] == 'n')
						time = time + 90;

					else if (a[j] == 'o')
						time = time + 55;

					else if (a[j] == 'p')
						time = time + 55;

					else if (a[j] == 'q')
						time = time + 90;

					else if (a[j] == 'r')
						time = time + 90;

					else if (a[j] == 's')
						time = time + 90;

					else if (a[j] == 't')
						time = time + 90;

					else if (a[j] == 'u')
						time = time + 90;

					else if (a[j] == 'v')
						time = time + 90;

					else if (a[j] == 'w')
						time = time + 45;

					else if (a[j] == 'x')
						time = time + 45;

					else if (a[j] == 'y')
						time = time + 70;

					else if (a[j] == 'z')
						time = time + 90;

					else if (a[j] == 'A')
						time = time + 90;

					else if (a[j] == 'B')
						time = time + 90;

					else if (a[j] == 'C')
						time = time + 90;

					else if (a[j] == 'D')
						time = time + 45;

					else if (a[j] == 'E')
						time = time + 90;

					else if (a[j] == 'F')
						time = time + 90;

					else if (a[j] == 'H')
						time = time + 90;

					else if (a[j] == 'I')
						time = time + 55;

					else if (a[j] == 'J')
						time = time + 90;

					else if (a[j] == 'K')
						time = time + 90;

					else if (a[j] == 'L')
						time = time + 55;

					else if (a[j] == 'M')
						time = time + 90;

					else if (a[j] == 'N')
						time = time + 90;
					else if (a[j] == 'O')
						time = time + 90;
					else if (a[j] == 'P')
						time = time + 90;
					else if (a[j] == 'Q')
						time = time + 90;
					else if (a[j] == 'R')
						time = time + 90;
					else if (a[j] == 'S')
						time = time + 90;
					else if (a[j] == 'T')
						time = time + 90;
				} if (a[x] == 'H') {
					if (a[j] == 'a')
						time = time + 50;

					else if (a[j] == 'b')
						time = time + 90;

					else if (a[j] == 'c')
						time = time + 90;

					else if (a[j] == 'd')
						time = time + 90;

					else if (a[j] == 'e')
						time = time + 90;

					else if (a[j] == 'f')
						time = time + 90;

					else if (a[j] == 'g')
						time = time + 70;

					else if (a[j] == 'h')
						time = time + 90;

					else if (a[j] == 'i')
						time = time + 90;

					else if (a[j] == 'j')
						time = time + 90;

					else if (a[j] == 'k')
						time = time + 90;

					else if (a[j] == 'l')
						time = time + 70;

					else if (a[j] == 'm')
						time = time + 60;

					else if (a[j] == 'n')
						time = time + 70;

					else if (a[j] == 'o')
						time = time + 70;

					else if (a[j] == 'p')
						time = time + 70;

					else if (a[j] == 'q')
						time = time + 90;

					else if (a[j] == 'r')
						time = time + 90;

					else if (a[j] == 's')
						time = time + 90;

					else if (a[j] == 't')
						time = time + 90;

					else if (a[j] == 'u')
						time = time + 90;

					else if (a[j] == 'v')
						time = time + 90;

					else if (a[j] == 'w')
						time = time + 70;

					else if (a[j] == 'x')
						time = time + 70;

					else if (a[j] == 'y')
						time = time + 80;

					else if (a[j] == 'z')
						time = time + 90;

					else if (a[j] == 'A')
						time = time + 90;

					else if (a[j] == 'B')
						time = time + 90;

					else if (a[j] == 'C')
						time = time + 90;

					else if (a[j] == 'D')
						time = time + 70;

					else if (a[j] == 'E')
						time = time + 90;

					else if (a[j] == 'F')
						time = time + 55;

					else if (a[j] == 'G')
						time = time + 55;

					else if (a[j] == 'I')
						time = time + 60;

					else if (a[j] == 'J')
						time = time + 90;

					else if (a[j] == 'K')
						time = time + 90;

					else if (a[j] == 'L')
						time = time + 55;

					else if (a[j] == 'M')
						time = time + 55;

					else if (a[j] == 'N')
						time = time + 90;
					else if (a[j] == 'O')
						time = time + 90;
					else if (a[j] == 'P')
						time = time + 90;
					else if (a[j] == 'Q')
						time = time + 90;
					else if (a[j] == 'R')
						time = time + 90;
					else if (a[j] == 'S')
						time = time + 90;
					else if (a[j] == 'T')
						time = time + 60;
				} if (a[x] == 'I') {
					if (a[j] == 'a')
						time = time + 55;

					else if (a[j] == 'b')
						time = time + 90;

					else if (a[j] == 'c')
						time = time + 90;

					else if (a[j] == 'd')
						time = time + 90;

					else if (a[j] == 'e')
						time = time + 90;

					else if (a[j] == 'f')
						time = time + 90;

					else if (a[j] == 'g')
						time = time + 60;

					else if (a[j] == 'h')
						time = time + 90;

					else if (a[j] == 'i')
						time = time + 90;

					else if (a[j] == 'j')
						time = time + 90;

					else if (a[j] == 'k')
						time = time + 90;

					else if (a[j] == 'l')
						time = time + 85;

					else if (a[j] == 'm')
						time = time + 90;

					else if (a[j] == 'n')
						time = time + 90;

					else if (a[j] == 'o')
						time = time + 85;

					else if (a[j] == 'p')
						time = time + 85;

					else if (a[j] == 'q')
						time = time + 90;

					else if (a[j] == 'r')
						time = time + 90;

					else if (a[j] == 's')
						time = time + 90;

					else if (a[j] == 't')
						time = time + 90;

					else if (a[j] == 'u')
						time = time + 90;

					else if (a[j] == 'v')
						time = time + 90;

					else if (a[j] == 'w')
						time = time + 60;

					else if (a[j] == 'x')
						time = time + 75;

					else if (a[j] == 'y')
						time = time + 75;

					else if (a[j] == 'z')
						time = time + 90;

					else if (a[j] == 'A')
						time = time + 90;

					else if (a[j] == 'B')
						time = time + 90;

					else if (a[j] == 'C')
						time = time + 90;

					else if (a[j] == 'D')
						time = time + 75;

					else if (a[j] == 'E')
						time = time + 90;

					else if (a[j] == 'F')
						time = time + 90;

					else if (a[j] == 'G')
						time = time + 55;

					else if (a[j] == 'H')
						time = time + 90;

					else if (a[j] == 'J')
						time = time + 90;

					else if (a[j] == 'K')
						time = time + 90;

					else if (a[j] == 'L')
						time = time + 55;

					else if (a[j] == 'M')
						time = time + 90;

					else if (a[j] == 'N')
						time = time + 90;
					else if (a[j] == 'O')
						time = time + 90;
					else if (a[j] == 'P')
						time = time + 90;
					else if (a[j] == 'Q')
						time = time + 90;
					else if (a[j] == 'R')
						time = time + 90;
					else if (a[j] == 'S')
						time = time + 90;
					else if (a[j] == 'T')
						time = time + 90;
				} if (a[x] == 'J') {
					if (a[j] == 'a')
						time = time + 40;

					else if (a[j] == 'b')
						time = time + 90;

					else if (a[j] == 'c')
						time = time + 90;

					else if (a[j] == 'd')
						time = time + 90;

					else if (a[j] == 'e')
						time = time + 90;

					else if (a[j] == 'f')
						time = time + 90;

					else if (a[j] == 'g')
						time = time + 45;

					else if (a[j] == 'h')
						time = time + 90;

					else if (a[j] == 'i')
						time = time + 90;

					else if (a[j] == 'j')
						time = time + 90;

					else if (a[j] == 'k')
						time = time + 35;

					else if (a[j] == 'l')
						time = time + 55;

					else if (a[j] == 'm')
						time = time + 55;

					else if (a[j] == 'n')
						time = time + 55;

					else if (a[j] == 'o')
						time = time + 55;

					else if (a[j] == 'p')
						time = time + 55;

					else if (a[j] == 'q')
						time = time + 40;

					else if (a[j] == 'r')
						time = time + 40;

					else if (a[j] == 's')
						time = time + 15;

					else if (a[j] == 't')
						time = time + 90;

					else if (a[j] == 'u')
						time = time + 90;

					else if (a[j] == 'v')
						time = time + 30;

					else if (a[j] == 'w')
						time = time + 45;

					else if (a[j] == 'x')
						time = time + 45;

					else if (a[j] == 'y')
						time = time + 70;

					else if (a[j] == 'z')
						time = time + 90;

					else if (a[j] == 'A')
						time = time + 55;

					else if (a[j] == 'B')
						time = time + 50;

					else if (a[j] == 'C')
						time = time + 90;

					else if (a[j] == 'D')
						time = time + 45;

					else if (a[j] == 'E')
						time = time + 70;

					else if (a[j] == 'F')
						time = time + 90;

					else if (a[j] == 'G')
						time = time + 40;

					else if (a[j] == 'H')
						time = time + 90;

					else if (a[j] == 'I')
						time = time + 55;

					else if (a[j] == 'K')
						time = time + 90;

					else if (a[j] == 'L')
						time = time + 55;

					else if (a[j] == 'M')
						time = time + 55;

					else if (a[j] == 'N')
						time = time + 55;
					else if (a[j] == 'O')
						time = time + 40;
					else if (a[j] == 'P')
						time = time + 90;
					else if (a[j] == 'Q')
						time = time + 90;
					else if (a[j] == 'R')
						time = time + 90;
					else if (a[j] == 'S')
						time = time + 50;
					else if (a[j] == 'T')
						time = time + 55;
				} if (a[x] == 'K') {
					if (a[j] == 'a')
						time = time + 40;

					else if (a[j] == 'b')
						time = time + 90;

					else if (a[j] == 'c')
						time = time + 90;

					else if (a[j] == 'd')
						time = time + 90;

					else if (a[j] == 'e')
						time = time + 90;

					else if (a[j] == 'f')
						time = time + 90;

					else if (a[j] == 'g')
						time = time + 45;

					else if (a[j] == 'h')
						time = time + 90;

					else if (a[j] == 'i')
						time = time + 90;

					else if (a[j] == 'j')
						time = time + 90;

					else if (a[j] == 'k')
						time = time + 40;

					else if (a[j] == 'l')
						time = time + 55;

					else if (a[j] == 'm')
						time = time + 55;

					else if (a[j] == 'n')
						time = time + 55;

					else if (a[j] == 'o')
						time = time + 55;

					else if (a[j] == 'p')
						time = time + 55;

					else if (a[j] == 'q')
						time = time + 35;

					else if (a[j] == 'r')
						time = time + 40;

					else if (a[j] == 's')
						time = time + 15;

					else if (a[j] == 't')
						time = time + 90;

					else if (a[j] == 'u')
						time = time + 90;

					else if (a[j] == 'v')
						time = time + 30;

					else if (a[j] == 'w')
						time = time + 45;

					else if (a[j] == 'x')
						time = time + 45;

					else if (a[j] == 'y')
						time = time + 70;

					else if (a[j] == 'z')
						time = time + 90;

					else if (a[j] == 'A')
						time = time + 55;

					else if (a[j] == 'B')
						time = time + 90;

					else if (a[j] == 'C')
						time = time + 90;

					else if (a[j] == 'D')
						time = time + 45;

					else if (a[j] == 'E')
						time = time + 70;

					else if (a[j] == 'F')
						time = time + 90;

					else if (a[j] == 'G')
						time = time + 40;

					else if (a[j] == 'H')
						time = time + 90;

					else if (a[j] == 'I')
						time = time + 55;

					else if (a[j] == 'J')
						time = time + 55;

					else if (a[j] == 'L')
						time = time + 55;

					else if (a[j] == 'M')
						time = time + 55;

					else if (a[j] == 'N')
						time = time + 55;
					else if (a[j] == 'O')
						time = time + 35;
					else if (a[j] == 'P')
						time = time + 90;
					else if (a[j] == 'Q')
						time = time + 90;
					else if (a[j] == 'R')
						time = time + 90;
					else if (a[j] == 'S')
						time = time + 90;
					else if (a[j] == 'T')
						time = time + 55;
				} if (a[x] == 'L') {
					if (a[j] == 'a')
						time = time + 40;

					else if (a[j] == 'b')
						time = time + 90;

					else if (a[j] == 'c')
						time = time + 90;

					else if (a[j] == 'd')
						time = time + 90;

					else if (a[j] == 'e')
						time = time + 90;

					else if (a[j] == 'f')
						time = time + 90;

					else if (a[j] == 'g')
						time = time + 45;

					else if (a[j] == 'h')
						time = time + 90;

					else if (a[j] == 'i')
						time = time + 90;

					else if (a[j] == 'j')
						time = time + 90;

					else if (a[j] == 'k')
						time = time + 40;

					else if (a[j] == 'l')
						time = time + 55;

					else if (a[j] == 'm')
						time = time + 55;

					else if (a[j] == 'n')
						time = time + 55;

					else if (a[j] == 'o')
						time = time + 55;

					else if (a[j] == 'p')
						time = time + 55;

					else if (a[j] == 'q')
						time = time + 35;

					else if (a[j] == 'r')
						time = time + 40;

					else if (a[j] == 's')
						time = time + 15;

					else if (a[j] == 't')
						time = time + 90;

					else if (a[j] == 'u')
						time = time + 90;

					else if (a[j] == 'v')
						time = time + 30;

					else if (a[j] == 'w')
						time = time + 45;

					else if (a[j] == 'x')
						time = time + 45;

					else if (a[j] == 'y')
						time = time + 70;

					else if (a[j] == 'z')
						time = time + 90;

					else if (a[j] == 'A')
						time = time + 55;

					else if (a[j] == 'B')
						time = time + 90;

					else if (a[j] == 'C')
						time = time + 90;

					else if (a[j] == 'D')
						time = time + 45;

					else if (a[j] == 'E')
						time = time + 90;

					else if (a[j] == 'F')
						time = time + 90;

					else if (a[j] == 'G')
						time = time + 40;

					else if (a[j] == 'H')
						time = time + 90;

					else if (a[j] == 'I')
						time = time + 55;

					else if (a[j] == 'J')
						time = time + 55;

					else if (a[j] == 'K')
						time = time + 90;

					else if (a[j] == 'M')
						time = time + 55;

					else if (a[j] == 'N')
						time = time + 55;
					else if (a[j] == 'O')
						time = time + 35;
					else if (a[j] == 'P')
						time = time + 90;
					else if (a[j] == 'Q')
						time = time + 90;
					else if (a[j] == 'R')
						time = time + 90;
					else if (a[j] == 'S')
						time = time + 90;
					else if (a[j] == 'T')
						time = time + 55;
				} if (a[x] == 'M') {
					if (a[j] == 'a')
						time = time + 40;

					else if (a[j] == 'b')
						time = time + 90;

					else if (a[j] == 'c')
						time = time + 90;

					else if (a[j] == 'd')
						time = time + 90;

					else if (a[j] == 'e')
						time = time + 90;

					else if (a[j] == 'f')
						time = time + 90;

					else if (a[j] == 'g')
						time = time + 45;

					else if (a[j] == 'h')
						time = time + 90;

					else if (a[j] == 'i')
						time = time + 90;

					else if (a[j] == 'j')
						time = time + 90;

					else if (a[j] == 'k')
						time = time + 90;

					else if (a[j] == 'l')
						time = time + 55;

					else if (a[j] == 'm')
						time = time + 90;

					else if (a[j] == 'n')
						time = time + 55;

					else if (a[j] == 'o')
						time = time + 55;

					else if (a[j] == 'p')
						time = time + 55;

					else if (a[j] == 'q')
						time = time + 90;

					else if (a[j] == 'r')
						time = time + 90;

					else if (a[j] == 's')
						time = time + 90;

					else if (a[j] == 't')
						time = time + 90;

					else if (a[j] == 'u')
						time = time + 90;

					else if (a[j] == 'v')
						time = time + 90;

					else if (a[j] == 'w')
						time = time + 45;

					else if (a[j] == 'x')
						time = time + 45;

					else if (a[j] == 'y')
						time = time + 70;

					else if (a[j] == 'z')
						time = time + 90;

					else if (a[j] == 'A')
						time = time + 90;

					else if (a[j] == 'B')
						time = time + 90;

					else if (a[j] == 'C')
						time = time + 90;

					else if (a[j] == 'D')
						time = time + 45;

					else if (a[j] == 'E')
						time = time + 90;

					else if (a[j] == 'F')
						time = time + 90;

					else if (a[j] == 'G')
						time = time + 40;

					else if (a[j] == 'H')
						time = time + 90;

					else if (a[j] == 'I')
						time = time + 55;

					else if (a[j] == 'J')
						time = time + 90;

					else if (a[j] == 'K')
						time = time + 90;

					else if (a[j] == 'L')
						time = time + 55;

					else if (a[j] == 'N')
						time = time + 90;
					else if (a[j] == 'O')
						time = time + 90;
					else if (a[j] == 'P')
						time = time + 90;
					else if (a[j] == 'Q')
						time = time + 90;
					else if (a[j] == 'R')
						time = time + 90;
					else if (a[j] == 'S')
						time = time + 90;
					else if (a[j] == 'T')
						time = time + 90;
				} if (a[x] == 'N') {
					if (a[j] == 'a')
						time = time + 40;

					else if (a[j] == 'b')
						time = time + 90;

					else if (a[j] == 'c')
						time = time + 90;

					else if (a[j] == 'd')
						time = time + 90;

					else if (a[j] == 'e')
						time = time + 90;

					else if (a[j] == 'f')
						time = time + 90;

					else if (a[j] == 'g')
						time = time + 45;

					else if (a[j] == 'h')
						time = time + 90;

					else if (a[j] == 'i')
						time = time + 90;

					else if (a[j] == 'j')
						time = time + 90;

					else if (a[j] == 'k')
						time = time + 40;

					else if (a[j] == 'l')
						time = time + 55;

					else if (a[j] == 'm')
						time = time + 55;

					else if (a[j] == 'n')
						time = time + 90;

					else if (a[j] == 'o')
						time = time + 55;

					else if (a[j] == 'p')
						time = time + 55;

					else if (a[j] == 'q')
						time = time + 90;

					else if (a[j] == 'r')
						time = time + 90;

					else if (a[j] == 's')
						time = time + 90;

					else if (a[j] == 't')
						time = time + 90;

					else if (a[j] == 'u')
						time = time + 90;

					else if (a[j] == 'v')
						time = time + 30;

					else if (a[j] == 'w')
						time = time + 45;

					else if (a[j] == 'x')
						time = time + 45;

					else if (a[j] == 'y')
						time = time + 70;

					else if (a[j] == 'z')
						time = time + 90;

					else if (a[j] == 'A')
						time = time + 55;

					else if (a[j] == 'B')
						time = time + 90;

					else if (a[j] == 'C')
						time = time + 90;

					else if (a[j] == 'D')
						time = time + 45;

					else if (a[j] == 'E')
						time = time + 70;

					else if (a[j] == 'F')
						time = time + 90;

					else if (a[j] == 'G')
						time = time + 40;

					else if (a[j] == 'H')
						time = time + 90;

					else if (a[j] == 'I')
						time = time + 55;

					else if (a[j] == 'J')
						time = time + 90;

					else if (a[j] == 'K')
						time = time + 90;

					else if (a[j] == 'L')
						time = time + 55;

					else if (a[j] == 'M')
						time = time + 90;
					else if (a[j] == 'O')
						time = time + 90;
					else if (a[j] == 'P')
						time = time + 90;
					else if (a[j] == 'Q')
						time = time + 90;
					else if (a[j] == 'R')
						time = time + 90;
					else if (a[j] == 'S')
						time = time + 90;
					else if (a[j] == 'T')
						time = time + 55;
				}
				if (a[x] == 'O') {
					time = time + 15;
					if (a[j] == 'a')
						time = time + 40;

					else if (a[j] == 'b')
						time = time + 90;

					else if (a[j] == 'c')
						time = time + 90;

					else if (a[j] == 'd')
						time = time + 90;

					else if (a[j] == 'e')
						time = time + 90;

					else if (a[j] == 'f')
						time = time + 90;

					else if (a[j] == 'g')
						time = time + 45;

					else if (a[j] == 'h')
						time = time + 90;

					else if (a[j] == 'i')
						time = time + 90;

					else if (a[j] == 'j')
						time = time + 90;

					else if (a[j] == 'k')
						time = time + 40;

					else if (a[j] == 'l')
						time = time + 55;

					else if (a[j] == 'm')
						time = time + 55;

					else if (a[j] == 'n')
						time = time + 55;

					else if (a[j] == 'o')
						time = time + 55;

					else if (a[j] == 'p')
						time = time + 55;

					else if (a[j] == 'q')
						time = time + 30;

					else if (a[j] == 's')
						time = time + 25;

					else if (a[j] == 't')
						time = time + 90;

					else if (a[j] == 'u')
						time = time + 90;

					else if (a[j] == 'v')
						time = time + 50;

					else if (a[j] == 'w')
						time = time + 45;

					else if (a[j] == 'x')
						time = time + 45;

					else if (a[j] == 'y')
						time = time + 70;

					else if (a[j] == 'z')
						time = time + 90;

					else if (a[j] == 'A')
						time = time + 55;

					else if (a[j] == 'B')
						time = time + 35;

					else if (a[j] == 'C')
						time = time + 90;

					else if (a[j] == 'D')
						time = time + 45;

					else if (a[j] == 'E')
						time = time + 70;

					else if (a[j] == 'F')
						time = time + 90;

					else if (a[j] == 'G')
						time = time + 40;

					else if (a[j] == 'H')
						time = time + 90;

					else if (a[j] == 'I')
						time = time + 55;

					else if (a[j] == 'J')
						time = time + 35;

					else if (a[j] == 'K')
						time = time + 90;

					else if (a[j] == 'L')
						time = time + 90;

					else if (a[j] == 'M')
						time = time + 55;

					else if (a[j] == 'N')
						time = time + 55;
					else if (a[j] == 'O')
						time = time + 30;
					else if (a[j] == 'P')
						time = time + 90;
					else if (a[j] == 'Q')
						time = time + 90;
					else if (a[j] == 'R')
						time = time + 90;
					else if (a[j] == 'S')
						time = time + 35;
					else if (a[j] == 'T')
						time = time + 55;
				}
				if (a[x] == 'P') {
					time = time + 30;
					if (a[j] == 'b')
						time = time + 90;

					else if (a[j] == 'a')
						time = time + 55;

					else if (a[j] == 'd')
						time = time + 30;

					else if (a[j] == 'e')
						time = time + 90;

					else if (a[j] == 'f')
						time = time + 90;

					else if (a[j] == 'g')
						time = time + 70;

					else if (a[j] == 'h')
						time = time + 90;

					else if (a[j] == 'i')
						time = time + 90;

					else if (a[j] == 'j')
						time = time + 90;

					else if (a[j] == 'k')
						time = time + 60;

					else if (a[j] == 'l')
						time = time + 85;

					else if (a[j] == 'm')
						time = time + 85;

					else if (a[j] == 'n')
						time = time + 90;

					else if (a[j] == 'o')
						time = time + 85;

					else if (a[j] == 'p')
						time = time + 85;

					else if (a[j] == 'q')
						time = time + 90;

					else if (a[j] == 'r')
						time = time + 90;

					else if (a[j] == 's')
						time = time + 90;

					else if (a[j] == 't')
						time = time + 90;

					else if (a[j] == 'u')
						time = time + 90;

					else if (a[j] == 'v')
						time = time + 70;

					else if (a[j] == 'w')
						time = time + 70;

					else if (a[j] == 'x')
						time = time + 70;

					else if (a[j] == 'y')
						time = time + 70;

					else if (a[j] == 'z')
						time = time + 90;

					else if (a[j] == 'A')
						time = time + 80;

					else if (a[j] == 'B')
						time = time + 90;

					else if (a[j] == 'C')
						time = time + 90;

					else if (a[j] == 'D')
						time = time + 70;

					else if (a[j] == 'E')
						time = time + 90;

					else if (a[j] == 'F')
						time = time + 90;

					else if (a[j] == 'G')
						time = time + 65;

					else if (a[j] == 'H')
						time = time + 90;

					else if (a[j] == 'I')
						time = time + 70;

					else if (a[j] == 'J')
						time = time + 90;

					else if (a[j] == 'K')
						time = time + 90;

					else if (a[j] == 'L')
						time = time + 90;

					else if (a[j] == 'M')
						time = time + 90;

					else if (a[j] == 'N')
						time = time + 90;
					else if (a[j] == 'O')
						time = time + 90;
					else if (a[j] == 'Q')
						time = time + 90;
					else if (a[j] == 'R')
						time = time + 90;
					else if (a[j] == 'S')
						time = time + 90;
					else if (a[j] == 'T')
						time = time + 85;
				}
				if (a[x] == 'Q') {
					time = time + 10;
					if (a[j] == 'a')
						time = time + 20;

					else if (a[j] == 'b')
						time = time + 20;

					else if (a[j] == 'c')
						time = time + 25;

					else if (a[j] == 'd')
						time = time + 40;

					else if (a[j] == 'e')
						time = time + 10;

					else if (a[j] == 'g')
						time = time + 40;

					else if (a[j] == 'h')
						time = time + 35;

					else if (a[j] == 'i')
						time = time + 35;

					else if (a[j] == 'j')
						time = time + 20;

					else if (a[j] == 'k')
						time = time + 30;

					else if (a[j] == 'l')
						time = time + 50;

					else if (a[j] == 'm')
						time = time + 35;

					else if (a[j] == 'n')
						time = time + 35;

					else if (a[j] == 'o')
						time = time + 50;

					else if (a[j] == 'p')
						time = time + 50;

					else if (a[j] == 'q')
						time = time + 35;

					else if (a[j] == 'r')
						time = time + 35;

					else if (a[j] == 's')
						time = time + 25;

					else if (a[j] == 't')
						time = time + 35;

					else if (a[j] == 'u')
						time = time + 25;

					else if (a[j] == 'v')
						time = time + 35;

					else if (a[j] == 'w')
						time = time + 40;

					else if (a[j] == 'x')
						time = time + 35;

					else if (a[j] == 'y')
						time = time + 70;

					else if (a[j] == 'z')
						time = time + 40;

					else if (a[j] == 'A')
						time = time + 25;

					else if (a[j] == 'B')
						time = time + 35;

					else if (a[j] == 'C')
						time = time + 25;

					else if (a[j] == 'D')
						time = time + 30;

					else if (a[j] == 'E')
						time = time + 35;

					else if (a[j] == 'F')
						time = time + 35;

					else if (a[j] == 'G')
						time = time + 35;

					else if (a[j] == 'H')
						time = time + 40;

					else if (a[j] == 'I')
						time = time + 45;

					else if (a[j] == 'J')
						time = time + 35;

					else if (a[j] == 'K')
						time = time + 35;

					else if (a[j] == 'L')
						time = time + 35;

					else if (a[j] == 'M')
						time = time + 35;

					else if (a[j] == 'N')
						time = time + 35;
					else if (a[j] == 'O')
						time = time + 35;
					else if (a[j] == 'P')
						time = time + 25;
					else if (a[j] == 'Q')
						time = time + 10;
					else if (a[j] == 'R')
						time = time + 35;
					else if (a[j] == 'S')
						time = time + 35;
					else if (a[j] == 'T')
						time = time + 35;
				}
				if (a[x] == 'R') {
					time = time + 10;
					if (a[j] == 'a')
						time = time + 40;

					else if (a[j] == 'b')
						time = time + 40;

					else if (a[j] == 'c')
						time = time + 70;

					else if (a[j] == 'd')
						time = time + 70;

					else if (a[j] == 'e')
						time = time + 40;

					else if (a[j] == 'f')
						time = time + 40;

					else if (a[j] == 'g')
						time = time + 40;

					else if (a[j] == 'h')
						time = time + 30;

					else if (a[j] == 'i')
						time = time + 30;

					else if (a[j] == 'k')
						time = time + 30;

					else if (a[j] == 'l')
						time = time + 35;

					else if (a[j] == 'm')
						time = time + 35;

					else if (a[j] == 'n')
						time = time + 35;

					else if (a[j] == 'o')
						time = time + 35;

					else if (a[j] == 'p')
						time = time + 35;

					else if (a[j] == 'q')
						time = time + 30;

					else if (a[j] == 'r')
						time = time + 40;

					else if (a[j] == 's')
						time = time + 40;

					else if (a[j] == 't')
						time = time + 30;

					else if (a[j] == 'u')
						time = time + 25;

					else if (a[j] == 'v')
						time = time + 25;

					else if (a[j] == 'w')
						time = time + 40;

					else if (a[j] == 'x')
						time = time + 35;

					else if (a[j] == 'y')
						time = time + 70;

					else if (a[j] == 'z')
						time = time + 45;

					else if (a[j] == 'A')
						time = time + 55;

					else if (a[j] == 'B')
						time = time + 40;

					else if (a[j] == 'C')
						time = time + 25;

					else if (a[j] == 'D')
						time = time + 35;

					else if (a[j] == 'E')
						time = time + 70;

					else if (a[j] == 'F')
						time = time + 40;

					else if (a[j] == 'G')
						time = time + 40;

					else if (a[j] == 'H')
						time = time + 45;

					else if (a[j] == 'I')
						time = time + 55;

					else if (a[j] == 'J')
						time = time + 90;

					else if (a[j] == 'K')
						time = time + 90;

					else if (a[j] == 'L')
						time = time + 90;

					else if (a[j] == 'M')
						time = time + 90;

					else if (a[j] == 'N')
						time = time + 90;
					else if (a[j] == 'O')
						time = time + 30;
					else if (a[j] == 'P')
						time = time + 70;
					else if (a[j] == 'Q')
						time = time + 40;
					else if (a[j] == 'R')
						time = time + 30;
					else if (a[j] == 'S')
						time = time + 40;
					else if (a[j] == 'T')
						time = time + 35;
				}
				if (a[x] == 'S') {
					time = time + 15;
					if (a[j] == 'a')
						time = time + 40;

					else if (a[j] == 'b')
						time = time + 90;

					else if (a[j] == 'c')
						time = time + 90;

					else if (a[j] == 'd')
						time = time + 90;

					else if (a[j] == 'e')
						time = time + 90;

					else if (a[j] == 'f')
						time = time + 90;

					else if (a[j] == 'g')
						time = time + 45;

					else if (a[j] == 'h')
						time = time + 90;

					else if (a[j] == 'i')
						time = time + 90;

					else if (a[j] == 'j')
						time = time + 90;

					else if (a[j] == 'k')
						time = time + 40;

					else if (a[j] == 'l')
						time = time + 55;

					else if (a[j] == 'm')
						time = time + 40;

					else if (a[j] == 'n')
						time = time + 40;

					else if (a[j] == 'o')
						time = time + 40;

					else if (a[j] == 'p')
						time = time + 55;

					else if (a[j] == 'q')
						time = time + 40;

					else if (a[j] == 'r')
						time = time + 35;

					else if (a[j] == 't')
						time = time + 90;

					else if (a[j] == 'u')
						time = time + 90;

					else if (a[j] == 'v')
						time = time + 35;

					else if (a[j] == 'w')
						time = time + 45;

					else if (a[j] == 'x')
						time = time + 45;

					else if (a[j] == 'y')
						time = time + 70;

					else if (a[j] == 'z')
						time = time + 90;

					else if (a[j] == 'A')
						time = time + 55;

					else if (a[j] == 'B')
						time = time + 30;

					else if (a[j] == 'C')
						time = time + 90;

					else if (a[j] == 'D')
						time = time + 45;

					else if (a[j] == 'E')
						time = time + 70;

					else if (a[j] == 'F')
						time = time + 90;

					else if (a[j] == 'G')
						time = time + 40;

					else if (a[j] == 'H')
						time = time + 90;

					else if (a[j] == 'I')
						time = time + 55;

					else if (a[j] == 'J')
						time = time + 55;

					else if (a[j] == 'K')
						time = time + 90;

					else if (a[j] == 'L')
						time = time + 55;

					else if (a[j] == 'M')
						time = time + 55;

					else if (a[j] == 'N')
						time = time + 55;
					else if (a[j] == 'O')
						time = time + 40;
					else if (a[j] == 'P')
						time = time + 90;
					else if (a[j] == 'Q')
						time = time + 90;
					else if (a[j] == 'R')
						time = time + 90;
					else if (a[j] == 'T')
						time = time + 40;
				}
				if (a[x] == 'T') {
					time = time + 15;
					if (a[j] == 'a')
						time = time + 40;

					else if (a[j] == 'b')
						time = time + 90;

					else if (a[j] == 'c')
						time = time + 90;

					else if (a[j] == 'd')
						time = time + 90;

					else if (a[j] == 'e')
						time = time + 90;

					else if (a[j] == 'f')
						time = time + 90;

					else if (a[j] == 'g')
						time = time + 35;

					else if (a[j] == 'h')
						time = time + 90;

					else if (a[j] == 'i')
						time = time + 90;

					else if (a[j] == 'j')
						time = time + 90;

					else if (a[j] == 'k')
						time = time + 90;

					else if (a[j] == 'm')
						time = time + 90;

					else if (a[j] == 'n')
						time = time + 90;

					else if (a[j] == 'o')
						time = time + 20;

					else if (a[j] == 'p')
						time = time + 35;

					else if (a[j] == 'q')
						time = time + 90;

					else if (a[j] == 'r')
						time = time + 90;

					else if (a[j] == 's')
						time = time + 90;

					else if (a[j] == 't')
						time = time + 90;

					else if (a[j] == 'u')
						time = time + 90;

					else if (a[j] == 'v')
						time = time + 90;

					else if (a[j] == 'w')
						time = time + 55;

					else if (a[j] == 'x')
						time = time + 75;

					else if (a[j] == 'y')
						time = time + 80;

					else if (a[j] == 'z')
						time = time + 90;

					else if (a[j] == 'A')
						time = time + 90;

					else if (a[j] == 'B')
						time = time + 90;

					else if (a[j] == 'C')
						time = time + 90;

					else if (a[j] == 'D')
						time = time + 75;

					else if (a[j] == 'E')
						time = time + 90;

					else if (a[j] == 'F')
						time = time + 90;

					else if (a[j] == 'G')
						time = time + 40;

					else if (a[j] == 'H')
						time = time + 90;

					else if (a[j] == 'I')
						time = time + 90;

					else if (a[j] == 'J')
						time = time + 90;

					else if (a[j] == 'K')
						time = time + 90;

					else if (a[j] == 'L')
						time = time + 90;

					else if (a[j] == 'M')
						time = time + 90;

					else if (a[j] == 'N')
						time = time + 90;
					else if (a[j] == 'O')
						time = time + 90;
					else if (a[j] == 'P')
						time = time + 90;
					else if (a[j] == 'Q')
						time = time + 90;
					else if (a[j] == 'R')
						time = time + 90;
					else if (a[j] == 'S')
						time = time + 90;
				}
				}
				}
				}
				   if (t==1) {
					   first = v[0];
							if (first == 'a') {
								if (a[0] == 'b')
									time = time + 90;
								else if (a[0] == 'c')
									time = time + 90;
								else if (a[0] == 'd')
									time = time + 90;
								else if (a[0] == 'e')
									time = time + 90;
								else if (a[0] == 'f')
									time = time + 90;
								else if (a[0] == 'g')
									time = time + 35;
								else if (a[0] == 'h')
									time = time + 90;
								else if (a[0] == 'i')
									time = time + 90;
								else if (a[0] == 'j')
									time = time + 90;
								else if (a[0] == 'k')
									time = time + 90;
								else if (a[0] == 'l')
									time = time + 55;
								else if (a[0] == 'm')
									time = time + 90;
								else if (a[0] == 'n')
									time = time + 90;
								else if (a[0] == 'o')
									time = time + 55;
								else if (a[0] == 'p')
									time = time + 55;
								else if (a[0] == 'q')
									time = time + 90;
								else if (a[0] == 'r')
									time = time + 90;
								else if (a[0] == 's')
									time = time + 90;
								else if (a[0] == 't')
									time = time + 90;
								else if (a[0] == 'u')
									time = time + 90;
								else if (a[0] == 'v')
									time = time + 90;
								else if (a[0] == 'w')
									time = time + 45;
								else if (a[0] == 'x')
									time = time + 40;
								else if (a[0] == 'y')
									time = time + 70;
								else if (a[0] == 'z')
									time = time + 90;
								else if (a[0] == 'A')
									time = time + 90;
								else if (a[0] == 'B')
									time = time + 90;
								else if (a[0] == 'C')
									time = time + 90;
								else if (a[0] == 'D')
									time = time + 40;
								else if (a[0] == 'E')
									time = time + 90;
								else if (a[0] == 'F')
									time = time + 90;
								else if (a[0] == 'G')
									time = time + 40;
								else if (a[0] == 'H')
									time = time + 90;
								else if (a[0] == 'I')
									time = time + 40;
								else if (a[0] == 'J')
									time = time + 90;
								else if (a[0] == 'K')
									time = time + 90;
								else if (a[0] == 'L')
									time = time + 90;
								else if (a[0] == 'M')
									time = time + 90;
								else if (a[0] == 'N')
									time = time + 90;
								else if (a[0] == 'O')
									time = time + 90;
								else if (a[0] == 'P')
									time = time + 90;
								else if (a[0] == 'Q')
									time = time + 90;
								else if (a[0] == 'R')
									time = time + 90;
								else if (a[0] == 'S')
									time = time + 90;
								else if (a[0] == 'T')
									time = time + 90;
							} if (first == 'b') {
								if (a[0] == 'a')
									time = time + 30;
								else if (a[0] == 'c')
									time = time + 60;

								else if (a[0] == 'd')
									time = time + 60;

								else if (a[0] == 'e')
									time = time + 30;

								else if (a[0] == 'f')
									time = time + 30;

								else if (a[0] == 'g')
									time = time + 45;

								else if (a[0] == 'h')
									time = time + 40;

								else if (a[0] == 'i')
									time = time + 40;

								else if (a[0] == 'j')
									time = time + 40;

								else if (a[0] == 'k')
									time = time + 40;

								else if (a[0] == 'l')
									time = time + 55;

								else if (a[0] == 'm')
									time = time + 55;

								else if (a[0] == 'n')
									time = time + 55;

								else if (a[0] == 'o')
									time = time + 55;

								else if (a[0] == 'p')
									time = time + 55;

								else if (a[0] == 'q')
									time = time + 40;

								else if (a[0] == 'r')
									time = time + 40;

								else if (a[0] == 's')
									time = time + 40;

								else if (a[0] == 't')
									time = time + 40;

								else if (a[0] == 'u')
									time = time + 45;

								else if (a[0] == 'v')
									time = time + 40;

								else if (a[0] == 'w')
									time = time + 45;

								else if (a[0] == 'x')
									time = time + 40;

								else if (a[0] == 'y')
									time = time + 70;

								else if (a[0] == 'z')
									time = time + 45;

								else if (a[0] == 'A')
									time = time + 35;

								else if (a[0] == 'B')
									time = time + 40;

								else if (a[0] == 'C')
									time = time + 45;

								else if (a[0] == 'D')
									time = time + 40;

								else if (a[0] == 'E')
									time = time + 65;

								else if (a[0] == 'F')
									time = time + 40;

								else if (a[0] == 'G')
									time = time + 40;

								else if (a[0] == 'H')
									time = time + 45;

								else if (a[0] == 'I')
									time = time + 55;

								else if (a[0] == 'J')
									time = time + 55;

								else if (a[0] == 'K')
									time = time + 55;

								else if (a[0] == 'L')
									time = time + 55;

								else if (a[0] == 'M')
									time = time + 55;

								else if (a[0] == 'N')
									time = time + 55;
								else if (a[0] == 'O')
									time = time + 40;
								else if (a[0] == 'P')
									time = time + 90;
								else if (a[0] == 'Q')
									time = time + 30;
								else if (a[0] == 'R')
									time = time + 40;
								else if (a[0] == 'S')
									time = time + 40;
								else if (a[0] == 'T')
									time = time + 55;
							} if (first == 'c') {
								if (a[0] == 'b')
									time = time + 90;

								else if (a[0] == 'a')
									time = time + 55;

								else if (a[0] == 'd')
									time = time + 30;

								else if (a[0] == 'e')
									time = time + 90;

								else if (a[0] == 'f')
									time = time + 90;

								else if (a[0] == 'g')
									time = time + 70;

								else if (a[0] == 'h')
									time = time + 90;

								else if (a[0] == 'i')
									time = time + 90;

								else if (a[0] == 'j')
									time = time + 90;

								else if (a[0] == 'k')
									time = time + 60;

								else if (a[0] == 'l')
									time = time + 85;

								else if (a[0] == 'm')
									time = time + 85;

								else if (a[0] == 'n')
									time = time + 90;

								else if (a[0] == 'o')
									time = time + 85;

								else if (a[0] == 'p')
									time = time + 85;

								else if (a[0] == 'q')
									time = time + 90;

								else if (a[0] == 'r')
									time = time + 90;

								else if (a[0] == 's')
									time = time + 90;

								else if (a[0] == 't')
									time = time + 90;

								else if (a[0] == 'u')
									time = time + 90;

								else if (a[0] == 'v')
									time = time + 70;

								else if (a[0] == 'w')
									time = time + 70;

								else if (a[0] == 'x')
									time = time + 70;

								else if (a[0] == 'y')
									time = time + 70;

								else if (a[0] == 'z')
									time = time + 90;

								else if (a[0] == 'A')
									time = time + 80;

								else if (a[0] == 'B')
									time = time + 90;

								else if (a[0] == 'C')
									time = time + 90;

								else if (a[0] == 'D')
									time = time + 70;

								else if (a[0] == 'E')
									time = time + 90;

								else if (a[0] == 'F')
									time = time + 90;

								else if (a[0] == 'G')
									time = time + 65;

								else if (a[0] == 'H')
									time = time + 90;

								else if (a[0] == 'I')
									time = time + 70;

								else if (a[0] == 'J')
									time = time + 90;

								else if (a[0] == 'K')
									time = time + 90;

								else if (a[0] == 'L')
									time = time + 90;

								else if (a[0] == 'M')
									time = time + 90;

								else if (a[0] == 'N')
									time = time + 90;
								else if (a[0] == 'O')
									time = time + 90;
								else if (a[0] == 'Q')
									time = time + 90;
								else if (a[0] == 'R')
									time = time + 90;
								else if (a[0] == 'S')
									time = time + 90;
								else if (a[0] == 'T')
									time = time + 85;
							} if (first == 'd') {
								if (a[0] == 'a')
									time = time + 55;

								else if (a[0] == 'b')
									time = time + 90;

								else if (a[0] == 'c')
									time = time + 40;

								else if (a[0] == 'e')
									time = time + 90;

								else if (a[0] == 'f')
									time = time + 90;

								else if (a[0] == 'g')
									time = time + 70;

								else if (a[0] == 'h')
									time = time + 90;

								else if (a[0] == 'i')
									time = time + 90;

								else if (a[0] == 'j')
									time = time + 90;

								else if (a[0] == 'k')
									time = time + 60;

								else if (a[0] == 'l')
									time = time + 85;

								else if (a[0] == 'm')
									time = time + 85;

								else if (a[0] == 'n')
									time = time + 90;

								else if (a[0] == 'o')
									time = time + 85;

								else if (a[0] == 'p')
									time = time + 85;

								else if (a[0] == 'q')
									time = time + 90;

								else if (a[0] == 'r')
									time = time + 90;

								else if (a[0] == 's')
									time = time + 90;

								else if (a[0] == 't')
									time = time + 90;

								else if (a[0] == 'u')
									time = time + 90;

								else if (a[0] == 'v')
									time = time + 70;

								else if (a[0] == 'w')
									time = time + 70;

								else if (a[0] == 'x')
									time = time + 70;

								else if (a[0] == 'y')
									time = time + 70;

								else if (a[0] == 'z')
									time = time + 90;

								else if (a[0] == 'A')
									time = time + 80;

								else if (a[0] == 'B')
									time = time + 90;

								else if (a[0] == 'C')
									time = time + 90;

								else if (a[0] == 'D')
									time = time + 70;

								else if (a[0] == 'E')
									time = time + 90;

								else if (a[0] == 'F')
									time = time + 90;

								else if (a[0] == 'G')
									time = time + 65;

								else if (a[0] == 'H')
									time = time + 90;

								else if (a[0] == 'I')
									time = time + 70;

								else if (a[0] == 'J')
									time = time + 90;

								else if (a[0] == 'K')
									time = time + 90;

								else if (a[0] == 'L')
									time = time + 90;

								else if (a[0] == 'M')
									time = time + 90;

								else if (a[0] == 'N')
									time = time + 90;
								else if (a[0] == 'O')
									time = time + 90;
								else if (a[0] == 'P')
									time = time + 40;
								else if (a[0] == 'Q')
									time = time + 90;
								else if (a[0] == 'R')
									time = time + 90;
								else if (a[0] == 'S')
									time = time + 90;
								else if (a[0] == 'T')
									time = time + 85;
							} if (first == 'e') {
								if (a[0] == 'a')
									time = time + 20;

								else if (a[0] == 'b')
									time = time + 20;

								else if (a[0] == 'c')
									time = time + 30;

								else if (a[0] == 'd')
									time = time + 60;

								else if (a[0] == 'f')
									time = time + 10;

								else if (a[0] == 'g')
									time = time + 40;

								else if (a[0] == 'h')
									time = time + 35;

								else if (a[0] == 'i')
									time = time + 35;

								else if (a[0] == 'j')
									time = time + 20;

								else if (a[0] == 'k')
									time = time + 35;

								else if (a[0] == 'l')
									time = time + 50;

								else if (a[0] == 'm')
									time = time + 50;

								else if (a[0] == 'n')
									time = time + 50;

								else if (a[0] == 'o')
									time = time + 50;

								else if (a[0] == 'p')
									time = time + 50;

								else if (a[0] == 'q')
									time = time + 35;

								else if (a[0] == 'r')
									time = time + 35;

								else if (a[0] == 's')
									time = time + 10;

								else if (a[0] == 't')
									time = time + 35;

								else if (a[0] == 'u')
									time = time + 40;

								else if (a[0] == 'v')
									time = time + 30;

								else if (a[0] == 'w')
									time = time + 40;

								else if (a[0] == 'x')
									time = time + 35;

								else if (a[0] == 'y')
									time = time + 70;

								else if (a[0] == 'z')
									time = time + 35;

								else if (a[0] == 'A')
									time = time + 30;

								else if (a[0] == 'B')
									time = time + 35;

								else if (a[0] == 'C')
									time = time + 40;

								else if (a[0] == 'D')
									time = time + 35;

								else if (a[0] == 'E')
									time = time + 60;

								else if (a[0] == 'F')
									time = time + 35;

								else if (a[0] == 'G')
									time = time + 35;

								else if (a[0] == 'H')
									time = time + 40;

								else if (a[0] == 'I')
									time = time + 45;

								else if (a[0] == 'J')
									time = time + 90;

								else if (a[0] == 'K')
									time = time + 90;

								else if (a[0] == 'L')
									time = time + 90;

								else if (a[0] == 'M')
									time = time + 90;

								else if (a[0] == 'N')
									time = time + 90;
								else if (a[0] == 'O')
									time = time + 35;
								else if (a[0] == 'P')
									time = time + 30;
								else if (a[0] == 'Q')
									time = time + 90;
								else if (a[0] == 'R')
									time = time + 35;
								else if (a[0] == 'S')
									time = time + 35;
								else if (a[0] == 'T')
									time = time + 50;
							} if (first == 'f') {
								if (a[0] == 'a')
									time = time + 20;

								else if (a[0] == 'b')
									time = time + 20;

								else if (a[0] == 'c')
									time = time + 25;

								else if (a[0] == 'd')
									time = time + 40;

								else if (a[0] == 'e')
									time = time + 10;

								else if (a[0] == 'g')
									time = time + 40;

								else if (a[0] == 'h')
									time = time + 35;

								else if (a[0] == 'i')
									time = time + 35;

								else if (a[0] == 'j')
									time = time + 20;

								else if (a[0] == 'k')
									time = time + 30;

								else if (a[0] == 'l')
									time = time + 50;

								else if (a[0] == 'm')
									time = time + 35;

								else if (a[0] == 'n')
									time = time + 35;

								else if (a[0] == 'o')
									time = time + 50;

								else if (a[0] == 'p')
									time = time + 50;

								else if (a[0] == 'q')
									time = time + 35;

								else if (a[0] == 'r')
									time = time + 35;

								else if (a[0] == 's')
									time = time + 25;

								else if (a[0] == 't')
									time = time + 35;

								else if (a[0] == 'u')
									time = time + 25;

								else if (a[0] == 'v')
									time = time + 35;

								else if (a[0] == 'w')
									time = time + 40;

								else if (a[0] == 'x')
									time = time + 35;

								else if (a[0] == 'y')
									time = time + 70;

								else if (a[0] == 'z')
									time = time + 40;

								else if (a[0] == 'A')
									time = time + 25;

								else if (a[0] == 'B')
									time = time + 35;

								else if (a[0] == 'C')
									time = time + 25;

								else if (a[0] == 'D')
									time = time + 30;

								else if (a[0] == 'E')
									time = time + 35;

								else if (a[0] == 'F')
									time = time + 35;

								else if (a[0] == 'G')
									time = time + 35;

								else if (a[0] == 'H')
									time = time + 40;

								else if (a[0] == 'I')
									time = time + 45;

								else if (a[0] == 'J')
									time = time + 35;

								else if (a[0] == 'K')
									time = time + 35;

								else if (a[0] == 'L')
									time = time + 35;

								else if (a[0] == 'M')
									time = time + 35;

								else if (a[0] == 'N')
									time = time + 35;
								else if (a[0] == 'O')
									time = time + 35;
								else if (a[0] == 'P')
									time = time + 25;
								else if (a[0] == 'Q')
									time = time + 10;
								else if (a[0] == 'R')
									time = time + 35;
								else if (a[0] == 'S')
									time = time + 35;
								else if (a[0] == 'T')
									time = time + 35;
							} if (first == 'g') {
								if (a[0] == 'a')
									time = time + 65;

								else if (a[0] == 'b')
									time = time + 90;

								else if (a[0] == 'c')
									time = time + 90;

								else if (a[0] == 'd')
									time = time + 90;

								else if (a[0] == 'e')
									time = time + 90;

								else if (a[0] == 'f')
									time = time + 90;

								else if (a[0] == 'h')
									time = time + 90;

								else if (a[0] == 'i')
									time = time + 90;

								else if (a[0] == 'j')
									time = time + 90;

								else if (a[0] == 'k')
									time = time + 90;

								else if (a[0] == 'l')
									time = time + 60;

								else if (a[0] == 'm')
									time = time + 90;

								else if (a[0] == 'n')
									time = time + 90;

								else if (a[0] == 'o')
									time = time + 60;

								else if (a[0] == 'p')
									time = time + 60;

								else if (a[0] == 'q')
									time = time + 90;

								else if (a[0] == 'r')
									time = time + 90;

								else if (a[0] == 's')
									time = time + 90;

								else if (a[0] == 't')
									time = time + 90;

								else if (a[0] == 'u')
									time = time + 90;

								else if (a[0] == 'v')
									time = time + 90;

								else if (a[0] == 'w')
									time = time + 40;

								else if (a[0] == 'x')
									time = time + 40;

								else if (a[0] == 'y')
									time = time + 30;

								else if (a[0] == 'z')
									time = time + 90;

								else if (a[0] == 'A')
									time = time + 90;

								else if (a[0] == 'B')
									time = time + 90;

								else if (a[0] == 'C')
									time = time + 90;

								else if (a[0] == 'D')
									time = time + 40;

								else if (a[0] == 'E')
									time = time + 90;

								else if (a[0] == 'F')
									time = time + 90;

								else if (a[0] == 'G')
									time = time + 65;

								else if (a[0] == 'H')
									time = time + 90;

								else if (a[0] == 'I')
									time = time + 70;

								else if (a[0] == 'J')
									time = time + 90;

								else if (a[0] == 'K')
									time = time + 90;

								else if (a[0] == 'L')
									time = time + 90;

								else if (a[0] == 'M')
									time = time + 90;

								else if (a[0] == 'N')
									time = time + 90;
								else if (a[0] == 'O')
									time = time + 90;
								else if (a[0] == 'P')
									time = time + 90;
								else if (a[0] == 'Q')
									time = time + 90;
								else if (a[0] == 'R')
									time = time + 90;
								else if (a[0] == 'S')
									time = time + 90;
								else if (a[0] == 'T')
									time = time + 90;
							} if (first == 'h') {
								if (a[0] == 'a')
									time = time + 40;

								else if (a[0] == 'b')
									time = time + 40;

								else if (a[0] == 'c')
									time = time + 70;

								else if (a[0] == 'd')
									time = time + 70;

								else if (a[0] == 'e')
									time = time + 40;

								else if (a[0] == 'f')
									time = time + 40;

								else if (a[0] == 'g')
									time = time + 45;

								else if (a[0] == 'i')
									time = time + 35;

								else if (a[0] == 'j')
									time = time + 35;

								else if (a[0] == 'k')
									time = time + 35;

								else if (a[0] == 'l')
									time = time + 45;

								else if (a[0] == 'm')
									time = time + 45;

								else if (a[0] == 'n')
									time = time + 40;

								else if (a[0] == 'o')
									time = time + 45;

								else if (a[0] == 'p')
									time = time + 45;

								else if (a[0] == 'q')
									time = time + 40;

								else if (a[0] == 'r')
									time = time + 40;

								else if (a[0] == 's')
									time = time + 40;

								else if (a[0] == 't')
									time = time + 35;

								else if (a[0] == 'u')
									time = time + 25;

								else if (a[0] == 'v')
									time = time + 40;

								else if (a[0] == 'w')
									time = time + 45;

								else if (a[0] == 'x')
									time = time + 45;

								else if (a[0] == 'y')
									time = time + 70;

								else if (a[0] == 'z')
									time = time + 35;

								else if (a[0] == 'A')
									time = time + 55;

								else if (a[0] == 'B')
									time = time + 40;

								else if (a[0] == 'C')
									time = time + 45;

								else if (a[0] == 'D')
									time = time + 45;

								else if (a[0] == 'E')
									time = time + 70;

								else if (a[0] == 'F')
									time = time + 40;

								else if (a[0] == 'G')
									time = time + 40;

								else if (a[0] == 'H')
									time = time + 45;

								else if (a[0] == 'I')
									time = time + 55;

								else if (a[0] == 'J')
									time = time + 90;

								else if (a[0] == 'K')
									time = time + 90;

								else if (a[0] == 'L')
									time = time + 90;

								else if (a[0] == 'M')
									time = time + 90;

								else if (a[0] == 'N')
									time = time + 90;
								else if (a[0] == 'O')
									time = time + 40;
								else if (a[0] == 'P')
									time = time + 70;
								else if (a[0] == 'Q')
									time = time + 40;
								else if (a[0] == 'R')
									time = time + 35;
								else if (a[0] == 'S')
									time = time + 40;
								else if (a[0] == 'T')
									time = time + 45;
							}if (first == 'i') {
								if (a[0] == 'a')
									time = time + 35;

								else if (a[0] == 'b')
									time = time + 35;

								else if (a[0] == 'c')
									time = time + 60;

								else if (a[0] == 'd')
									time = time + 40;

								else if (a[0] == 'e')
									time = time + 35;

								else if (a[0] == 'f')
									time = time + 35;

								else if (a[0] == 'g')
									time = time + 30;

								else if (a[0] == 'h')
									time = time + 30;

								else if (a[0] == 'j')
									time = time + 10;

								else if (a[0] == 'k')
									time = time + 20;

								else if (a[0] == 'l')
									time = time + 30;

								else if (a[0] == 'm')
									time = time + 30;

								else if (a[0] == 'n')
									time = time + 30;

								else if (a[0] == 'o')
									time = time + 30;

								else if (a[0] == 'p')
									time = time + 30;

								else if (a[0] == 'q')
									time = time + 35;

								else if (a[0] == 'r')
									time = time + 35;

								else if (a[0] == 's')
									time = time + 35;

								else if (a[0] == 't')
									time = time + 20;

								else if (a[0] == 'u')
									time = time + 35;

								else if (a[0] == 'v')
									time = time + 30;

								else if (a[0] == 'w')
									time = time + 30;

								else if (a[0] == 'x')
									time = time + 15;

								else if (a[0] == 'y')
									time = time + 60;

								else if (a[0] == 'z')
									time = time + 40;

								else if (a[0] == 'A')
									time = time + 50;

								else if (a[0] == 'B')
									time = time + 35;

								else if (a[0] == 'C')
									time = time + 30;

								else if (a[0] == 'D')
									time = time + 15;

								else if (a[0] == 'E')
									time = time + 65;

								else if (a[0] == 'F')
									time = time + 35;

								else if (a[0] == 'G')
									time = time + 35;

								else if (a[0] == 'H')
									time = time + 40;

								else if (a[0] == 'I')
									time = time + 45;

								else if (a[0] == 'J')
									time = time + 90;

								else if (a[0] == 'K')
									time = time + 90;

								else if (a[0] == 'L')
									time = time + 90;

								else if (a[0] == 'M')
									time = time + 90;

								else if (a[0] == 'N')
									time = time + 90;
								else if (a[0] == 'O')
									time = time + 35;
								else if (a[0] == 'P')
									time = time + 60;
								else if (a[0] == 'Q')
									time = time + 35;
								else if (a[0] == 'S')
									time = time + 35;
								else if (a[0] == 'T')
									time = time + 30;
							} if (first == '0') {
								if (a[0] == 'a')
									time = time + 40;

								else if (a[0] == 'b')
									time = time + 40;

								else if (a[0] == 'c')
									time = time + 70;

								else if (a[0] == 'd')
									time = time + 70;

								else if (a[0] == 'e')
									time = time + 40;

								else if (a[0] == 'f')
									time = time + 40;

								else if (a[0] == 'g')
									time = time + 40;

								else if (a[0] == 'h')
									time = time + 30;

								else if (a[0] == 'i')
									time = time + 30;

								else if (a[0] == 'k')
									time = time + 30;

								else if (a[0] == 'l')
									time = time + 35;

								else if (a[0] == 'm')
									time = time + 35;

								else if (a[0] == 'n')
									time = time + 35;

								else if (a[0] == 'o')
									time = time + 35;

								else if (a[0] == 'p')
									time = time + 35;

								else if (a[0] == 'q')
									time = time + 30;

								else if (a[0] == 'r')
									time = time + 40;

								else if (a[0] == 's')
									time = time + 40;

								else if (a[0] == 't')
									time = time + 30;

								else if (a[0] == 'u')
									time = time + 25;

								else if (a[0] == 'v')
									time = time + 25;

								else if (a[0] == 'w')
									time = time + 40;

								else if (a[0] == 'x')
									time = time + 35;

								else if (a[0] == 'y')
									time = time + 70;

								else if (a[0] == 'z')
									time = time + 45;

								else if (a[0] == 'A')
									time = time + 55;

								else if (a[0] == 'B')
									time = time + 40;

								else if (a[0] == 'C')
									time = time + 25;

								else if (a[0] == 'D')
									time = time + 35;

								else if (a[0] == 'E')
									time = time + 70;

								else if (a[0] == 'F')
									time = time + 40;

								else if (a[0] == 'G')
									time = time + 40;

								else if (a[0] == 'H')
									time = time + 45;

								else if (a[0] == 'I')
									time = time + 55;

								else if (a[0] == 'J')
									time = time + 90;

								else if (a[0] == 'K')
									time = time + 90;

								else if (a[0] == 'L')
									time = time + 90;

								else if (a[0] == 'M')
									time = time + 90;

								else if (a[0] == 'N')
									time = time + 90;
								else if (a[0] == 'O')
									time = time + 30;
								else if (a[0] == 'P')
									time = time + 70;
								else if (a[0] == 'Q')
									time = time + 40;
								else if (a[0] == 'R')
									time = time + 30;
								else if (a[0] == 'S')
									time = time + 40;
								else if (a[0] == 'T')
									time = time + 35;
							} if (first == 'k') {
								if (a[0] == 'a')
									time = time + 40;

								else if (a[0] == 'b')
									time = time + 90;

								else if (a[0] == 'c')
									time = time + 90;

								else if (a[0] == 'd')
									time = time + 90;

								else if (a[0] == 'e')
									time = time + 90;

								else if (a[0] == 'f')
									time = time + 90;

								else if (a[0] == 'g')
									time = time + 35;

								else if (a[0] == 'h')
									time = time + 90;

								else if (a[0] == 'i')
									time = time + 90;

								else if (a[0] == 'j')
									time = time + 90;

								else if (a[0] == 'l')
									time = time + 35;

								else if (a[0] == 'm')
									time = time + 35;

								else if (a[0] == 'n')
									time = time + 90;

								else if (a[0] == 'o')
									time = time + 35;

								else if (a[0] == 'p')
									time = time + 35;

								else if (a[0] == 'q')
									time = time + 90;

								else if (a[0] == 'r')
									time = time + 90;

								else if (a[0] == 's')
									time = time + 90;

								else if (a[0] == 't')
									time = time + 90;

								else if (a[0] == 'u')
									time = time + 90;

								else if (a[0] == 'v')
									time = time + 35;

								else if (a[0] == 'w')
									time = time + 30;

								else if (a[0] == 'x')
									time = time + 35;

								else if (a[0] == 'y')
									time = time + 70;

								else if (a[0] == 'z')
									time = time + 90;

								else if (a[0] == 'A')
									time = time + 55;

								else if (a[0] == 'B')
									time = time + 90;

								else if (a[0] == 'C')
									time = time + 90;

								else if (a[0] == 'D')
									time = time + 45;

								else if (a[0] == 'E')
									time = time + 60;

								else if (a[0] == 'F')
									time = time + 90;

								else if (a[0] == 'G')
									time = time + 40;

								else if (a[0] == 'H')
									time = time + 90;

								else if (a[0] == 'I')
									time = time + 55;

								else if (a[0] == 'J')
									time = time + 90;

								else if (a[0] == 'K')
									time = time + 90;

								else if (a[0] == 'L')
									time = time + 90;

								else if (a[0] == 'M')
									time = time + 90;

								else if (a[0] == 'N')
									time = time + 90;
								else if (a[0] == 'O')
									time = time + 90;
								else if (a[0] == 'P')
									time = time + 90;
								else if (a[0] == 'Q')
									time = time + 90;
								else if (a[0] == 'R')
									time = time + 90;
								else if (a[0] == 'S')
									time = time + 90;
								else if (a[0] == 'T')
									time = time + 35;
							} if (first == 'l') {
								if (a[0] == 'a')
									time = time + 40;

								else if (a[0] == 'b')
									time = time + 90;

								else if (a[0] == 'c')
									time = time + 90;

								else if (a[0] == 'd')
									time = time + 90;

								else if (a[0] == 'e')
									time = time + 90;

								else if (a[0] == 'f')
									time = time + 90;

								else if (a[0] == 'g')
									time = time + 35;

								else if (a[0] == 'h')
									time = time + 90;

								else if (a[0] == 'i')
									time = time + 90;

								else if (a[0] == 'j')
									time = time + 90;

								else if (a[0] == 'k')
									time = time + 90;

								else if (a[0] == 'm')
									time = time + 90;

								else if (a[0] == 'n')
									time = time + 90;

								else if (a[0] == 'o')
									time = time + 20;

								else if (a[0] == 'p')
									time = time + 35;

								else if (a[0] == 'q')
									time = time + 90;

								else if (a[0] == 'r')
									time = time + 90;

								else if (a[0] == 's')
									time = time + 90;

								else if (a[0] == 't')
									time = time + 90;

								else if (a[0] == 'u')
									time = time + 90;

								else if (a[0] == 'v')
									time = time + 90;

								else if (a[0] == 'w')
									time = time + 55;

								else if (a[0] == 'x')
									time = time + 75;

								else if (a[0] == 'y')
									time = time + 80;

								else if (a[0] == 'z')
									time = time + 90;

								else if (a[0] == 'A')
									time = time + 90;

								else if (a[0] == 'B')
									time = time + 90;

								else if (a[0] == 'C')
									time = time + 90;

								else if (a[0] == 'D')
									time = time + 75;

								else if (a[0] == 'E')
									time = time + 90;

								else if (a[0] == 'F')
									time = time + 90;

								else if (a[0] == 'G')
									time = time + 40;

								else if (a[0] == 'H')
									time = time + 90;

								else if (a[0] == 'I')
									time = time + 90;

								else if (a[0] == 'J')
									time = time + 90;

								else if (a[0] == 'K')
									time = time + 90;

								else if (a[0] == 'L')
									time = time + 90;

								else if (a[0] == 'M')
									time = time + 90;

								else if (a[0] == 'N')
									time = time + 90;
								else if (a[0] == 'O')
									time = time + 90;
								else if (a[0] == 'P')
									time = time + 90;
								else if (a[0] == 'Q')
									time = time + 90;
								else if (a[0] == 'R')
									time = time + 90;
								else if (a[0] == 'S')
									time = time + 90;
								else if (a[0] == 'T')
									time = time + 90;
							} if (first == 'm') {
								if (a[0] == 'a')
									time = time + 40;

								else if (a[0] == 'b')
									time = time + 90;

								else if (a[0] == 'c')
									time = time + 90;

								else if (a[0] == 'd')
									time = time + 90;

								else if (a[0] == 'e')
									time = time + 90;

								else if (a[0] == 'f')
									time = time + 90;

								else if (a[0] == 'g')
									time = time + 55;

								else if (a[0] == 'h')
									time = time + 90;

								else if (a[0] == 'i')
									time = time + 90;

								else if (a[0] == 'j')
									time = time + 90;

								else if (a[0] == 'k')
									time = time + 35;

								else if (a[0] == 'l')
									time = time + 15;

								else if (a[0] == 'n')
									time = time + 90;

								else if (a[0] == 'o')
									time = time + 20;

								else if (a[0] == 'p')
									time = time + 20;

								else if (a[0] == 'q')
									time = time + 90;

								else if (a[0] == 'r')
									time = time + 90;

								else if (a[0] == 's')
									time = time + 90;

								else if (a[0] == 't')
									time = time + 90;

								else if (a[0] == 'u')
									time = time + 90;

								else if (a[0] == 'v')
									time = time + 75;

								else if (a[0] == 'w')
									time = time + 55;

								else if (a[0] == 'x')
									time = time + 75;

								else if (a[0] == 'y')
									time = time + 80;

								else if (a[0] == 'z')
									time = time + 90;

								else if (a[0] == 'A')
									time = time + 45;

								else if (a[0] == 'B')
									time = time + 90;

								else if (a[0] == 'C')
									time = time + 90;

								else if (a[0] == 'D')
									time = time + 75;

								else if (a[0] == 'E')
									time = time + 85;

								else if (a[0] == 'F')
									time = time + 90;

								else if (a[0] == 'G')
									time = time + 40;

								else if (a[0] == 'H')
									time = time + 90;

								else if (a[0] == 'I')
									time = time + 90;

								else if (a[0] == 'J')
									time = time + 90;

								else if (a[0] == 'K')
									time = time + 90;

								else if (a[0] == 'L')
									time = time + 90;

								else if (a[0] == 'M')
									time = time + 90;

								else if (a[0] == 'N')
									time = time + 90;
								else if (a[0] == 'O')
									time = time + 90;
								else if (a[0] == 'P')
									time = time + 90;
								else if (a[0] == 'Q')
									time = time + 90;
								else if (a[0] == 'R')
									time = time + 90;
								else if (a[0] == 'S')
									time = time + 90;
							} if (first == 'n') {
								if (a[0] == 'a')
									time = time + 40;

								else if (a[0] == 'b')
									time = time + 90;

								else if (a[0] == 'c')
									time = time + 90;

								else if (a[0] == 'd')
									time = time + 90;

								else if (a[0] == 'e')
									time = time + 90;

								else if (a[0] == 'f')
									time = time + 90;

								else if (a[0] == 'g')
									time = time + 55;

								else if (a[0] == 'h')
									time = time + 90;

								else if (a[0] == 'i')
									time = time + 90;

								else if (a[0] == 'j')
									time = time + 90;

								else if (a[0] == 'k')
									time = time + 90;

								else if (a[0] == 'l')
									time = time + 25;

								else if (a[0] == 'm')
									time = time + 90;

								else if (a[0] == 'o')
									time = time + 25;

								else if (a[0] == 'p')
									time = time + 25;

								else if (a[0] == 'q')
									time = time + 90;

								else if (a[0] == 'r')
									time = time + 90;

								else if (a[0] == 's')
									time = time + 90;

								else if (a[0] == 't')
									time = time + 90;

								else if (a[0] == 'u')
									time = time + 90;

								else if (a[0] == 'v')
									time = time + 90;

								else if (a[0] == 'w')
									time = time + 55;

								else if (a[0] == 'x')
									time = time + 75;

								else if (a[0] == 'y')
									time = time + 80;

								else if (a[0] == 'z')
									time = time + 90;

								else if (a[0] == 'A')
									time = time + 90;

								else if (a[0] == 'B')
									time = time + 90;

								else if (a[0] == 'C')
									time = time + 90;

								else if (a[0] == 'D')
									time = time + 75;

								else if (a[0] == 'E')
									time = time + 90;

								else if (a[0] == 'F')
									time = time + 90;

								else if (a[0] == 'G')
									time = time + 40;

								else if (a[0] == 'H')
									time = time + 90;

								else if (a[0] == 'I')
									time = time + 90;

								else if (a[0] == 'J')
									time = time + 90;

								else if (a[0] == 'K')
									time = time + 90;

								else if (a[0] == 'L')
									time = time + 90;

								else if (a[0] == 'M')
									time = time + 90;

								else if (a[0] == 'N')
									time = time + 90;
								else if (a[0] == 'O')
									time = time + 90;
								else if (a[0] == 'P')
									time = time + 90;
								else if (a[0] == 'Q')
									time = time + 90;
								else if (a[0] == 'R')
									time = time + 90;
								else if (a[0] == 'S')
									time = time + 90;
								else if (a[0] == 'T')
									time = time + 90;
							}if (first == 'o') {
								if (a[0] == 'a')
									time = time + 40;

								else if (a[0] == 'b')
									time = time + 90;

								else if (a[0] == 'c')
									time = time + 90;

								else if (a[0] == 'd')
									time = time + 90;

								else if (a[0] == 'e')
									time = time + 90;

								else if (a[0] == 'f')
									time = time + 90;

								else if (a[0] == 'g')
									time = time + 55;

								else if (a[0] == 'h')
									time = time + 90;

								else if (a[0] == 'i')
									time = time + 90;

								else if (a[0] == 'j')
									time = time + 90;

								else if (a[0] == 'k')
									time = time + 90;

								else if (a[0] == 'l')
									time = time + 25;

								else if (a[0] == 'm')
									time = time + 90;

								else if (a[0] == 'n')
									time = time + 90;

								else if (a[0] == 'p')
									time = time + 25;

								else if (a[0] == 'q')
									time = time + 90;

								else if (a[0] == 'r')
									time = time + 90;

								else if (a[0] == 's')
									time = time + 90;

								else if (a[0] == 't')
									time = time + 90;

								else if (a[0] == 'u')
									time = time + 90;

								else if (a[0] == 'v')
									time = time + 90;

								else if (a[0] == 'w')
									time = time + 55;

								else if (a[0] == 'x')
									time = time + 75;

								else if (a[0] == 'y')
									time = time + 80;

								else if (a[0] == 'z')
									time = time + 90;

								else if (a[0] == 'A')
									time = time + 90;

								else if (a[0] == 'B')
									time = time + 90;

								else if (a[0] == 'C')
									time = time + 90;

								else if (a[0] == 'D')
									time = time + 75;

								else if (a[0] == 'E')
									time = time + 90;

								else if (a[0] == 'F')
									time = time + 90;

								else if (a[0] == 'G')
									time = time + 40;

								else if (a[0] == 'H')
									time = time + 90;

								else if (a[0] == 'I')
									time = time + 70;

								else if (a[0] == 'J')
									time = time + 90;

								else if (a[0] == 'K')
									time = time + 90;

								else if (a[0] == 'L')
									time = time + 90;

								else if (a[0] == 'M')
									time = time + 90;

								else if (a[0] == 'N')
									time = time + 90;
								else if (a[0] == 'O')
									time = time + 90;
								else if (a[0] == 'P')
									time = time + 90;
								else if (a[0] == 'Q')
									time = time + 90;
								else if (a[0] == 'R')
									time = time + 90;
								else if (a[0] == 'S')
									time = time + 90;
								else if (a[0] == 'T')
									time = time + 90;
							} if (first == 'p') {
								if (a[0] == 'a')
									time = time + 40;

								else if (a[0] == 'b')
									time = time + 90;

								else if (a[0] == 'c')
									time = time + 90;

								else if (a[0] == 'd')
									time = time + 90;

								else if (a[0] == 'e')
									time = time + 90;

								else if (a[0] == 'f')
									time = time + 90;

								else if (a[0] == 'g')
									time = time + 55;

								else if (a[0] == 'h')
									time = time + 90;

								else if (a[0] == 'i')
									time = time + 90;

								else if (a[0] == 'j')
									time = time + 90;

								else if (a[0] == 'k')
									time = time + 90;

								else if (a[0] == 'l')
									time = time + 25;

								else if (a[0] == 'm')
									time = time + 90;

								else if (a[0] == 'n')
									time = time + 90;

								else if (a[0] == 'o')
									time = time + 20;

								else if (a[0] == 'q')
									time = time + 90;

								else if (a[0] == 'r')
									time = time + 90;

								else if (a[0] == 's')
									time = time + 90;

								else if (a[0] == 't')
									time = time + 90;

								else if (a[0] == 'u')
									time = time + 90;

								else if (a[0] == 'v')
									time = time + 90;

								else if (a[0] == 'w')
									time = time + 45;

								else if (a[0] == 'x')
									time = time + 75;

								else if (a[0] == 'y')
									time = time + 80;

								else if (a[0] == 'z')
									time = time + 90;

								else if (a[0] == 'A')
									time = time + 90;

								else if (a[0] == 'B')
									time = time + 90;

								else if (a[0] == 'C')
									time = time + 90;

								else if (a[0] == 'D')
									time = time + 75;

								else if (a[0] == 'E')
									time = time + 90;

								else if (a[0] == 'F')
									time = time + 90;

								else if (a[0] == 'G')
									time = time + 40;

								else if (a[0] == 'H')
									time = time + 90;

								else if (a[0] == 'I')
									time = time + 90;

								else if (a[0] == 'J')
									time = time + 90;

								else if (a[0] == 'K')
									time = time + 90;

								else if (a[0] == 'L')
									time = time + 90;

								else if (a[0] == 'M')
									time = time + 90;

								else if (a[0] == 'N')
									time = time + 90;
								else if (a[0] == 'O')
									time = time + 90;
								else if (a[0] == 'P')
									time = time + 90;
								else if (a[0] == 'Q')
									time = time + 90;
								else if (a[0] == 'R')
									time = time + 90;
								else if (a[0] == 'S')
									time = time + 90;
								else if (a[0] == 'T')
									time = time + 90;
							} if (first == 'q') {
								if (a[0] == 'a')
									time = time + 40;

								else if (a[0] == 'b')
									time = time + 90;

								else if (a[0] == 'c')
									time = time + 90;

								else if (a[0] == 'd')
									time = time + 90;

								else if (a[0] == 'e')
									time = time + 90;

								else if (a[0] == 'f')
									time = time + 90;

								else if (a[0] == 'g')
									time = time + 45;

								else if (a[0] == 'h')
									time = time + 90;

								else if (a[0] == 'i')
									time = time + 90;

								else if (a[0] == 'j')
									time = time + 90;

								else if (a[0] == 'k')
									time = time + 40;

								else if (a[0] == 'l')
									time = time + 55;

								else if (a[0] == 'm')
									time = time + 40;

								else if (a[0] == 'n')
									time = time + 35;

								else if (a[0] == 'o')
									time = time + 35;

								else if (a[0] == 'p')
									time = time + 55;

								else if (a[0] == 'r')
									time = time + 15;

								else if (a[0] == 's')
									time = time + 25;

								else if (a[0] == 't')
									time = time + 90;

								else if (a[0] == 'u')
									time = time + 90;

								else if (a[0] == 'v')
									time = time + 30;

								else if (a[0] == 'w')
									time = time + 45;

								else if (a[0] == 'x')
									time = time + 45;

								else if (a[0] == 'y')
									time = time + 70;

								else if (a[0] == 'z')
									time = time + 90;

								else if (a[0] == 'A')
									time = time + 40;

								else if (a[0] == 'B')
									time = time + 25;

								else if (a[0] == 'C')
									time = time + 90;

								else if (a[0] == 'D')
									time = time + 45;

								else if (a[0] == 'E')
									time = time + 70;

								else if (a[0] == 'F')
									time = time + 90;

								else if (a[0] == 'G')
									time = time + 40;

								else if (a[0] == 'H')
									time = time + 90;

								else if (a[0] == 'I')
									time = time + 55;

								else if (a[0] == 'J')
									time = time + 90;

								else if (a[0] == 'K')
									time = time + 55;

								else if (a[0] == 'L')
									time = time + 55;

								else if (a[0] == 'M')
									time = time + 55;

								else if (a[0] == 'N')
									time = time + 55;
								else if (a[0] == 'P')
									time = time + 90;
								else if (a[0] == 'Q')
									time = time + 90;
								else if (a[0] == 'R')
									time = time + 90;
								else if (a[0] == 'S')
									time = time + 25;
								else if (a[0] == 'T')
									time = time + 40;
							} if (first == 'r') {
								if (a[0] == 'a')
									time = time + 40;

								else if (a[0] == 'b')
									time = time + 90;

								else if (a[0] == 'c')
									time = time + 90;

								else if (a[0] == 'd')
									time = time + 90;

								else if (a[0] == 'e')
									time = time + 90;

								else if (a[0] == 'f')
									time = time + 90;

								else if (a[0] == 'g')
									time = time + 45;

								else if (a[0] == 'h')
									time = time + 90;

								else if (a[0] == 'i')
									time = time + 90;

								else if (a[0] == 'j')
									time = time + 90;

								else if (a[0] == 'k')
									time = time + 40;

								else if (a[0] == 'l')
									time = time + 55;

								else if (a[0] == 'm')
									time = time + 55;

								else if (a[0] == 'n')
									time = time + 55;

								else if (a[0] == 'o')
									time = time + 55;

								else if (a[0] == 'p')
									time = time + 55;

								else if (a[0] == 'q')
									time = time + 30;

								else if (a[0] == 's')
									time = time + 25;

								else if (a[0] == 't')
									time = time + 90;

								else if (a[0] == 'u')
									time = time + 90;

								else if (a[0] == 'v')
									time = time + 50;

								else if (a[0] == 'w')
									time = time + 45;

								else if (a[0] == 'x')
									time = time + 45;

								else if (a[0] == 'y')
									time = time + 70;

								else if (a[0] == 'z')
									time = time + 90;

								else if (a[0] == 'A')
									time = time + 55;

								else if (a[0] == 'B')
									time = time + 35;

								else if (a[0] == 'C')
									time = time + 90;

								else if (a[0] == 'D')
									time = time + 45;

								else if (a[0] == 'E')
									time = time + 70;

								else if (a[0] == 'F')
									time = time + 90;

								else if (a[0] == 'G')
									time = time + 40;

								else if (a[0] == 'H')
									time = time + 90;

								else if (a[0] == 'I')
									time = time + 55;

								else if (a[0] == 'J')
									time = time + 35;

								else if (a[0] == 'K')
									time = time + 90;

								else if (a[0] == 'L')
									time = time + 90;

								else if (a[0] == 'M')
									time = time + 55;

								else if (a[0] == 'N')
									time = time + 55;
								else if (a[0] == 'O')
									time = time + 30;
								else if (a[0] == 'P')
									time = time + 90;
								else if (a[0] == 'Q')
									time = time + 90;
								else if (a[0] == 'R')
									time = time + 90;
								else if (a[0] == 'S')
									time = time + 35;
								else if (a[0] == 'T')
									time = time + 55;
							} if (first == 's') {
								if (a[0] == 'a')
									time = time + 40;

								else if (a[0] == 'b')
									time = time + 90;

								else if (a[0] == 'c')
									time = time + 90;

								else if (a[0] == 'd')
									time = time + 90;

								else if (a[0] == 'e')
									time = time + 90;

								else if (a[0] == 'f')
									time = time + 90;

								else if (a[0] == 'g')
									time = time + 45;

								else if (a[0] == 'h')
									time = time + 90;

								else if (a[0] == 'i')
									time = time + 90;

								else if (a[0] == 'j')
									time = time + 90;

								else if (a[0] == 'k')
									time = time + 40;

								else if (a[0] == 'l')
									time = time + 55;

								else if (a[0] == 'm')
									time = time + 40;

								else if (a[0] == 'n')
									time = time + 40;

								else if (a[0] == 'o')
									time = time + 40;

								else if (a[0] == 'p')
									time = time + 55;

								else if (a[0] == 'q')
									time = time + 40;

								else if (a[0] == 'r')
									time = time + 35;

								else if (a[0] == 't')
									time = time + 90;

								else if (a[0] == 'u')
									time = time + 90;

								else if (a[0] == 'v')
									time = time + 35;

								else if (a[0] == 'w')
									time = time + 45;

								else if (a[0] == 'x')
									time = time + 45;

								else if (a[0] == 'y')
									time = time + 70;

								else if (a[0] == 'z')
									time = time + 90;

								else if (a[0] == 'A')
									time = time + 55;

								else if (a[0] == 'B')
									time = time + 30;

								else if (a[0] == 'C')
									time = time + 90;

								else if (a[0] == 'D')
									time = time + 45;

								else if (a[0] == 'E')
									time = time + 70;

								else if (a[0] == 'F')
									time = time + 90;

								else if (a[0] == 'G')
									time = time + 40;

								else if (a[0] == 'H')
									time = time + 90;

								else if (a[0] == 'I')
									time = time + 55;

								else if (a[0] == 'J')
									time = time + 55;

								else if (a[0] == 'K')
									time = time + 90;

								else if (a[0] == 'L')
									time = time + 55;

								else if (a[0] == 'M')
									time = time + 55;

								else if (a[0] == 'N')
									time = time + 55;
								else if (a[0] == 'O')
									time = time + 40;
								else if (a[0] == 'P')
									time = time + 90;
								else if (a[0] == 'Q')
									time = time + 90;
								else if (a[0] == 'R')
									time = time + 90;
								else if (a[0] == 'S')
									time = time + 30;
								else if (a[0] == 'T')
									time = time + 40;
							} if (first == 't') {
								if (a[0] == 'a')
									time = time + 40;

								else if (a[0] == 'b')
									time = time + 40;

								else if (a[0] == 'c')
									time = time + 70;

								else if (a[0] == 'd')
									time = time + 70;

								else if (a[0] == 'e')
									time = time + 40;

								else if (a[0] == 'f')
									time = time + 40;

								else if (a[0] == 'g')
									time = time + 40;

								else if (a[0] == 'h')
									time = time + 90;

								else if (a[0] == 'i')
									time = time + 30;

								else if (a[0] == 'j')
									time = time + 30;

								else if (a[0] == 'k')
									time = time + 30;

								else if (a[0] == 'l')
									time = time + 35;

								else if (a[0] == 'm')
									time = time + 35;

								else if (a[0] == 'n')
									time = time + 35;

								else if (a[0] == 'o')
									time = time + 35;

								else if (a[0] == 'p')
									time = time + 35;

								else if (a[0] == 'q')
									time = time + 40;

								else if (a[0] == 'r')
									time = time + 40;

								else if (a[0] == 's')
									time = time + 40;

								else if (a[0] == 'u')
									time = time + 40;

								else if (a[0] == 'v')
									time = time + 35;

								else if (a[0] == 'w')
									time = time + 40;

								else if (a[0] == 'x')
									time = time + 35;

								else if (a[0] == 'y')
									time = time + 70;

								else if (a[0] == 'z')
									time = time + 45;

								else if (a[0] == 'A')
									time = time + 55;

								else if (a[0] == 'B')
									time = time + 40;

								else if (a[0] == 'C')
									time = time + 40;

								else if (a[0] == 'D')
									time = time + 35;

								else if (a[0] == 'E')
									time = time + 70;

								else if (a[0] == 'F')
									time = time + 40;

								else if (a[0] == 'G')
									time = time + 40;

								else if (a[0] == 'H')
									time = time + 45;

								else if (a[0] == 'I')
									time = time + 55;

								else if (a[0] == 'J')
									time = time + 55;

								else if (a[0] == 'K')
									time = time + 55;

								else if (a[0] == 'L')
									time = time + 55;

								else if (a[0] == 'M')
									time = time + 55;

								else if (a[0] == 'N')
									time = time + 55;
								else if (a[0] == 'O')
									time = time + 40;
								else if (a[0] == 'P')
									time = time + 70;
								else if (a[0] == 'Q')
									time = time + 40;
								else if (a[0] == 'R')
									time = time + 30;
								else if (a[0] == 'S')
									time = time + 40;
								else if (a[0] == 'T')
									time = time + 35;
							} if (first == 'u') {
								if (a[0] == 'a')
									time = time + 65;

								else if (a[0] == 'b')
									time = time + 65;

								else if (a[0] == 'c')
									time = time + 80;

								else if (a[0] == 'd')
									time = time + 55;

								else if (a[0] == 'e')
									time = time + 65;

								else if (a[0] == 'f')
									time = time + 55;

								else if (a[0] == 'g')
									time = time + 70;

								else if (a[0] == 'h')
									time = time + 55;

								else if (a[0] == 'i')
									time = time + 55;

								else if (a[0] == 'j')
									time = time + 55;

								else if (a[0] == 'k')
									time = time + 45;

								else if (a[0] == 'l')
									time = time + 60;

								else if (a[0] == 'm')
									time = time + 50;

								else if (a[0] == 'n')
									time = time + 60;

								else if (a[0] == 'o')
									time = time + 60;

								else if (a[0] == 'p')
									time = time + 60;

								else if (a[0] == 'q')
									time = time + 60;

								else if (a[0] == 'r')
									time = time + 65;

								else if (a[0] == 's')
									time = time + 65;

								else if (a[0] == 't')
									time = time + 55;

								else if (a[0] == 'v')
									time = time + 70;

								else if (a[0] == 'w')
									time = time + 70;

								else if (a[0] == 'x')
									time = time + 70;

								else if (a[0] == 'y')
									time = time + 80;

								else if (a[0] == 'z')
									time = time + 70;

								else if (a[0] == 'A')
									time = time + 70;

								else if (a[0] == 'B')
									time = time + 55;

								else if (a[0] == 'C')
									time = time + 45;

								else if (a[0] == 'D')
									time = time + 70;

								else if (a[0] == 'E')
									time = time + 80;

								else if (a[0] == 'F')
									time = time + 65;

								else if (a[0] == 'G')
									time = time + 65;

								else if (a[0] == 'H')
									time = time + 70;

								else if (a[0] == 'I')
									time = time + 70;

								else if (a[0] == 'J')
									time = time + 55;

								else if (a[0] == 'K')
									time = time + 55;

								else if (a[0] == 'L')
									time = time + 55;

								else if (a[0] == 'M')
									time = time + 55;

								else if (a[0] == 'N')
									time = time + 55;
								else if (a[0] == 'O')
									time = time + 60;
								else if (a[0] == 'P')
									time = time + 80;
								else if (a[0] == 'Q')
									time = time + 65;
								else if (a[0] == 'R')
									time = time + 55;
								else if (a[0] == 'S')
									time = time + 55;
								else if (a[0] == 'T')
									time = time + 50;
							}if (first == 'v') {
								if (a[0] == 'a')
									time = time + 35;

								else if (a[0] == 'b')
									time = time + 90;

								else if (a[0] == 'c')
									time = time + 90;

								else if (a[0] == 'd')
									time = time + 90;

								else if (a[0] == 'e')
									time = time + 90;

								else if (a[0] == 'f')
									time = time + 90;

								else if (a[0] == 'g')
									time = time + 50;

								else if (a[0] == 'h')
									time = time + 90;

								else if (a[0] == 'i')
									time = time + 90;

								else if (a[0] == 'j')
									time = time + 90;

								else if (a[0] == 'k')
									time = time + 45;

								else if (a[0] == 'l')
									time = time + 70;

								else if (a[0] == 'm')
									time = time + 55;

								else if (a[0] == 'n')
									time = time + 90;

								else if (a[0] == 'o')
									time = time + 60;

								else if (a[0] == 'p')
									time = time + 60;

								else if (a[0] == 'q')
									time = time + 90;

								else if (a[0] == 'r')
									time = time + 90;

								else if (a[0] == 's')
									time = time + 90;

								else if (a[0] == 't')
									time = time + 90;

								else if (a[0] == 'u')
									time = time + 90;

								else if (a[0] == 'w')
									time = time + 50;

								else if (a[0] == 'x')
									time = time + 45;

								else if (a[0] == 'y')
									time = time + 60;

								else if (a[0] == 'z')
									time = time + 90;

								else if (a[0] == 'A')
									time = time + 50;

								else if (a[0] == 'B')
									time = time + 90;

								else if (a[0] == 'C')
									time = time + 90;

								else if (a[0] == 'D')
									time = time + 60;

								else if (a[0] == 'E')
									time = time + 100;

								else if (a[0] == 'F')
									time = time + 90;

								else if (a[0] == 'G')
									time = time + 55;

								else if (a[0] == 'H')
									time = time + 90;

								else if (a[0] == 'I')
									time = time + 70;

								else if (a[0] == 'J')
									time = time + 90;

								else if (a[0] == 'K')
									time = time + 90;

								else if (a[0] == 'L')
									time = time + 55;

								else if (a[0] == 'M')
									time = time + 90;

								else if (a[0] == 'N')
									time = time + 55;
								else if (a[0] == 'O')
									time = time + 90;
								else if (a[0] == 'P')
									time = time + 90;
								else if (a[0] == 'Q')
									time = time + 90;
								else if (a[0] == 'R')
									time = time + 90;
								else if (a[0] == 'S')
									time = time + 90;
								else if (a[0] == 'T')
									time = time + 55;
							} if (first == 'w') {
								if (a[0] == 'a')
									time = time + 90;

								else if (a[0] == 'b')
									time = time + 90;

								else if (a[0] == 'c')
									time = time + 90;

								else if (a[0] == 'd')
									time = time + 90;

								else if (a[0] == 'e')
									time = time + 90;

								else if (a[0] == 'f')
									time = time + 90;

								else if (a[0] == 'g')
									time = time + 90;

								else if (a[0] == 'h')
									time = time + 90;

								else if (a[0] == 'i')
									time = time + 90;

								else if (a[0] == 'j')
									time = time + 90;

								else if (a[0] == 'k')
									time = time + 90;

								else if (a[0] == 'l')
									time = time + 90;

								else if (a[0] == 'm')
									time = time + 90;

								else if (a[0] == 'n')
									time = time + 90;

								else if (a[0] == 'o')
									time = time + 90;

								else if (a[0] == 'p')
									time = time + 90;

								else if (a[0] == 'q')
									time = time + 90;

								else if (a[0] == 'r')
									time = time + 90;

								else if (a[0] == 's')
									time = time + 90;

								else if (a[0] == 't')
									time = time + 90;

								else if (a[0] == 'u')
									time = time + 90;

								else if (a[0] == 'v')
									time = time + 90;

								else if (a[0] == 'x')
									time = time + 90;

								else if (a[0] == 'y')
									time = time + 90;

								else if (a[0] == 'z')
									time = time + 90;

								else if (a[0] == 'A')
									time = time + 90;

								else if (a[0] == 'B')
									time = time + 90;

								else if (a[0] == 'C')
									time = time + 90;

								else if (a[0] == 'D')
									time = time + 90;

								else if (a[0] == 'E')
									time = time + 90;

								else if (a[0] == 'F')
									time = time + 90;

								else if (a[0] == 'G')
									time = time + 90;

								else if (a[0] == 'H')
									time = time + 90;

								else if (a[0] == 'I')
									time = time + 90;

								else if (a[0] == 'J')
									time = time + 90;

								else if (a[0] == 'K')
									time = time + 90;

								else if (a[0] == 'L')
									time = time + 90;

								else if (a[0] == 'M')
									time = time + 90;

								else if (a[0] == 'N')
									time = time + 90;
								else if (a[0] == 'O')
									time = time + 90;
								else if (a[0] == 'P')
									time = time + 90;
								else if (a[0] == 'Q')
									time = time + 90;
								else if (a[0] == 'R')
									time = time + 90;
								else if (a[0] == 'S')
									time = time + 90;
								else if (a[0] == 'T')
									time = time + 90;
							} if (first == 'x') {
								if (a[0] == 'a')
									time = time + 55;

								else if (a[0] == 'b')
									time = time + 90;

								else if (a[0] == 'c')
									time = time + 90;

								else if (a[0] == 'd')
									time = time + 90;

								else if (a[0] == 'e')
									time = time + 90;

								else if (a[0] == 'f')
									time = time + 90;

								else if (a[0] == 'g')
									time = time + 50;

								else if (a[0] == 'h')
									time = time + 90;

								else if (a[0] == 'i')
									time = time + 90;

								else if (a[0] == 'j')
									time = time + 90;

								else if (a[0] == 'k')
									time = time + 90;

								else if (a[0] == 'l')
									time = time + 70;

								else if (a[0] == 'm')
									time = time + 90;

								else if (a[0] == 'n')
									time = time + 90;

								else if (a[0] == 'o')
									time = time + 70;

								else if (a[0] == 'p')
									time = time + 70;

								else if (a[0] == 'q')
									time = time + 90;

								else if (a[0] == 'r')
									time = time + 90;

								else if (a[0] == 's')
									time = time + 90;

								else if (a[0] == 't')
									time = time + 90;

								else if (a[0] == 'u')
									time = time + 90;

								else if (a[0] == 'v')
									time = time + 90;

								else if (a[0] == 'w')
									time = time + 50;

								else if (a[0] == 'y')
									time = time + 60;

								else if (a[0] == 'z')
									time = time + 90;

								else if (a[0] == 'A')
									time = time + 90;

								else if (a[0] == 'B')
									time = time + 90;

								else if (a[0] == 'C')
									time = time + 90;

								else if (a[0] == 'D')
									time = time + 30;

								else if (a[0] == 'E')
									time = time + 90;

								else if (a[0] == 'F')
									time = time + 90;

								else if (a[0] == 'G')
									time = time + 55;

								else if (a[0] == 'H')
									time = time + 90;

								else if (a[0] == 'I')
									time = time + 70;

								else if (a[0] == 'J')
									time = time + 90;

								else if (a[0] == 'K')
									time = time + 90;

								else if (a[0] == 'L')
									time = time + 55;

								else if (a[0] == 'M')
									time = time + 90;

								else if (a[0] == 'N')
									time = time + 90;
								else if (a[0] == 'O')
									time = time + 90;
								else if (a[0] == 'P')
									time = time + 90;
								else if (a[0] == 'Q')
									time = time + 90;
								else if (a[0] == 'R')
									time = time + 90;
								else if (a[0] == 'S')
									time = time + 90;
								else if (a[0] == 'T')
									time = time + 90;
							} if (first == 'y') {
								if (a[0] == 'a')
									time = time + 45;

								else if (a[0] == 'b')
									time = time + 90;

								else if (a[0] == 'c')
									time = time + 90;

								else if (a[0] == 'd')
									time = time + 90;

								else if (a[0] == 'e')
									time = time + 90;

								else if (a[0] == 'f')
									time = time + 90;

								else if (a[0] == 'g')
									time = time + 50;

								else if (a[0] == 'h')
									time = time + 90;

								else if (a[0] == 'i')
									time = time + 90;

								else if (a[0] == 'j')
									time = time + 90;

								else if (a[0] == 'k')
									time = time + 90;

								else if (a[0] == 'l')
									time = time + 80;

								else if (a[0] == 'm')
									time = time + 90;

								else if (a[0] == 'n')
									time = time + 90;

								else if (a[0] == 'o')
									time = time + 80;

								else if (a[0] == 'p')
									time = time + 80;

								else if (a[0] == 'q')
									time = time + 90;

								else if (a[0] == 'r')
									time = time + 90;

								else if (a[0] == 's')
									time = time + 90;

								else if (a[0] == 't')
									time = time + 90;

								else if (a[0] == 'u')
									time = time + 90;

								else if (a[0] == 'v')
									time = time + 90;

								else if (a[0] == 'w')
									time = time + 50;

								else if (a[0] == 'x')
									time = time + 60;

								else if (a[0] == 'z')
									time = time + 90;

								else if (a[0] == 'A')
									time = time + 90;

								else if (a[0] == 'B')
									time = time + 90;

								else if (a[0] == 'C')
									time = time + 90;

								else if (a[0] == 'D')
									time = time + 70;

								else if (a[0] == 'E')
									time = time + 90;

								else if (a[0] == 'F')
									time = time + 90;

								else if (a[0] == 'G')
									time = time + 65;

								else if (a[0] == 'H')
									time = time + 90;

								else if (a[0] == 'I')
									time = time + 70;

								else if (a[0] == 'J')
									time = time + 90;

								else if (a[0] == 'K')
									time = time + 90;

								else if (a[0] == 'L')
									time = time + 55;

								else if (a[0] == 'M')
									time = time + 90;

								else if (a[0] == 'N')
									time = time + 90;
								else if (a[0] == 'O')
									time = time + 90;
								else if (a[0] == 'P')
									time = time + 90;
								else if (a[0] == 'Q')
									time = time + 90;
								else if (a[0] == 'R')
									time = time + 90;
								else if (a[0] == 'S')
									time = time + 90;
								else if (a[0] == 'T')
									time = time + 90;
							} if (first == 'z') {
								if (a[0] == 'a')
									time = time + 65;

								else if (a[0] == 'b')
									time = time + 65;

								else if (a[0] == 'c')
									time = time + 80;

								else if (a[0] == 'd')
									time = time + 80;

								else if (a[0] == 'e')
									time = time + 65;

								else if (a[0] == 'f')
									time = time + 65;

								else if (a[0] == 'g')
									time = time + 70;

								else if (a[0] == 'h')
									time = time + 50;

								else if (a[0] == 'i')
									time = time + 65;

								else if (a[0] == 'j')
									time = time + 65;

								else if (a[0] == 'k')
									time = time + 65;

								else if (a[0] == 'l')
									time = time + 70;

								else if (a[0] == 'm')
									time = time + 70;

								else if (a[0] == 'n')
									time = time + 60;

								else if (a[0] == 'o')
									time = time + 70;

								else if (a[0] == 'p')
									time = time + 70;

								else if (a[0] == 'q')
									time = time + 50;

								else if (a[0] == 'r')
									time = time + 55;

								else if (a[0] == 's')
									time = time + 65;

								else if (a[0] == 't')
									time = time + 65;

								else if (a[0] == 'u')
									time = time + 70;

								else if (a[0] == 'v')
									time = time + 70;

								else if (a[0] == 'w')
									time = time + 70;

								else if (a[0] == 'x')
									time = time + 70;

								else if (a[0] == 'y')
									time = time + 80;

								else if (a[0] == 'A')
									time = time + 70;

								else if (a[0] == 'B')
									time = time + 65;

								else if (a[0] == 'C')
									time = time + 70;

								else if (a[0] == 'D')
									time = time + 70;

								else if (a[0] == 'E')
									time = time + 80;

								else if (a[0] == 'F')
									time = time + 65;

								else if (a[0] == 'G')
									time = time + 65;

								else if (a[0] == 'H')
									time = time + 70;

								else if (a[0] == 'I')
									time = time + 70;

								else if (a[0] == 'J')
									time = time + 55;

								else if (a[0] == 'K')
									time = time + 55;

								else if (a[0] == 'L')
									time = time + 55;

								else if (a[0] == 'M')
									time = time + 55;

								else if (a[0] == 'N')
									time = time + 55;
								else if (a[0] == 'O')
									time = time + 50;
								else if (a[0] == 'P')
									time = time + 80;
								else if (a[0] == 'Q')
									time = time + 65;
								else if (a[0] == 'R')
									time = time + 65;
								else if (a[0] == 'S')
									time = time + 65;
								else if (a[0] == 'T')
									time = time + 70;
							} if (first == 'A') {
								if (a[0] == 'a')
									time = time + 40;

								else if (a[0] == 'b')
									time = time + 90;

								else if (a[0] == 'c')
									time = time + 90;

								else if (a[0] == 'd')
									time = time + 90;

								else if (a[0] == 'e')
									time = time + 90;

								else if (a[0] == 'f')
									time = time + 90;

								else if (a[0] == 'g')
									time = time + 45;

								else if (a[0] == 'h')
									time = time + 90;

								else if (a[0] == 'i')
									time = time + 90;

								else if (a[0] == 'j')
									time = time + 90;

								else if (a[0] == 'k')
									time = time + 30;

								else if (a[0] == 'l')
									time = time + 75;

								else if (a[0] == 'm')
									time = time + 90;

								else if (a[0] == 'n')
									time = time + 90;

								else if (a[0] == 'o')
									time = time + 75;

								else if (a[0] == 'p')
									time = time + 75;

								else if (a[0] == 'q')
									time = time + 90;

								else if (a[0] == 'r')
									time = time + 90;

								else if (a[0] == 's')
									time = time + 90;

								else if (a[0] == 't')
									time = time + 90;

								else if (a[0] == 'u')
									time = time + 90;

								else if (a[0] == 'v')
									time = time + 90;

								else if (a[0] == 'w')
									time = time + 60;

								else if (a[0] == 'x')
									time = time + 90;

								else if (a[0] == 'y')
									time = time + 100;

								else if (a[0] == 'z')
									time = time + 90;

								else if (a[0] == 'B')
									time = time + 90;

								else if (a[0] == 'C')
									time = time + 90;

								else if (a[0] == 'D')
									time = time + 90;

								else if (a[0] == 'E')
									time = time + 85;

								else if (a[0] == 'F')
									time = time + 90;

								else if (a[0] == 'G')
									time = time + 40;

								else if (a[0] == 'H')
									time = time + 90;

								else if (a[0] == 'I')
									time = time + 90;

								else if (a[0] == 'J')
									time = time + 90;

								else if (a[0] == 'K')
									time = time + 90;

								else if (a[0] == 'L')
									time = time + 90;

								else if (a[0] == 'M')
									time = time + 90;

								else if (a[0] == 'N')
									time = time + 55;
								else if (a[0] == 'O')
									time = time + 90;
								else if (a[0] == 'P')
									time = time + 90;
								else if (a[0] == 'Q')
									time = time + 90;
								else if (a[0] == 'R')
									time = time + 90;
								else if (a[0] == 'S')
									time = time + 90;
								else if (a[0] == 'T')
									time = time + 90;
							} if (first == 'B') {
								if (a[0] == 'a')
									time = time + 40;

								else if (a[0] == 'b')
									time = time + 90;

								else if (a[0] == 'c')
									time = time + 90;

								else if (a[0] == 'd')
									time = time + 90;

								else if (a[0] == 'e')
									time = time + 90;

								else if (a[0] == 'f')
									time = time + 90;

								else if (a[0] == 'g')
									time = time + 45;

								else if (a[0] == 'h')
									time = time + 90;

								else if (a[0] == 'i')
									time = time + 90;

								else if (a[0] == 'j')
									time = time + 90;

								else if (a[0] == 'k')
									time = time + 40;

								else if (a[0] == 'l')
									time = time + 55;

								else if (a[0] == 'm')
									time = time + 55;

								else if (a[0] == 'n')
									time = time + 55;

								else if (a[0] == 'o')
									time = time + 55;

								else if (a[0] == 'p')
									time = time + 55;

								else if (a[0] == 'q')
									time = time + 35;

								else if (a[0] == 'r')
									time = time + 40;

								else if (a[0] == 's')
									time = time + 15;

								else if (a[0] == 't')
									time = time + 90;

								else if (a[0] == 'u')
									time = time + 90;

								else if (a[0] == 'v')
									time = time + 30;

								else if (a[0] == 'w')
									time = time + 45;

								else if (a[0] == 'x')
									time = time + 45;

								else if (a[0] == 'y')
									time = time + 70;

								else if (a[0] == 'z')
									time = time + 90;

								else if (a[0] == 'A')
									time = time + 55;

								else if (a[0] == 'C')
									time = time + 90;

								else if (a[0] == 'D')
									time = time + 45;

								else if (a[0] == 'E')
									time = time + 70;

								else if (a[0] == 'F')
									time = time + 90;

								else if (a[0] == 'G')
									time = time + 40;

								else if (a[0] == 'H')
									time = time + 90;

								else if (a[0] == 'I')
									time = time + 55;

								else if (a[0] == 'J')
									time = time + 55;

								else if (a[0] == 'K')
									time = time + 90;

								else if (a[0] == 'L')
									time = time + 55;

								else if (a[0] == 'M')
									time = time + 55;

								else if (a[0] == 'N')
									time = time + 55;
								else if (a[0] == 'O')
									time = time + 35;
								else if (a[0] == 'P')
									time = time + 90;
								else if (a[0] == 'Q')
									time = time + 90;
								else if (a[0] == 'R')
									time = time + 90;
								else if (a[0] == 'T')
									time = time + 55;
							} if (first == 'C') {
								if (a[0] == 'a')
									time = time + 65;

								else if (a[0] == 'b')
									time = time + 50;

								else if (a[0] == 'c')
									time = time + 80;

								else if (a[0] == 'd')
									time = time + 80;

								else if (a[0] == 'e')
									time = time + 65;

								else if (a[0] == 'f')
									time = time + 65;

								else if (a[0] == 'g')
									time = time + 30;

								else if (a[0] == 'h')
									time = time + 35;

								else if (a[0] == 'i')
									time = time + 55;

								else if (a[0] == 'j')
									time = time + 55;

								else if (a[0] == 'k')
									time = time + 40;

								else if (a[0] == 'l')
									time = time + 60;

								else if (a[0] == 'm')
									time = time + 40;

								else if (a[0] == 'n')
									time = time + 60;

								else if (a[0] == 'o')
									time = time + 60;

								else if (a[0] == 'p')
									time = time + 60;

								else if (a[0] == 'q')
									time = time + 50;

								else if (a[0] == 'r')
									time = time + 65;

								else if (a[0] == 's')
									time = time + 45;

								else if (a[0] == 't')
									time = time + 55;

								else if (a[0] == 'u')
									time = time + 30;

								else if (a[0] == 'v')
									time = time + 45;

								else if (a[0] == 'w')
									time = time + 70;

								else if (a[0] == 'x')
									time = time + 45;

								else if (a[0] == 'y')
									time = time + 80;

								else if (a[0] == 'z')
									time = time + 70;

								else if (a[0] == 'A')
									time = time + 70;

								else if (a[0] == 'B')
									time = time + 50;

								else if (a[0] == 'D')
									time = time + 70;

								else if (a[0] == 'E')
									time = time + 80;

								else if (a[0] == 'F')
									time = time + 65;

								else if (a[0] == 'G')
									time = time + 65;

								else if (a[0] == 'H')
									time = time + 70;

								else if (a[0] == 'I')
									time = time + 65;

								else if (a[0] == 'J')
									time = time + 55;

								else if (a[0] == 'K')
									time = time + 90;

								else if (a[0] == 'L')
									time = time + 55;

								else if (a[0] == 'M')
									time = time + 55;

								else if (a[0] == 'N')
									time = time + 55;
								else if (a[0] == 'O')
									time = time + 50;
								else if (a[0] == 'P')
									time = time + 90;
								else if (a[0] == 'Q')
									time = time + 65;
								else if (a[0] == 'R')
									time = time + 55;
								else if (a[0] == 'S')
									time = time + 50;
								else if (a[0] == 'T')
									time = time + 40;
							} if (first == 'D') {
								if (a[0] == 'a')
									time = time + 55;

								else if (a[0] == 'b')
									time = time + 90;

								else if (a[0] == 'c')
									time = time + 90;

								else if (a[0] == 'd')
									time = time + 90;

								else if (a[0] == 'e')
									time = time + 90;

								else if (a[0] == 'f')
									time = time + 90;

								else if (a[0] == 'g')
									time = time + 50;

								else if (a[0] == 'h')
									time = time + 90;

								else if (a[0] == 'i')
									time = time + 90;

								else if (a[0] == '0')
									time = time + 90;

								else if (a[0] == 'k')
									time = time + 90;

								else if (a[0] == 'l')
									time = time + 70;

								else if (a[0] == 'm')
									time = time + 90;

								else if (a[0] == 'n')
									time = time + 90;

								else if (a[0] == 'o')
									time = time + 70;

								else if (a[0] == 'p')
									time = time + 70;

								else if (a[0] == 'q')
									time = time + 90;

								else if (a[0] == 'r')
									time = time + 90;

								else if (a[0] == 's')
									time = time + 90;

								else if (a[0] == 't')
									time = time + 90;

								else if (a[0] == 'u')
									time = time + 90;

								else if (a[0] == 'v')
									time = time + 90;

								else if (a[0] == 'w')
									time = time + 50;

								else if (a[0] == 'x')
									time = time + 20;

								else if (a[0] == 'y')
									time = time + 60;

								else if (a[0] == 'z')
									time = time + 90;

								else if (a[0] == 'A')
									time = time + 90;

								else if (a[0] == 'B')
									time = time + 90;

								else if (a[0] == 'C')
									time = time + 90;

								else if (a[0] == 'E')
									time = time + 90;

								else if (a[0] == 'F')
									time = time + 90;

								else if (a[0] == 'G')
									time = time + 55;

								else if (a[0] == 'H')
									time = time + 90;

								else if (a[0] == 'I')
									time = time + 70;

								else if (a[0] == 'J')
									time = time + 90;

								else if (a[0] == 'K')
									time = time + 90;

								else if (a[0] == 'L')
									time = time + 55;

								else if (a[0] == 'M')
									time = time + 90;

								else if (a[0] == 'N')
									time = time + 90;
								else if (a[0] == 'O')
									time = time + 50;
								else if (a[0] == 'P')
									time = time + 90;
								else if (a[0] == 'Q')
									time = time + 90;
								else if (a[0] == 'R')
									time = time + 90;
								else if (a[0] == 'S')
									time = time + 90;
								else if (a[0] == 'T')
									time = time + 90;
							} if (first == 'E') {
								if (a[0] == 'a')
									time = time + 55;

								else if (a[0] == 'b')
									time = time + 90;

								else if (a[0] == 'c')
									time = time + 90;

								else if (a[0] == 'd')
									time = time + 90;

								else if (a[0] == 'e')
									time = time + 90;

								else if (a[0] == 'f')
									time = time + 90;

								else if (a[0] == 'g')
									time = time + 80;

								else if (a[0] == 'h')
									time = time + 90;

								else if (a[0] == 'i')
									time = time + 90;

								else if (a[0] == 'j')
									time = time + 90;

								else if (a[0] == 'k')
									time = time + 40;

								else if (a[0] == 'l')
									time = time + 85;

								else if (a[0] == 'm')
									time = time + 90;

								else if (a[0] == 'n')
									time = time + 90;

								else if (a[0] == 'o')
									time = time + 85;

								else if (a[0] == 'p')
									time = time + 85;

								else if (a[0] == 'q')
									time = time + 90;

								else if (a[0] == 'r')
									time = time + 90;

								else if (a[0] == 's')
									time = time + 90;

								else if (a[0] == 't')
									time = time + 90;

								else if (a[0] == 'u')
									time = time + 90;

								else if (a[0] == 'v')
									time = time + 90;

								else if (a[0] == 'w')
									time = time + 55;

								else if (a[0] == 'x')
									time = time + 90;

								else if (a[0] == 'y')
									time = time + 100;

								else if (a[0] == 'z')
									time = time + 90;

								else if (a[0] == 'A')
									time = time + 85;

								else if (a[0] == 'B')
									time = time + 90;

								else if (a[0] == 'C')
									time = time + 90;

								else if (a[0] == 'D')
									time = time + 90;

								else if (a[0] == 'F')
									time = time + 90;

								else if (a[0] == 'G')
									time = time + 55;

								else if (a[0] == 'H')
									time = time + 90;

								else if (a[0] == 'I')
									time = time + 90;

								else if (a[0] == 'J')
									time = time + 90;

								else if (a[0] == 'K')
									time = time + 90;

								else if (a[0] == 'L')
									time = time + 55;

								else if (a[0] == 'M')
									time = time + 90;

								else if (a[0] == 'N')
									time = time + 55;
								else if (a[0] == 'O')
									time = time + 90;
								else if (a[0] == 'P')
									time = time + 90;
								else if (a[0] == 'Q')
									time = time + 90;
								else if (a[0] == 'R')
									time = time + 90;
								else if (a[0] == 'S')
									time = time + 90;
								else if (a[0] == 'T')
									time = time + 90;
							} if (first == 'F') {
								if (a[0] == 'a')
									time = time + 40;

								else if (a[0] == 'b')
									time = time + 40;

								else if (a[0] == 'c')
									time = time + 70;

								else if (a[0] == 'd')
									time = time + 70;

								else if (a[0] == 'e')
									time = time + 40;

								else if (a[0] == 'f')
									time = time + 40;

								else if (a[0] == 'g')
									time = time + 45;

								else if (a[0] == 'h')
									time = time + 40;

								else if (a[0] == 'i')
									time = time + 40;

								else if (a[0] == 'j')
									time = time + 40;

								else if (a[0] == 'k')
									time = time + 40;

								else if (a[0] == 'l')
									time = time + 55;

								else if (a[0] == 'm')
									time = time + 55;

								else if (a[0] == 'n')
									time = time + 55;

								else if (a[0] == 'o')
									time = time + 55;

								else if (a[0] == 'p')
									time = time + 55;

								else if (a[0] == 'q')
									time = time + 40;

								else if (a[0] == 'r')
									time = time + 40;

								else if (a[0] == 's')
									time = time + 40;

								else if (a[0] == 't')
									time = time + 40;

								else if (a[0] == 'u')
									time = time + 45;

								else if (a[0] == 'v')
									time = time + 45;

								else if (a[0] == 'w')
									time = time + 45;

								else if (a[0] == 'x')
									time = time + 45;

								else if (a[0] == 'y')
									time = time + 70;

								else if (a[0] == 'z')
									time = time + 45;

								else if (a[0] == 'A')
									time = time + 55;

								else if (a[0] == 'B')
									time = time + 40;

								else if (a[0] == 'C')
									time = time + 45;

								else if (a[0] == 'D')
									time = time + 45;

								else if (a[0] == 'E')
									time = time + 70;

								else if (a[0] == 'G')
									time = time + 35;

								else if (a[0] == 'H')
									time = time + 45;

								else if (a[0] == 'I')
									time = time + 55;

								else if (a[0] == 'J')
									time = time + 55;

								else if (a[0] == 'K')
									time = time + 90;

								else if (a[0] == 'L')
									time = time + 55;

								else if (a[0] == 'M')
									time = time + 55;

								else if (a[0] == 'N')
									time = time + 55;
								else if (a[0] == 'O')
									time = time + 40;
								else if (a[0] == 'P')
									time = time + 70;
								else if (a[0] == 'Q')
									time = time + 40;
								else if (a[0] == 'R')
									time = time + 40;
								else if (a[0] == 'S')
									time = time + 40;
								else if (a[0] == 'T')
									time = time + 55;
							} if (first == 'G') {
								if (a[0] == 'a')
									time = time + 40;

								else if (a[0] == 'b')
									time = time + 90;

								else if (a[0] == 'c')
									time = time + 90;

								else if (a[0] == 'd')
									time = time + 90;

								else if (a[0] == 'e')
									time = time + 90;

								else if (a[0] == 'f')
									time = time + 90;

								else if (a[0] == 'g')
									time = time + 45;

								else if (a[0] == 'h')
									time = time + 90;

								else if (a[0] == 'i')
									time = time + 90;

								else if (a[0] == 'j')
									time = time + 90;

								else if (a[0] == 'k')
									time = time + 90;

								else if (a[0] == 'l')
									time = time + 55;

								else if (a[0] == 'm')
									time = time + 90;

								else if (a[0] == 'n')
									time = time + 90;

								else if (a[0] == 'o')
									time = time + 55;

								else if (a[0] == 'p')
									time = time + 55;

								else if (a[0] == 'q')
									time = time + 90;

								else if (a[0] == 'r')
									time = time + 90;

								else if (a[0] == 's')
									time = time + 90;

								else if (a[0] == 't')
									time = time + 90;

								else if (a[0] == 'u')
									time = time + 90;

								else if (a[0] == 'v')
									time = time + 90;

								else if (a[0] == 'w')
									time = time + 45;

								else if (a[0] == 'x')
									time = time + 45;

								else if (a[0] == 'y')
									time = time + 70;

								else if (a[0] == 'z')
									time = time + 90;

								else if (a[0] == 'A')
									time = time + 90;

								else if (a[0] == 'B')
									time = time + 90;

								else if (a[0] == 'C')
									time = time + 90;

								else if (a[0] == 'D')
									time = time + 45;

								else if (a[0] == 'E')
									time = time + 90;

								else if (a[0] == 'F')
									time = time + 90;

								else if (a[0] == 'H')
									time = time + 90;

								else if (a[0] == 'I')
									time = time + 55;

								else if (a[0] == 'J')
									time = time + 90;

								else if (a[0] == 'K')
									time = time + 90;

								else if (a[0] == 'L')
									time = time + 55;

								else if (a[0] == 'M')
									time = time + 90;

								else if (a[0] == 'N')
									time = time + 90;
								else if (a[0] == 'O')
									time = time + 90;
								else if (a[0] == 'P')
									time = time + 90;
								else if (a[0] == 'Q')
									time = time + 90;
								else if (a[0] == 'R')
									time = time + 90;
								else if (a[0] == 'S')
									time = time + 90;
								else if (a[0] == 'T')
									time = time + 90;
							} if (first == 'H') {
								if (a[0] == 'a')
									time = time + 50;

								else if (a[0] == 'b')
									time = time + 90;

								else if (a[0] == 'c')
									time = time + 90;

								else if (a[0] == 'd')
									time = time + 90;

								else if (a[0] == 'e')
									time = time + 90;

								else if (a[0] == 'f')
									time = time + 90;

								else if (a[0] == 'g')
									time = time + 70;

								else if (a[0] == 'h')
									time = time + 90;

								else if (a[0] == 'i')
									time = time + 90;

								else if (a[0] == 'j')
									time = time + 90;

								else if (a[0] == 'k')
									time = time + 90;

								else if (a[0] == 'l')
									time = time + 70;

								else if (a[0] == 'm')
									time = time + 60;

								else if (a[0] == 'n')
									time = time + 70;

								else if (a[0] == 'o')
									time = time + 70;

								else if (a[0] == 'p')
									time = time + 70;

								else if (a[0] == 'q')
									time = time + 90;

								else if (a[0] == 'r')
									time = time + 90;

								else if (a[0] == 's')
									time = time + 90;

								else if (a[0] == 't')
									time = time + 90;

								else if (a[0] == 'u')
									time = time + 90;

								else if (a[0] == 'v')
									time = time + 90;

								else if (a[0] == 'w')
									time = time + 70;

								else if (a[0] == 'x')
									time = time + 70;

								else if (a[0] == 'y')
									time = time + 80;

								else if (a[0] == 'z')
									time = time + 90;

								else if (a[0] == 'A')
									time = time + 90;

								else if (a[0] == 'B')
									time = time + 90;

								else if (a[0] == 'C')
									time = time + 90;

								else if (a[0] == 'D')
									time = time + 70;

								else if (a[0] == 'E')
									time = time + 90;

								else if (a[0] == 'F')
									time = time + 55;

								else if (a[0] == 'G')
									time = time + 55;

								else if (a[0] == 'I')
									time = time + 60;

								else if (a[0] == 'J')
									time = time + 90;

								else if (a[0] == 'K')
									time = time + 90;

								else if (a[0] == 'L')
									time = time + 55;

								else if (a[0] == 'M')
									time = time + 55;

								else if (a[0] == 'N')
									time = time + 90;
								else if (a[0] == 'O')
									time = time + 90;
								else if (a[0] == 'P')
									time = time + 90;
								else if (a[0] == 'Q')
									time = time + 90;
								else if (a[0] == 'R')
									time = time + 90;
								else if (a[0] == 'S')
									time = time + 90;
								else if (a[0] == 'T')
									time = time + 60;
							} if (first == 'I') {
								if (a[0] == 'a')
									time = time + 55;

								else if (a[0] == 'b')
									time = time + 90;

								else if (a[0] == 'c')
									time = time + 90;

								else if (a[0] == 'd')
									time = time + 90;

								else if (a[0] == 'e')
									time = time + 90;

								else if (a[0] == 'f')
									time = time + 90;

								else if (a[0] == 'g')
									time = time + 60;

								else if (a[0] == 'h')
									time = time + 90;

								else if (a[0] == 'i')
									time = time + 90;

								else if (a[0] == 'j')
									time = time + 90;

								else if (a[0] == 'k')
									time = time + 90;

								else if (a[0] == 'l')
									time = time + 85;

								else if (a[0] == 'm')
									time = time + 90;

								else if (a[0] == 'n')
									time = time + 90;

								else if (a[0] == 'o')
									time = time + 85;

								else if (a[0] == 'p')
									time = time + 85;

								else if (a[0] == 'q')
									time = time + 90;

								else if (a[0] == 'r')
									time = time + 90;

								else if (a[0] == 's')
									time = time + 90;

								else if (a[0] == 't')
									time = time + 90;

								else if (a[0] == 'u')
									time = time + 90;

								else if (a[0] == 'v')
									time = time + 90;

								else if (a[0] == 'w')
									time = time + 60;

								else if (a[0] == 'x')
									time = time + 75;

								else if (a[0] == 'y')
									time = time + 75;

								else if (a[0] == 'z')
									time = time + 90;

								else if (a[0] == 'A')
									time = time + 90;

								else if (a[0] == 'B')
									time = time + 90;

								else if (a[0] == 'C')
									time = time + 90;

								else if (a[0] == 'D')
									time = time + 75;

								else if (a[0] == 'E')
									time = time + 90;

								else if (a[0] == 'F')
									time = time + 90;

								else if (a[0] == 'G')
									time = time + 55;

								else if (a[0] == 'H')
									time = time + 90;

								else if (a[0] == 'J')
									time = time + 90;

								else if (a[0] == 'K')
									time = time + 90;

								else if (a[0] == 'L')
									time = time + 55;

								else if (a[0] == 'M')
									time = time + 90;

								else if (a[0] == 'N')
									time = time + 90;
								else if (a[0] == 'O')
									time = time + 90;
								else if (a[0] == 'P')
									time = time + 90;
								else if (a[0] == 'Q')
									time = time + 90;
								else if (a[0] == 'R')
									time = time + 90;
								else if (a[0] == 'S')
									time = time + 90;
								else if (a[0] == 'T')
									time = time + 90;
							} if (first == 'J') {
								if (a[0] == 'a')
									time = time + 40;

								else if (a[0] == 'b')
									time = time + 90;

								else if (a[0] == 'c')
									time = time + 90;

								else if (a[0] == 'd')
									time = time + 90;

								else if (a[0] == 'e')
									time = time + 90;

								else if (a[0] == 'f')
									time = time + 90;

								else if (a[0] == 'g')
									time = time + 45;

								else if (a[0] == 'h')
									time = time + 90;

								else if (a[0] == 'i')
									time = time + 90;

								else if (a[0] == 'j')
									time = time + 90;

								else if (a[0] == 'k')
									time = time + 35;

								else if (a[0] == 'l')
									time = time + 55;

								else if (a[0] == 'm')
									time = time + 55;

								else if (a[0] == 'n')
									time = time + 55;

								else if (a[0] == 'o')
									time = time + 55;

								else if (a[0] == 'p')
									time = time + 55;

								else if (a[0] == 'q')
									time = time + 40;

								else if (a[0] == 'r')
									time = time + 40;

								else if (a[0] == 's')
									time = time + 15;

								else if (a[0] == 't')
									time = time + 90;

								else if (a[0] == 'u')
									time = time + 90;

								else if (a[0] == 'v')
									time = time + 30;

								else if (a[0] == 'w')
									time = time + 45;

								else if (a[0] == 'x')
									time = time + 45;

								else if (a[0] == 'y')
									time = time + 70;

								else if (a[0] == 'z')
									time = time + 90;

								else if (a[0] == 'A')
									time = time + 55;

								else if (a[0] == 'B')
									time = time + 50;

								else if (a[0] == 'C')
									time = time + 90;

								else if (a[0] == 'D')
									time = time + 45;

								else if (a[0] == 'E')
									time = time + 70;

								else if (a[0] == 'F')
									time = time + 90;

								else if (a[0] == 'G')
									time = time + 40;

								else if (a[0] == 'H')
									time = time + 90;

								else if (a[0] == 'I')
									time = time + 55;

								else if (a[0] == 'K')
									time = time + 90;

								else if (a[0] == 'L')
									time = time + 55;

								else if (a[0] == 'M')
									time = time + 55;

								else if (a[0] == 'N')
									time = time + 55;
								else if (a[0] == 'O')
									time = time + 40;
								else if (a[0] == 'P')
									time = time + 90;
								else if (a[0] == 'Q')
									time = time + 90;
								else if (a[0] == 'R')
									time = time + 90;
								else if (a[0] == 'S')
									time = time + 50;
								else if (a[0] == 'T')
									time = time + 55;
							} if (first == 'K') {
								if (a[0] == 'a')
									time = time + 40;

								else if (a[0] == 'b')
									time = time + 90;

								else if (a[0] == 'c')
									time = time + 90;

								else if (a[0] == 'd')
									time = time + 90;

								else if (a[0] == 'e')
									time = time + 90;

								else if (a[0] == 'f')
									time = time + 90;

								else if (a[0] == 'g')
									time = time + 45;

								else if (a[0] == 'h')
									time = time + 90;

								else if (a[0] == 'i')
									time = time + 90;

								else if (a[0] == 'j')
									time = time + 90;

								else if (a[0] == 'k')
									time = time + 40;

								else if (a[0] == 'l')
									time = time + 55;

								else if (a[0] == 'm')
									time = time + 55;

								else if (a[0] == 'n')
									time = time + 55;

								else if (a[0] == 'o')
									time = time + 55;

								else if (a[0] == 'p')
									time = time + 55;

								else if (a[0] == 'q')
									time = time + 35;

								else if (a[0] == 'r')
									time = time + 40;

								else if (a[0] == 's')
									time = time + 15;

								else if (a[0] == 't')
									time = time + 90;

								else if (a[0] == 'u')
									time = time + 90;

								else if (a[0] == 'v')
									time = time + 30;

								else if (a[0] == 'w')
									time = time + 45;

								else if (a[0] == 'x')
									time = time + 45;

								else if (a[0] == 'y')
									time = time + 70;

								else if (a[0] == 'z')
									time = time + 90;

								else if (a[0] == 'A')
									time = time + 55;

								else if (a[0] == 'B')
									time = time + 90;

								else if (a[0] == 'C')
									time = time + 90;

								else if (a[0] == 'D')
									time = time + 45;

								else if (a[0] == 'E')
									time = time + 70;

								else if (a[0] == 'F')
									time = time + 90;

								else if (a[0] == 'G')
									time = time + 40;

								else if (a[0] == 'H')
									time = time + 90;

								else if (a[0] == 'I')
									time = time + 55;

								else if (a[0] == 'J')
									time = time + 55;

								else if (a[0] == 'L')
									time = time + 55;

								else if (a[0] == 'M')
									time = time + 55;

								else if (a[0] == 'N')
									time = time + 55;
								else if (a[0] == 'O')
									time = time + 35;
								else if (a[0] == 'P')
									time = time + 90;
								else if (a[0] == 'Q')
									time = time + 90;
								else if (a[0] == 'R')
									time = time + 90;
								else if (a[0] == 'S')
									time = time + 90;
								else if (a[0] == 'T')
									time = time + 55;
							} if (first == 'L') {
								if (a[0] == 'a')
									time = time + 40;

								else if (a[0] == 'b')
									time = time + 90;

								else if (a[0] == 'c')
									time = time + 90;

								else if (a[0] == 'd')
									time = time + 90;

								else if (a[0] == 'e')
									time = time + 90;

								else if (a[0] == 'f')
									time = time + 90;

								else if (a[0] == 'g')
									time = time + 45;

								else if (a[0] == 'h')
									time = time + 90;

								else if (a[0] == 'i')
									time = time + 90;

								else if (a[0] == 'j')
									time = time + 90;

								else if (a[0] == 'k')
									time = time + 40;

								else if (a[0] == 'l')
									time = time + 55;

								else if (a[0] == 'm')
									time = time + 55;

								else if (a[0] == 'n')
									time = time + 55;

								else if (a[0] == 'o')
									time = time + 55;

								else if (a[0] == 'p')
									time = time + 55;

								else if (a[0] == 'q')
									time = time + 35;

								else if (a[0] == 'r')
									time = time + 40;

								else if (a[0] == 's')
									time = time + 15;

								else if (a[0] == 't')
									time = time + 90;

								else if (a[0] == 'u')
									time = time + 90;

								else if (a[0] == 'v')
									time = time + 30;

								else if (a[0] == 'w')
									time = time + 45;

								else if (a[0] == 'x')
									time = time + 45;

								else if (a[0] == 'y')
									time = time + 70;

								else if (a[0] == 'z')
									time = time + 90;

								else if (a[0] == 'A')
									time = time + 55;

								else if (a[0] == 'B')
									time = time + 90;

								else if (a[0] == 'C')
									time = time + 90;

								else if (a[0] == 'D')
									time = time + 45;

								else if (a[0] == 'E')
									time = time + 90;

								else if (a[0] == 'F')
									time = time + 90;

								else if (a[0] == 'G')
									time = time + 40;

								else if (a[0] == 'H')
									time = time + 90;

								else if (a[0] == 'I')
									time = time + 55;

								else if (a[0] == 'J')
									time = time + 55;

								else if (a[0] == 'K')
									time = time + 90;

								else if (a[0] == 'M')
									time = time + 55;

								else if (a[0] == 'N')
									time = time + 55;
								else if (a[0] == 'O')
									time = time + 35;
								else if (a[0] == 'P')
									time = time + 90;
								else if (a[0] == 'Q')
									time = time + 90;
								else if (a[0] == 'R')
									time = time + 90;
								else if (a[0] == 'S')
									time = time + 90;
								else if (a[0] == 'T')
									time = time + 55;
							} if (first == 'M') {
								if (a[0] == 'a')
									time = time + 40;

								else if (a[0] == 'b')
									time = time + 90;

								else if (a[0] == 'c')
									time = time + 90;

								else if (a[0] == 'd')
									time = time + 90;

								else if (a[0] == 'e')
									time = time + 90;

								else if (a[0] == 'f')
									time = time + 90;

								else if (a[0] == 'g')
									time = time + 45;

								else if (a[0] == 'h')
									time = time + 90;

								else if (a[0] == 'i')
									time = time + 90;

								else if (a[0] == 'j')
									time = time + 90;

								else if (a[0] == 'k')
									time = time + 90;

								else if (a[0] == 'l')
									time = time + 55;

								else if (a[0] == 'm')
									time = time + 90;

								else if (a[0] == 'n')
									time = time + 55;

								else if (a[0] == 'o')
									time = time + 55;

								else if (a[0] == 'p')
									time = time + 55;

								else if (a[0] == 'q')
									time = time + 90;

								else if (a[0] == 'r')
									time = time + 90;

								else if (a[0] == 's')
									time = time + 90;

								else if (a[0] == 't')
									time = time + 90;

								else if (a[0] == 'u')
									time = time + 90;

								else if (a[0] == 'v')
									time = time + 90;

								else if (a[0] == 'w')
									time = time + 45;

								else if (a[0] == 'x')
									time = time + 45;

								else if (a[0] == 'y')
									time = time + 70;

								else if (a[0] == 'z')
									time = time + 90;

								else if (a[0] == 'A')
									time = time + 90;

								else if (a[0] == 'B')
									time = time + 90;

								else if (a[0] == 'C')
									time = time + 90;

								else if (a[0] == 'D')
									time = time + 45;

								else if (a[0] == 'E')
									time = time + 90;

								else if (a[0] == 'F')
									time = time + 90;

								else if (a[0] == 'G')
									time = time + 40;

								else if (a[0] == 'H')
									time = time + 90;

								else if (a[0] == 'I')
									time = time + 55;

								else if (a[0] == 'J')
									time = time + 90;

								else if (a[0] == 'K')
									time = time + 90;

								else if (a[0] == 'L')
									time = time + 55;

								else if (a[0] == 'N')
									time = time + 90;
								else if (a[0] == 'O')
									time = time + 90;
								else if (a[0] == 'P')
									time = time + 90;
								else if (a[0] == 'Q')
									time = time + 90;
								else if (a[0] == 'R')
									time = time + 90;
								else if (a[0] == 'S')
									time = time + 90;
								else if (a[0] == 'T')
									time = time + 90;
							} if (first == 'N') {
								if (a[0] == 'a')
									time = time + 40;

								else if (a[0] == 'b')
									time = time + 90;

								else if (a[0] == 'c')
									time = time + 90;

								else if (a[0] == 'd')
									time = time + 90;

								else if (a[0] == 'e')
									time = time + 90;

								else if (a[0] == 'f')
									time = time + 90;

								else if (a[0] == 'g')
									time = time + 45;

								else if (a[0] == 'h')
									time = time + 90;

								else if (a[0] == 'i')
									time = time + 90;

								else if (a[0] == 'j')
									time = time + 90;

								else if (a[0] == 'k')
									time = time + 40;

								else if (a[0] == 'l')
									time = time + 55;

								else if (a[0] == 'm')
									time = time + 55;

								else if (a[0] == 'n')
									time = time + 90;

								else if (a[0] == 'o')
									time = time + 55;

								else if (a[0] == 'p')
									time = time + 55;

								else if (a[0] == 'q')
									time = time + 90;

								else if (a[0] == 'r')
									time = time + 90;

								else if (a[0] == 's')
									time = time + 90;

								else if (a[0] == 't')
									time = time + 90;

								else if (a[0] == 'u')
									time = time + 90;

								else if (a[0] == 'v')
									time = time + 30;

								else if (a[0] == 'w')
									time = time + 45;

								else if (a[0] == 'x')
									time = time + 45;

								else if (a[0] == 'y')
									time = time + 70;

								else if (a[0] == 'z')
									time = time + 90;

								else if (a[0] == 'A')
									time = time + 55;

								else if (a[0] == 'B')
									time = time + 90;

								else if (a[0] == 'C')
									time = time + 90;

								else if (a[0] == 'D')
									time = time + 45;

								else if (a[0] == 'E')
									time = time + 70;

								else if (a[0] == 'F')
									time = time + 90;

								else if (a[0] == 'G')
									time = time + 40;

								else if (a[0] == 'H')
									time = time + 90;

								else if (a[0] == 'I')
									time = time + 55;

								else if (a[0] == 'J')
									time = time + 90;

								else if (a[0] == 'K')
									time = time + 90;

								else if (a[0] == 'L')
									time = time + 55;

								else if (a[0] == 'M')
									time = time + 90;
								else if (a[0] == 'O')
									time = time + 90;
								else if (a[0] == 'P')
									time = time + 90;
								else if (a[0] == 'Q')
									time = time + 90;
								else if (a[0] == 'R')
									time = time + 90;
								else if (a[0] == 'S')
									time = time + 90;
								else if (a[0] == 'T')
									time = time + 55;
							}
							if (first == 'O') {
								time = time + 15;
								if (a[0] == 'a')
									time = time + 40;

								else if (a[0] == 'b')
									time = time + 90;

								else if (a[0] == 'c')
									time = time + 90;

								else if (a[0] == 'd')
									time = time + 90;

								else if (a[0] == 'e')
									time = time + 90;

								else if (a[0] == 'f')
									time = time + 90;

								else if (a[0] == 'g')
									time = time + 45;

								else if (a[0] == 'h')
									time = time + 90;

								else if (a[0] == 'i')
									time = time + 90;

								else if (a[0] == 'j')
									time = time + 90;

								else if (a[0] == 'k')
									time = time + 40;

								else if (a[0] == 'l')
									time = time + 55;

								else if (a[0] == 'm')
									time = time + 55;

								else if (a[0] == 'n')
									time = time + 55;

								else if (a[0] == 'o')
									time = time + 55;

								else if (a[0] == 'p')
									time = time + 55;

								else if (a[0] == 'q')
									time = time + 30;

								else if (a[0] == 's')
									time = time + 25;

								else if (a[0] == 't')
									time = time + 90;

								else if (a[0] == 'u')
									time = time + 90;

								else if (a[0] == 'v')
									time = time + 50;

								else if (a[0] == 'w')
									time = time + 45;

								else if (a[0] == 'x')
									time = time + 45;

								else if (a[0] == 'y')
									time = time + 70;

								else if (a[0] == 'z')
									time = time + 90;

								else if (a[0] == 'A')
									time = time + 55;

								else if (a[0] == 'B')
									time = time + 35;

								else if (a[0] == 'C')
									time = time + 90;

								else if (a[0] == 'D')
									time = time + 45;

								else if (a[0] == 'E')
									time = time + 70;

								else if (a[0] == 'F')
									time = time + 90;

								else if (a[0] == 'G')
									time = time + 40;

								else if (a[0] == 'H')
									time = time + 90;

								else if (a[0] == 'I')
									time = time + 55;

								else if (a[0] == 'J')
									time = time + 35;

								else if (a[0] == 'K')
									time = time + 90;

								else if (a[0] == 'L')
									time = time + 90;

								else if (a[0] == 'M')
									time = time + 55;

								else if (a[0] == 'N')
									time = time + 55;
								else if (a[0] == 'O')
									time = time + 30;
								else if (a[0] == 'P')
									time = time + 90;
								else if (a[0] == 'Q')
									time = time + 90;
								else if (a[0] == 'R')
									time = time + 90;
								else if (a[0] == 'S')
									time = time + 35;
								else if (a[0] == 'T')
									time = time + 55;
							}
							if (first == 'P') {
								time = time + 30;
								if (a[0] == 'b')
									time = time + 90;

								else if (a[0] == 'a')
									time = time + 55;

								else if (a[0] == 'd')
									time = time + 30;

								else if (a[0] == 'e')
									time = time + 90;

								else if (a[0] == 'f')
									time = time + 90;

								else if (a[0] == 'g')
									time = time + 70;

								else if (a[0] == 'h')
									time = time + 90;

								else if (a[0] == 'i')
									time = time + 90;

								else if (a[0] == 'j')
									time = time + 90;

								else if (a[0] == 'k')
									time = time + 60;

								else if (a[0] == 'l')
									time = time + 85;

								else if (a[0] == 'm')
									time = time + 85;

								else if (a[0] == 'n')
									time = time + 90;

								else if (a[0] == 'o')
									time = time + 85;

								else if (a[0] == 'p')
									time = time + 85;

								else if (a[0] == 'q')
									time = time + 90;

								else if (a[0] == 'r')
									time = time + 90;

								else if (a[0] == 's')
									time = time + 90;

								else if (a[0] == 't')
									time = time + 90;

								else if (a[0] == 'u')
									time = time + 90;

								else if (a[0] == 'v')
									time = time + 70;

								else if (a[0] == 'w')
									time = time + 70;

								else if (a[0] == 'x')
									time = time + 70;

								else if (a[0] == 'y')
									time = time + 70;

								else if (a[0] == 'z')
									time = time + 90;

								else if (a[0] == 'A')
									time = time + 80;

								else if (a[0] == 'B')
									time = time + 90;

								else if (a[0] == 'C')
									time = time + 90;

								else if (a[0] == 'D')
									time = time + 70;

								else if (a[0] == 'E')
									time = time + 90;

								else if (a[0] == 'F')
									time = time + 90;

								else if (a[0] == 'G')
									time = time + 65;

								else if (a[0] == 'H')
									time = time + 90;

								else if (a[0] == 'I')
									time = time + 70;

								else if (a[0] == 'J')
									time = time + 90;

								else if (a[0] == 'K')
									time = time + 90;

								else if (a[0] == 'L')
									time = time + 90;

								else if (a[0] == 'M')
									time = time + 90;

								else if (a[0] == 'N')
									time = time + 90;
								else if (a[0] == 'O')
									time = time + 90;
								else if (a[0] == 'Q')
									time = time + 90;
								else if (a[0] == 'R')
									time = time + 90;
								else if (a[0] == 'S')
									time = time + 90;
								else if (a[0] == 'T')
									time = time + 85;
							}
							if (first == 'Q') {
								time = time + 10;
								if (a[0] == 'a')
									time = time + 20;

								else if (a[0] == 'b')
									time = time + 20;

								else if (a[0] == 'c')
									time = time + 25;

								else if (a[0] == 'd')
									time = time + 40;

								else if (a[0] == 'e')
									time = time + 10;

								else if (a[0] == 'g')
									time = time + 40;

								else if (a[0] == 'h')
									time = time + 35;

								else if (a[0] == 'i')
									time = time + 35;

								else if (a[0] == 'j')
									time = time + 20;

								else if (a[0] == 'k')
									time = time + 30;

								else if (a[0] == 'l')
									time = time + 50;

								else if (a[0] == 'm')
									time = time + 35;

								else if (a[0] == 'n')
									time = time + 35;

								else if (a[0] == 'o')
									time = time + 50;

								else if (a[0] == 'p')
									time = time + 50;

								else if (a[0] == 'q')
									time = time + 35;

								else if (a[0] == 'r')
									time = time + 35;

								else if (a[0] == 's')
									time = time + 25;

								else if (a[0] == 't')
									time = time + 35;

								else if (a[0] == 'u')
									time = time + 25;

								else if (a[0] == 'v')
									time = time + 35;

								else if (a[0] == 'w')
									time = time + 40;

								else if (a[0] == 'x')
									time = time + 35;

								else if (a[0] == 'y')
									time = time + 70;

								else if (a[0] == 'z')
									time = time + 40;

								else if (a[0] == 'A')
									time = time + 25;

								else if (a[0] == 'B')
									time = time + 35;

								else if (a[0] == 'C')
									time = time + 25;

								else if (a[0] == 'D')
									time = time + 30;

								else if (a[0] == 'E')
									time = time + 35;

								else if (a[0] == 'F')
									time = time + 35;

								else if (a[0] == 'G')
									time = time + 35;

								else if (a[0] == 'H')
									time = time + 40;

								else if (a[0] == 'I')
									time = time + 45;

								else if (a[0] == 'J')
									time = time + 35;

								else if (a[0] == 'K')
									time = time + 35;

								else if (a[0] == 'L')
									time = time + 35;

								else if (a[0] == 'M')
									time = time + 35;

								else if (a[0] == 'N')
									time = time + 35;
								else if (a[0] == 'O')
									time = time + 35;
								else if (a[0] == 'P')
									time = time + 25;
								else if (a[0] == 'Q')
									time = time + 10;
								else if (a[0] == 'R')
									time = time + 35;
								else if (a[0] == 'S')
									time = time + 35;
								else if (a[0] == 'T')
									time = time + 35;
							}
							if (first == 'R') {
								time = time + 10;
								if (a[0] == 'a')
									time = time + 40;

								else if (a[0] == 'b')
									time = time + 40;

								else if (a[0] == 'c')
									time = time + 70;

								else if (a[0] == 'd')
									time = time + 70;

								else if (a[0] == 'e')
									time = time + 40;

								else if (a[0] == 'f')
									time = time + 40;

								else if (a[0] == 'g')
									time = time + 40;

								else if (a[0] == 'h')
									time = time + 30;

								else if (a[0] == 'i')
									time = time + 30;

								else if (a[0] == 'k')
									time = time + 30;

								else if (a[0] == 'l')
									time = time + 35;

								else if (a[0] == 'm')
									time = time + 35;

								else if (a[0] == 'n')
									time = time + 35;

								else if (a[0] == 'o')
									time = time + 35;

								else if (a[0] == 'p')
									time = time + 35;

								else if (a[0] == 'q')
									time = time + 30;

								else if (a[0] == 'r')
									time = time + 40;

								else if (a[0] == 's')
									time = time + 40;

								else if (a[0] == 't')
									time = time + 30;

								else if (a[0] == 'u')
									time = time + 25;

								else if (a[0] == 'v')
									time = time + 25;

								else if (a[0] == 'w')
									time = time + 40;

								else if (a[0] == 'x')
									time = time + 35;

								else if (a[0] == 'y')
									time = time + 70;

								else if (a[0] == 'z')
									time = time + 45;

								else if (a[0] == 'A')
									time = time + 55;

								else if (a[0] == 'B')
									time = time + 40;

								else if (a[0] == 'C')
									time = time + 25;

								else if (a[0] == 'D')
									time = time + 35;

								else if (a[0] == 'E')
									time = time + 70;

								else if (a[0] == 'F')
									time = time + 40;

								else if (a[0] == 'G')
									time = time + 40;

								else if (a[0] == 'H')
									time = time + 45;

								else if (a[0] == 'I')
									time = time + 55;

								else if (a[0] == 'J')
									time = time + 90;

								else if (a[0] == 'K')
									time = time + 90;

								else if (a[0] == 'L')
									time = time + 90;

								else if (a[0] == 'M')
									time = time + 90;

								else if (a[0] == 'N')
									time = time + 90;
								else if (a[0] == 'O')
									time = time + 30;
								else if (a[0] == 'P')
									time = time + 70;
								else if (a[0] == 'Q')
									time = time + 40;
								else if (a[0] == 'R')
									time = time + 30;
								else if (a[0] == 'S')
									time = time + 40;
								else if (a[0] == 'T')
									time = time + 35;
							}
							if (first == 'S') {
								time = time + 15;
								if (a[0] == 'a')
									time = time + 40;

								else if (a[0] == 'b')
									time = time + 90;

								else if (a[0] == 'c')
									time = time + 90;

								else if (a[0] == 'd')
									time = time + 90;

								else if (a[0] == 'e')
									time = time + 90;

								else if (a[0] == 'f')
									time = time + 90;

								else if (a[0] == 'g')
									time = time + 45;

								else if (a[0] == 'h')
									time = time + 90;

								else if (a[0] == 'i')
									time = time + 90;

								else if (a[0] == 'j')
									time = time + 90;

								else if (a[0] == 'k')
									time = time + 40;

								else if (a[0] == 'l')
									time = time + 55;

								else if (a[0] == 'm')
									time = time + 40;

								else if (a[0] == 'n')
									time = time + 40;

								else if (a[0] == 'o')
									time = time + 40;

								else if (a[0] == 'p')
									time = time + 55;

								else if (a[0] == 'q')
									time = time + 40;

								else if (a[0] == 'r')
									time = time + 35;

								else if (a[0] == 't')
									time = time + 90;

								else if (a[0] == 'u')
									time = time + 90;

								else if (a[0] == 'v')
									time = time + 35;

								else if (a[0] == 'w')
									time = time + 45;

								else if (a[0] == 'x')
									time = time + 45;

								else if (a[0] == 'y')
									time = time + 70;

								else if (a[0] == 'z')
									time = time + 90;

								else if (a[0] == 'A')
									time = time + 55;

								else if (a[0] == 'B')
									time = time + 30;

								else if (a[0] == 'C')
									time = time + 90;

								else if (a[0] == 'D')
									time = time + 45;

								else if (a[0] == 'E')
									time = time + 70;

								else if (a[0] == 'F')
									time = time + 90;

								else if (a[0] == 'G')
									time = time + 40;

								else if (a[0] == 'H')
									time = time + 90;

								else if (a[0] == 'I')
									time = time + 55;

								else if (a[0] == 'J')
									time = time + 55;

								else if (a[0] == 'K')
									time = time + 90;

								else if (a[0] == 'L')
									time = time + 55;

								else if (a[0] == 'M')
									time = time + 55;

								else if (a[0] == 'N')
									time = time + 55;
								else if (a[0] == 'O')
									time = time + 40;
								else if (a[0] == 'P')
									time = time + 90;
								else if (a[0] == 'Q')
									time = time + 90;
								else if (a[0] == 'R')
									time = time + 90;
								else if (a[0] == 'T')
									time = time + 40;
							}
							if (first == 'T') {
								time = time + 15;
								if (a[0] == 'a')
									time = time + 40;

								else if (a[0] == 'b')
									time = time + 90;

								else if (a[0] == 'c')
									time = time + 90;

								else if (a[0] == 'd')
									time = time + 90;

								else if (a[0] == 'e')
									time = time + 90;

								else if (a[0] == 'f')
									time = time + 90;

								else if (a[0] == 'g')
									time = time + 35;

								else if (a[0] == 'h')
									time = time + 90;

								else if (a[0] == 'i')
									time = time + 90;

								else if (a[0] == 'j')
									time = time + 90;

								else if (a[0] == 'k')
									time = time + 90;

								else if (a[0] == 'm')
									time = time + 90;

								else if (a[0] == 'n')
									time = time + 90;

								else if (a[0] == 'o')
									time = time + 20;

								else if (a[0] == 'p')
									time = time + 35;

								else if (a[0] == 'q')
									time = time + 90;

								else if (a[0] == 'r')
									time = time + 90;

								else if (a[0] == 's')
									time = time + 90;

								else if (a[0] == 't')
									time = time + 90;

								else if (a[0] == 'u')
									time = time + 90;

								else if (a[0] == 'v')
									time = time + 90;

								else if (a[0] == 'w')
									time = time + 55;

								else if (a[0] == 'x')
									time = time + 75;

								else if (a[0] == 'y')
									time = time + 80;

								else if (a[0] == 'z')
									time = time + 90;

								else if (a[0] == 'A')
									time = time + 90;

								else if (a[0] == 'B')
									time = time + 90;

								else if (a[0] == 'C')
									time = time + 90;

								else if (a[0] == 'D')
									time = time + 75;

								else if (a[0] == 'E')
									time = time + 90;

								else if (a[0] == 'F')
									time = time + 90;

								else if (a[0] == 'G')
									time = time + 40;

								else if (a[0] == 'H')
									time = time + 90;

								else if (a[0] == 'I')
									time = time + 90;

								else if (a[0] == 'J')
									time = time + 90;

								else if (a[0] == 'K')
									time = time + 90;

								else if (a[0] == 'L')
									time = time + 90;

								else if (a[0] == 'M')
									time = time + 90;

								else if (a[0] == 'N')
									time = time + 90;
								else if (a[0] == 'O')
									time = time + 90;
								else if (a[0] == 'P')
									time = time + 90;
								else if (a[0] == 'Q')
									time = time + 90;
								else if (a[0] == 'R')
									time = time + 90;
								else if (a[0] == 'S')
									time = time + 90;
							}
						}
					
				


						if (time < optimal) {
							optimal = time;

							this->textBox4->Text = optimal + " minutes";
							if(t == 1) {
								first = v[0];
								if (first == 'a')
									this->textBox3->Text = "Chicken and Brown (CAN)";
								else if (first == 'b')
									this->textBox3->Text = "Chicken and Brown (US)";
								else if (first == 'c')
									this->textBox3->Text = "Veg Harvest (CAN)";
								else if (first == 'd')
									this->textBox3->Text = "Veg Harvest (US)";
								else if (first == 'e')
									this->textBox3->Text = "Whole Grain Brown (CAN)";
								else if (first == 'f')
									this->textBox3->Text = "Whole Grain Brown (US)";
								else if (first == 'g')
									this->textBox3->Text = "Vegetable Medley (CAN)";
								else if (first == 'h')
									this->textBox3->Text = "Tomato and Herb (CAN)";
								else if (first == 'i')
									this->textBox3->Text = "Long Grain (CAN)";
								else if (first == 'j')
									this->textBox3->Text = "Long Grain (US)";
								else if (first == 'k')
									this->textBox3->Text = "Oriental (CAN)";
								else if (first == 'l')
									this->textBox3->Text = "Long Grain and Wild (CAN)";
								else if (first == 'm')
									this->textBox3->Text = "Long Grain and Wild (US)";
								else if (first == 'n')
									this->textBox3->Text = "Garlic & Wild (CAN)";
								else if (first == 'o')
									this->textBox3->Text = "Chicken and Wild (CAN)";
								else if (first == 'p')
									this->textBox3->Text = "Mushroom and Wild (CAN)";
								else if (first == 'q')
									this->textBox3->Text = "Basmati (CAN)";
								else if (first == 'r')
									this->textBox3->Text = "Basmati (US)";
								else if (first == 's')
									this->textBox3->Text = "Jasmine (US)";
								else if (first == 't')
									this->textBox3->Text = "Roasted Chicken (US)";
								else if (first == 'u')
									this->textBox3->Text = "Spanish (US)";
								else if (first == 'v')
									this->textBox3->Text = "Pilaf (US)";
								else if (first == 'w')
									this->textBox3->Text = "Teriyaki (US)";
								else if (first == 'x')
									this->textBox3->Text = "Four Cheese (US)";
								else if (first == 'y')
									this->textBox3->Text = "Cajun (US)";
								else if (first == 'z')
									this->textBox3->Text = "Indian Curry (CAN)";
								else if (first == 'A')
									this->textBox3->Text = "Brown and Wild (US)";
								else if (first == 'B')
									this->textBox3->Text = "Jasmine (CAN)";
								else if (first == 'C')
									this->textBox3->Text = "Garden Veg (US)";
								else if (first == 'D')
									this->textBox3->Text = "Creamy Cheddar (CAN)";
								else if (first == 'E')
									this->textBox3->Text = "Santa Fe (US)";
								else if (first == 'F')
									this->textBox3->Text = "Tomato and Herb Risotto (CAN)";
								else if (first == 'G')
									this->textBox3->Text = "Creamy Carb Risotto (CAN)";
								else if (first == 'H')
									this->textBox3->Text = "Med Veg Risotto (CAN)";
								else if (first == 'I')
									this->textBox3->Text = "Mushroom Risotto (CAN)";
								else if (first == 'J')
									this->textBox3->Text = "Brown Red Black Japonica (US)";
								else if (first == 'K')
									this->textBox3->Text = "Quinoa & Brown & Garlic (CAN)";
								else if (first == 'L')
									this->textBox3->Text = "SOC Quinoa & Brown & Garlic (US)";
								else if (first == 'M')
									this->textBox3->Text = "Butter and Garlic (US)";
								else if (first == 'N')
									this->textBox3->Text = "Whole Grain and Wild (CAN)";
								else if (first == 'O') {
									this->textBox3->Text = "Basmati (CAN)";
									this->textBox3->Text = "Basmati (US)";
								}
								else if (first == 'P') {
									this->textBox3->Text = "Veg Harvest (CAN)";
									this->textBox3->Text = "Veg Harvest (US)";
								}
								else if (first == 'Q') {
									this->textBox3->Text = "Whole Grain Brown (CAN)";
									this->textBox3->Text = "Whole Grain Brown (US)";
								}
								else if (first == 'R') {
									this->textBox3->Text = "Long Grain (CAN)";
									this->textBox3->Text = "Long Grain (US)";
								}
								else if (first == 'S') {
									this->textBox3->Text = "Jasmine (CAN)";
									this->textBox3->Text = "Jasmine (US)";
								}
								else if (first == 'T') {
									this->textBox3->Text = "Long Grain and Wild (US)";
									this->textBox3->Text = "Long Grain and Wild (CAN)";
								}

								for (i = 0; i < r + 1; i++) {
									if (a[i] == 'a')
										this->textBox3->Text = textBox3->Text + "\r\nChicken and Brown (CAN)";
									else if (a[i] == 'b')
										this->textBox3->Text = textBox3->Text + "\r\nChicken and Brown (US)";
									else if (a[i] == 'c')
										this->textBox3->Text = textBox3->Text + "\r\nVeg Harvest (CAN)";
									else if (a[i] == 'd')
										this->textBox3->Text = textBox3->Text + "\r\nVeg Harvest (US)";
									else if (a[i] == 'e')
										this->textBox3->Text = textBox3->Text + "\r\nWhole Grain Brown (CAN)";
									else if (a[i] == 'f')
										this->textBox3->Text = textBox3->Text + "\r\nWhole Grain Brown (US)";
									else if (a[i] == 'g')
										this->textBox3->Text = textBox3->Text + "\r\nVegetable Medley (CAN)";
									else if (a[i] == 'h')
										this->textBox3->Text = textBox3->Text + "\r\nTomato and Herb (CAN)";
									else if (a[i] == 'i')
										this->textBox3->Text = textBox3->Text + "\r\nLong Grain (CAN)";
									else if (a[i] == 'j')
										this->textBox3->Text = textBox3->Text + "\r\nLong Grain (US)";
									else if (a[i] == 'k')
										this->textBox3->Text = textBox3->Text + "\r\nOriental (CAN)";
									else if (a[i] == 'l')
										this->textBox3->Text = textBox3->Text + "\r\nLong Grain and Wild (CAN)";
									else if (a[i] == 'm')
										this->textBox3->Text = textBox3->Text + "\r\nLong Grain and Wild (US)";
									else if (a[i] == 'n')
										this->textBox3->Text = textBox3->Text + "\r\nGarlic and Wild (CAN)";
									else if (a[i] == 'o')
										this->textBox3->Text = textBox3->Text + "\r\nChicken and Wild (CAN)";
									else if (a[i] == 'p')
										this->textBox3->Text = textBox3->Text + "\r\nMushroom and Wild (CAN)";
									else if (a[i] == 'q')
										this->textBox3->Text = textBox3->Text + "\r\nBasmati (CAN)";
									else if (a[i] == 'r')
										this->textBox3->Text = textBox3->Text + "\r\nBasmati (US)";
									else if (a[i] == 's')
										this->textBox3->Text = textBox3->Text + "\r\nJasmine (US)";
									else if (a[i] == 't')
										this->textBox3->Text = textBox3->Text + "\r\nRoasted Chicken (US)";
									else if (a[i] == 'u')
										this->textBox3->Text = textBox3->Text + "\r\nSpanish (US)";
									else if (a[i] == 'v')
										this->textBox3->Text = textBox3->Text + "\r\nPilaf (US)";
									else if (a[i] == 'w')
										this->textBox3->Text = textBox3->Text + "\r\nTeriyaki (US)";
									else if (a[i] == 'x')
										this->textBox3->Text = textBox3->Text + "\r\nFour Cheese (US)";
									else if (a[i] == 'y')
										this->textBox3->Text = textBox3->Text + "\r\nCajun (US)";
									else if (a[i] == 'z')
										this->textBox3->Text = textBox3->Text + "\r\nIndian Curry (CAN)";
									else if (a[i] == 'A')
										this->textBox3->Text = textBox3->Text + "\r\nBrown and Wild (US)";
									else if (a[i] == 'B')
										this->textBox3->Text = textBox3->Text + "\r\nJasmine (CAN)";
									else if (a[i] == 'C')
										this->textBox3->Text = textBox3->Text + "\r\nGarden Veg (US)";
									else if (a[i] == 'D')
										this->textBox3->Text = textBox3->Text + "\r\nCreamy Cheddar (CAN)";
									else if (a[i] == 'E')
										this->textBox3->Text = textBox3->Text + "\r\nSanta Fe (US)";
									else if (a[i] == 'F')
										this->textBox3->Text = textBox3->Text + "\r\nTomato and Herb Risotto (CAN)";
									else if (a[i] == 'G')
										this->textBox3->Text = textBox3->Text + "\r\nCreamy Carb Risotto (CAN)";
									else if (a[i] == 'H')
										this->textBox3->Text = textBox3->Text + "\r\nMed Veg Risotto (CAN)";
									else if (a[i] == 'I')
										this->textBox3->Text = textBox3->Text + "\r\nMushroom Risotto (CAN)";
									else if (a[i] == 'J')
										this->textBox3->Text = textBox3->Text + "\r\nBrown Red Black Japonica (US)";
									else if (a[i] == 'K')
										this->textBox3->Text = textBox3->Text + "\r\nQuinoa & Brown & Garlic (CAN)";
									else if (a[i] == 'L')
										this->textBox3->Text = textBox3->Text + "\r\nSOC Quinoa & Brown & Garlic (US)";
									else if (a[i] == 'M')
										this->textBox3->Text = textBox3->Text + "\r\nButter and Garlic (US)";
									else if (a[i] == 'N')
										this->textBox3->Text = textBox3->Text + "\r\nWhole Grain and Wild (CAN)";
									else if (a[i] == 'O') {
										this->textBox3->Text = textBox3->Text + "\r\nBasmati (CAN)";
										this->textBox3->Text = textBox3->Text + "\r\nBasmati (US)";
									}
									else if (a[i] == 'P') {
										this->textBox3->Text = textBox3->Text + "\r\nVeg Harvest (CAN)";
										this->textBox3->Text = textBox3->Text + "\r\nVeg Harvest (US)";
									}
									else if (a[i] == 'Q') {
										this->textBox3->Text = textBox3->Text + "\r\nWhole Grain Brown (CAN)";
										this->textBox3->Text = textBox3->Text + "\r\nWhole Grain Brown (US)";
									}
									else if (a[i] == 'R') {
										this->textBox3->Text = textBox3->Text + "\r\nLong Grain (CAN)";
										this->textBox3->Text = textBox3->Text + "\r\nLong Grain (US)";
									}
									else if (a[i] == 'S') {
										this->textBox3->Text = textBox3->Text + "\r\nJasmine (CAN)";
										this->textBox3->Text = textBox3->Text + "\r\nJasmine (US)";
									}
									else if (a[i] == 'T') {
										this->textBox3->Text = textBox3->Text + "\r\nLong Grain and Wild (US)";
										this->textBox3->Text = textBox3->Text + "\r\nLong Grain and Wild (CAN)";
									}
								}
							}
			} else {

			if (a[0] == 'a')
				this->textBox3->Text = "Chicken and Brown (CAN)";
			else if (a[0] == 'b')
				this->textBox3->Text = "Chicken and Brown (US)";
			else if (a[0] == 'c')
				this->textBox3->Text = "Veg Harvest (CAN)";
			else if (a[0] == 'd')
				this->textBox3->Text = "Veg Harvest (US)";
			else if (a[0] == 'e')
				this->textBox3->Text = "Whole Grain Brown (CAN)";
			else if (a[0] == 'f')
				this->textBox3->Text = "Whole Grain Brown (US)";
			else if (a[0] == 'g')
				this->textBox3->Text = "Vegetable Medley (CAN)";
			else if (a[0] == 'h')
				this->textBox3->Text = "Tomato and Herb (CAN)";
			else if (a[0] == 'i')
				this->textBox3->Text = "Long Grain (CAN)";
			else if (a[0] == 'j')
				this->textBox3->Text = "Long Grain (US)";
			else if (a[0] == 'k')
				this->textBox3->Text = "Oriental (CAN)";
			else if (a[0] == 'l')
				this->textBox3->Text = "Long Grain and Wild (CAN)";
			else if (a[0] == 'm')
				this->textBox3->Text = "Long Grain and Wild (US)";
			else if (a[0] == 'n')
				this->textBox3->Text = "Garlic & Wild (CAN)";
			else if (a[0] == 'o')
				this->textBox3->Text = "Chicken and Wild (CAN)";
			else if (a[0] == 'p')
				this->textBox3->Text = "Mushroom and Wild (CAN)";
			else if (a[0] == 'q')
				this->textBox3->Text = "Basmati (CAN)";
			else if (a[0] == 'r')
				this->textBox3->Text = "Basmati (US)";
			else if (a[0] == 's')
				this->textBox3->Text = "Jasmine (US)";
			else if (a[0] == 't')
				this->textBox3->Text = "Roasted Chicken (US)";
			else if (a[0] == 'u')
				this->textBox3->Text = "Spanish (US)";
			else if (a[0] == 'v')
				this->textBox3->Text = "Pilaf (US)";
			else if (a[0] == 'w')
				this->textBox3->Text = "Teriyaki (US)";
			else if (a[0] == 'x')
				this->textBox3->Text = "Four Cheese (US)";
			else if (a[0] == 'y')
				this->textBox3->Text = "Cajun (US)";
			else if (a[0] == 'z')
				this->textBox3->Text = "Indian Curry (CAN)";
			else if (a[0] == 'A')
				this->textBox3->Text = "Brown and Wild (US)";
			else if (a[0] == 'B')
				this->textBox3->Text = "Jasmine (CAN)";
			else if (a[0] == 'C')
				this->textBox3->Text = "Garden Veg (US)";
			else if (a[0] == 'D')
				this->textBox3->Text = "Creamy Cheddar (CAN)";
			else if (a[0] == 'E')
				this->textBox3->Text = "Santa Fe (US)";
			else if (a[0] == 'F')
				this->textBox3->Text = "Tomato and Herb Risotto (CAN)";
			else if (a[0] == 'G')
				this->textBox3->Text = "Creamy Carb Risotto (CAN)";
			else if (a[0] == 'H')
				this->textBox3->Text = "Med Veg Risotto (CAN)";
			else if (a[0] == 'I')
				this->textBox3->Text = "Mushroom Risotto (CAN)";
			else if (a[0] == 'J')
				this->textBox3->Text = "Brown Red Black Japonica (US)";
			else if (a[0] == 'K')
				this->textBox3->Text = "Quinoa & Brown & Garlic (CAN)";
			else if (a[0] == 'L')
				this->textBox3->Text = "SOC Quinoa & Brown & Garlic (US)";
			else if (a[0] == 'M')
				this->textBox3->Text = "Butter and Garlic (US)";
			else if (a[0] == 'N')
				this->textBox3->Text = "Whole Grain and Wild (CAN)";
			else if (a[0] == 'O') {
				this->textBox3->Text = "Basmati (CAN)";
				this->textBox3->Text = "Basmati (US)";
			}
			else if (a[0] == 'P') {
				this->textBox3->Text = "Veg Harvest (CAN)";
				this->textBox3->Text = "Veg Harvest (US)";
			}
			else if (a[0] == 'Q') {
				this->textBox3->Text = "Whole Grain Brown (CAN)";
				this->textBox3->Text = "Whole Grain Brown (US)";
			}
			else if (a[0] == 'R') {
				this->textBox3->Text = "Long Grain (CAN)";
				this->textBox3->Text = "Long Grain (US)";
			}
			else if (a[0] == 'S') {
				this->textBox3->Text = "Jasmine (CAN)";
				this->textBox3->Text = "Jasmine (US)";
			}
			else if (a[0] == 'T') {
				this->textBox3->Text = "Long Grain and Wild (US)";
				this->textBox3->Text = "Long Grain and Wild (CAN)";
			}

							for (i = 1; i < r + 1; i++) {
								if (a[i] == 'a')
									this->textBox3->Text = textBox3->Text + "\r\nChicken and Brown (CAN)";
								else if (a[i] == 'b')
									this->textBox3->Text = textBox3->Text + "\r\nChicken and Brown (US)";
								else if (a[i] == 'c')
									this->textBox3->Text = textBox3->Text + "\r\nVeg Harvest (CAN)";
								else if (a[i] == 'd')
									this->textBox3->Text = textBox3->Text + "\r\nVeg Harvest (US)";
								else if (a[i] == 'e')
									this->textBox3->Text = textBox3->Text + "\r\nWhole Grain Brown (CAN)";
								else if (a[i] == 'f')
									this->textBox3->Text = textBox3->Text + "\r\nWhole Grain Brown (US)";
								else if (a[i] == 'g')
									this->textBox3->Text = textBox3->Text + "\r\nVegetable Medley (CAN)";
								else if (a[i] == 'h')
									this->textBox3->Text = textBox3->Text + "\r\nTomato and Herb (CAN)";
								else if (a[i] == 'i')
									this->textBox3->Text = textBox3->Text + "\r\nLong Grain (CAN)";
								else if (a[i] == 'j')
									this->textBox3->Text = textBox3->Text + "\r\nLong Grain (US)";
								else if (a[i] == 'k')
									this->textBox3->Text = textBox3->Text + "\r\nOriental (CAN)";
								else if (a[i] == 'l')
									this->textBox3->Text = textBox3->Text + "\r\nLong Grain and Wild (CAN)";
								else if (a[i] == 'm')
									this->textBox3->Text = textBox3->Text + "\r\nLong Grain and Wild (US)";
								else if (a[i] == 'n')
									this->textBox3->Text = textBox3->Text + "\r\nGarlic and Wild (CAN)";
								else if (a[i] == 'o')
									this->textBox3->Text = textBox3->Text + "\r\nChicken and Wild (CAN)";
								else if (a[i] == 'p')
									this->textBox3->Text = textBox3->Text + "\r\nMushroom and Wild (CAN)";
								else if (a[i] == 'q')
									this->textBox3->Text = textBox3->Text + "\r\nBasmati (CAN)";
								else if (a[i] == 'r')
									this->textBox3->Text = textBox3->Text + "\r\nBasmati (US)";
								else if (a[i] == 's')
									this->textBox3->Text = textBox3->Text + "\r\nJasmine (US)";
								else if (a[i] == 't')
									this->textBox3->Text = textBox3->Text + "\r\nRoasted Chicken (US)";
								else if (a[i] == 'u')
									this->textBox3->Text = textBox3->Text + "\r\nSpanish (US)";
								else if (a[i] == 'v')
									this->textBox3->Text = textBox3->Text + "\r\nPilaf (US)";
								else if (a[i] == 'w')
									this->textBox3->Text = textBox3->Text + "\r\nTeriyaki (US)";
								else if (a[i] == 'x')
									this->textBox3->Text = textBox3->Text + "\r\nFour Cheese (US)";
								else if (a[i] == 'y')
									this->textBox3->Text = textBox3->Text + "\r\nCajun (US)";
								else if (a[i] == 'z')
									this->textBox3->Text = textBox3->Text + "\r\nIndian Curry (CAN)";
								else if (a[i] == 'A')
									this->textBox3->Text = textBox3->Text + "\r\nBrown and Wild (US)";
								else if (a[i] == 'B')
									this->textBox3->Text = textBox3->Text + "\r\nJasmine (CAN)";
								else if (a[i] == 'C')
									this->textBox3->Text = textBox3->Text + "\r\nGarden Veg (US)";
								else if (a[i] == 'D')
									this->textBox3->Text = textBox3->Text + "\r\nCreamy Cheddar (CAN)";
								else if (a[i] == 'E')
									this->textBox3->Text = textBox3->Text + "\r\nSanta Fe (US)";
								else if (a[i] == 'F')
									this->textBox3->Text = textBox3->Text + "\r\nTomato and Herb Risotto (CAN)";
								else if (a[i] == 'G')
									this->textBox3->Text = textBox3->Text + "\r\nCreamy Carb Risotto (CAN)";
								else if (a[i] == 'H')
									this->textBox3->Text = textBox3->Text + "\r\nMed Veg Risotto (CAN)";
								else if (a[i] == 'I')
									this->textBox3->Text = textBox3->Text + "\r\nMushroom Risotto (CAN)";
								else if (a[i] == 'J')
									this->textBox3->Text = textBox3->Text + "\r\nBrown Red Black Japonica (US)";
								else if (a[i] == 'K')
									this->textBox3->Text = textBox3->Text + "\r\nQuinoa & Brown & Garlic (CAN)";
								else if (a[i] == 'L')
									this->textBox3->Text = textBox3->Text + "\r\nSOC Quinoa & Brown & Garlic (US)";
								else if (a[i] == 'M')
									this->textBox3->Text = textBox3->Text + "\r\nButter and Garlic (US)";
								else if (a[i] == 'N')
									this->textBox3->Text = textBox3->Text + "\r\nWhole Grain and Wild (CAN)";
								else if (a[i] == 'O') {
									this->textBox3->Text = textBox3->Text + "\r\nBasmati (CAN)";
									this->textBox3->Text = textBox3->Text + "\r\nBasmati (US)";
								}
								else if (a[i] == 'P') {
									this->textBox3->Text = textBox3->Text + "\r\nVeg Harvest (CAN)";
									this->textBox3->Text = textBox3->Text + "\r\nVeg Harvest (US)";
								}
								else if (a[i] == 'Q') {
									this->textBox3->Text = textBox3->Text + "\r\nWhole Grain Brown (CAN)";
									this->textBox3->Text = textBox3->Text + "\r\nWhole Grain Brown (US)";
								}
								else if (a[i] == 'R') {
									this->textBox3->Text = textBox3->Text + "\r\nLong Grain (CAN)";
									this->textBox3->Text = textBox3->Text + "\r\nLong Grain (US)";
								}
								else if (a[i] == 'S') {
									this->textBox3->Text = textBox3->Text + "\r\nJasmine (CAN)";
									this->textBox3->Text = textBox3->Text + "\r\nJasmine (US)";
								}
								else if (a[i] == 'T') {
									this->textBox3->Text = textBox3->Text + "\r\nLong Grain and Wild (US)";
									this->textBox3->Text = textBox3->Text + "\r\nLong Grain and Wild (CAN)";
								}

							}
}
			}
			

			else {
				for (i = l; i <= r-z; i++) {
					temp = a[i];
					a[i] = a[l];
					a[l] = temp;
					permute(a, l + 1, r, 1, v, t); 
					temp = a[i];
					a[i] = a[l];
					a[l] = temp;	
				}
		//Application::DoEvents();	
			}
			if (p == 2) {
				textBox4->Clear();
				textBox3->Clear();
				a->Clear;
				optarr->Clear;
				optimal = 0;
				time = 0;
				p = 0;
				z = 0;
				
				Controls->Clear();
				InitializeComponent();
			}
		}
		
#pragma endregion
		
		    int i = 0;
			String ^value;
			array<Char> ^a = gcnew array<Char>(20);

	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {

	}

	private: System::Void textBox1_TextChanged_1(System::Object^  sender, System::EventArgs^  e) {
		

	}
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}

	private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
		a[i] = 'a';
		if (i == 0)
			this->textBox2->Text = "Chicken and Brown (CAN)";
		else
			this->textBox2->Text = textBox2->Text + "\r\nChicken and Brown (CAN)";
		i = i + 1;

	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		a[i] = 'b';
		if (i == 0)
			this->textBox2->Text = "Chicken and Brown (US)";
		else
			this->textBox2->Text = textBox2->Text + "\r\nChicken and Brown (US)";
		i = i + 1;
		
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		a[i] = 'c';
		if (i == 0)
			this->textBox2->Text = "Veg Harvest (CAN)";
		else
			this->textBox2->Text = textBox2->Text + "\r\nVeg Harvest (CAN)";
		i = i + 1;
		
	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		a[i] = 'd';
		if (i == 0)
			this->textBox2->Text = "Veg Harvest (US)";
		else
			this->textBox2->Text = textBox2->Text + "\r\nVeg Harvest (US)";
		i = i + 1;
		
	}
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
		a[i] = 'e';
		if (i == 0)
			this->textBox2->Text = "Whole Grain Brown (CAN)";
		else
			this->textBox2->Text = textBox2->Text + "\r\nWhole Grain Brown (CAN)";
		i = i + 1;
		
	}
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
		a[i] = 'f';
		if (i == 0)
			this->textBox2->Text = "Whole Grain Brown (US)";
		else
			this->textBox2->Text = textBox2->Text + "\r\nWhole Grain Brown (US)";
		i = i + 1;
		
	}
private: System::Void button37_Click(System::Object^  sender, System::EventArgs^  e) {
	a[i] = 'g';
	if (i == 0)
		this->textBox2->Text = "Vegetable Medley (CAN)";
	else
		this->textBox2->Text = textBox2->Text + "\r\nVegetable Medley (CAN)";
	i = i + 1;
		
	}
	private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
		a[i] = 'h';
		if (i == 0)
			this->textBox2->Text = "Tomato and Herb (CAN)";
		else
			this->textBox2->Text = textBox2->Text + "\r\nTomato and Herb (CAN)";
		i = i + 1;
		
	}
	private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
		a[i] = 'i';
		if (i == 0)
			this->textBox2->Text = "Long Grain (CAN)";
		else
			this->textBox2->Text = textBox2->Text + "\r\nLong Grain (CAN)";
		i = i + 1;
		
	}
	private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
		a[i] = 'j';
		if (i == 0)
			this->textBox2->Text = "Long Grain (US)";
		else
			this->textBox2->Text = textBox2->Text + "\r\nLong Grain (US)";
		i = i + 1;
		
	}
	private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
		a[i] = 'k';
		if (i == 0)
			this->textBox2->Text = "Oriental (CAN)";
		else
			this->textBox2->Text = textBox2->Text + "\r\nOriental (CAN)";
		i = i + 1;
		
	}
	private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
		a[i] = 'l';
		if (i == 0)
			this->textBox2->Text = "Long Grain and Wild (CAN)";
		else
			this->textBox2->Text = textBox2->Text + "\r\nLong Grain and Wild (CAN)";
		i = i + 1;
		
	}
	private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
		a[i] = 'm';
		if (i == 0)
			this->textBox2->Text = "Long Grain and Wild (US)";
		else
			this->textBox2->Text = textBox2->Text + "\r\nLong Grain and Wild (US)";
		i = i + 1;
		
	}
	private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
		a[i] = 'n';
		if (i == 0)
			this->textBox2->Text = "Garlic and Wild (CAN)";
		else
			this->textBox2->Text = textBox2->Text + "\r\nGarlic and Wild (CAN)";
		i = i + 1;
		
	}
	private: System::Void button38_Click(System::Object^  sender, System::EventArgs^  e) {
		a[i] = 'o';
		if (i == 0)
			this->textBox2->Text = "Chicken and Wild (CAN)";
		else
			this->textBox2->Text = textBox2->Text + "\r\nChicken and Wild (CAN)";
		i = i + 1;
		
	}
	private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
		a[i] = 'p';
		if (i == 0)
			this->textBox2->Text = "Mushroom and Wild (CAN)";
		else
			this->textBox2->Text = textBox2->Text + "\r\nMushroom and Wild (CAN)";
		i = i + 1;
			
	}
	private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
		a[i] = 'q';
		if (i == 0)
			this->textBox2->Text = "Basmati (CAN)";
		else
			this->textBox2->Text = textBox2->Text + "\r\nBasmati (CAN)";
		i = i + 1;
		
	}
	private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
		a[i] = 'r';
		if (i == 0)
			this->textBox2->Text = "Basmati (US)";
		else
			this->textBox2->Text = textBox2->Text + "\r\nBasmati (US)";
		i = i + 1;
		
	}
	private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) {
		a[i] = 's';
		if (i == 0)
			this->textBox2->Text = "Jasmine (US)";
		else
			this->textBox2->Text = textBox2->Text + "\r\nJasmine (US)";
		i = i + 1;
		
	}
	private: System::Void button18_Click(System::Object^  sender, System::EventArgs^  e) {
		a[i] = 't';
		if (i == 0)
			this->textBox2->Text = "Roasted Chicken (US)";
		else
			this->textBox2->Text = textBox2->Text + "\r\nRoasted Chicken (US)";
		i = i + 1;
		
	}
	private: System::Void button39_Click(System::Object^  sender, System::EventArgs^  e) {
		a[i] = 'u';
		if (i == 0)
			this->textBox2->Text = "Spanish (US)";
		else
			this->textBox2->Text = textBox2->Text + "\r\nSpanish (US)";
		i = i + 1;
				
		}
	private: System::Void button19_Click(System::Object^  sender, System::EventArgs^  e) {
		a[i] = 'v';
		if (i == 0)
			this->textBox2->Text = "Pilaf (US)";
		else
			this->textBox2->Text = textBox2->Text + "\r\nPilaf (US)";
		i = i + 1;
		
	}

	private: System::Void button20_Click(System::Object^  sender, System::EventArgs^  e) {
		a[i] = 'w';
		if (i == 0)
			this->textBox2->Text = "Teriyaki (US)";
		else
			this->textBox2->Text = textBox2->Text + "\r\nTeriyaki (US)";
		i = i + 1;
		
	}
	private: System::Void button21_Click(System::Object^  sender, System::EventArgs^  e) {
		a[i] = 'x';
		if (i == 0)
			this->textBox2->Text = "Four Cheese (US)";
		else
			this->textBox2->Text = textBox2->Text + "\r\nFour Cheese (US)";
		i = i + 1;
		
	}
	private: System::Void button22_Click(System::Object^  sender, System::EventArgs^  e) {
		a[i] = 'y';
		if (i == 0)
			this->textBox2->Text = "Cajun (US)";
		else
			this->textBox2->Text = textBox2->Text + "\r\nCajun (US)";
		i = i + 1;
		
	}
	private: System::Void button23_Click(System::Object^  sender, System::EventArgs^  e) {
		a[i] = 'z';
		if (i == 0)
			this->textBox2->Text = "Indian Curry (CAN)";
		else
			this->textBox2->Text = textBox2->Text + "\r\nIndian Curry (CAN)";
		i = i + 1;
		
	}
	private: System::Void button24_Click(System::Object^  sender, System::EventArgs^  e) {
		a[i] = 'A';
		if (i == 0)
			this->textBox2->Text = "Brown and Wild (US)";
		else
			this->textBox2->Text = textBox2->Text + "\r\nBrown and Wild (US)";
		i = i + 1;
		
	}
private: System::Void button40_Click(System::Object^  sender, System::EventArgs^  e) {
	a[i] = 'B';
	if (i == 0)
		this->textBox2->Text = "Jasmine (CAN)";
	else
		this->textBox2->Text = textBox2->Text + "\r\nJasmine (CAN)";
	i = i + 1;
		
	}
	private: System::Void button25_Click(System::Object^  sender, System::EventArgs^  e) {
		a[i] = 'C';
		if (i == 0)
			this->textBox2->Text = "Garden Veg (US)";
		else
			this->textBox2->Text = textBox2->Text + "\r\nGarden Veg (US)";
		i = i + 1;
		
	}
	private: System::Void button26_Click(System::Object^  sender, System::EventArgs^  e) {
		a[i] = 'D';
		if (i == 0)
			this->textBox2->Text = "Creamy Cheddar (CAN)";
		else
			this->textBox2->Text = textBox2->Text + "\r\nCreamy Cheddar (CAN)";
		i = i + 1;
		
	}
	private: System::Void button27_Click(System::Object^  sender, System::EventArgs^  e) {
		a[i] = 'E';
		if (i == 0)
			this->textBox2->Text = "Santa Fe (US)";
		else
			this->textBox2->Text = textBox2->Text + "\r\nSanta Fe (US)";
		i = i + 1;
		
	}
	private: System::Void button28_Click(System::Object^  sender, System::EventArgs^  e) {
		a[i] = 'F';
		if (i == 0)
			this->textBox2->Text = "Tomato and Herb Risotto (CAN)";
		else
			this->textBox2->Text = textBox2->Text + "\r\nTomato and Herb Risotto (CAN)";
		i = i + 1;
		
	}
	private: System::Void button29_Click(System::Object^  sender, System::EventArgs^  e) {
		a[i] = 'G';
		if (i == 0)
			this->textBox2->Text = "Creamy Carb Risotto (CAN)";
		else
			this->textBox2->Text = textBox2->Text + "\r\nCreamy Carb Risotto (CAN)";
		i = i + 1;
		
	}
private: System::Void button30_Click(System::Object^  sender, System::EventArgs^  e) {
	a[i] = 'H';
	if (i == 0)
		this->textBox2->Text = "Med Veg Risotto (CAN)";
	else
		this->textBox2->Text = textBox2->Text + "\r\nMed Veg Risotto (CAN)";
	i = i + 1;
		
	}
	private: System::Void button41_Click(System::Object^  sender, System::EventArgs^  e) {
		a[i] = 'I';
		if (i == 0)
			this->textBox2->Text = "Mushroom Risotto (CAN)";
		else
			this->textBox2->Text = textBox2->Text + "\r\nMushroom Risotto (CAN)";
		i = i + 1;
		
	}

	private: System::Void button31_Click(System::Object^  sender, System::EventArgs^  e) {
		a[i] = 'J';
		if (i == 0)
			this->textBox2->Text = "Brown Red Black Japonica (US)";
		else
			this->textBox2->Text = textBox2->Text + "\r\nBrown Red Black Japonica (US)";
		i = i + 1;
		
	}
	private: System::Void button32_Click(System::Object^  sender, System::EventArgs^  e) {
		a[i] = 'K';
		if (i == 0)
			this->textBox2->Text = "Quinoa & Brown & Garlic (CAN)";
		else
			this->textBox2->Text = textBox2->Text + "\r\nQuinoa & Brown & Garlic (CAN)";
		i = i + 1;
		
	}
	private: System::Void button33_Click(System::Object^  sender, System::EventArgs^  e) {
		a[i] = 'L';
		if (i == 0)
			this->textBox2->Text = "SOC Quinoa & Brown & Garlic (US)";
		else
			this->textBox2->Text = textBox2->Text + "\r\nSOC Quinoa & Brown & Garlic (US)";
		i = i + 1;
		
	}
	private: System::Void button34_Click(System::Object^  sender, System::EventArgs^  e) {
		a[i] = 'M';
		if (i == 0)
			this->textBox2->Text = "Butter & Garlic (US)";
		else
			this->textBox2->Text = textBox2->Text + "\r\nButter & Garlic (US)";
		i = i + 1;
		
	}
	private: System::Void button35_Click(System::Object^  sender, System::EventArgs^  e) {
		a[i] = 'N';
		if (i == 0)
			this->textBox2->Text = "Whole Grain and Wild (CAN)";
		else
			this->textBox2->Text = textBox2->Text + "\r\nWhole Grain and Wild (CAN)";
		i = i + 1;
		
	}

	 private: System::Void button36_Click(System::Object^  sender, System::EventArgs^  e) {
			permute(a, 0, i-1, 0, a, 0);	
		}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		
	}
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button42_Click(System::Object^  sender, System::EventArgs^  e) {
	a->Clear;
	i = 0;
	permute(a, 0, 0, 2, a, 0);
	
	//Application::Restart();
}
private: System::Void progressBar1_Click(System::Object^  sender, System::EventArgs^  e) {
	
}
private: System::Void button43_Click(System::Object^  sender, System::EventArgs^  e) {
	int x;
	i = i - 1;
	x = i;
	this->textBox2->Clear();
	if (a[0] == 'a')
		this->textBox2->Text = "Chicken and Brown (CAN)";
	else if (a[0] == 'b')
		this->textBox2->Text = "Chicken and Brown (US)";
	else if (a[0] == 'c')
		this->textBox2->Text = "Veg Harvest (CAN)";
	else if (a[0] == 'd')
		this->textBox2->Text = "Veg Harvest (US)";
	else if (a[0] == 'e')
		this->textBox2->Text = "Whole Grain Brown (CAN)";
	else if (a[0] == 'f')
		this->textBox2->Text = "Whole Grain Brown (US)";
	else if (a[0] == 'g')
		this->textBox2->Text = "Vegetable Medley (CAN)";
	else if (a[0] == 'h')
		this->textBox2->Text = "Tomato and Herb (CAN)";
	else if (a[0] == 'i')
		this->textBox2->Text = "Long Grain (CAN)";
	else if (a[0] == 'j')
		this->textBox2->Text = "Long Grain (US)";
	else if (a[0] == 'k')
		this->textBox2->Text = "Oriental (CAN)";
	else if (a[0] == 'l')
		this->textBox2->Text = "Long Grain and Wild (CAN)";
	else if (a[0] == 'm')
		this->textBox2->Text = "Long Grain and Wild (US)";
	else if (a[0] == 'n')
		this->textBox2->Text = "Garlic & Wild (CAN)";
	else if (a[0] == 'o')
		this->textBox2->Text = "Chicken and Wild (CAN)";
	else if (a[0] == 'p')
		this->textBox2->Text = "Mushroom and Wild (CAN)";
	else if (a[0] == 'q')
		this->textBox2->Text = "Basmati (CAN)";
	else if (a[0] == 'r')
		this->textBox2->Text = "Basmati (US)";
	else if (a[0] == 's')
		this->textBox2->Text = "Jasmine (US)";
	else if (a[0] == 't')
		this->textBox2->Text = "Roasted Chicken (US)";
	else if (a[0] == 'u')
		this->textBox2->Text = "Spanish (US)";
	else if (a[0] == 'v')
		this->textBox2->Text = "Pilaf (US)";
	else if (a[0] == 'w')
		this->textBox2->Text = "Teriyaki (US)";
	else if (a[0] == 'x')
		this->textBox2->Text = "Four Cheese (US)";
	else if (a[0] == 'y')
		this->textBox2->Text = "Cajun (US)";
	else if (a[0] == 'z')
		this->textBox2->Text = "Indian Curry (CAN)";
	else if (a[0] == 'A')
		this->textBox2->Text = "Brown and Wild (US)";
	else if (a[0] == 'B')
		this->textBox2->Text = "Jasmine (CAN)";
	else if (a[0] == 'C')
		this->textBox2->Text = "Garden Veg (US)";
	else if (a[0] == 'D')
		this->textBox2->Text = "Creamy Cheddar (CAN)";
	else if (a[0] == 'E')
		this->textBox2->Text = "Santa Fe (US)";
	else if (a[0] == 'F')
		this->textBox2->Text = "Tomato and Herb Risotto (CAN)";
	else if (a[0] == 'G')
		this->textBox2->Text = "Creamy Carb Risotto (CAN)";
	else if (a[0] == 'H')
		this->textBox2->Text = "Med Veg Risotto (CAN)";
	else if (a[0] == 'I')
		this->textBox2->Text = "Mushroom Risotto (CAN)";
	else if (a[0] == 'J')
		this->textBox2->Text = "Brown Red Black Japonica (US)";
	else if (a[0] == 'K')
		this->textBox2->Text = "Quinoa & Brown & Garlic (CAN)";
	else if (a[0] == 'L')
		this->textBox2->Text = "SOC Quinoa & Brown & Garlic (US)";
	else if (a[0] == 'M')
		this->textBox2->Text = "Butter and Garlic (US)";
	else if (a[0] == 'N')
		this->textBox2->Text = "Whole Grain and Wild (CAN)";

	for (i = 1; i < x; i++) {
		if (a[i] == 'a')
			this->textBox2->Text = textBox2->Text + "\r\nChicken and Brown (CAN)";
		else if (a[i] == 'b')
			this->textBox2->Text = textBox2->Text + "\r\nChicken and Brown (US)";
		else if (a[i] == 'c')
			this->textBox2->Text = textBox2->Text + "\r\nVeg Harvest (CAN)";
		else if (a[i] == 'd')
			this->textBox2->Text = textBox2->Text + "\r\nVeg Harvest (US)";
		else if (a[i] == 'e')
			this->textBox2->Text = textBox2->Text + "\r\nWhole Grain Brown (CAN)";
		else if (a[i] == 'f')
			this->textBox2->Text = textBox2->Text + "\r\nWhole Grain Brown (US)";
		else if (a[i] == 'g')
			this->textBox2->Text = textBox2->Text + "\r\nVegetable Medley (CAN)";
		else if (a[i] == 'h')
			this->textBox2->Text = textBox2->Text + "\r\nTomato and Herb (CAN)";
		else if (a[i] == 'i')
			this->textBox2->Text = textBox2->Text + "\r\nLong Grain (CAN)";
		else if (a[i] == 'j')
			this->textBox2->Text = textBox2->Text + "\r\nLong Grain (US)";
		else if (a[i] == 'k')
			this->textBox2->Text = textBox2->Text + "\r\nOriental (CAN)";
		else if (a[i] == 'l')
			this->textBox2->Text = textBox2->Text + "\r\nLong Grain and Wild (CAN)";
		else if (a[i] == 'm')
			this->textBox2->Text = textBox2->Text + "\r\nLong Grain and Wild (US)";
		else if (a[i] == 'n')
			this->textBox2->Text = textBox2->Text + "\r\nGarlic and Wild (CAN)";
		else if (a[i] == 'o')
			this->textBox2->Text = textBox2->Text + "\r\nChicken and Wild (CAN)";
		else if (a[i] == 'p')
			this->textBox2->Text = textBox2->Text + "\r\nMushroom and Wild (CAN)";
		else if (a[i] == 'q')
			this->textBox2->Text = textBox2->Text + "\r\nBasmati (CAN)";
		else if (a[i] == 'r')
			this->textBox2->Text = textBox2->Text + "\r\nBasmati (US)";
		else if (a[i] == 's')
			this->textBox2->Text = textBox2->Text + "\r\nJasmine (US)";
		else if (a[i] == 't')
			this->textBox2->Text = textBox2->Text + "\r\nRoasted Chicken (US)";
		else if (a[i] == 'u')
			this->textBox2->Text = textBox2->Text + "\r\nSpanish (US)";
		else if (a[i] == 'v')
			this->textBox2->Text = textBox2->Text + "\r\nPilaf (US)";
		else if (a[i] == 'w')
			this->textBox2->Text = textBox2->Text + "\r\nTeriyaki (US)";
		else if (a[i] == 'x')
			this->textBox2->Text = textBox2->Text + "\r\nFour Cheese (US)";
		else if (a[i] == 'y')
			this->textBox2->Text = textBox2->Text + "\r\nCajun (US)";
		else if (a[i] == 'z')
			this->textBox2->Text = textBox2->Text + "\r\nIndian Curry (CAN)";
		else if (a[i] == 'A')
			this->textBox2->Text = textBox2->Text + "\r\nBrown and Wild (US)";
		else if (a[i] == 'B')
			this->textBox2->Text = textBox2->Text + "\r\nJasmine (CAN)";
		else if (a[i] == 'C')
			this->textBox2->Text = textBox2->Text + "\r\nGarden Veg (US)";
		else if (a[i] == 'D')
			this->textBox2->Text = textBox2->Text + "\r\nCreamy Cheddar (CAN)";
		else if (a[i] == 'E')
			this->textBox2->Text = textBox2->Text + "\r\nSanta Fe (US)";
		else if (a[i] == 'F')
			this->textBox2->Text = textBox2->Text + "\r\nTomato and Herb Risotto (CAN)";
		else if (a[i] == 'G')
			this->textBox2->Text = textBox2->Text + "\r\nCreamy Carb Risotto (CAN)";
		else if (a[i] == 'H')
			this->textBox2->Text = textBox2->Text + "\r\nMed Veg Risotto (CAN)";
		else if (a[i] == 'I')
			this->textBox2->Text = textBox2->Text + "\r\nMushroom Risotto (CAN)";
		else if (a[i] == 'J')
			this->textBox2->Text = textBox2->Text + "\r\nBrown Red Black Japonica (US)";
		else if (a[i] == 'K')
			this->textBox2->Text = textBox2->Text + "\r\nQuinoa & Brown & Garlic (CAN)";
		else if (a[i] == 'L')
			this->textBox2->Text = textBox2->Text + "\r\nSOC Quinoa & Brown & Garlic (US)";
		else if (a[i] == 'M')
			this->textBox2->Text = textBox2->Text + "\r\nButter and Garlic (US)";
		else if (a[i] == 'N')
			this->textBox2->Text = textBox2->Text + "\r\nWhole Grain and Wild (CAN)";
	}
}
private: System::Void button44_Click(System::Object^  sender, System::EventArgs^  e) {
	permute(a, 0, i - 1, 0, a, 1);

}
};
}
	

