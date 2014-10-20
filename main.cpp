/** This is a proof of concept(POC) for a particle based weathering system
 * This POC will demonstrate that particles can be emitted from an emitter
 * towards an object and behave in certain ways, depending on the characteristics
 * of the object. Some particles will reflect, bounce(reflectance under gravity),
 * stick or slide.
 *
 * */

#include <iostream>
#include <cstdio>
#include <vector>

#include "Emitter.h"
#include "Object.h"
#include "Particle.h"

int main (int argc, char **argv)
{
   //std::vector<Particle> particles(100);

   //particles.size();

   Particle p;

   p.initialise();

   p.print();

   std::vector<Particle> particles(100);

   for(int i = 0; i < particles.size(); ++i)
   {
     particles[i].initialise();
   }

   //Load object into the scene
   Object obj;

   //Create Emitters
   Emitter em;
   Emitter em1(0.1,2.7,1.2);

   em.Emit();
   em1.Emit();

   em.print();
   em1.print();

   return 1;
}
