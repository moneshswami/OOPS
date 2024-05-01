#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    string model;

public:
    // Constructor
    Car(const string& m) {
        model = m;
        cout << "A car of model " << model << " is manufactured." << endl;
    }

    // Member function to display the model
    void displayModel() {
        cout << "Model: " << model << endl;
    }

    // Member function to update the model using this pointer
    void setModel(const string& m) {
        this->model = m;
    }

    // Destructor
    ~Car() {
        cout << "The car of model " << model << " is sold." << endl;
    }
};

int main() {
    // Take input from the user for the car model
    string initialModel;
    cout << "Enter the initial model of the car: ";
    getline(cin, initialModel);

    // Create a car object using new
    Car* car1 = new Car(initialModel);

    // Display the model
    car1->displayModel();

    // Take input from the user to update the model
    string updatedModel;
    cout << "Enter the updated model of the car: ";
    cin >> updatedModel;

    // Update the model using this pointer
    car1->setModel(updatedModel);

    // Display the updated model
    car1->displayModel();

    // Delete the car object using delete
    delete car1;

    return 0;
}
