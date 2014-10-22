#ifndef COLLIDE_H
#define COLLIDE_H

#include <vector>
#include "Particle.h"

class Collide
{
  public:

    void check(std::vector<float> PartPos, std::vector<float> ObjPos);

    //destructor
    ~Collide();
};

#endif // COLLIDE_H
