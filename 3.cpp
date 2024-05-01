#include <iostream>
using namespace std;

class DB; // Forward declaration

class DM {
private:
    int meters;
    float centimeters;

public:
    void setDistance(int m, float cm) {
        meters = m;
        centimeters = cm;
    }

    friend void addDistances(DM, DB);
};

class DB {
private:
    int feet;
    float inches;

public:
    void setDistance(int f, float in) {
        feet = f;
        inches = in;
    }

    friend void addDistances(DM, DB);
};

// Friend function to add DM and DB distances
void addDistances(DM dmObj, DB dbObj) {
    // Convert DM to centimeters
    float dmInCentimeters = dmObj.meters * 100 + dmObj.centimeters;
    // Convert DB to inches
    float dbInInches = dbObj.feet * 12 + dbObj.inches;
    // Add the distances
    float totalDistance = dmInCentimeters + dbInInches;
    // Convert total distance back to meters and centimeters
    int totalMeters = static_cast<int>(totalDistance / 100);
    float remainingCentimeters = totalDistance - totalMeters * 100;
    cout << "Total Distance: " << totalMeters << " meters and " << remainingCentimeters << " centimeters" << std::endl;
}

int main() {
    DM dmObj;
    DB dbObj;
    int meters;
    float centimeters;
    cout << "Enter distance in meters and centimeters: ";
    cin >> meters >> centimeters;
    dmObj.setDistance(meters, centimeters);
    int feet;
    float inches;
    cout << "Enter distance in feet and inches: ";
    cin >> feet >> inches;
    dbObj.setDistance(feet, inches);
    // Add DM and DB distances
    addDistances(dmObj, dbObj);
    return 0;
}
