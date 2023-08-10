#pragma once
#include "Core.h"

namespace NeverTide
{
	class NEVTIDE_API Application
	{
	public:
		Application();
		virtual ~Application();
		
		void Run();
	};

	Application* CreateApplication();
}
