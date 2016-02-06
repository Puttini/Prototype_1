#ifndef PARTICULE_H_INCLUDED
#define PARTICULE_H_INCLUDED

#include <vector>
#include "Vecteur.h"
#include "Matiere.h"

class Particule
{
public:
    Particule() : m_matiere(NULL) {}
    Particule(int x, int y, Matiere* matiere = NULL);
    Particule(int x, int y, double xd, double yd, Matiere* matiere = NULL);
    ~Particule();

    Vecteur getPos() const { return m_pos; }
    Vecteur getV() const { return m_v; }
    double getMasse() const;

    void appliquerForce(Vecteur f);
    // Change la position, en fonction des forces pr�alablement appliqu�es, et de la dur�e de d�placement
    void calculerDeplacement(double dt);

//private:
    int m_x, m_y; // Pas s�r que �a serve...
    Vecteur m_pos, m_v, m_resf; // resf est la r�sultante des forces � l'instant consid�r�

    // FAIRE LES LIAISONS

    Matiere* m_matiere;
};

#endif // PARTICULE_H_INCLUDED
