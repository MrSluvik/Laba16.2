#include "MyForm1.h"
#include<Windows.h>

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]

int main(cli::array<String^>^ args)
{
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	Laba162::MyForm1 form;
	Application::Run(% form);
}