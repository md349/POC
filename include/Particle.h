#ifndef PARTICLE_H
#define PARTICLE_H

#include <vector>
#include <ngl/Vec3.h>
#include <ngl/Random.h>

class Particle
{
  public:

    Particle(ngl::Vec3 _ePos);

    //accessors
    inline ngl::Vec3 getPosition() const {return _pPos;}
    inline bool getAlive() const {return Alive;}
    inline ngl::Vec3 getDirection() const {return _pDir;}
    inline ngl::Vec3 getVelocity() const {return _pVel;}
    inline bool getCollided() const {return Collided;}
    inline float getWeather() const {return Weathering;}

    //update Particles
    void update(ngl::Vec3 _ePos);
    //draw the Particle to the NGL window
    void draw() const;
    //update particles
    void update();
    //print particle information
    void print() const;

    //destructor
    ~Particle();

  private:
    //vector to store particle position
    ngl::Vec3 _pPos;

    //Bool to store whether a particle is still alive or not
    bool Alive;

    //vector to store particle direction
    ngl::Vec3 _pDir;

    //vector to store particle velocity
    ngl::Vec3 _pVel;

    //Bool to store whether a particle has collided or not
    bool Collided;

    //set Weathering properties of the particle
    float Weathering;

};

#endif // PARTICLE_H
