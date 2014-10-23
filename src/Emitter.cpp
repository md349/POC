#include "Emitter.h"

#include <iostream>
#include <vector>
#include <ngl/Vec3.h>

Emitter::Emitter(float _x, float _y, float _z, int _numParticles)
{
  _ePos.set(_x,_y,_z);
  _nP = _numParticles;
  for(int i = 0; i < _numParticles; ++i){
    particles.push_back(Particle(_ePos));
  }
}

void Emitter::draw() const
{
  for(int i = 0; i < _nP; ++i)
  {
    particles[i].draw();
  }
}

void Emitter::update()
{
  for(int i = 0; i < _nP; ++i)
  {
    particles[i].update(_ePos);
  }
}

//print contents of Emitter Object
void Emitter::print() const
{
  std::cout<<"Emitter Position = ["<<_ePos[0]<<", "<<_ePos[1]<<", "<<_ePos[2]<<"]\n";
}

//Emitter dtor
Emitter::~Emitter()
{
  std::cout<<"Emitter dtor called \n";
}
