/*
(a) Inputs:
    - Assignment mark.
    - Midterm exam mark.
    - Final exam mark.

    Outputs:
    - Weighted total mark (one decimal place).
    - Pass or Fail result.

(b) Process:
    1. Start the program.
    2. Declare variables to store the assignment, midterm,
       final exam marks, and total mark using double.
    3. Ask the user to enter the three marks.
    4. Calculate the weighted total using 20% for the
       assignment, 30% for the midterm, and 50% for the final.
    5. Use the conditional operator to check whether the
       total mark is greater than or equal to 50.
       If true, display Pass; otherwise, display Fail.
    6. Display the total mark to one decimal place and
       the Pass or Fail result.
    7. End the program.
*/


# include <iostream>
# include <iomanip>
using namespace std;

int main() {
    double assignment_mark;
    double mid_mark;
    double final_mark;
    double total_mark;

   cout <<"enter assignment_mark :";
   cin>>assignment_mark;
   cout << "enter mid_mark :";

   cin >>mid_mark;
   cout<<"enter final_mark :";
   cin >>final_mark;

   total_mark=(assignment_mark*0.2)+(mid_mark*0.3)+(final_mark*0.5);

cout<<fixed<<setprecision(1);
   cout<<"total_mark :"<<total_mark<<endl;
   cout<<(total_mark>=50 ?"pass":"fail");

   return 0;
}


