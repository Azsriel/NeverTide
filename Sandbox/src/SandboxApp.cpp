#include <NeverTide.h>

class SandboxApp : public NeverTide::Application
{
public:
	SandboxApp()
	{

	}
	~SandboxApp()
	{

	}


};

NeverTide::Application* NeverTide::CreateApplication()
{
	return new SandboxApp();
}
