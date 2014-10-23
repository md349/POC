#include <vector>
#include <iostream>
#include "Particle.h"
#include <ngl/VAOPrimitives.h>
#include <ngl/ShaderLib.h>
#include <ngl/Util.h>

int c =0;

Particle::Particle(ngl::Vec3 _ePos)
{
  ngl::Random *rand=ngl::Random::instance();
  //set particle position
  _ePos += rand->getRandomNormalizedVec3();
  _pPos = _ePos;

  //set particle as alive
  Alive = true;

  //set initial direction of particle travel
  //for directional (b-a) therfore we need objet position as b and particle position as a.
  //implemented as ngl random function
  _pDir.set(rand->getRandomNormalizedVec3());
  //std::cout<<"Dir = ["<<_pDir[0]<<", "<<_pDir[1]<<", "<<_pDir[2]<<"]\n";

  //set Particle velocity
  //EDIT this...
  _pVel.set(ngl::Vec3(2,2,2));

  //set collided to false
  Collided = false;

  //set weathering level of particle
  Weathering = 0.0f;
}

void Particle::update(ngl::Vec3 _ePos)
{
  if(Alive == false)
  {
    _pPos += _pDir;
    _pPos = _pPos * _pVel;
    if (_pPos[0] > 15 || _pPos[1] > 15 || _pPos[2] > 15 )
    {
      Alive = false;
    }
  }
  else
  {
    _pPos.set(_ePos);
  }
}

void Particle::draw() const
{
  ngl::VAOPrimitives *prim=ngl::VAOPrimitives::instance();
  ngl::Mat4 look=ngl::lookAt(ngl::Vec3(5,5,5),ngl::Vec3(0,0,0),ngl::Vec3(0,1,0));
  ngl::Mat4 persp=ngl::perspective(45,1.0,0.01,500);
  ngl::Mat4 model;
  model.translate(_pPos[0],_pPos[1],_pPos[2]);
  ngl::Mat4 MVP=model*look*persp;
  ngl::ShaderLib *shader = ngl::ShaderLib::instance();
  shader->use("nglColourShader");

  shader->setShaderParamFromMat4("MVP",MVP);
  prim->draw("cube");
  //std::cout<<"Draw "<<c<<"\n";
  c+=1;
}


//print contents of Emitter Object
void Particle::print() const
{
  std::cout<<"Particle Position = ["<<_pPos[0]<<", "<<_pPos[1]<<", "<<_pPos[2]<<"]\n";
  std::cout<<"Alive = "<<Alive<<"\n";
  std::cout<<"Particle Direction = ["<<_pDir[0]<<", "<<_pDir[1]<<", "<<_pDir[2]<<"]\n";
  std::cout<<"Particle Velocity = ["<<_pVel[0]<<", "<<_pVel[1]<<", "<<_pVel[2]<<"]\n";
  std::cout<<"Collided = "<<Collided<<"\n";
  std::cout<<"Weathering = "<<Weathering<<"\n";
}

//Particle dtor
Particle::~Particle()
{
  std::cout<<"Particle dtor called \n";
}
