#ifndef EMITTER_H
#define EMITTER_H

#include<vector>

class Emitter{

  public:
    //set position. Defaults to origin
    inline Emitter (float _x = 0.0f, float _y = 0.0f, float _z = 0.0f) {
                    Position.push_back(_x);
                    Position.push_back(_y);
                    Position.push_back(_z);
    }

    //accessors
    inline std::vector<float> getPosition() const {return Position;}

    //mutators
    //print the contents of the emitter class
    void print() const;

    //destructor
    ~Emitter();

  private:
    std::vector<float> Position;
};
#endif // EMITTER_H
