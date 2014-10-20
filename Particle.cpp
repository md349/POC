#include <vector>
#include <iostream>
#include "Particle.h"

void Particle::initialise()
{
  //set particle position
  Position.push_back(0.0f);
  Position.push_back(0.0f);
  Position.push_back(0.0f);

  //set particle as alive
  Alive = true;

  //set initial direction of particle travel
  //EDIT this to somehow shoot in various directions
  Direction.push_back(0.0f);
  Direction.push_back(0.0f);
  Direction.push_back(0.0f);

  //set Particle velocity
  //EDIT this...
  Velocity.push_back(0.0f);
  Velocity.push_back(0.0f);
  Velocity.push_back(0.0f);

  //set collided to false
  Collided = false;

  //set weathering level of particle
  Weathering = 0.0f;
}

//print contents of Emitter Object
void Particle::print() const
{
  std::cout<<"Particle Position = ["<<Position[0]<<", "<<Position[1]<<", "<<Position[2]<<"]\n";
  std::cout<<"Alive = "<<Alive<<"\n";
  std::cout<<"Particle Direction = ["<<Direction[0]<<", "<<Direction[1]<<", "<<Direction[2]<<"]\n";
  std::cout<<"Particle Velocity = ["<<Velocity[0]<<", "<<Velocity[1]<<", "<<Velocity[2]<<"]\n";
  std::cout<<"Collided = "<<Collided<<"\n";
  std::cout<<"Weathering = "<<Weathering<<"\n";
}

//Particle dtor
Particle::~Particle()
{
  std::cout<<"Particle dtor called \n";
}
