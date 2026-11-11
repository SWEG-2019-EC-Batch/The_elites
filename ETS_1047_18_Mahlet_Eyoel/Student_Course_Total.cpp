/* Input: Mid score
          Assignment score
          Final score

   Output: Total score
           Result(pass/fail)

   Process: 
         1. Decalre the variabes that hold the input and the output
         2. Define fixed values(MID_WEIGHT, ASSIGNMENT_WEIGHT, FINAL_WEIGHT and PASS_MARK) as constants
         3. Print prompt and read the input
         4. Decide if the total mark is greater than 50 or not
         5. Calculate the total score and result
         6. Display the output
          
         
 Design
 
1. Variable Declaration: double Assignment;
                         double Mid;
                         double Final;
                         double Total;
                         
2. Constant Definition: const double MID_WEIGHT = 0.30;
                        const double ASSIGNMENT_WEIGHT = 0.20;
                        const double FINAL_WEIGHT = 0.50;
                        const double PASS_MARK = 50.0; 
                        
3. Input: cout << "Enter your mid score(out of 100):" <<endl;#include <iostream>
          cin >> Mid;
          cout << "Enter your assignment score(out of 100):" <<endl;
          cin >> Assignment;
          cout << "Enter your final score(out of 100):" <<endl;
          cin >> Final;
          
4. Calculations: Total = (Assignment * 0.2) + (Mid * 0.3) + (Final * 0.5)
                 string result = (Total > PASS_MARK) ? "Pass" : "Fail" 
                 
5. Output: cout << fixed << setprecision(1);
           cout << "The total score is:" << Total <<endl;
           cout << " Result:" << result << endl; */

#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    const double MID_WEIGHT = 0.30;
    const double ASSIGNMENT_WEIGHT = 0.20;
    const double FINAL_WEIGHT = 0.50;
    const double PASS_MARK = 50.0;

    double Assignment;
    double Mid;
    double Final;
    double Total;

    
    cout << "Enter your mid score(out of 100):" <<endl;
    cin >> Mid;
    cout << "Enter your assignment score(out of 100):" <<endl;
    cin >> Assignment;
    cout << "Enter your final score(out of 100):" <<endl;
    cin >> Final;

    Total = (Assignment * 0.2) + (Mid * 0.3) + (Final * 0.5);
    string result = (Total > PASS_MARK) ? "Pass" : "Fail" ;

    cout << fixed << setprecision(1);
    cout << "The total score is:" << Total <<endl;
    cout << " Result:" << result << endl;
    

    return 0;

}
