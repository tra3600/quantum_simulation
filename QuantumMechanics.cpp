#include "QuantumMechanics.h"
#include <iostream>
#include <cmath>

double QuantumMechanics::hbar = 1.0545718e-34; // Reduced Planck's constant in Js

std::vector<double> QuantumMechanics::calculateSpinEigenvalues(const Particle& particle) {
    double s = particle.getSpin();
    std::vector<double> eigenvalues;
    for (int ms = -s; ms <= s; ms++) {
        eigenvalues.push_back(ms * hbar);
    }
    return eigenvalues;
}

std::vector<double> QuantumMechanics::calculateOrbitalAngularMomentumEigenvalues(const Particle& particle) {
    int l = particle.getLQuantumNumber();
    std::vector<double> eigenvalues;
    for (int ml = -l; ml <= l; ml++) {
        eigenvalues.push_back(ml * hbar);
    }
    return eigenvalues;
}

void QuantumMechanics::simulateMeasurement(const Particle& particle) {
    std::vector<double> spin_eigenvalues = calculateSpinEigenvalues(particle);
    std::vector<double> orbital_eigenvalues = calculateOrbitalAngularMomentumEigenvalues(particle);

    std::cout << "Measurement simulation for particle: " << particle.getName() << std::endl;
    std::cout << "Spin eigenvalues (in units of ħ): ";
    for (const auto& value : spin_eigenvalues) {
        std::cout << value / hbar << " ";
    }
    std::cout << std::endl;

    std::cout << "Orbital angular momentum eigenvalues (in units of ħ): ";
    for (const auto& value : orbital_eigenvalues) {
        std::cout << value / hbar << " ";
    }
    std::cout << std::endl;
}