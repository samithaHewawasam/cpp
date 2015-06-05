# Higher National Diploma in Information Technology

## Structured Programming

### Lab Sheet 03


Objective: Understand input and output in c++.

(1) Write a program that prints following song in console window.

```c++

    Twinkle, twinkle, little star,
     How I wonder what you are.
     Up above the world so high,
     Like a diamond in the sky.

```

* [Try it your Self](http://cpp.sh/6f7b)
* [source](https://github.com/samithaHewawasam/cpp/blob/master/twinkle.cpp)

   
(2) Write a program that prints block letter B in 7x6 grid as follows.

```c++

*****
*        *
*        *
*****
*        *
*        *
*****

```

(3) Write a program to print following table using a single “cout” statement.

```c++

Year		Income
____		______
2001		7580.00
2002		4785.50
2003		9871.00

```

(4) Write a program that print average and total of 3 numbers given by the user.

* [Try it your Self](http://cpp.sh/7z3j)
* [source](https://github.com/samithaHewawasam/cpp/blob/master/printTotalAndAvg.cpp)

```c++

Enter 1st number ?
20
Enter 2nd number ?
30
Enter 3rd number ?
10
Total: 60
Average: 20

```

(5) Write a program that prints the sum, difference, product, quotient and remainder of two integers that are input interactively.

* [Try it your Self](http://cpp.sh/7jph)
* [source](https://github.com/samithaHewawasam/cpp/blob/master/sdpqr.cpp)

```c++

Enter first number ? 6
Enter second number ? 3
The SUM is : 9
The DIFFERENCE is : 3
The PRODUCT is : 18
The QUOTIENT is : 2

```


(6) Write a program to convert temperature from Fahrenheit degrees to Celsius degrees.
Use the equation `C = 5/9*(F-32)`, Where C is Celsius and F is Fahrenheit.


* [Try it your Self](http://cpp.sh/36bq)
* [source](https://github.com/samithaHewawasam/cpp/blob/master/fahrenheitToCelsius.cpp)

```c++

Enter Fahrenheit temperature ?
70
Celsius : 21.1111

```

(7) Write a program to input amount that a customer purchases a certain good, and the tax rate (in percentage) of the good, and calculate the total amount that the customer should pay for this good, and print the sales tax rate and the total amount customer paid.
Hint: sales tax = amount of purchased x tax rate.

* [Try it your Self](http://cpp.sh/8nmcx)
* [source](https://github.com/samithaHewawasam/cpp/blob/master/taxRate.cpp)

```c++

Please enter the price of GOOD ?
250
Please enter tax rate of GOOD ?
12
The TOTAL is: 280
The TAX is: 30

```

(8) Salesperson at a certain company gets an 8% commission on their sales. Write a program to input the amount that a person sold and output both the salesperson’s commission and the amount the company receives after the salesperson’s commission has been deducted.

* [Try it your Self](http://cpp.sh/9x2t)
* [source](https://github.com/samithaHewawasam/cpp/blob/master/commission.cpp)

```c++

Enter the amount ?
2500
Salesperson commission is: 200
Company receives amount is: 2300

```

(9) Write a program to converts mm to feet

```c++
Hint: -
25mm = 1inch
12 inch=1feet
```

* [Try it your Self](http://cpp.sh/5sef)
* [source](https://github.com/samithaHewawasam/cpp/blob/master/mmToFeet.cpp)

```c++

Enter mm ?
200
Feet: 0.666667

```


______________________________________________________________________________________________________________


### Lab Sheet 04


( 10 ) Write a program to input 2 integers and find the smaller number.

* [Try it your Self](http://cpp.sh/374g)
* [source](https://github.com/samithaHewawasam/cpp/blob/master/findSmaller.cpp)

```c++

Enter 1st varible ?
20
Enter 2nd varible ?
19
Smallest number is: 19

```

( 11 ) Write c++ program to input an integer and tell whether the number is odd or even.

* [Try it your Self](http://cpp.sh/36so)
* [source](https://github.com/samithaHewawasam/cpp/blob/master/oddEven.cpp)

```c++

Enter an integer ?
3
3 is ODD

```

( 12 ) Write a program to create a simple calculator. The program should allow the user to enter two numbers and an option. The options are

1. +

2. –

3. *

4. /

* [Try it your Self](http://cpp.sh/7ngo)
* [source](https://github.com/samithaHewawasam/cpp/blob/master/calculator.cpp)

```c++

Enter an number ?
20
Enter an number ?
30
Enter an option?
/
0.666667

```

You should print an appropriate error message if the user enters invalid data.
Use nested if-else statements in your program.

( 13 ) Write a program to get the Number as a key board input and check whether this number is greater than 100. if number is greater than 100 print “Number is greater than 100” otherwise print “Number is less than or equal 100”.

* [Try it your Self](http://cpp.sh/3i7g)
* [source](https://github.com/samithaHewawasam/cpp/blob/master/gt100.cpp)

```c++
Enter the number ?
12
You entered number is less than 100
```

( 14 ) Write a program that reads the user’s age and then prints “you are a child” if the age <18 , “you are an adult” if 18<=age<<<65, and you are a senior citizen if age>=65.

* [Try it your Self](http://cpp.sh/8cps)
* [source](https://github.com/samithaHewawasam/cpp/blob/master/age.cpp)

```c++

Please enter your age?
26
you are an adult

```

( 15 ) Write a program that will help the driver of a truck that delivers and picks up compressed-gas cylinders to determine the contents of the cylinder based on the color of the cylinder. The program will print out a menu of colors to be entered. The user should then be instructed to enter the first letter of the color of the tank. Upon reading the letter corresponding to the color of the tank the program will print a message, which states the contents of the tank. The program should accept the letter in either upper or lower case. Cylinder colors associated contents are as follows.

```
Orange			ammonia
Brown			carbon monoxide
Yellow			hydrogen
Green			oxygen
```

* [Try it your Self](http://cpp.sh/2esk)
* [source](https://github.com/samithaHewawasam/cpp/blob/master/colorOfTheCylinder.cpp)

```c++

Please enter your first letter of color either UPERCASE || lowercase  ?
o
The contents of the cylinder is ammonia
Glad to be of service

```

The program should be written using simple if statements. These if statements can have compound conditions. (Conditions which have logical operators). Have the program print a message prior to ending such as “Glad to be of service”. If the user enters a color other than one of the four colors specified in the program, then print only the ending message.

Note:- use a char type variable for the input.

( 16 ) Write an appropriate control structure that will examine the value of a following point variable called temp and print one of the following messages, depending on the value assigned to temp.

(a) ICE, if the value of temp is less than 0.

(b) WATER, if the value of temp lies between 0 and 100,

(c) STEAM, if the value of temp exceeds 100.

* [Try it your Self](http://cpp.sh/4m4t)
* [source](https://github.com/samithaHewawasam/cpp/blob/master/temp.cpp)

```c++
Please enter value of temperature
-35
ICE

```

( 17 ) Write a program that reads a grade A, B, C, D or F and then print “Excellent”, “Good”, “Fair”, “Poor”, and “Fail”.

* [Try it your Self](http://cpp.sh/7f6uo)
* [source](https://github.com/samithaHewawasam/cpp/blob/master/findGrade.cpp)

```c++

Enter your Grade [ A, B, C, D, F ] ?
D
Poor

```

( 18 ) Write a program to sort the three integers a, b and c in ascending order. The number will be given from the keyboard

* [Try it your Self](http://cpp.sh/62gq)
* [source](https://github.com/samithaHewawasam/cpp/blob/master/findGrade.cpp)

```c++

Enter your 1st number?
423
Enter your 2nd number?
87
Enter your 3rd number?
1578

Ascending Order is bellow
87
423
1578

```

( 19 ) Create a program that test whether a given integer is zero or positive or negative.

* [Try it your Self](http://cpp.sh/64gjz)
* [source](https://github.com/samithaHewawasam/cpp/blob/master/zeroPositiveNegative)

```c++
Please enter an integer ?
-3
GIven number is Negative
```
