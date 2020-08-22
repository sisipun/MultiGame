#ifndef DOOR_H
#define DOOR_H

#include "../engine/actor/actor.h"
#include "../engine/physics/body.h"

#include <string>

class Door : public Actor
{
public:
    Door(
        std::string name,
        Body body,
        std::vector<std::string> tags = {"door"},
        std::vector<std::string> eventTypes = {},
        float horizontalVelocity = 0,
        float verticalVelocity = 0,
        bool manageCollisions = false,
        bool visiable = false) : Actor(name,
                                       body,
                                       tags,
                                       eventTypes,
                                       horizontalVelocity,
                                       verticalVelocity,
                                       manageCollisions,
                                       visiable)
    {
    }
};

#endif