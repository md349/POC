#include <vector>
#include <iostream>
#include "Particle.h"

void Particle::initialise(std::vector<float> p)
{
  //set particle position
  Position.push_back(p[0]);
  Position.push_back(p[1]);
  Position.push_back(p[2]);

  //set particle as alive
  Alive = true;

  //set how many passes the particle should stay alive
  Life = 0;

  //set initial direction of particle travel
  //EDIT this to somehow shoot in various directions
  //(b-a) therfore we need objet position as b and particle position as a.
  //or random function
  Direction.push_back(0.0f);
  Direction.push_back(0.0f);
  Direction.push_back(0.0f);

  //set Particle velocity
  //EDIT this...maybe...
  Velocity.push_back(0.2f);
  Velocity.push_back(0.2f);
  Velocity.push_back(0.2f);

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
  //std::cout<<"Particle dtor called \n";
}
