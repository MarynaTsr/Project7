#include "MyForm.h"
#include "MyForm1.h"
#include "MyForm2.h"
#include "MyForm3.h"
#include "MyForm4.h"
#include <Windows.h>


using namespace Project7;


int WINAPI WinMain(HINSTANCE,
	HINSTANCE, LPSTR, int) {


	Application::EnableVisualStyles();


	Application::SetCompatibleTextRenderingDefault(false);


	Application::Run(gcnew MyForm);


	return 0;
}



