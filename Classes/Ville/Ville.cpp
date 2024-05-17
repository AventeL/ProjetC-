#include "Ville.h"

Ville::Ville() : nom(""), latitude(0.0), longitude(0.0) {}

Ville::Ville(const std::string &nom, double latitude, double longitude, int id) {
    this->nom = nom;
    this->latitude = latitude;
    this->longitude = longitude;
    this->id = id;
}

int Ville::getId() const {
    return id;
}

double Ville::getLatitude() const {
    return latitude;
}

double Ville::getLongitude() const {
    return longitude;
}

std::string Ville::getNom() const {
    return nom;
}
