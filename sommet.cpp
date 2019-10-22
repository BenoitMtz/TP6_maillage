//
// Created by benoit on 13/10/2019.
//

#include <iostream>
#include "sommet.h"

Sommet::Sommet(Coords coords) : m_coords{coords}
{}

Sommet::Sommet()
{}

int Sommet::getX() const {
    return m_coords.getX();
}

int Sommet::getY() const {
    return m_coords.getY();
}

void Sommet::display() const {
    m_coords.afficher();

}

void Sommet::draw(Svgfile& svgout) const {
    svgout.addDisk(m_coords.getX(), m_coords.getY(), 5);
}
