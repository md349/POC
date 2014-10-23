#ifndef EMITTER_H
#define EMITTER_H

#include <vector>
#include <ngl/Vec3.h>

#include "Particle.h"

class Emitter{

  public:
    //set position. Defaults to origin
    Emitter (float _x = 0.0f,
             float _y = 0.0f,
             float _z = 0.0f,
             int _numParticles = 100
            );

    //accessors
    inline ngl::Vec3 getPosition() const {return _ePos;}
    inline int getNP() const {return _nP;}
    //print the contents of the emitter class
    void print() const;

    //draw function
    void draw() const;

    //update function
    void update();

    //destructor
    ~Emitter();

  private:
    ngl::Vec3 _ePos;
    std::vector<Particle> particles;
    int _nP;
};
#endif // EMITTER_H
