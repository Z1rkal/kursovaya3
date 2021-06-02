#include "kurs2.h"
using namespace System::Windows::Forms;
using namespace System;
[STAThreadAttribute]
int main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	kurs3::kurs2 form;
	Application::Run(% form);

	return 0;
}
