#pragma once

#ifdef NC_PLATFORM_WINDOWS

extern Nucleu::Application* Nucleu::CreateApplication();

int main(int argc, char** argv)
{
	Nucleu::Log::Init();

	NC_CORE_WARN("Init Log!");
	int a = 5;
	NC_INFO("Hello!! Var={0}", a);

	auto app = Nucleu::CreateApplication();
	app->Run();
	delete app;
}

#endif