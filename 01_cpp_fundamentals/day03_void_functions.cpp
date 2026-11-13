#include <iostream>
#include <string>

// Function 1: Prints basic intrinsic properties of a particle
// 'void' means this function performs an action (printing) and returns no value.
void printParticleInfo(std::string name, double rest_mass_mev, int charge) {
    std::cout << "Particle: " << name
              << " | Rest Mass: " << rest_mass_mev << " MeV/c^2"
              << " | Charge: " << charge << "e\n";
}

// Function 2: Computes and prints relativistic kinetic energy (T = E - m)
void printKineticEnergy(std::string name, double total_energy_mev, double rest_mass_mev) {
    double kinetic_energy = total_energy_mev - rest_mass_mev;
    std::cout << name << " (Total E = " << total_energy_mev << " MeV) -> "
              << "Kinetic Energy T = " << kinetic_energy << " MeV\n";
}

int main() {
    std::cout << "--- Intrinsic Particle Properties ---\n";
    printParticleInfo("Electron", 0.511, -1);
    printParticleInfo("Muon", 105.658, -1);
    printParticleInfo("Proton", 938.272, +1);

    std::cout << "\n--- Relativistic Kinetic Energy ---\n";
    // Example 1: Cosmic-ray muon with 500 MeV total energy
    printKineticEnergy("Cosmic Muon", 500.0, 105.658);
    // Example 2: Accelerated proton with 1200 MeV total energy
    printKineticEnergy("Beam Proton", 1200.0, 938.272);

    return 0;
}