#ifndef PARTICLE_H
#define PARTICLE_H

#include <string>
#include <vector>

class Particle {
public:
    Particle(const std::string& name, double spin, int l_quantum_number);
    std::string getName() const;
    double getSpin() const;
    int getLQuantumNumber() const;

private:
    std::string name;
    double spin;
    int l_quantum_number; // Quantum number associated with orbital angular momentum
};

#endif // PARTICLE_H