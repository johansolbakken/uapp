#include <updateable/updateable.h>

#include "applayer.h"

class App : public Updateable::Application
{
public:
    App(const Updateable::ApplicationSpecification &spec)
        : Updateable::Application(spec)
    {
        pushLayer(new AppLayer());
    }

    ~App() override
    {
    }
};

extern "C" Updateable::Application *createApplication()
{
    Updateable::ApplicationSpecification spec;
    spec.name = "App";
    return new App(spec);
}