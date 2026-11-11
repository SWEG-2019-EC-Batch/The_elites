/*
(a) Inputs:
    - Trip distance in kilometers.
    - Travel time in hours and minutes.
    - Fuel consumption rate in liters per 100 kilometers.
    - Fuel price per liter in Birr.

    Outputs:
    - Average speed in kilometers per hour.
    - Total fuel used in liters.
    - Total fuel cost in Birr.

(b) Process:
    1. Start the program.
    2. Declare variables for distance, travel hours, travel
       minutes, fuel consumption, fuel price, total time,
       average speed, fuel used, and fuel cost.
    3. Ask the user to enter the distance, travel time,
       fuel consumption rate, and fuel price.
    4. Convert minutes into hours using static_cast<double>
       and add them to the travel hours to calculate
       the total travel time.
    5. Calculate average speed by dividing distance
       by total travel time.
    6. Calculate fuel used by multiplying distance
       by fuel consumption and dividing by 100.
    7. Calculate fuel cost by multiplying fuel used
       by the fuel price per liter.
    8. Display average speed, fuel used, and fuel cost,
       each to two decimal places.
    9. End the program.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double distance;
    int hours, minutes;
    double fuel_consumption;
    double fuel_price;
    double total_time;
    double average_speed;
    double fuel_used;
    double fuel_cost;

    // Read inputs
    cout << "Enter trip distance (km): ";
    cin >> distance;

    cout << "Enter travel hours: ";
    cin >> hours;

    cout << "Enter travel minutes: ";
    cin >> minutes;

    cout << "Enter fuel consumption (L/100km): ";
    cin >> fuel_consumption;

    cout << "Enter fuel price per liter: ";
    cin >> fuel_price;

    // Convert minutes into hours
    total_time = hours + static_cast<double>(minutes) / 60;

    // Calculate average speed
    average_speed = distance / total_time;

    // Calculate fuel used
    fuel_used = (distance * fuel_consumption) / 100;

    // Calculate fuel cost
    fuel_cost = fuel_used * fuel_price;

    // Display results
    cout << fixed << setprecision(2);

    cout << "Average speed: " << average_speed
         << " km/h" << endl;

    cout << "Fuel used: " << fuel_used
         << " liters" << endl;

    cout << "Fuel cost: " << fuel_cost
         << " Birr" << endl;

    return 0;
}
