// Magnetic field class
class Magnetic_Field
{
private:
    double *B; // Array holding the three magnetic field components

public:
    // Default constructor
    Magnetic_Field()
    {
        B = new double[3]; // Allocate memory

        B[0] = 0.0; // Initialize x-component
        B[1] = 0.0; // Initialize y-component
        B[2] = 0.0; // Initialize z-component
    }

    // Constructor with three components
    Magnetic_Field(double x, double y, double z)
    {
        B = new double[3]; // Allocate memory

        B[0] = x; // Assign x-component
        B[1] = y; // Assign y-component
        B[2] = z; // Assign z-component
    }

    // Destructor
    ~Magnetic_Field()
    {
        delete[] B; // Free allocated memory
    }

    // Calculate magnitude
    double calculateMagnitude()
    {
        return std::sqrt(B[0] * B[0] +
                         B[1] * B[1] +
                         B[2] * B[2]);
    }

    // Get x-component
    double getX()
    {
        return B[0];
    }

    // Get y-component
    double getY()
    {
        return B[1];
    }

    // Get z-component
    double getZ()
    {
        return B[2];
    }

    // Set x-component
    void setX(double x)
    {
        B[0] = x;
    }

    // Set y-component
    void setY(double y)
    {
        B[1] = y;
    }

    // Set z-component
    void setZ(double z)
    {
        B[2] = z;
    }

    // Calculate unit vector
    void calculateUnitVector()
    {
        double magnitude = calculateMagnitude(); // Calculate magnitude

        if (magnitude != 0.0) // Check that magnitude is not zero
        {
            std::cout << "(" << B[0] / magnitude << ", ";

            std::cout << B[1] / magnitude << ", ";

            std::cout << B[2] / magnitude << ")" << std::endl;
        }
        else
        {
            std::cout << "Unit vector is undefined." << std::endl;
        }
    }
};
