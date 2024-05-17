#ifndef PROJET_LOCALRESEARCHFIRSTAMELIORANTE_H
#define PROJET_LOCALRESEARCHFIRSTAMELIORANTE_H

#include "../LocalResearchVoisinage.h"

class LocalResearchFirstAmeliorante : public LocalResearchVoisinage {
public:
    explicit LocalResearchFirstAmeliorante(Voisinage &voisinage);

    Solution getAmeliorante(Solution &sol, Voisinage &voisinage, Eval &eval) override;
};


#endif
