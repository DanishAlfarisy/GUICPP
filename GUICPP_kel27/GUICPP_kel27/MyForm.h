#include "MyForm1.h" 

namespace GUICPPkel27 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Windows::Forms;
	using namespace System::Drawing;

	public ref class MyForm : public Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
		}

	protected:
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox_username;


	private: System::Windows::Forms::TextBox^ textBox_password;

	private: System::Windows::Forms::Button^ button_login;
	private: System::Windows::Forms::Button^ button_about;
	private: System::Windows::Forms::Button^ button_submit;


	private: System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		   void InitializeComponent(void)
		   {
			   System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->label2 = (gcnew System::Windows::Forms::Label());
			   this->textBox_username = (gcnew System::Windows::Forms::TextBox());
			   this->textBox_password = (gcnew System::Windows::Forms::TextBox());
			   this->button_login = (gcnew System::Windows::Forms::Button());
			   this->button_about = (gcnew System::Windows::Forms::Button());
			   this->button_submit = (gcnew System::Windows::Forms::Button());
			   this->SuspendLayout();
			   // 
			   // label1
			   // 
			   this->label1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label1.Image")));
			   this->label1->Location = System::Drawing::Point(20, 20);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(100, 23);
			   this->label1->TabIndex = 11;
			   this->label1->Text = L"Username:";
			   // 
			   // label2
			   // 
			   this->label2->Location = System::Drawing::Point(20, 69);
			   this->label2->Name = L"label2";
			   this->label2->Size = System::Drawing::Size(100, 23);
			   this->label2->TabIndex = 10;
			   this->label2->Text = L"Password:";
			   this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			   // 
			   // textBox_username
			   // 
			   this->textBox_username->Location = System::Drawing::Point(130, 20);
			   this->textBox_username->Name = L"textBox_username";
			   this->textBox_username->Size = System::Drawing::Size(200, 22);
			   this->textBox_username->TabIndex = 9;
			   this->textBox_username->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox_username_TextChanged);
			   // 
			   // textBox_password
			   // 
			   this->textBox_password->Location = System::Drawing::Point(130, 70);
			   this->textBox_password->Name = L"textBox_password";
			   this->textBox_password->PasswordChar = '*';
			   this->textBox_password->Size = System::Drawing::Size(200, 22);
			   this->textBox_password->TabIndex = 7;
			   // 
			   // button_login
			   // 
			   this->button_login->Location = System::Drawing::Point(860, 461);
			   this->button_login->Name = L"button_login";
			   this->button_login->Size = System::Drawing::Size(190, 54);
			   this->button_login->TabIndex = 5;
			   this->button_login->Text = L"Log In";
			   this->button_login->UseVisualStyleBackColor = true;
			   this->button_login->Click += gcnew System::EventHandler(this, &MyForm::buttonlogin_Click);
			   // 
			   // button_about
			   // 
			   this->button_about->Location = System::Drawing::Point(622, 461);
			   this->button_about->Name = L"button_about";
			   this->button_about->Size = System::Drawing::Size(190, 54);
			   this->button_about->TabIndex = 6;
			   this->button_about->Text = L"About";
			   this->button_about->UseVisualStyleBackColor = true;
			   // 
			   // button_submit
			   // 
			   this->button_submit->Location = System::Drawing::Point(87, 461);
			   this->button_submit->Name = L"button_submit";
			   this->button_submit->Size = System::Drawing::Size(190, 54);
			   this->button_submit->TabIndex = 12;
			   this->button_submit->Text = L"Submit";
			   this->button_submit->UseVisualStyleBackColor = true;
			   this->button_submit->Click += gcnew System::EventHandler(this, &MyForm::button_submit_Click);
			   // 
			   // RegistrationForm
			   // 
			   this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			   this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			   this->ClientSize = System::Drawing::Size(1162, 563);
			   this->Controls->Add(this->button_submit);
			   this->Controls->Add(this->button_about);
			   this->Controls->Add(this->button_login);
			   this->Controls->Add(this->textBox_password);
			   this->Controls->Add(this->textBox_username);
			   this->Controls->Add(this->label2);
			   this->Controls->Add(this->label1);
			   this->Name = L"RegistrationForm";
			   this->Text = L"Registration Form";
			   this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion

		   void buttonlogin_Click(System::Object^ sender, System::EventArgs^ e)
		   {
			   LoginForm^ loginform = gcnew LoginForm();
			   loginform->Show();  // Menampilkan LoginForm
			   this->Hide();
		   }
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox_username_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button_submit_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ username = textBox_username->Text;
	String^ password = textBox_password->Text;

	if (String::IsNullOrWhiteSpace(username) || String::IsNullOrWhiteSpace(password)) {
		MessageBox::Show("Username atau Password tidak boleh kosong.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	MessageBox::Show("Registrasi berhasil!\nUsername: " + username + "\nPassword: " + password, "Registrasi Sukses", MessageBoxButtons::OK, MessageBoxIcon::Information);

	LoginForm^ loginForm = gcnew LoginForm(username, password);
	loginForm->Show();
	this->Close();


}
};
}
