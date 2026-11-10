// Electric field class
class Electric_Field
{
private:
    double *E; // Array holding the three electric field components

public:
    // Default constructor
    Electric_Field()
    {
        E = new double[3]; // Allocate memory for three components

        E[0] = 0.0; // Initialize x-component
        E[1] = 0.0; // Initialize y-component
        E[2] = 0.0; // Initialize z-component
    }

    // Constructor with three components
    Electric_Field(double x, double y, double z)
    {
        E = new double[3]; // Allocate memory

        E[0] = x; // Assign x-component
        E[1] = y; // Assign y-component
        E[2] = z; // Assign z-component
    }

    // Destructor
    ~Electric_Field()
    {
        delete[] E; // Free allocated memory
    }

    // Calculate magnitude
    double calculateMagnitude()
    {
        return std::sqrt(E[0] * E[0] +
                         E[1] * E[1] +
                         E[2] * E[2]);
    }

    // Calculate inner product
    double calculateInnerProduct()
    {
        return E[0] * E[0] +
               E[1] * E[1] +
               E[2] * E[2];
    }

    // Get x-component
    double getX()
    {
        return E[0];
    }

    // Get y-component
    double getY()
    {
        return E[1];
    }

    // Get z-component
    double getZ()
    {
        return E[2];
    }

    // Set x-component
    void setX(double x)
    {
        E[0] = x;
    }

    // Set y-component
    void setY(double y)
    {
        E[1] = y;
    }

    // Set z-component
    void setZ(double z)
    {
        E[2] = z;
    }
};
