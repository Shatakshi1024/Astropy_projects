#include <iostream>
#include <cmath>  

int main() {

// 1. Relativistic Rest Mass vs Total Energy for a Cs-137 gamma scatter
double total_energy = 661.7; // KeV
double rest_mass = 511.0; // KeV
double kinetic_energy = total_energy - rest_mass;

std::cout <<"---Energy Calculator---\n";
std::cout <<"Kinetic Energy(T = E - m): " << kinetic_energy << "KeV\n\n";

int counts_peak = 1200;
int total_counts = 5000;

double good_efficiency = static_cast<double>(counts_peak) / total_counts;
double bad_efficiency = counts_peak / total_counts;

std::cout << "--- Integer vs. Floating-Point Division ---\n";
    std::cout << "Bad efficiency (1200 / 5000 as int):  " << bad_efficiency << "\n";
    std::cout << "Good efficiency (cast to double):     " << good_efficiency << "\n\n";

    // 3. Using <cmath> for magnitude calculations
    double px = 150.0; // MeV/c
    double py = 200.0; // MeV/c
    double p_total = std::sqrt(std::pow(px, 2) + std::pow(py, 2));

    std::cout << "--- Momentum Magnitude ---\n";
    std::cout << "Total momentum: " << p_total << " MeV/c\n";

    return 0;


}