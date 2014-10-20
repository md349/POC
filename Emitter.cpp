#include "Emitter.h"
#include <iostream>
#include <vector>

//print contents of Emitter Object
void Emitter::print() const
{
  std::cout<<"Emitter Position = ["<<_ex<<", "<<_ey<<", "<<_ez<<"]\n";
}

void Emitter::Emit()
{


}

//Emitter dtor
Emitter::~Emitter()
{
  std::cout<<"Emitter dtor called \n";
}
