

#pragma once

namespace  CppCLRWinFormsProject {
	using namespace System;
	using namespace System::Windows::Forms;
	using namespace System::Collections;
	using namespace System::Drawing;
	using namespace System::Data;
	using namespace System::ComponentModel;

	public ref class MyForm : public System::Windows::Forms::Form {
	public:
		MyForm(void) {
			InitializeComponent();
		}

	protected:
		~MyForm() {
			if (components)
				delete components;
		}

	private: System::Windows::Forms::Button^ Btn1;
	private: System::Windows::Forms::Button^ Btn2;
	private: System::Windows::Forms::Button^ Btn3;
	private: System::Windows::Forms::Button^ BtnAdd;
	private: System::Windows::Forms::Button^ Btn4;
	private: System::Windows::Forms::Button^ Btn5;
	private: System::Windows::Forms::Button^ Btn6;
	private: System::Windows::Forms::Button^ BtnMinus;
	private: System::Windows::Forms::Button^ Btn7;
	private: System::Windows::Forms::Button^ Btn8;
	private: System::Windows::Forms::Button^ Btn9;
	private: System::Windows::Forms::Button^ BtnTimes;
	private: System::Windows::Forms::Button^ BtnC;
	private: System::Windows::Forms::Button^ Btn0;
	private: System::Windows::Forms::Button^ BtnDivide;
	private: System::Windows::Forms::Button^ BtnEquals;
	private: System::Windows::Forms::TextBox^ Screen;

	protected:

	private:
		System::ComponentModel::Container^ components;

		void InitializeComponent(void) {
			this->Btn1 = (gcnew System::Windows::Forms::Button());
			this->Btn2 = (gcnew System::Windows::Forms::Button());
			this->Btn3 = (gcnew System::Windows::Forms::Button());
			this->BtnAdd = (gcnew System::Windows::Forms::Button());
			this->Btn4 = (gcnew System::Windows::Forms::Button());
			this->Btn5 = (gcnew System::Windows::Forms::Button());
			this->Btn6 = (gcnew System::Windows::Forms::Button());
			this->BtnMinus = (gcnew System::Windows::Forms::Button());
			this->Btn7 = (gcnew System::Windows::Forms::Button());
			this->Btn8 = (gcnew System::Windows::Forms::Button());
			this->Btn9 = (gcnew System::Windows::Forms::Button());
			this->BtnTimes = (gcnew System::Windows::Forms::Button());
			this->BtnC = (gcnew System::Windows::Forms::Button());
			this->Btn0 = (gcnew System::Windows::Forms::Button());
			this->BtnDivide = (gcnew System::Windows::Forms::Button());
			this->BtnEquals = (gcnew System::Windows::Forms::Button());
			this->Screen = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();


			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle; 
			this->MaximizeBox = false; 
			this->MinimizeBox = false;




			// 
			// Btn1
			// 
			this->Btn1->BackColor = System::Drawing::SystemColors::ControlDark;
			this->Btn1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Btn1->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Btn1->Location = System::Drawing::Point(0, 162);
			this->Btn1->Name = L"Btn1";
			this->Btn1->Size = System::Drawing::Size(70, 55);
			this->Btn1->TabIndex = 0;
			this->Btn1->Text = L"1";
			this->Btn1->UseVisualStyleBackColor = false;
			this->Btn1->Click += gcnew System::EventHandler(this, &MyForm::Btn1Click);
			// 
			// Btn2
			// 
			this->Btn2->BackColor = System::Drawing::SystemColors::ControlDark;
			this->Btn2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Btn2->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Btn2->Location = System::Drawing::Point(74, 162);
			this->Btn2->Name = L"Btn2";
			this->Btn2->Size = System::Drawing::Size(70, 55);
			this->Btn2->TabIndex = 1;
			this->Btn2->Text = L"2";
			this->Btn2->UseVisualStyleBackColor = false;
			this->Btn2->Click += gcnew System::EventHandler(this, &MyForm::Btn2Click);
			// 
			// Btn3
			// 
			this->Btn3->BackColor = System::Drawing::SystemColors::ControlDark;
			this->Btn3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Btn3->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Btn3->Location = System::Drawing::Point(151, 162);
			this->Btn3->Name = L"Btn3";
			this->Btn3->Size = System::Drawing::Size(70, 55);
			this->Btn3->TabIndex = 2;
			this->Btn3->Text = L"3";
			this->Btn3->UseVisualStyleBackColor = false;
			this->Btn3->Click += gcnew System::EventHandler(this, &MyForm::Btn3Click);
			// 
			// BtnAdd
			// 
			this->BtnAdd->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->BtnAdd->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->BtnAdd->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnAdd->Location = System::Drawing::Point(225, 162);
			this->BtnAdd->Name = L"BtnAdd";
			this->BtnAdd->Size = System::Drawing::Size(70, 55);
			this->BtnAdd->TabIndex = 3;
			this->BtnAdd->Text = L"+";
			this->BtnAdd->UseVisualStyleBackColor = false;
			this->BtnAdd->Click += gcnew System::EventHandler(this, &MyForm::BtnAddClick);
			// 
			// Btn4
			// 
			this->Btn4->BackColor = System::Drawing::SystemColors::ControlDark;
			this->Btn4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Btn4->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Btn4->Location = System::Drawing::Point(0, 223);
			this->Btn4->Name = L"Btn4";
			this->Btn4->Size = System::Drawing::Size(70, 55);
			this->Btn4->TabIndex = 4;
			this->Btn4->Text = L"4";
			this->Btn4->UseVisualStyleBackColor = false;
			this->Btn4->Click += gcnew System::EventHandler(this, &MyForm::Btn4Click);
			// 
			// Btn5
			// 
			this->Btn5->BackColor = System::Drawing::SystemColors::ControlDark;
			this->Btn5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Btn5->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Btn5->Location = System::Drawing::Point(75, 223);
			this->Btn5->Name = L"Btn5";
			this->Btn5->Size = System::Drawing::Size(70, 55);
			this->Btn5->TabIndex = 5;
			this->Btn5->Text = L"5";
			this->Btn5->UseVisualStyleBackColor = false;
			this->Btn5->Click += gcnew System::EventHandler(this, &MyForm::Btn5Click);
			// 
			// Btn6
			// 
			this->Btn6->BackColor = System::Drawing::SystemColors::ControlDark;
			this->Btn6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Btn6->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Btn6->Location = System::Drawing::Point(151, 223);
			this->Btn6->Name = L"Btn6";
			this->Btn6->Size = System::Drawing::Size(70, 55);
			this->Btn6->TabIndex = 6;
			this->Btn6->Text = L"6";
			this->Btn6->UseVisualStyleBackColor = false;
			this->Btn6->Click += gcnew System::EventHandler(this, &MyForm::Btn6Click);
			// 
			// BtnMinus
			// 
			this->BtnMinus->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->BtnMinus->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->BtnMinus->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnMinus->Location = System::Drawing::Point(227, 223);
			this->BtnMinus->Name = L"BtnMinus";
			this->BtnMinus->Size = System::Drawing::Size(70, 55);
			this->BtnMinus->TabIndex = 7;
			this->BtnMinus->Text = L"-";
			this->BtnMinus->UseVisualStyleBackColor = false;
			this->BtnMinus->Click += gcnew System::EventHandler(this, &MyForm::BtnMinusClick);
			// 
			// Btn7
			// 
			this->Btn7->BackColor = System::Drawing::SystemColors::ControlDark;
			this->Btn7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Btn7->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Btn7->Location = System::Drawing::Point(0, 284);
			this->Btn7->Name = L"Btn7";
			this->Btn7->Size = System::Drawing::Size(70, 55);
			this->Btn7->TabIndex = 8;
			this->Btn7->Text = L"7";
			this->Btn7->UseVisualStyleBackColor = false;
			this->Btn7->Click += gcnew System::EventHandler(this, &MyForm::Btn7Click);
			// 
			// Btn8
			// 
			this->Btn8->BackColor = System::Drawing::SystemColors::ControlDark;
			this->Btn8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Btn8->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Btn8->Location = System::Drawing::Point(75, 284);
			this->Btn8->Name = L"Btn8";
			this->Btn8->Size = System::Drawing::Size(70, 55);
			this->Btn8->TabIndex = 9;
			this->Btn8->Text = L"8";
			this->Btn8->UseVisualStyleBackColor = false;
			this->Btn8->Click += gcnew System::EventHandler(this, &MyForm::Btn8Click);
			// 
			// Btn9
			// 
			this->Btn9->BackColor = System::Drawing::SystemColors::ControlDark;
			this->Btn9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Btn9->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Btn9->Location = System::Drawing::Point(151, 284);
			this->Btn9->Name = L"Btn9";
			this->Btn9->Size = System::Drawing::Size(70, 55);
			this->Btn9->TabIndex = 10;
			this->Btn9->Text = L"9";
			this->Btn9->UseVisualStyleBackColor = false;
			this->Btn9->Click += gcnew System::EventHandler(this, &MyForm::Btn9Click);
			// 
			// BtnTimes
			// 
			this->BtnTimes->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->BtnTimes->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->BtnTimes->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnTimes->Location = System::Drawing::Point(225, 284);
			this->BtnTimes->Name = L"BtnTimes";
			this->BtnTimes->Size = System::Drawing::Size(70, 55);
			this->BtnTimes->TabIndex = 11;
			this->BtnTimes->Text = L"x";
			this->BtnTimes->UseVisualStyleBackColor = false;
			this->BtnTimes->Click += gcnew System::EventHandler(this, &MyForm::BtnTimesClick);
			// 
			// BtnC
			// 
			this->BtnC->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->BtnC->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->BtnC->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnC->Location = System::Drawing::Point(0, 345);
			this->BtnC->Name = L"BtnC";
			this->BtnC->Size = System::Drawing::Size(70, 55);
			this->BtnC->TabIndex = 12;
			this->BtnC->Text = L"C";
			this->BtnC->UseVisualStyleBackColor = false;
			this->BtnC->Click += gcnew System::EventHandler(this, &MyForm::BtnCClick);
			// 
			// Btn0
			// 
			this->Btn0->BackColor = System::Drawing::SystemColors::ControlDark;
			this->Btn0->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Btn0->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Btn0->Location = System::Drawing::Point(75, 345);
			this->Btn0->Name = L"Btn0";
			this->Btn0->Size = System::Drawing::Size(70, 55);
			this->Btn0->TabIndex = 13;
			this->Btn0->Text = L"0";
			this->Btn0->UseVisualStyleBackColor = false;
			this->Btn0->Click += gcnew System::EventHandler(this, &MyForm::Btn0Click);
			// 
			// BtnDivide
			// 
			this->BtnDivide->BackColor = System::Drawing::SystemColors::ControlDarkDark;
			this->BtnDivide->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->BtnDivide->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnDivide->Location = System::Drawing::Point(150, 345);
			this->BtnDivide->Name = L"BtnDivide";
			this->BtnDivide->Size = System::Drawing::Size(70, 55);
			this->BtnDivide->TabIndex = 14;
			this->BtnDivide->Text = L"/";
			this->BtnDivide->UseVisualStyleBackColor = false;
			this->BtnDivide->Click += gcnew System::EventHandler(this, &MyForm::BtnDivideClick);
			// 
			// BtnEquals
			// 
			this->BtnEquals->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->BtnEquals->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->BtnEquals->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BtnEquals->Location = System::Drawing::Point(225, 345);
			this->BtnEquals->Name = L"BtnEquals";
			this->BtnEquals->Size = System::Drawing::Size(70, 55);
			this->BtnEquals->TabIndex = 15;
			this->BtnEquals->Text = L"=";
			this->BtnEquals->UseVisualStyleBackColor = false;
			this->BtnEquals->Click += gcnew System::EventHandler(this, &MyForm::BtnEqualsClick);
			// 
			// Screen
			// 
			this->Screen->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->Screen->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->Screen->Font = (gcnew System::Drawing::Font(L"Tahoma", 26, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Screen->ForeColor = System::Drawing::SystemColors::Window;
			this->Screen->Location = System::Drawing::Point(-3, 21);
			this->Screen->Multiline = true;
			this->Screen->Name = L"Screen";
			this->Screen->ReadOnly = true;
			this->Screen->Size = System::Drawing::Size(300, 135);
			this->Screen->TabIndex = 16;
			this->Screen->Text = L"0";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->ClientSize = System::Drawing::Size(297, 400);
			this->Controls->Add(this->Btn1);
			this->Controls->Add(this->Btn2);
			this->Controls->Add(this->Btn3);
			this->Controls->Add(this->BtnAdd);
			this->Controls->Add(this->Btn4);
			this->Controls->Add(this->Btn5);
			this->Controls->Add(this->Btn6);
			this->Controls->Add(this->BtnMinus);
			this->Controls->Add(this->Btn7);
			this->Controls->Add(this->Btn8);
			this->Controls->Add(this->Btn9);
			this->Controls->Add(this->BtnTimes);
			this->Controls->Add(this->Btn0);
			this->Controls->Add(this->BtnC);
			this->Controls->Add(this->BtnDivide);
			this->Controls->Add(this->BtnEquals);
			this->Controls->Add(this->Screen);
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Calculator";
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		double firstDigit = 0, secondDigit = 0, result = 0;
		char Operators;

	private: System::Void Btn1Click(System::Object^ sender, System::EventArgs^ handle) {

		if (!(Screen->Text == L"0")) {
			System::String^ text = Screen->Text + L"1";
			Screen->Text = text;
		}
		else {
			Screen->Text = L"1";
		}
	}

	private: System::Void Btn2Click(System::Object^ sender, System::EventArgs^ handle) {
		if (!(Screen->Text == L"0")) {
			System::String^ text = Screen->Text + L"2";
			Screen->Text = text;
		}
		else {
			Screen->Text = L"2";
		}
	}

	private: System::Void Btn3Click(System::Object^ sender, System::EventArgs^ handle) {
		if (!(Screen->Text == L"0")) {
			System::String^ text = Screen->Text + L"3";
			Screen->Text = text;
		}
		else {
			Screen->Text = L"3";
		}
	}

	private: System::Void BtnAddClick(System::Object^ sender, System::EventArgs^ handle) {
		firstDigit = Double::Parse(Screen->Text);

		Operators = '+';
		Screen->Text = L"0";
	}

	private: System::Void Btn4Click(System::Object^ sender, System::EventArgs^ handle) {
		if (!(Screen->Text == L"0")) {
			System::String^ text = Screen->Text + L"4";
			Screen->Text = text;
		}
		else {
			Screen->Text = L"4";
		}
	}

	private: System::Void Btn5Click(System::Object^ sender, System::EventArgs^ handle) {
		if (!(Screen->Text == L"0")) {
			System::String^ text = Screen->Text + L"5";
			Screen->Text = text;
		}
		else {
			Screen->Text = L"5";
		}
	}

	private: System::Void Btn6Click(System::Object^ sender, System::EventArgs^ handle) {
		if (!(Screen->Text == L"0")) {
			System::String^ text = Screen->Text + L"6";
			Screen->Text = text;
		}
		else {
			Screen->Text = L"6";
		}
	}

	private: System::Void BtnMinusClick(System::Object^ sender, System::EventArgs^ handle) {
		firstDigit = Double::Parse(Screen->Text);

		Operators = '-';
		Screen->Text = L"0";
	}

	private: System::Void Btn7Click(System::Object^ sender, System::EventArgs^ handle) {
		if (!(Screen->Text == L"0")) {
			System::String^ text = Screen->Text + L"7";
			Screen->Text = text;
		}
		else {
			Screen->Text = L"7";
		}
	}

	private: System::Void Btn8Click(System::Object^ sender, System::EventArgs^ handle) {
		if (!(Screen->Text == L"0")) {
			System::String^ text = Screen->Text + L"8";
			Screen->Text = text;
		}
		else {
			Screen->Text = L"8";
		}
	}

	private: System::Void Btn9Click(System::Object^ sender, System::EventArgs^ handle) {
		if (!(Screen->Text == L"0")) {
			System::String^ text = Screen->Text + L"9";
			Screen->Text = text;
		}
		else {
			Screen->Text = L"9";
		}
	}

	private: System::Void BtnTimesClick(System::Object^ sender, System::EventArgs^ handle) {
		firstDigit = Double::Parse(Screen->Text);

		Operators = 'x';
		Screen->Text = L"0";
	}

	private: System::Void BtnCClick(System::Object^ sender, System::EventArgs^ handle) {
		Screen->Text = L"0";
	}

	private: System::Void Btn0Click(System::Object^ sender, System::EventArgs^ handle) {
		if (!(Screen->Text == L"0")) {
			System::String^ text = Screen->Text + L"0";
			Screen->Text = text;
		}
		else {
			Screen->Text = L"0";
		}
	}

	private: System::Void BtnDivideClick(System::Object^ sender, System::EventArgs^ handle) {
		firstDigit = Double::Parse(Screen->Text);

		Operators = '/';
		Screen->Text = L"0";
	}

	private: System::Void BtnEqualsClick(System::Object^ sender, System::EventArgs^ handle) {
		secondDigit = Double::Parse(Screen->Text);

		if (Operators == '+') {
			result = firstDigit + secondDigit;
			Screen->Text = System::Convert::ToString(result);
		}

		if (Operators == '-') {
			result = firstDigit - secondDigit;
			Screen->Text = System::Convert::ToString(result);
		}

		if (Operators == 'x') {
			result = firstDigit * secondDigit;
			Screen->Text = System::Convert::ToString(result);
		}

		if (Operators == '/') {
			if (secondDigit == 0) {
				Screen->Text = L"0";
			}
			else {
				result = firstDigit / secondDigit;
				Screen->Text = System::Convert::ToString(result);
			}

		}
	}
	};
}

