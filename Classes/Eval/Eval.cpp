#include "Eval.h"
#include "cmath"

Eval::Eval(Instance &_instance) : instance(_instance) {}

Instance Eval::getInstance() {
    return this->instance;
}

float Eval::distance(const Ville &a, const Ville &b) {
    return R * acos(sin(toRadiant(a.getLatitude())) * sin(toRadiant(b.getLatitude())) +
                    cos(toRadiant(a.getLatitude())) * cos(toRadiant(b.getLatitude())) *
                    cos(toRadiant(a.getLongitude()) - toRadiant(b.getLongitude())));
}

float Eval::toRadiant(float val) {
    return pi * val / 180;
}

float Eval::operator()(Solution &sol) {
    float d = 0;
    for (int i = 0; i < sol.size() - 1; i++) {
        d += distance(instance[sol[i]], instance[sol[i + 1]]);
    }
    d += distance(instance[sol[-1]], instance[sol[0]]);

    return d;
}