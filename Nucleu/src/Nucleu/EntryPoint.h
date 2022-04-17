#pragma once

#ifdef NC_PLATFORM_WINDOWS

extern Nucleu::Application* Nucleu::CreateApplication();

int main(int argc, char**argv)
{
	auto app = Nucleu::CreateApplication();
	app->Run();
	delete app;
}

#endif