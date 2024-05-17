#ifndef PROJET_INSTANCE_H
#define PROJET_INSTANCE_H


#include <vector>
#include "../Ville/Ville.h"

class Instance {
protected:
    std::vector<Ville> villes;
public:
    Instance(const std::string &filename);

    void lireInstance(const std::string &filename);

    void afficherInstance();

    std::vector<Ville> getVilles();

    Ville operator[](int i) const;
};


#endif //PROJET_INSTANCE_H
