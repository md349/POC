#ifndef PARTICLE_H
#define PARTICLE_H

#include <vector>

class Particle
{
  public:
    //set default particle values
    void initialise();

    //print particle information
    void print() const;

    //destructor
    ~Particle();

  private:
    //vector to store particle position
    std::vector<float> Position;

    //Bool to store whether a particle is still alive or not
    bool Alive;

    //vector to store particle direction
    std::vector<float> Direction;

    //vector to store particle velocity
    std::vector<float> Velocity;

    //Bool to store whether a particle has collided or not
    bool Collided;

    //set Weathering properties of the particle
    float Weathering;

};

#endif // PARTICLE_H
