#include <iostream>
using namespace std;

class DB; // Forward declaration

class DM {
    int meters;
    int centimeters;
public:
    DM(int meters = 0, int centimeters = 0) : meters(meters), centimeters(centimeters) {} // Constructor with default values

    friend DM add(DM, DB);

    void display() const {
        cout << "Meters: " << meters << ", Centimeters: " << centimeters << endl;
    }
};

class DB {
    int feet;
    int inches;
public:
    DB(int feet = 0, int inches = 0) : feet(feet), inches(inches) {} // Constructor with default values

    friend DM add(DM, DB);
};

// Function to add DM and DB
DM add(DM dm, DB db) {
    // Convert DB's feet and inches to centimeters
    int totalCentimeters = dm.centimeters + (db.inches * 2.54) + (db.feet * 12 * 2.54);

    // Convert total centimeters to meters and remaining centimeters
    int totalMeters = dm.meters + totalCentimeters / 100;
    totalCentimeters = totalCentimeters % 100;

    return DM(totalMeters, totalCentimeters);
}

int main() {
    DM dm(15, 23); // 15 meters, 23 centimeters
    DB db(6, 2);   // 6 feet, 2 inches

    DM result = add(dm, db); // Add the two objects

    // Display the result
    result.display();

    return 0;
}
