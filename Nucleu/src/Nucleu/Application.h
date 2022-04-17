#pragma once

#include "Core.h"

namespace Nucleu {

	class NUCLEU_API Application
	{
	public:
		void Run();
	};

	// To be defined in CLIENT
	Application* CreateApplication();

}