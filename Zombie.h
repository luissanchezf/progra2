#ifndef PROYECTOFINALCICLO2_ZOMBIE_H
#define PROYECTOFINALCICLO2_ZOMBIE_H
#include "Entidad.h"
using namespace std;

class Zombie : public Entidad {
private:
    string nombre;
    vector<string> sprites;
    int hp;
    int velocidad;
public:
    Zombie(int x, int y, string hab, string nom, int h, int velo);
    ~Zombie();
    string getNombre();
    void setNombre(string);
    void setHp(int);
    int getHp();
    virtual void Habilidad();
};





#endif //PROYECTOFINALCICLO2_ZOMBIE_H