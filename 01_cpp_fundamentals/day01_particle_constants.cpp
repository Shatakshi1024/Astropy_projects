#include <iostream>

int main() {
    float electron_mass_mev = 0.51;
    int atomic_number = 53; //Iodine (z = 53)
    bool is_hadron = false;

    std::cout << "The mass of Electron is " << electron_mass_mev << " in MeV\n";
    std::cout << "The atomic number of Iodine is " << atomic_number << "\n";
    std::cout << "Hadron flag " << is_hadron << "\n";

    return 0;

}
