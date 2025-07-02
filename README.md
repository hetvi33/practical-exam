# C++ Practical – Question 1

## Program Task

Create a class `Student` with private attributes `name` and `rollNumber`.  
Use a **parameterized constructor** to initialize the data.  
Create multiple objects using an **array** and display the details of each student.

## Features Implemented

- Class with private members
- Constructor with parameters
- Array of objects using pointers
- Display function to show student info

## Sample Input / Output

### Input:
How many students? 2
Enter name of student 1: Hetvi
Enter roll number of student 1: 101

Enter name of student 2: Vrund
Enter roll number of student 2: 102

### Output:
--- Student Details ---
Name: Hetvi
Roll Number: 101
Name: Vrund
Roll Number: 102

## Screenshot

Here is the output screenshot of the program:

![Student Output](https://github.com/hetvi33/practical-exam/blob/master/que_1.png)

# Question 2

## Program Task

Define a class `Car` with private members:  
model  
year
speed

Use public functions to set and get the values of these members.  
Demonstrate encapsulation by accessing the private data only through these public methods.

## Features Implemented

- Private data members
- Public setter and getter functions
- Object created and data handled using encapsulatio

## Sample Output

Car Details:
Model: Toyota
Year: 2020
Speed: 120.5 km/h

## Screenshot

Here is the output screenshot of the program:

![Student Output](https://github.com/hetvi33/practical-exam/blob/master/que_2.png)


# Question 3

## Program Task

Create a base class `Device` with private attributes:  
- brand 
- powerConsumption 

Add public `set` and `get` methods for both.  
Create two derived classes:  
- Laptop
- Smartphone 

Both classes use the data from the base class and add their own display function.

## Features Implemented

- Inheritance (base and derived class)
- Getter and setter methods
- Separate display function in child classes

---

## Sample Output

--- Laptop Details ---
Brand: Dell
Power: 65 W

--- Smartphone Details ---
Brand: Samsung
Power: 15 W

## Screenshot

Here is the output screenshot of the program:

![Student Output](https://github.com/hetvi33/practical-exam/blob/master/que_3.png)


# Question 4

## Program Task

Extend the `Device` class to add a virtual function calculateDiscount().  
Override this function in child classes:
- Laptop: 10% discount
- Smartphone: 5% discount

Demonstrate polymorphism using an array of base class pointers (Device).

## Features Implemented

- Virtual function in base class
- Function overriding in child classes
- Use of polymorphism with base class pointer

## Sample Output

--- Discounts ---
Laptop Price: 50000, Discount: 5000
Smartphone Price: 30000, Discount: 1500

## Screenshot

Here is the output screenshot of the program:

![Student Output](https://github.com/hetvi33/practical-exam/blob/master/que_4.png)


# Question 5

## Program Task

Create a class MathOperations with a method divide() to divide two numbers.  
Use exception handling to check:
- Division by zero
- Negative numbers

Test the function using different inputs.

## Features Implemented

- Class with a method
- `try` and `catch` blocks used
- Custom error messages for invalid input
- Multiple test cases

## Sample Output

Result of division: 5
Error: Division by zero is not allowed.
Error: Negative numbers are not allowed.

## Screenshot

Here is the output screenshot of the program:

![Student Output](https://github.com/hetvi33/practical-exam/blob/master/que_5.png)


# Question 6

## Program Task

Create a class `Employee` with members:  
- name  
- age

Overload the `-` operator to find the age difference between two employees.

## Features Implemented

- Constructor to initialize employee data
- Operator overloading for `-`
- Handles negative difference by converting to positive
- Display function to show details

## Sample Output

Name: Hetvi, Age: 25
Name: Aryan, Age: 20
Age difference: 5 years

## Screenshot

Here is the output screenshot of the program:

![Student Output](https://github.com/hetvi33/practical-exam/blob/master/que_6.png)


# Question 7

## Program Task

Create an abstract class `Animal` with two pure virtual functions:
- makeSound()
- move()

Create two derived classes:
- Lion
- Fish

Demonstrate runtime polymorphism using an array of `Animal*`.

## Features Implemented

- Abstract base class
- Pure virtual functions
- Derived classes override the functions
- Base class pointer array to show polymorphism

## Sample Output

--- Animal Sounds and Movements ---
Lion says: Roar!
Lion runs on land.
Fish says: Blub!
Fish swims in water.

## Screenshot

Here is the output screenshot of the program:

![Student Output](https://github.com/hetvi33/practical-exam/blob/master/que_7.png)


## Name: Hetvi Patel
