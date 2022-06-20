#pragma once

#include "Core.h"
namespace Atlas 
{

	class ATLAS_API Application
	{

	public:
		Application();
		virtual ~Application();

		void Run();

	};

	// To be defined by client
	Application* CreateApplication();

}

