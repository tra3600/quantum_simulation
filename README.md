# quantum_simulation
programme C++ de mécanique quantique qui simule le moment cinétique et le spin des particules selon les postulats de la MQ

Pour écrire un programme en C++ qui simule le moment cinétique et le spin des particules en mécanique quantique, nous devons prendre en compte certains concepts de la mécanique quantique, notamment les opérateurs de moment cinétique et de spin, ainsi que les règles de quantification de ces quantités.

Concepts Clés:
Moment Cinétique (L): Quantité vectorielle associée à la rotation d'une particule.
Spin (S): Propriété intrinsèque des particules, indépendante de leur mouvement orbital.
Opérateurs de Moment Cinétique et de Spin: Utilisés pour calculer les valeurs propres et les états propres des particules.
Étapes:
Définir les structures de données pour les particules.
Implémenter les opérateurs de moment cinétique et de spin.
Calculer les valeurs propres et les états propres.
Simuler des mesures selon les postulats de la mécanique quantique.

Explications
Classes et Structures:

Particle : Représente une particule avec un nom, un spin et un nombre quantique orbital.
QuantumMechanics : Contient des méthodes statiques pour calculer les valeurs propres du spin et du moment cinétique orbital, et pour simuler des mesures.
Calcul des Valeurs Propres :

Les valeurs propres du spin sont calculées en multipliant les valeurs (m_s) par (\hbar).
Les valeurs propres du moment cinétique orbital sont calculées en multipliant les valeurs (m_l) par (\hbar).
Simulation de Mesures :

La fonction simulateMeasurement affiche les valeurs propres calculées pour le spin et le moment cinétique orbital.
Compilation et Exécution
Assurez-vous que tous les fichiers sont dans le même répertoire, puis compilez et exécutez le programme avec :

sh

g++ -o quantum_simulation main.cpp Particle.cpp QuantumMechanics.cpp
./quantum_simulation

Ce programme est une base simplifiée pour simuler certains aspects de la mécanique quantique. Il peut être étendu pour inclure plus de fonctionnalités et de complexité, comme la superposition d'états, les matrices de densité, et les mesures de probabilités.
