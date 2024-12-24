#include <iostream>
#include "Particle.h"
#include "QuantumMechanics.h"

int main() {
    // Define a particle with a name, spin, and orbital angular momentum quantum number
    Particle electron("Electron", 0.5, 1);

    // Simulate measurements for the particle
    QuantumMechanics::simulateMeasurement(electron);

    return 0;
}