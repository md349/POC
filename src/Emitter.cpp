#include "Emitter.h"
#include <iostream>
#include <vector>

//print contents of Emitter Object
void Emitter::print() const
{
  std::cout<<"Emitter Position = ["<<Position[0]<<", "<<Position[1]<<", "<<Position[2]<<"]\n";
}

//Emitter dtor
Emitter::~Emitter()
{
  std::cout<<"Emitter dtor called \n";
}
