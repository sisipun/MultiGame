#ifndef WALL_H
#define WALL_H

#include "../engine/actor/actor.h"
#include "../engine/physics/body.h"

#include <string>

class Wall : public Actor
{
public:
    Wall(
        std::string name,
        Body body,
        std::vector<std::string> tags = {"wall"},
        std::vector<std::string> eventTypes = {},
        float horizontalVelocity = 0,
        float verticalVelocity = 0,
        bool manageCollisions = false,
        bool visiable = true) : Actor(name,
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