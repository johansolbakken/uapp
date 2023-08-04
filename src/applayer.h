#pragma once

#include <updateable/updateable.h>

class AppLayer : public Updateable::Layer
{
public:
    AppLayer() = default;
    ~AppLayer() override = default;
    void onAttach() override;
    void onDetach() override;
    void onUpdate() override;
};