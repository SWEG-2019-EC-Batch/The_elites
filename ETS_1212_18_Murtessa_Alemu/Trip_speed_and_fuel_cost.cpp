#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double distance, fuelRate, pricePerLiter;
    double hours, minutes, totalTime;
    double averageSpeed, fuelUsed, fuelCost;

    cout << "Enter distance (km): ";
    cin >> distance;

    cout << "Enter travel time (hours): ";
    cin >> hours;

    cout << "Enter travel time (minutes): ";
    cin >> minutes;

    cout << "Enter fuel consumption (L/100km): ";
    cin >> fuelRate;

    cout << "Enter price per liter (birr): ";
    cin >> pricePerLiter;

    // Convert travel time into hours
    totalTime = hours + (minutes / 60.0);

    // Calculate average speed
    averageSpeed = distance / totalTime;

    // Calculate fuel used
    fuelUsed = (distance * fuelRate) / 100.0;

    // Calculate fuel cost
    fuelCost = fuelUsed * pricePerLiter;

    cout << fixed << setprecision(2);

    cout << "\nAverage speed: " << averageSpeed << " km/h" << endl;
    cout << "Fuel used: " << fuelUsed << " liters" << endl;
    cout << "Fuel cost: " << fuelCost << " birr" << endl;

    return 0;
}
