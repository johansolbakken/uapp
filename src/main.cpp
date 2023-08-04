#include <loader/entrypoint.h>

Updateable::Loader *Updateable::createLoader()
{
    Updateable::LoaderSpecification spec;
    spec.name = "app";

    return new Updateable::Loader(spec);
}