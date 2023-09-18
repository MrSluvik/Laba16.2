#pragma once

namespace Laba162 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
		{
			this->SetStyle(ControlStyles::SupportsTransparentBackColor, true);
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	protected:

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->AutoEllipsis = true;
			this->button1->AutoSize = true;
			this->button1->BackColor = System::Drawing::Color::Red;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(12, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(102, 30);
			this->button1->TabIndex = 0;
			this->button1->Text = L"×åðâîíèé";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm1::button1_MouseClick);
			// 
			// button2
			// 
			this->button2->AutoSize = true;
			this->button2->BackColor = System::Drawing::Color::Green;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(186, 12);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(92, 30);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Çåëåíèé";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm1::button2_MouseClick);
			// 
			// button3
			// 
			this->button3->AutoEllipsis = true;
			this->button3->AutoSize = true;
			this->button3->BackColor = System::Drawing::Color::Blue;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->ForeColor = System::Drawing::Color::Yellow;
			this->button3->Location = System::Drawing::Point(39, 201);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 30);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Ñèí³é";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm1::button3_MouseClick);
			// 
			// button4
			// 
			this->button4->AutoEllipsis = true;
			this->button4->AutoSize = true;
			this->button4->BackColor = System::Drawing::Color::Yellow;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->ForeColor = System::Drawing::Color::Blue;
			this->button4->Location = System::Drawing::Point(186, 201);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(83, 30);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Æîâòèé";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm1::button4_MouseClick);
			// 
			// button5
			// 
			this->button5->AutoSize = true;
			this->button5->BackColor = System::Drawing::Color::Gray;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->ForeColor = System::Drawing::SystemColors::InfoText;
			this->button5->Location = System::Drawing::Point(117, 113);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(65, 30);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Ñ³ðèé";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm1::button5_MouseClick);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
	{
		this->BackColor = System::Drawing::Color::Red;
	}
	private: System::Void button2_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
	{
		this->BackColor = System::Drawing::Color::Green;
	}
	private: System::Void button3_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
	{
		this->BackColor = System::Drawing::Color::Blue;
	}
	private: System::Void button4_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
	{
		this->BackColor = System::Drawing::Color::Yellow;
	}
	private: System::Void button5_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
	{
		this->BackColor = System::Drawing::Color::Gray;//prusvoiv formi siriy colir
	}
	};
}
