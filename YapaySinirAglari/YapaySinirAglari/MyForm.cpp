#include "MyForm.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	YapaySinirAglari::MyForm form;
	Application::Run(%form);

}