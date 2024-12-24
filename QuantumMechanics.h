#ifndef QUANTUMMECHANICS_H
#define QUANTUMMECHANICS_H

#include "Particle.h"
#include <vector>

class QuantumMechanics {
public:
    static std::vector<double> calculateSpinEigenvalues(const Particle& particle);
    static std::vector<double> calculateOrbitalAngularMomentumEigenvalues(const Particle& particle);
    static void simulateMeasurement(const Particle& particle);

private:
    static double hbar; // Reduced Planck's constant
};

#endif // QUANTUMMECHANICS_H