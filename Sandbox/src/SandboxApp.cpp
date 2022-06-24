#include <Nucleu.h>

class Sandbox : public Nucleu::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{
		
	}

};

Nucleu::Application* Nucleu::CreateApplication()
{
	return new Sandbox();
}
