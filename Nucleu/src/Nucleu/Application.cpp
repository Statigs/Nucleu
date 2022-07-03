#include "ncpch.h"

#include "Application.h"

#include "Nucleu/Events/ApplicationEvent.h"
#include "Nucleu/Log.h"

namespace Nucleu {

	Application::Application()
	{
		m_Window = std::unique_ptr<Window>(Window::Create());
	};

	Application::~Application()
	{

	};

	void Application::Run()
	{
		while (m_Running)
		{
			m_Window->OnUpdate();
		}
	}
}
