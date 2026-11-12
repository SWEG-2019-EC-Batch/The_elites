/*
     Input
1. Assignment: The student assignment mark out of 100.
2. Midterm: The student midterm examination mark out of 100.
3. Final exam: The student final examination mark out of 100.
     Process
1. Start the program.
2. Declare double variables assignment, midterm, finalExam, and total.
3. Declare a string variable result to store Pass or Fail.
4. Read the student's assignment mark.
5. Read the student's midterm mark.
6. Read the student's final examination mark.
7. Calculate the course total by multiplying the assignment mark by 20%, the midterm mark by 30%, and the final examination mark by 50%, then adding the three results.
8. Use the conditional operator to check whether the course total is greater than or equal to 50.
9. If the condition is true, assign "Pass" to the result variable.
10. Otherwise, assign "Fail" to the result variable.
11. Set the output to display one decimal place using fixed and setprecision(1).
12. Display the course total and the result (Pass or Fail).
13. End the program.
   Output
The program displays:
1. Total: The student's weighted course total, displayed to one decimal place.
2. Result: Pass if the total is 50 or above; otherwise, Fail.*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double assignment, midterm, finalExam, total;
    string result;
    cout << "Enter assignment mark: ";
    cin >> assignment;
    cout << "Enter midterm mark: ";
    cin >> midterm;
    cout << "Enter final exam mark: ";
    cin >> finalExam;
    total = assignment * 0.20 + midterm * 0.30 + finalExam * 0.50;
    result = (total >= 50) ? "Pass" : "Fail";
    cout << fixed << setprecision(1);
    cout << "Total = " << total << endl;
    cout << "Result = " << result << endl;

    return 0;
}



