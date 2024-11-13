#include "MyForm.h"  // Pastikan ini sesuai dengan nama form Anda
#include "MyForm1.h" 


using namespace System;
using namespace System::Windows::Forms;
using namespace GUICPPkel27;  // Pastikan namespace ini sesuai dengan project Anda

[STAThread]
int main() {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    // Membuat objek form dari MyForm (pastikan MyForm sesuai dengan nama form Anda)
    MyForm^ form = gcnew MyForm();  // Membuat objek form MyForm

    // Menjalankan aplikasi dengan form yang baru dibuat
    Application::Run(form);  // Menjalankan aplikasi dengan form yang sudah dibuat
}
