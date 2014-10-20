#ifndef EMITTER_H
#define EMITTER_H
class Emitter{

  public:
    //set position. Defaults to origin
    inline Emitter (float _x = 0.0f, float _y = 0.0f, float _z = 0.0f):
                    _ex(_x),
                    _ey(_y),
                    _ez(_z){;}

    //set particles and emit them into the scene into the scene
    void Emit();

    //print the contents of the emitter class
    void print() const;

    //destructor
    ~Emitter();

  private:
    float _ex;
    float _ey;
    float _ez;


};
#endif // EMITTER_H
