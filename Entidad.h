#ifndef ENTIDAD_H
#define ENTIDAD_H

#include <iostream>
#include <string>
#include <vector>


class Entidad {
    private:
    int pos_x;
    int pos_y;
    std::string habilidad;

    public:
    Entidad();
    void setPos(int x, int y);
    int getPosX();
    int getPosY();
};



#endif //ENTIDAD_H
