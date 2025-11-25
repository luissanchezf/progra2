#include "Entidad.h"

Entidad::Entidad() {
}
;
void Entidad::setPos(int x, int y) {
    pos_x = x; pos_y = y;
}
int Entidad::getPosX() {
    return pos_x;
}
int Entidad::getPosY() {
    return pos_y;
}

