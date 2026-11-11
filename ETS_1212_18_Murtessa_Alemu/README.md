# Programming Assignment — ETS_1212_18_Murtessa_Alemu

This folder contains the C++ solutions for the three exercises.

## Exercise 1: Student Result

### (a) Inputs and outputs
**Inputs**
- Assignment mark (out of 100)
- Midterm mark (out of 100)
- Final exam mark (out of 100)

**Outputs**
- Weighted course total, displayed to one decimal place
- `Pass` if the total is at least 50; otherwise `Fail`

### (b) Process
1. Read the assignment, midterm, and final exam marks.
2. Multiply the assignment mark by 20%.
3. Multiply the midterm mark by 30%.
4. Multiply the final exam mark by 50%.
5. Add the three weighted marks to calculate the course total.
6. Display the total to one decimal place.
7. Use the conditional operator to display `Pass` or `Fail`.

### (c) C++ program
See `student_result.cpp`.

**Test checks**
- 80, 60, 70 → 69.0 and Pass
- 40, 30, 45 → 39.5 and Fail

---

## Exercise 2: Electricity Bill

### (a) Inputs and outputs
**Input**
- Electricity units used in the month (whole number)

**Outputs**
- Energy charge in birr
- Fixed service charge of 10.00 birr
- Total bill in birr

### (b) Process
1. Read the number of electricity units used.
2. If the units are 50 or fewer, calculate the energy charge by multiplying the units by 1.50 birr.
3. Otherwise, calculate the first 50 units at 1.50 birr each and the remaining units at 2.00 birr each, using the conditional operator.
4. Add the fixed service charge of 10.00 birr to the energy charge.
5. Display the energy charge, service charge, and total bill to two decimal places.

### (c) C++ program
See `electricity_bill.cpp`.

**Test checks**
- 80 units → energy charge 135.00 birr; total 145.00 birr
- 30 units → energy charge 45.00 birr; total 55.00 birr

---

## Exercise 3: Trip Calculator

### (a) Inputs and outputs
**Inputs**
- Trip distance in kilometers
- Travel time in whole hours
- Travel time in whole minutes
- Fuel consumption in liters per 100 km
- Fuel price per liter in birr

**Outputs**
- Average speed in km/h
- Fuel used in liters
- Fuel cost in birr

### (b) Process
1. Read the trip distance.
2. Read the travel time in hours and minutes.
3. Read the fuel consumption rate and price per liter.
4. Convert the travel time to hours by adding the hours to the minutes divided by 60.0.
5. Calculate average speed by dividing distance by total time in hours.
6. Calculate fuel used by multiplying distance by the fuel consumption rate and dividing by 100.
7. Calculate fuel cost by multiplying fuel used by the price per liter.
8. Display all three results to two decimal places.

### (c) C++ program
See `trip_calculator.cpp`.

**Test check**
- 150 km, 2 hours 30 minutes, 8 L/100 km, 60 birr/L
- Average speed: 60.00 km/h
- Fuel used: 12.00 liters
- Fuel cost: 720.00 birr

---

## Chapter 2 concepts used
- Input/output: `cin`, `cout`
- Variables and a constant
- Arithmetic operators
- Conditional operator `?:` (in the student result and electricity bill programs)
- Type casting (`static_cast<double>`) in the trip calculator
- Formatting with `<iomanip>`, `fixed`, and `setprecision`

No `if` statements or loops are used.
