#include "applayer.h"

#include <iostream>

void AppLayer::onAttach()
{
    std::cout << "AppLayer::onAttach()" << std::endl;
}

void AppLayer::onDetach()
{
    std::cout << "AppLayer::onDetach()" << std::endl;
}

void AppLayer::onUpdate()
{
    Updateable::Application::instance().close();
}