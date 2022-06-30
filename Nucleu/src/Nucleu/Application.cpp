#include "Application.h"

#include "Nucleu/Events/ApplicationEvent.h"
#include "Nucleu/Log.h"

namespace Nucleu {

	Application::Application(){

	};

	Application::~Application() {

	};

	void Application::Run()
	{
		WindwResizeEvent e(1280, 720);
		NC_TRACE(e);

		while (true);
	}
}
