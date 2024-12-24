#include "Particle.h"

Particle::Particle(const std::string& name, double spin, int l_quantum_number)
    : name(name), spin(spin), l_quantum_number(l_quantum_number) {}

std::string Particle::getName() const {
    return name;
}

double Particle::getSpin() const {
    return spin;
}

int Particle::getLQuantumNumber() const {
    return l_quantum_number;
}