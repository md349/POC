#ifndef PARTICLE_H
#define PARTICLE_H

#include <vector>

class Particle
{
  public:
    //accessors
    inline std::vector<float> getPosition() const {return Position;}
    inline bool getAlive() const {return Alive;}
    inline std::vector<float> getDirection() const {return Direction;}
    inline std::vector<float> getVelocity() const {return Velocity;}
    inline bool getCollided() const {return Collided;}
    inline float getWeather() const {return Weathering;}

    //mutators
    //set default particle values
    void initialise(std::vector<float> p);

    //print particle information
    void print() const;

    //destructor
    ~Particle();

  private:
    //vector to store particle position
    std::vector<float> Position;

    //Bool to store whether a particle is still alive or not
    bool Alive;

    //int to store how many iterations the particle has been alive
    int Life;

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
