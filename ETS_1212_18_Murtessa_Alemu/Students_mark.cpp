#include <iostream> 
#include <iomanip>
using namespace std;

int main() {
    double assignment, midterm, finalExam, total;
    cout << "Enter assignment mark: ";
    cin >> assignment;

    cout << "Enter midterm mark: ";
    cin >> midterm;

    cout << "Enter final exam mark: ";
    cin >> finalExam;

    total = (assignment * 0.20) + 
            (midterm * 0.30) + 
    (finalExam * 0.50);

    cout << fixed << setprecision(1);
    
    cout << "Total: " << total << endl;

    cout << (total >= 50 ? "Pass" : "Fail") << endl;
    
    return 0;

}
