#include <random>
#include "Voisinage.h"
#include "Reinsertion/Reinsertion.h"
#include "Echange/Echange.h"
#include "2opt/TwoOpt.h"

Voisinage *Voisinage::getRandomVoisinage() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(0, 2);
    int r = dis(gen);
    switch (r) {
        case 0:
            return new TwoOpt();
        case 1:
            return new Echange();
        case 2:
            return new Reinsertion();
    }
    return nullptr;
}
