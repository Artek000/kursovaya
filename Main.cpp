#include "Main.h"
#include "Enter_f.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThread]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Kursovaya::Main form;
	Application::Run(% form);
}