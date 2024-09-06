#pragma once

#include <string>
#include <Windows.h>
#include <msclr\marshal_cppstd.h>
#include <vector>
#include <utility>
#include <fstream>

using namespace System;
using namespace System::Net;
using namespace System::Net::Sockets;
using namespace System::Text;
using namespace msclr::interop;

namespace Calendar {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� CalendarMain
	/// </summary>
	public ref class CalendarMain : public System::Windows::Forms::Form
	{

	public:
		delegate void ButtonClickEventHandler(int buttonId);
		event ButtonClickEventHandler^ ButtonClick;

		CalendarMain(Socket^ socket)
		{
			InitializeComponent();
			UpdateCalendar();
			Theme();

			/*if (darkTheme)
			{
				this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
					static_cast<System::Int32>(static_cast<System::Byte>(64)));
			}
			else
			{
				this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
					static_cast<System::Int32>(static_cast<System::Byte>(224)));
			}*/
		}

	protected:
		~CalendarMain()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Panel^ panel1;
	protected:

	private: System::Windows::Forms::Label^ label1;


	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button10;



	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Label^ label8;





	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->panel2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel1->BackColor = System::Drawing::Color::DarkOrchid;
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->groupBox2);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1125, 50);
			this->panel1->TabIndex = 2;
			this->panel1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &CalendarMain::panel1_MouseDown);
			this->panel1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &CalendarMain::panel1_MouseMove);
			this->panel1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &CalendarMain::panel1_MouseUp);
			// 
			// button4
			// 
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->ForeColor = System::Drawing::Color::White;
			this->button4->Location = System::Drawing::Point(1019, 0);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(50, 50);
			this->button4->TabIndex = 6;
			this->button4->Text = L"_";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &CalendarMain::button4_Click_1);
			// 
			// button3
			// 
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->ForeColor = System::Drawing::Color::White;
			this->button3->Location = System::Drawing::Point(1075, 0);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(50, 50);
			this->button3->TabIndex = 6;
			this->button3->Text = L"X";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &CalendarMain::button3_Click_1);
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(508, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(183, 32);
			this->label1->TabIndex = 4;
			this->label1->Text = L"���������++";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button11);
			this->groupBox2->Controls->Add(this->button16);
			this->groupBox2->Controls->Add(this->button10);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox2->ForeColor = System::Drawing::Color::White;
			this->groupBox2->Location = System::Drawing::Point(80, 55);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(1040, 1040);
			this->groupBox2->TabIndex = 5;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"��������������������� ���������";
			this->groupBox2->Visible = false;
			// 
			// button11
			// 
			this->button11->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button11->ForeColor = System::Drawing::Color::White;
			this->button11->Location = System::Drawing::Point(301, 436);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(433, 133);
			this->button11->TabIndex = 1;
			this->button11->Text = L"�������������� � ������";
			this->button11->UseVisualStyleBackColor = true;
			// 
			// button16
			// 
			this->button16->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button16->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button16->Location = System::Drawing::Point(301, 174);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(433, 133);
			this->button16->TabIndex = 0;
			this->button16->Text = L"������������ � �������";
			this->button16->UseVisualStyleBackColor = true;
			// 
			// button10
			// 
			this->button10->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->Location = System::Drawing::Point(301, 305);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(433, 133);
			this->button10->TabIndex = 0;
			this->button10->Text = L"������� ������";
			this->button10->UseVisualStyleBackColor = true;
			// 
			// panel2
			// 
			this->panel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel2->BackColor = System::Drawing::Color::DarkViolet;
			this->panel2->Controls->Add(this->button9);
			this->panel2->Controls->Add(this->button8);
			this->panel2->Controls->Add(this->button7);
			this->panel2->Controls->Add(this->button6);
			this->panel2->Controls->Add(this->button5);
			this->panel2->Location = System::Drawing::Point(0, 50);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(75, 1050);
			this->panel2->TabIndex = 3;
			// 
			// button9
			// 
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->ForeColor = System::Drawing::Color::White;
			this->button9->Location = System::Drawing::Point(0, 400);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 100);
			this->button9->TabIndex = 4;
			this->button9->Text = L"����� �� ��������";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &CalendarMain::button9_Click);
			// 
			// button8
			// 
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->ForeColor = System::Drawing::Color::White;
			this->button8->Location = System::Drawing::Point(0, 300);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 100);
			this->button8->TabIndex = 3;
			this->button8->Text = L"�����������";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &CalendarMain::button8_Click);
			// 
			// button7
			// 
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->ForeColor = System::Drawing::Color::White;
			this->button7->Location = System::Drawing::Point(0, 200);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 100);
			this->button7->TabIndex = 2;
			this->button7->Text = L"���������";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &CalendarMain::button7_Click);
			// 
			// button6
			// 
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->ForeColor = System::Drawing::Color::White;
			this->button6->Location = System::Drawing::Point(0, 100);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 100);
			this->button6->TabIndex = 1;
			this->button6->Text = L"������";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &CalendarMain::button6_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::BlueViolet;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->ForeColor = System::Drawing::Color::White;
			this->button5->Location = System::Drawing::Point(0, 0);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 100);
			this->button5->TabIndex = 0;
			this->button5->Text = L"�������";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &CalendarMain::button5_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->button20);
			this->groupBox3->Controls->Add(this->button19);
			this->groupBox3->Controls->Add(this->label7);
			this->groupBox3->Controls->Add(this->label6);
			this->groupBox3->Controls->Add(this->button18);
			this->groupBox3->Controls->Add(this->button17);
			this->groupBox3->Controls->Add(this->button2);
			this->groupBox3->Controls->Add(this->button1);
			this->groupBox3->Controls->Add(this->button15);
			this->groupBox3->Controls->Add(this->button13);
			this->groupBox3->Controls->Add(this->button14);
			this->groupBox3->Controls->Add(this->button12);
			this->groupBox3->Controls->Add(this->label5);
			this->groupBox3->Controls->Add(this->label4);
			this->groupBox3->Controls->Add(this->label3);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox3->ForeColor = System::Drawing::Color::White;
			this->groupBox3->Location = System::Drawing::Point(80, 55);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(1020, 800);
			this->groupBox3->TabIndex = 7;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"���������";
			this->groupBox3->Visible = false;
			// 
			// button20
			// 
			this->button20->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button20->BackColor = System::Drawing::Color::DarkViolet;
			this->button20->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button20->Location = System::Drawing::Point(507, 382);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(350, 75);
			this->button20->TabIndex = 11;
			this->button20->Text = L"��������� ���������";
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &CalendarMain::button20_Click);
			// 
			// button19
			// 
			this->button19->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button19->BackColor = System::Drawing::Color::DarkViolet;
			this->button19->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button19->Location = System::Drawing::Point(87, 463);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(350, 75);
			this->button19->TabIndex = 10;
			this->button19->Text = L"��������� ���������";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &CalendarMain::button19_Click);
			// 
			// label7
			// 
			this->label7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(565, 273);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(232, 25);
			this->label7->TabIndex = 9;
			this->label7->Text = L"�� ������� (������):";
			// 
			// label6
			// 
			this->label6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(179, 272);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(147, 26);
			this->label6->TabIndex = 8;
			this->label6->Text = L"�� �������:";
			// 
			// button18
			// 
			this->button18->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button18->BackColor = System::Drawing::Color::DarkViolet;
			this->button18->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button18->Location = System::Drawing::Point(507, 463);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(350, 75);
			this->button18->TabIndex = 7;
			this->button18->Text = L"���������� ���������";
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &CalendarMain::button18_Click);
			// 
			// button17
			// 
			this->button17->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button17->BackColor = System::Drawing::Color::DarkViolet;
			this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button17->Location = System::Drawing::Point(507, 301);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(350, 75);
			this->button17->TabIndex = 6;
			this->button17->Text = L"����������� ���������";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &CalendarMain::button17_Click);
			// 
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button2->BackColor = System::Drawing::Color::DarkViolet;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(297, 146);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(350, 75);
			this->button2->TabIndex = 5;
			this->button2->Text = L"������� ����";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &CalendarMain::button2_Click);
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button1->BackColor = System::Drawing::Color::DarkViolet;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(297, 65);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(350, 75);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Ҹ���� ���� (�� ���������)";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &CalendarMain::button1_Click);
			// 
			// button15
			// 
			this->button15->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button15->BackColor = System::Drawing::Color::DarkViolet;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->Location = System::Drawing::Point(304, 662);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(350, 75);
			this->button15->TabIndex = 3;
			this->button15->Text = L"����� �� ��������";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &CalendarMain::button15_Click);
			// 
			// button13
			// 
			this->button13->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button13->BackColor = System::Drawing::Color::DarkViolet;
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->Location = System::Drawing::Point(87, 382);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(350, 75);
			this->button13->TabIndex = 3;
			this->button13->Text = L"������������ ���������";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &CalendarMain::button13_Click);
			// 
			// button14
			// 
			this->button14->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button14->BackColor = System::Drawing::Color::DarkViolet;
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->Location = System::Drawing::Point(304, 581);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(350, 75);
			this->button14->TabIndex = 3;
			this->button14->Text = L"��������� �����������";
			this->button14->UseVisualStyleBackColor = false;
			// 
			// button12
			// 
			this->button12->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button12->BackColor = System::Drawing::Color::DarkViolet;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Location = System::Drawing::Point(87, 301);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(350, 75);
			this->button12->TabIndex = 3;
			this->button12->Text = L"������������ ���������";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &CalendarMain::button12_Click);
			// 
			// label5
			// 
			this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(348, 541);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(265, 37);
			this->label5->TabIndex = 2;
			this->label5->Text = L"�������������:";
			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(256, 224);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(428, 37);
			this->label4->TabIndex = 2;
			this->label4->Text = L"������������� ���������:";
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(366, 21);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(216, 37);
			this->label3->TabIndex = 2;
			this->label3->Text = L"����� ����:";
			// 
			// groupBox4
			// 
			this->groupBox4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox4->ForeColor = System::Drawing::Color::White;
			this->groupBox4->Location = System::Drawing::Point(80, 55);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(1020, 800);
			this->groupBox4->TabIndex = 8;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"�����������";
			this->groupBox4->Visible = false;
			// 
			// groupBox1
			// 
			this->groupBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->dateTimePicker1);
			this->groupBox1->Controls->Add(this->panel4);
			this->groupBox1->Controls->Add(this->button22);
			this->groupBox1->Controls->Add(this->button21);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->panel3);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->ForeColor = System::Drawing::Color::White;
			this->groupBox1->Location = System::Drawing::Point(80, 55);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1020, 800);
			this->groupBox1->TabIndex = 9;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"�������� ���������";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(794, 73);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(151, 26);
			this->label8->TabIndex = 12;
			this->label8->Text = L"���� �� ��: ";
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(799, 21);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(190, 45);
			this->dateTimePicker1->TabIndex = 11;
			this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &CalendarMain::dateTimePicker1_ValueChanged_1);
			// 
			// panel4
			// 
			this->panel4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel4->Location = System::Drawing::Point(6, 108);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(1008, 654);
			this->panel4->TabIndex = 10;
			// 
			// button22
			// 
			this->button22->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button22->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button22->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button22->ForeColor = System::Drawing::Color::White;
			this->button22->Location = System::Drawing::Point(260, 49);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(40, 50);
			this->button22->TabIndex = 9;
			this->button22->Text = L"<";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &CalendarMain::button22_Click);
			// 
			// button21
			// 
			this->button21->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button21->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button21->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button21->ForeColor = System::Drawing::Color::White;
			this->button21->Location = System::Drawing::Point(730, 49);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(40, 50);
			this->button21->TabIndex = 8;
			this->button21->Text = L">";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &CalendarMain::button21_Click);
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(420, 56);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(160, 37);
			this->label2->TabIndex = 7;
			this->label2->Text = L"��� 2024";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel3
			// 
			this->panel3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel3->Location = System::Drawing::Point(6, 768);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1008, 24);
			this->panel3->TabIndex = 6;
			// 
			// CalendarMain
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->ClientSize = System::Drawing::Size(1125, 1100);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"CalendarMain";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"CalendarMain";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	private:
		// ������ ����
		bool darkTheme = true;

		// ������ ����
		bool isDragging = false;

		// ���������
		bool mainHolidays = true;
		bool pravoslav = false;
		bool catolic = false;
		bool islam = false;
		bool russia = false;
		bool china = false;
		// ����� ����� ��������� ������

		// ������� ����
		Point lastLocation;

	private:
		System::Void panel1_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
		{
			if (e->Button == System::Windows::Forms::MouseButtons::Left)
			{
				isDragging = true;
				lastLocation = e->Location;
			}
		}

		System::Void panel1_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
		{
			if (e->Button == System::Windows::Forms::MouseButtons::Left)
			{
				isDragging = false;
			}
		}

		System::Void panel1_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
		{
			if (isDragging)
			{
				Point currentScreenPos = PointToScreen(e->Location);
				Location = Point(currentScreenPos.X - lastLocation.X, currentScreenPos.Y - lastLocation.Y);
			}
		}

	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Close();
	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->WindowState = FormWindowState::Minimized;
	}
	// 80; 55

