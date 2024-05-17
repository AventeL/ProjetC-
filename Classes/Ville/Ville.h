#ifndef VILLE_H
#define VILLE_H

#include <string>

class Ville {
private:
    std::string nom;
    double latitude;
    double longitude;
    int id;

public:
    Ville();

    Ville(const std::string &nom, double latitude, double longitude, int id);

    std::string getNom() const;

    double getLatitude() const;

    double getLongitude() const;

    int getId() const;
};

#endif
