#include <iostream> // Input and output library
#include <cmath> // Math library
#include "electric_field.h" // Electric field class
#include "magnetic_field.h" // Magnetic field class

int main()
{
    // Create default electric field
    Electric_Field E_default;

    // Create electric field with three components
    Electric_Field E_components(1e5, 10.9, 1.7e2);

    // Set default electric field components
    E_default.setX(3.0);
    E_default.setY(4.0);
    E_default.setZ(5.0);

    // Display electric field magnitudes
    std::cout << "Electric Field Magnitudes" << std::endl;

    std::cout << "Default Electric Field: "
              << E_default.calculateMagnitude() << std::endl;

    std::cout << "Component Electric Field: "
              << E_components.calculateMagnitude() << std::endl;

    // Display electric field inner product
    std::cout << "\nElectric Field Inner Product: "
              << E_components.calculateInnerProduct() << std::endl;

    // Create default magnetic field
    Magnetic_Field B_default;

    // Create magnetic field with three components
    Magnetic_Field B_components(3.0, 4.0, 5.0);

    // Set default magnetic field components
    B_default.setX(6.0);
    B_default.setY(8.0);
    B_default.setZ(10.0);

    // Display magnetic field magnitudes
    std::cout << "\nMagnetic Field Magnitudes" << std::endl;

    std::cout << "Default Magnetic Field: "
              << B_default.calculateMagnitude() << std::endl;

    std::cout << "Component Magnetic Field: "
              << B_components.calculateMagnitude() << std::endl;

    // Display magnetic field unit vector
    std::cout << "\nMagnetic Field Unit Vector: ";

    B_components.calculateUnitVector();

    return 0; // End program
}
