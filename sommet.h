//
// Created by benoit on 13/10/2019.
//

#ifndef MAILLAGE_EXO_SOMMET_H
#define MAILLAGE_EXO_SOMMET_H


#include "coords.h"
#include "svgfile.h"

class Sommet {
public:
    Sommet();
    Sommet(Coords coords);
    int getX() const;
    int getY() const;
    void display() const;
    void draw(Svgfile& svgout) const;
private:
    Coords m_coords;
};


#endif //MAILLAGE_EXO_SOMMET_H
