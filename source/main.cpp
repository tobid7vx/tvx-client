#include <NImGui/NImGui.hpp>

int main()
{
	NImGui::App app("Tvx-Client");

	while(app.IsRunning())
	{
		ImGui::Begin("Client");

		ImGui::End();
		
		app.SwapBuffers();
	}
	return 0;
}