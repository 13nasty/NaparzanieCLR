#include "game.h"

using namespace Naparzanie;

[STAThreadAttribute]

int main(array<String^> ^args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Naparzanie::Game form;
	Application::Run(%form);


	return 0;
}