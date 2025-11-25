#ifndef PLANTA_H
#define PLANTA_H

#include "Entidad.h"
using namespace std;

class Planta: public Entidad {
    private:
        string nombre;
        vector<string> sprites;
        int hp;
        int costo;
    public:
    Planta(int x, int y, string hab, string nom, int h);
    ~Planta();
    string getNombre();
    void setNombre(string);
    void setHp(int);
    int getHp();
    virtual void Habilidad();
};

class Lanzaguisantes: public Planta {
    public:
    Lanzaguisantes(int x, int y);
    void Habilidad() override;
};
class Girasol : public Planta {
    public:
    Girasol(int x, int y);
    void Habilidad() override;
};
class Nuez: public Planta {
    public:
    Nuez(int x, int y);
    void Habilidad() override;
};
class Papapum: public Planta {
public:
    Papapum(int x, int y);
    void Habilidad() override;
};
class Hielaguisantes: public Planta {
    public:
    Hielaguisantes(int x, int y);
    void Habilidad() override;
};
class Petacereza: public Planta {
    public:
    Petacereza(int x, int y);
    void Habilidad() override;
};



#endif //PLANTA_H
