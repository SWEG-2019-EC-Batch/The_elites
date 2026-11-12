/*INPUT:
 Distance traveled in kilometers.
 Travel time in hours and minutes.
 Fuel consumption per 100 km.
 Price per liter of fuel.

PROCESS:
  Convert hours and minutes into total hours.
  Calculate average speed (distance / time).
  Calculate fuel consumed (distance * fuelRate / 100).
  Calculate fuel cost (fuel * price).

OUTPUT:
  Average speed in km/h.
  Fuel used in liters.
  Total fuel cost in birr.
  Display results to 2 decimal places.
*/
#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    double distance, fuelRate, price, time, speed, fuel, cost;
    int hours, minutes;

    cout << "Enter distance in km: ";
    cin >> distance;

    cout << "Enter travel time (Hours ony): ";
    cin >> hours;
    cout<<"Enter additional minutes if any (0-59): ";
    cin>> minutes;

    cout << "Enter fuel use per 100 km: ";
    cin >> fuelRate;

    cout << "Enter price per liter: ";
    cin >> price;

    time = hours + minutes / 60.0;

    speed = distance / time;

    fuel = (distance * fuelRate) / 100;

    cost = fuel * price;

    cout << fixed << setprecision(2);

    cout << "Average speed = " << speed << " km/h" << endl;
    cout << "Fuel used = " << fuel << " liters" << endl;
    cout << "Fuel cost = " << cost << " birr" << endl;

    return 0;
}
