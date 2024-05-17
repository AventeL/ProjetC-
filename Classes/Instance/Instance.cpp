#include "Instance.h"
#include <fstream>
#include <iostream>

Instance::Instance(const std::string &filename) {
    //lireInstance(std::move(filename));
    lireInstance(filename);
}

void Instance::lireInstance(const std::string &filename) {
    std::ifstream file(filename);

    int n;
    file >> n;

    std::string nom;
    double latitude, longitude;

    villes.resize(n);

    for (int i = 0; i < n; ++i) {
        file >> nom >> latitude >> longitude;
        Ville v(nom, latitude, longitude, i);
        villes[i] = v;
    }
}

void Instance::afficherInstance() {
    for (auto &ville: this->villes) {
        std::cout << "Nom: " << ville.getNom() << ", Latitude: " << ville.getLatitude() << ", Longitude: "
                  << ville.getLongitude()
                  << std::endl;
    }
}

std::vector<Ville> Instance::getVilles() {
    return this->villes;
}


Ville Instance::operator[](int i) const {
    return villes[i];
}