private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (darkTheme)
	{
		this->button5->BackColor = System::Drawing::Color::BlueViolet;
		this->button6->BackColor = System::Drawing::Color::DarkViolet;
		this->button7->BackColor = System::Drawing::Color::DarkViolet;
		this->button8->BackColor = System::Drawing::Color::DarkViolet;
		this->button9->BackColor = System::Drawing::Color::DarkViolet;
	}
	else if (!darkTheme)
	{
		this->button5->BackColor = System::Drawing::Color::DarkGreen;
		this->button6->BackColor = System::Drawing::Color::Green;
		this->button7->BackColor = System::Drawing::Color::Green;
		this->button8->BackColor = System::Drawing::Color::Green;
		this->button9->BackColor = System::Drawing::Color::Green;
	}
	groupBox1->Visible = true;
	UpdateCalendar();
	groupBox2->Visible = false;
	groupBox3->Visible = false;
	groupBox4->Visible = false;
}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (darkTheme)
		{
			this->button6->BackColor = System::Drawing::Color::BlueViolet;
			this->button8->BackColor = System::Drawing::Color::DarkViolet;
			this->button7->BackColor = System::Drawing::Color::DarkViolet;
			this->button5->BackColor = System::Drawing::Color::DarkViolet;
			this->button9->BackColor = System::Drawing::Color::DarkViolet;
		}
		else if (!darkTheme)
		{
			this->button6->BackColor = System::Drawing::Color::DarkGreen;
			this->button8->BackColor = System::Drawing::Color::Green;
			this->button7->BackColor = System::Drawing::Color::Green;
			this->button5->BackColor = System::Drawing::Color::Green;
			this->button9->BackColor = System::Drawing::Color::Green;
		}
		groupBox2->Visible = true;
		groupBox1->Visible = false;
		groupBox3->Visible = false;
		groupBox4->Visible = false;
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (darkTheme)
		{
			this->button7->BackColor = System::Drawing::Color::BlueViolet;
			this->button6->BackColor = System::Drawing::Color::DarkViolet;
			this->button8->BackColor = System::Drawing::Color::DarkViolet;
			this->button5->BackColor = System::Drawing::Color::DarkViolet;
			this->button9->BackColor = System::Drawing::Color::DarkViolet;
		}
		else if (!darkTheme)
		{
			this->button7->BackColor = System::Drawing::Color::DarkGreen;
			this->button6->BackColor = System::Drawing::Color::Green;
			this->button8->BackColor = System::Drawing::Color::Green;
			this->button5->BackColor = System::Drawing::Color::Green;
			this->button9->BackColor = System::Drawing::Color::Green;
		}
		groupBox3->Visible = true;
		groupBox2->Visible = false;
		groupBox1->Visible = false;
		groupBox4->Visible = false;
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if(darkTheme)
		{
			this->button8->BackColor = System::Drawing::Color::BlueViolet;
			this->button6->BackColor = System::Drawing::Color::DarkViolet;
			this->button7->BackColor = System::Drawing::Color::DarkViolet;
			this->button5->BackColor = System::Drawing::Color::DarkViolet;
			this->button9->BackColor = System::Drawing::Color::DarkViolet;
		}
		else if (!darkTheme)
		{
			this->button8->BackColor = System::Drawing::Color::DarkGreen;
			this->button6->BackColor = System::Drawing::Color::Green;
			this->button7->BackColor = System::Drawing::Color::Green;
			this->button5->BackColor = System::Drawing::Color::Green;
			this->button9->BackColor = System::Drawing::Color::Green;
		}
		groupBox2->Visible = false;
		groupBox3->Visible = false;
		groupBox1->Visible = false;
		groupBox4->Visible = true;
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->button9->BackColor = System::Drawing::Color::BlueViolet;
		this->button6->BackColor = System::Drawing::Color::DarkViolet;
		this->button7->BackColor = System::Drawing::Color::DarkViolet;
		this->button8->BackColor = System::Drawing::Color::DarkViolet;
		this->button5->BackColor = System::Drawing::Color::DarkViolet;
		Application::Exit();
	}
