#pragma once

namespace GUICPPkel27 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(String^ username, String^ password)
		{
			InitializeComponent();
			this->stored_username = username;
			this->stored_password = password;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button_submit;
	protected:
	private: System::Windows::Forms::Button^ button_about;
	private: System::Windows::Forms::Button^ button_login;
	private: System::Windows::Forms::TextBox^ textBox_password;
	private: System::Windows::Forms::TextBox^ textBox_username;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;

	private: 
	String^ stored_username;
	String^ stored_password;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LoginForm::typeid));
			this->button_submit = (gcnew System::Windows::Forms::Button());
			this->button_about = (gcnew System::Windows::Forms::Button());
			this->button_login = (gcnew System::Windows::Forms::Button());
			this->textBox_password = (gcnew System::Windows::Forms::TextBox());
			this->textBox_username = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button_submit
			// 
			this->button_submit->Location = System::Drawing::Point(150, 504);
			this->button_submit->Name = L"button_submit";
			this->button_submit->Size = System::Drawing::Size(190, 54);
			this->button_submit->TabIndex = 19;
			this->button_submit->Text = L"Submit";
			this->button_submit->UseVisualStyleBackColor = true;
			this->button_submit->Click += gcnew System::EventHandler(this, &LoginForm::button_submit_Click);
			// 
			// button_about
			// 
			this->button_about->Location = System::Drawing::Point(685, 504);
			this->button_about->Name = L"button_about";
			this->button_about->Size = System::Drawing::Size(190, 54);
			this->button_about->TabIndex = 14;
			this->button_about->Text = L"About";
			this->button_about->UseVisualStyleBackColor = true;
			// 
			// button_login
			// 
			this->button_login->Location = System::Drawing::Point(923, 504);
			this->button_login->Name = L"button_login";
			this->button_login->Size = System::Drawing::Size(190, 54);
			this->button_login->TabIndex = 13;
			this->button_login->Text = L"Log In";
			this->button_login->UseVisualStyleBackColor = true;
			// 
			// textBox_password
			// 
			this->textBox_password->Location = System::Drawing::Point(193, 113);
			this->textBox_password->Name = L"textBox_password";
			this->textBox_password->PasswordChar = '*';
			this->textBox_password->Size = System::Drawing::Size(200, 22);
			this->textBox_password->TabIndex = 15;
			// 
			// textBox_username
			// 
			this->textBox_username->Location = System::Drawing::Point(193, 63);
			this->textBox_username->Name = L"textBox_username";
			this->textBox_username->Size = System::Drawing::Size(200, 22);
			this->textBox_username->TabIndex = 16;
			// 
			// label2
			// 
			this->label2->Location = System::Drawing::Point(83, 112);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(100, 23);
			this->label2->TabIndex = 17;
			this->label2->Text = L"Password:";
			// 
			// label1
			// 
			this->label1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label1.Image")));
			this->label1->Location = System::Drawing::Point(83, 63);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(100, 23);
			this->label1->TabIndex = 18;
			this->label1->Text = L"Username:";
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1196, 620);
			this->Controls->Add(this->button_submit);
			this->Controls->Add(this->button_about);
			this->Controls->Add(this->button_login);
			this->Controls->Add(this->textBox_password);
			this->Controls->Add(this->textBox_username);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm1";
			this->Text = L"MyForm1";
			this->Load += gcnew System::EventHandler(this, &LoginForm::MyForm1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button_submit_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ input_username = textBox_username->Text;
		String^ input_password = textBox_password->Text;

		// Mengecek apakah username dan password yang dimasukkan cocok dengan yang terdaftar
		if (input_username == stored_username && input_password == stored_password) {
			MessageBox::Show("Login berhasil!", "Sukses", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else {
			MessageBox::Show("Username atau Password salah. Silakan coba lagi.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

		// Menghapus teks setelah percakapan login
		textBox_username->Clear();
		textBox_password->Clear();
	}
	};
}
