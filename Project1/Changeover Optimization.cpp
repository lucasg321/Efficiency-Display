#include "MyForm.h"
#include<stdio.h>
#include<stdlib.h>
#include<string>
#include<math.h>
#include<windows.h>
#include<sqltypes.h>
using namespace System;
using namespace System::Windows::Forms;
[STAThread]

int main(int argc, char *argv[]) {

	
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project1::MyForm form;
	Application::Run(%form);
	return 0;
}