private: System::Void button3_Click_1(System::Object^ sender, System::EventArgs^ e)
{
	Application::Exit();
}

private: System::Void button4_Click_1(System::Object^ sender, System::EventArgs^ e)
{
	int buttonId = 4;
	OnButtonClick(buttonId);
	this->WindowState = FormWindowState::Minimized;
}


protected:
	virtual void OnButtonClick(int buttonId)
	{
		ButtonClick(buttonId);
	}

	// ���������� ������� ��� ������ "��������� �����"
private: System::Void button21_Click(System::Object^ sender, System::EventArgs^ e)
{
	// ������ ����� �� label2, ����� �������� ������� ����� � ���
	System::DateTime date = System::DateTime::ParseExact(label2->Text, "MMMM yyyy", nullptr);
	// ����������� ������� ����� �� 1
	date = date.AddMonths(1);
	// ��������� ����� � label2
	label2->Text = date.ToString("MMMM yyyy");
	// ��������� ���������
	UpdateCalendar();
}

	   // ���������� ������� ��� ������ "���������� �����"
private: System::Void button22_Click(System::Object^ sender, System::EventArgs^ e)
{
	// ������ ����� �� label2, ����� �������� ������� ����� � ���
	System::DateTime date = System::DateTime::ParseExact(label2->Text, "MMMM yyyy", nullptr);
	// ��������� ������� ����� �� 1
	date = date.AddMonths(-1);
	// ��������� ����� � label2
	label2->Text = date.ToString("MMMM yyyy");
	// ��������� ���������
	UpdateCalendar();
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e)
{
	// ���������� ������������ ����������
	mainHolidays = false;
	pravoslav = true;
	catolic = false;
	islam = false;
	russia = false;
	china = false;
	UpdateCalendar();
}
private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e)
{
	// ���������� ������������ ����������
	mainHolidays = false;
	pravoslav = false;
	catolic = true;
	islam = false;
	russia = false;
	china = false;
	UpdateCalendar();
}
private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e)
{
	// ���������� ��������� ����������
	mainHolidays = false;
	pravoslav = false;
	catolic = false;
	islam = true;
	russia = false;
	china = false;
	UpdateCalendar();
}
private: System::Void button17_Click(System::Object^ sender, System::EventArgs^ e)
{
	// ���������� ���������� ��������
	mainHolidays = true;
	pravoslav = false;
	catolic = false;
	islam = false;
	russia = false;
	china = false;
	UpdateCalendar();
}
private: System::Void button20_Click(System::Object^ sender, System::EventArgs^ e)
{
	// ���������� ���������� �����
	mainHolidays = false;
	pravoslav = false;
	catolic = false;
	islam = false;
	russia = false;
	china = true;
	UpdateCalendar();
}
private: System::Void button18_Click(System::Object^ sender, System::EventArgs^ e)
{
	// ���������� ���������� ������
	bool mainHolidays = false;
	bool pravoslav = false;
	bool catolic = false;
	bool islam = false;
	bool russia = true;
	bool china = false;
	UpdateCalendar();
}
	   // ������� ��� ���������� ���� �� ��
	   void UpdateDaysUntilBirthday()
	   {
		   // �������� ��������� ���� �� dateTimePicker1
		   System::DateTime selectedDate = dateTimePicker1->Value;
		   int selectedDay = selectedDate.Day;
		   int selectedMonth = selectedDate.Month;

		   // ������� ����
		   System::DateTime now = System::DateTime::Now;
		   int currentYear = now.Year;

		   // ���������� ��������� ���� �������� � ������� ��� ��������� ����
		   System::DateTime nextBirthday = System::DateTime(currentYear, selectedMonth, selectedDay);

		   if (nextBirthday < now)
		   {
			   // ���� ��������� ���� ��� ������ � ���� ����, ��������� ���
			   nextBirthday = nextBirthday.AddYears(1);
		   }

		   // ��������� ���������� ���� �� ���������� ��� ��������
		   int daysUntilBirthday = (nextBirthday - now).Days;

		   // ��������� ����� � label8
		   label8->Text = "�������� ����: " + daysUntilBirthday.ToString();
	   }

	   std::vector<std::pair<int, int>> ReadDatesFromFile(const std::string& filePath)
	   {
		   std::vector<std::pair<int, int>> dates;
		   std::ifstream file(filePath);
		   if (file.is_open())
		   {
			   int day, month;
			   while (file >> day >> month)
			   {
				   dates.push_back(std::make_pair(day, month));
			   }
			   file.close();
		   }
		   return dates;
	   }

	   std::vector<std::pair<int, int>> GetHolidays(bool mainHolidays, bool pravoslav, bool catolic, bool islam, bool china, bool russia) {
		   std::string filePath;

		   if (mainHolidays) {
			   filePath = "osnovnie.txt";
		   }
		   else if (pravoslav) {
			   filePath = "pravoslav.txt";
		   }
		   else if (catolic) {
			   filePath = "catolic.txt";
		   }
		   else if (islam) {
			   filePath = "islam.txt";
		   }
		   else if (china) {
			   filePath = "china.txt";
		   }
		   else if (russia) {
			   filePath = "russia.txt";
		   }
		   else {
			   return {}; // ���������� ������ ������, ���� �� ���� �� ���������� �� ����������
		   }

		   return ReadDatesFromFile(filePath);
	   }

	   void UpdateCalendar() {
		   // ������ ����� �� label2, ����� �������� ����� � ���
		   System::DateTime date = System::DateTime::ParseExact(label2->Text, "MMMM yyyy", nullptr);
		   int month = date.Month;
		   int year = date.Year;

		   // ���������� ���������� ���� � ������� ������
		   int daysInMonth = System::DateTime::DaysInMonth(year, month);

		   // ���������� ���� ������ ��� 1 ����� �������� ������ (0 - ��, 1 - ��, ..., 6 - ��)
		   System::DateTime firstDayOfMonth = System::DateTime(year, month, 1);
		   int startDayOfWeekIndex = static_cast<int>(firstDayOfMonth.DayOfWeek) - 1; // -1, ����� ����������� ��� 0, ����������� - 6

		   // ������� ��� ������ � ����������� ������
		   panel4->Controls->Clear();

		   // ������� ������ ��� ���� ������
		   array<String^>^ daysOfWeek = { "��", "��", "��", "��", "��", "��", "��" };
		   for (int col = 0; col < 7; ++col)
		   {
			   System::Windows::Forms::Button^ dayButton = gcnew System::Windows::Forms::Button();
			   dayButton->Width = 100;
			   dayButton->Height = 40;
			   dayButton->Text = daysOfWeek[col]; // ������������� �������� ��� ������
			   dayButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   dayButton->Location = System::Drawing::Point(3 + col * 105, 25);
			   dayButton->ForeColor = System::Drawing::Color::White;

			   panel4->Controls->Add(dayButton);
		   }

		   // �������� ��������� ���� �� dateTimePicker1
		   System::DateTime selectedDate = dateTimePicker1->Value;
		   int selectedDay = selectedDate.Day;
		   int selectedMonth = selectedDate.Month;

		   // �������� ��� ����������
		   std::vector<std::pair<int, int>> holidays = GetHolidays(mainHolidays, pravoslav, catolic, islam, china, russia);

		   // �������� ����������� ���� ������ � ������, ��������������� ������� ��� ������
		   int currentRow = 1;
		   int currentCol = startDayOfWeekIndex; // �������� � ������� ��� ������
		   int currentDay = 1;

		   // ������ � ������ ���� ������ � �� ����� ������
		   std::vector<std::pair<int, int>> daysOfMonth;

		   // ��������� ������ ����� ������ � �� ����� ������
		   for (int day = 1; day <= daysInMonth; ++day)
		   {
			   // ���������� ������� % 7, ����� �������� ���������� �� 0 �� 6 (��, ��, ..., ��)
			   int dayOfWeekIndex = (startDayOfWeekIndex + day - 1) % 7; // -1, ����� �������� � ��

			   daysOfMonth.push_back(std::make_pair(day, dayOfWeekIndex));
		   }

		   // ������ � ��������� �������� ���� (5 - ��, 6 - ��)
		   std::vector<int> weekendIndices = { 5, 6 };

		   while (currentDay <= daysInMonth)
		   {
			   // ��������� �� ����� ������, ���� ��������� ����� ������� ������
			   if (currentCol == 7)
			   {
				   ++currentRow;
				   currentCol = 0;
			   }

			   // ������� ������ ��� ��� ������
			   System::Windows::Forms::Button^ dayButton = gcnew System::Windows::Forms::Button();
			   dayButton->Width = 100;
			   dayButton->Height = 40;
			   dayButton->Text = currentDay.ToString();
			   dayButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   dayButton->Location = System::Drawing::Point(3 + currentCol * 105, 25 + currentRow * 45);

			   // ���������, �������� �� ������� ���� ����������� ����
			   if (System::DateTime::Now.Day == currentDay && System::DateTime::Now.Month == month && System::DateTime::Now.Year == year)
			   {
				   dayButton->ForeColor = System::Drawing::Color::Red; // ���� ��, ������ ����� �������� �����
			   }
			   else if (currentDay == selectedDay && month == selectedMonth)
			   {
				   dayButton->ForeColor = System::Drawing::Color::LightBlue; // ���� ��� ��������� ����, ������ ����� ������-�����
			   }
			   else
			   {
				   bool isHoliday = false;
				   for (const auto& date : holidays)
				   {
					   if (date.first == currentDay && date.second == month)
					   {
						   isHoliday = true;
						   break;
					   }
				   }
				   if (isHoliday)
				   {
					   dayButton->ForeColor = System::Drawing::Color::Gold; // ���� ��� ��������, ������ ����� �������� �����
				   }
				   else
				   {
					   // ���������, �������� �� ������� ���� ��������
					   if (std::find(weekendIndices.begin(), weekendIndices.end(), daysOfMonth[currentDay - 1].second) != weekendIndices.end())
					   {
						   dayButton->ForeColor = System::Drawing::Color::White; // ���� ��, ������ ����� �����
					   }
					   else
					   {
						   dayButton->ForeColor = System::Drawing::Color::Black; // � ��������� ������, ������� �����
					   }
				   }
			   }

			   panel4->Controls->Add(dayButton);

			   ++currentDay;
			   ++currentCol;
		   }
	   }


	   void Theme()
	   {
		   if (darkTheme)
		   {
			   this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				   static_cast<System::Int32>(static_cast<System::Byte>(64)));
			   this->panel1->BackColor = System::Drawing::Color::DarkOrchid;
			   this->panel2->BackColor = System::Drawing::Color::DarkOrchid;
			   this->button5->BackColor = System::Drawing::Color::DarkViolet;
			   this->button6->BackColor = System::Drawing::Color::DarkViolet;
			   this->button7->BackColor = System::Drawing::Color::DarkViolet;
			   this->button8->BackColor = System::Drawing::Color::DarkViolet;
			   this->button9->BackColor = System::Drawing::Color::DarkViolet;
		   }
		   else if(!darkTheme)
		   {
			   this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				   static_cast<System::Int32>(static_cast<System::Byte>(224)));
			   this->panel1->BackColor = System::Drawing::Color::Green;
			   this->panel2->BackColor = System::Drawing::Color::Green;
			   this->button5->BackColor = System::Drawing::Color::Green;
			   this->button6->BackColor = System::Drawing::Color::Green;
			   this->button7->BackColor = System::Drawing::Color::Green;
			   this->button8->BackColor = System::Drawing::Color::Green;
			   this->button9->BackColor = System::Drawing::Color::Green;
		   }
	   }
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	darkTheme = true;
	Theme();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	darkTheme = false;
	Theme();
}
private: System::Void button15_Click(System::Object^ sender, System::EventArgs^ e)
{
	Application::Exit();
}

// ׸���� - ������� ���, ����� - �������� ���, ������� - ������� ����
// ������-����� - ��������� ������������� ����, ������� - ���������

private: System::Void dateTimePicker1_ValueChanged_1(System::Object^ sender, System::EventArgs^ e)
{
	UpdateDaysUntilBirthday();
	UpdateCalendar();
}
};
}