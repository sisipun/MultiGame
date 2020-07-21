#ifndef DRUNKARD_WALK_MAZE_GENERATOR_H
#define DRUNKARD_WALK_MAZE_GENERATOR_H

#include "maze_generator.h"

class DrunkardWalkMazeGenerator : public MazeGenerator
{
public:
    DrunkardWalkMazeGenerator(int coverage)
    {
        if (coverage > 100)
        {
            this->coverage = 100;
        }
        else if (coverage < 0)
        {
            this->coverage = 0;
        }
        else
        {
            this->coverage = coverage;
        }
    }

    int *generate(int width, int height) override;

private:
    int coverage;
};

#endif