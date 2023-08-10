#pragma once

#ifdef NT_PLATFORM_WINDOWS

extern NeverTide::Application* NeverTide::CreateApplication();

int main()
{
	auto app = NeverTide::CreateApplication();
	app->Run();
	delete app;
}

#endif