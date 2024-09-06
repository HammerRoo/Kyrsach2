#pragma once
#include "ClientPart.h"

namespace Calendar {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для CalendarForm
	/// </summary>
	public ref class CalendarForm : public System::Windows::Forms::Form
	{
	public:
		CalendarForm(void)
		{
			InitializeComponent();
		}

		

	protected:
		~CalendarForm()
		{
			if (components)
			{
				delete components;
			}
		}


	protected:




	private: System::Windows::Forms::Panel^ panel2;






	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::MonthCalendar^ monthCalendar1;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button10;

	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button16;





	private:
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CalendarForm::typeid));
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->monthCalendar1 = (gcnew System::Windows::Forms::MonthCalendar());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->panel2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
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
			this->panel2->Size = System::Drawing::Size(75, 1100);
			this->panel2->TabIndex = 2;
			// 
			// button9
			// 
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button9.Image")));
			this->button9->Location = System::Drawing::Point(0, 400);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 100);
			this->button9->TabIndex = 4;
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &CalendarForm::button9_Click);
			// 
			// button8
			// 
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button8.Image")));
			this->button8->Location = System::Drawing::Point(0, 300);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 100);
			this->button8->TabIndex = 3;
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &CalendarForm::button8_Click);
			// 
			// button7
			// 
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button7.Image")));
			this->button7->Location = System::Drawing::Point(0, 200);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 100);
			this->button7->TabIndex = 2;
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &CalendarForm::button7_Click);
			// 
			// button6
			// 
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.Image")));
			this->button6->Location = System::Drawing::Point(0, 100);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 100);
			this->button6->TabIndex = 1;
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &CalendarForm::button6_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::BlueViolet;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.Image")));
			this->button5->Location = System::Drawing::Point(0, 0);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 100);
			this->button5->TabIndex = 0;
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &CalendarForm::button5_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->monthCalendar1);
			this->groupBox1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->ForeColor = System::Drawing::Color::White;
			this->groupBox1->Location = System::Drawing::Point(81, 934);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1120, 900);
			this->groupBox1->TabIndex = 3;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Основной календарь";
			// 
			// monthCalendar1
			// 
			this->monthCalendar1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->monthCalendar1->CalendarDimensions = System::Drawing::Size(5, 4);
			this->monthCalendar1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->monthCalendar1->ForeColor = System::Drawing::Color::White;
			this->monthCalendar1->Location = System::Drawing::Point(3, 30);
			this->monthCalendar1->MaxDate = System::DateTime(2077, 12, 31, 0, 0, 0, 0);
			this->monthCalendar1->MaxSelectionCount = 1;
			this->monthCalendar1->MinDate = System::DateTime(1950, 1, 1, 0, 0, 0, 0);
			this->monthCalendar1->Name = L"monthCalendar1";
			this->monthCalendar1->ShowWeekNumbers = true;
			this->monthCalendar1->TabIndex = 0;
			this->monthCalendar1->TitleBackColor = System::Drawing::Color::DarkViolet;
			this->monthCalendar1->TitleForeColor = System::Drawing::Color::White;
			this->monthCalendar1->TodayDate = System::DateTime(2024, 4, 7, 0, 0, 0, 0);
			this->monthCalendar1->TrailingForeColor = System::Drawing::Color::Gray;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button11);
			this->groupBox2->Controls->Add(this->button16);
			this->groupBox2->Controls->Add(this->button10);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox2->ForeColor = System::Drawing::Color::White;
			this->groupBox2->Location = System::Drawing::Point(94, 25);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(1107, 730);
			this->groupBox2->TabIndex = 4;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Многопользовательский календарь";
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
			this->button11->Location = System::Drawing::Point(301, 415);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(500, 100);
			this->button11->TabIndex = 1;
			this->button11->Text = L"Присоединиться к группе";
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
			this->button16->Size = System::Drawing::Size(500, 100);
			this->button16->TabIndex = 0;
			this->button16->Text = L"Подключиться к серверу";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &CalendarForm::button16_Click);
			// 
			// button10
			// 
			this->button10->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button10->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->Location = System::Drawing::Point(301, 294);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(500, 100);
			this->button10->TabIndex = 0;
			this->button10->Text = L"Создать группу";
			this->button10->UseVisualStyleBackColor = true;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->button15);
			this->groupBox3->Controls->Add(this->button13);
			this->groupBox3->Controls->Add(this->button14);
			this->groupBox3->Controls->Add(this->button12);
			this->groupBox3->Controls->Add(this->label5);
			this->groupBox3->Controls->Add(this->label4);
			this->groupBox3->Controls->Add(this->label3);
			this->groupBox3->Controls->Add(this->label2);
			this->groupBox3->Controls->Add(this->radioButton2);
			this->groupBox3->Controls->Add(this->radioButton1);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox3->ForeColor = System::Drawing::Color::White;
			this->groupBox3->Location = System::Drawing::Point(615, 802);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(1107, 877);
			this->groupBox3->TabIndex = 5;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Настройки";
			this->groupBox3->Visible = false;
			// 
			// button15
			// 
			this->button15->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button15->BackColor = System::Drawing::Color::DarkViolet;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button15->Location = System::Drawing::Point(318, 685);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(400, 50);
			this->button15->TabIndex = 3;
			this->button15->Text = L"Выйти из аккаунта";
			this->button15->UseVisualStyleBackColor = false;
			// 
			// button13
			// 
			this->button13->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button13->BackColor = System::Drawing::Color::DarkViolet;
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->Location = System::Drawing::Point(318, 452);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(400, 50);
			this->button13->TabIndex = 3;
			this->button13->Text = L"Католические праздники";
			this->button13->UseVisualStyleBackColor = false;
			// 
			// button14
			// 
			this->button14->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button14->BackColor = System::Drawing::Color::DarkViolet;
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->Location = System::Drawing::Point(318, 616);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(400, 50);
			this->button14->TabIndex = 3;
			this->button14->Text = L"Выключить уведомления";
			this->button14->UseVisualStyleBackColor = false;
			// 
			// button12
			// 
			this->button12->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button12->BackColor = System::Drawing::Color::DarkViolet;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button12->Location = System::Drawing::Point(318, 383);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(400, 50);
			this->button12->TabIndex = 3;
			this->button12->Text = L"Православные праздники";
			this->button12->UseVisualStyleBackColor = false;
			// 
			// label5
			// 
			this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(388, 556);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(265, 37);
			this->label5->TabIndex = 2;
			this->label5->Text = L"Дополнительно:";
			this->label5->Click += gcnew System::EventHandler(this, &CalendarForm::label3_Click);
			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(299, 319);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(428, 37);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Специализация календаря:";
			this->label4->Click += gcnew System::EventHandler(this, &CalendarForm::label3_Click);
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(388, 117);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(216, 37);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Выбор темы:";
			this->label3->Click += gcnew System::EventHandler(this, &CalendarForm::label3_Click);
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(207, 30);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(630, 37);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Настройки применяются автоматически";
			// 
			// radioButton2
			// 
			this->radioButton2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->radioButton2->AutoSize = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton2->Location = System::Drawing::Point(306, 219);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(206, 36);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Светлая тема";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &CalendarForm::radioButton2_CheckedChanged);
			// 
			// radioButton1
			// 
			this->radioButton1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->radioButton1->AutoSize = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton1->Location = System::Drawing::Point(306, 158);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(403, 36);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Тёмная тема (по умолчанию)";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &CalendarForm::radioButton1_CheckedChanged);
			// 
			// groupBox4
			// 
			this->groupBox4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox4->ForeColor = System::Drawing::Color::White;
			this->groupBox4->Location = System::Drawing::Point(1074, 79);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(357, 410);
			this->groupBox4->TabIndex = 6;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Уведомления";
			this->groupBox4->Visible = false;
			// 
			// CalendarForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->ClientSize = System::Drawing::Size(1275, 1102);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->panel2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"CalendarForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"CalendarForm";
			this->panel2->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private:
		bool isDragging = false;
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
	private:
		System::Void button3_Click(System::Object^ sender, System::EventArgs^ e)
		{
			this->WindowState = FormWindowState::Minimized;
		}

	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->button5->BackColor = System::Drawing::Color::BlueViolet;
		this->button6->BackColor = System::Drawing::Color::DarkViolet;
		this->button7->BackColor = System::Drawing::Color::DarkViolet;
		this->button8->BackColor = System::Drawing::Color::DarkViolet;
		this->button9->BackColor = System::Drawing::Color::DarkViolet;
		groupBox1->Visible = true;
		groupBox1->Location = Point(75, 50);
		this->groupBox1->Size = System::Drawing::Size(810, 655);
		groupBox2->Visible = false;
		groupBox3->Visible = false;
		groupBox4->Visible = false;
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->button6->BackColor = System::Drawing::Color::BlueViolet;
		this->button5->BackColor = System::Drawing::Color::DarkViolet;
		this->button7->BackColor = System::Drawing::Color::DarkViolet;
		this->button8->BackColor = System::Drawing::Color::DarkViolet;
		this->button9->BackColor = System::Drawing::Color::DarkViolet;
		groupBox2->Visible = true;
		groupBox2->Location = Point(75, 50);
		this->groupBox2->Size = System::Drawing::Size(810, 655);
		groupBox1->Visible = false;
		groupBox3->Visible = false;
		groupBox4->Visible = false;
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->button7->BackColor = System::Drawing::Color::BlueViolet;
		this->button6->BackColor = System::Drawing::Color::DarkViolet;
		this->button5->BackColor = System::Drawing::Color::DarkViolet;
		this->button8->BackColor = System::Drawing::Color::DarkViolet;
		this->button9->BackColor = System::Drawing::Color::DarkViolet;
		groupBox3->Visible = true;
		groupBox3->Location = Point(75, 50);
		this->groupBox3->Size = System::Drawing::Size(810, 655);
		groupBox2->Visible = false;
		groupBox1->Visible = false;
		groupBox4->Visible = false;
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->button8->BackColor = System::Drawing::Color::BlueViolet;
		this->button6->BackColor = System::Drawing::Color::DarkViolet;
		this->button7->BackColor = System::Drawing::Color::DarkViolet;
		this->button5->BackColor = System::Drawing::Color::DarkViolet;
		this->button9->BackColor = System::Drawing::Color::DarkViolet;
		groupBox4->Visible = true;
		groupBox4->Location = Point(75, 50);
		this->groupBox4->Size = System::Drawing::Size(810, 655);
		groupBox2->Visible = false;
		groupBox3->Visible = false;
		groupBox1->Visible = false;
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->button9->BackColor = System::Drawing::Color::BlueViolet;
		this->button6->BackColor = System::Drawing::Color::DarkViolet;
		this->button7->BackColor = System::Drawing::Color::DarkViolet;
		this->button8->BackColor = System::Drawing::Color::DarkViolet;
		this->button5->BackColor = System::Drawing::Color::DarkViolet;
	}
private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button16_Click(System::Object^ sender, System::EventArgs^ e)
{
}
};
}
