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
* [source](https://github.com/samithaHewawasam/cpp/blob/master/zeroPositiveNegative.cpp)

```c++
Please enter an integer ?
-3
GIven number is Negative
```

______________________________________________________________________________________________________________


##Lab Sheet 05

( 20 ) You are to write a program that calculates the end-of-year bonus an employee receives. The bonus is based on the employee’s annual salary and their performance rating according to the following scale

```c++
Rating		Bonus
1		     10% of salary
2		     5% of salary
3		     2.5% of salary
4		     none
```

Sample screen layout:

```c++

Enter employee name:	Dingaling Bell
Enter employee salary:	50000
Enter performance rating:	1
```

(Your output should then be (using currency formatting):

```c++

Employee name:	Dingaling Bell
Employee salary:	$50,000.00
Employee rating:	1
Employee bonus:	$5,000.00
Salary and bonus:	$55,000.00

```
* [Try it your Self](http://cpp.sh/2n25)
* [source](https://github.com/samithaHewawasam/cpp/blob/master/rattings.cpp)


( 21 ) Prompt the user to enter the annual total of sales made by a salesperson.
Use a nested if else statement to determine the bonus according to the table below
If sales < 50000 no bonus
If sales are greater than or equal 50000 but less then 100000 bonus = 10% of sales
If sales are greater than or equal to 100000 then bonus = 20% of sales.
Display sales and bonus.


```c++

Enter sales amount?
70000
Total Sales: 77000

```

* [Try it your Self](http://cpp.sh/37ctd)
* [source](https://github.com/samithaHewawasam/cpp/blob/master/bonus.cpp)

( 22 ) Write  program given a 5 digit amount in rupees prints the number of   1000/=,500/=,200/=,100/=,50/=,20/=,10/=,5/=,2/=,1/= notes and coins needed
Eg:- Amount=2754.00
Your program should print as follows

```c++

1000-Notes-2
500 Notes-1
200 Notes-2
100 Notes-0
50 Notes-1
20Notes-0
10 Notes-0
5Notes-0
2Notes-2
1Notes-0

```
```
Hint:-
1000 Rupee notes=2754/1000=2
Remaining Amount =2754%1000=754
You need to use suitable variables.
```


```c++

Enter an amount?
2873
1000-Notes:2
500 Notes:1
200 Notes:1
100 Notes:1
50 Notes:1
20Notes:1
10 Notes:0
5Notes:0
2Notes:1
1Notes:1

```
* [Try it your Self](http://cpp.sh/2by6)
* [source](https://github.com/samithaHewawasam/cpp/blob/master/digit.cpp)


( 23 ) Write a program that takes an integer keyed in from the terminal and extracts and
displays each digit of the integer in English. So, if the user types in 932, the program
should display :
nine three two
Remember to display “zero” if the user types in just a 0.

```c++
Enter a number?
453
Four Five Three

```
* [Try it your Self](http://cpp.sh/4jfh)
* [source](https://github.com/samithaHewawasam/cpp/blob/master/numberWord.cpp)

##Lab Sheet 06


( 24 ) Write a program that inputs five numbers and determines and prints the number of negative numbers input, the number of positive numbers input and the number of zeros input.

```c++
Enter a number?
5
Enter a number?
-2
Enter a number?
0
Enter a number?
6
Enter a number?
-2
Positive Numbers Count: 2
Negative Numbers Count: 2
Zero Numbers Count: 1

```

* [Try it your Self](http://cpp.sh/3566z)
* [source](https://github.com/samithaHewawasam/cpp/blob/master/numberdetermines.cpp)

( 25 )  write an application that calculates the squares and cubes of the numbers from 0 to 10 and prints the resulting values in table format as follows:

```c++
number	square	cube
    0	    0	      0
    1	    1	      1
    2	    4	      8
    3	    9	      27
    4	    16	    64
    5	    25	    125
    6	    36	    216
    7	    49	    343
    8	    64	    512
    9	    81	    729
    10	  100	    1000

```

* [Try it your Self](http://cpp.sh/6yxi)
* [source](https://github.com/samithaHewawasam/cpp/blob/master/squaresAndCubes.cpp)

( 26 ) Write an application that keeps displaying in the command window the multiples of the integer 2, namely 2, 4, 8, 16, 32, 64, etc up to 10000.

```c++
2
4
8
16
32
64
128
256
512
1024
2048
4096
8192

```

* [Try it your Self](http://cpp.sh/5lzg)
* [source](https://github.com/samithaHewawasam/cpp/blob/master/multiples.cpp)

( 27 ) Write an application that reads three nonzero values entered by the and determines and prints if they could represent the sides of a triangle.

( 28 ) Write a program to print the first 7 positive integers and their factorials. (The factorial of 1 is 1, the factorial of 2 is 1 * 2 = 2, the factorial of 3 is 1 * 2 * 3 = 6, the factorial of 4 is 1 * 2 * 3 * 4 = 24, etc.)

```c++
1
2
6
24
120
720
5040

```

* [Try it your Self](http://cpp.sh/6wto)
* [source](https://github.com/samithaHewawasam/cpp/blob/master/factorials.cpp)


( 29 ) Write a program to find the average length of words in a sentence. Words are separated by a space. The sentence is terminated by a dot ( . )


( 30 ) Write a program to enter 10 numbers (maximum 10) but you should be able to stop if you enter a value less than 1. At the end you should be able to display whether you have entered 10 numbers or not.

```c++
Enter a number
2
Enter a number
6
Enter a number
7
Enter a number
5
Enter a number
1
Enter a number
0
You have entered 6 numbers
```

* [Try it your Self](http://cpp.sh/2qos)
* [source](https://github.com/samithaHewawasam/cpp/blob/master/enterAValueLess.cpp)

( 31 ) Write a C/C++ program to produce the following series.


```c++
1
4
9
16
25
36
49
64
81
100
```

* [Try it your Self](http://cpp.sh/6n4eg)
* [source](https://github.com/samithaHewawasam/cpp/blob/master/followingSeries149.cpp)

( 32 ) Write a program to generate following pattern. (Use nested loops)


```c++
*
**
***
****
*****
******

```

* [Try it your Self](http://cpp.sh/4puc)
* [source](https://github.com/samithaHewawasam/cpp/blob/master/starPatten.cpp)


##Lab Sheet 07

( 33 ) Write a program which will reverse the Digits of a Number.
First the program will prompt the user for an Integer Number. Then the program will display the given integer number in the reverse order. The output of the program should be similar to the following.

Enter an integer number:12345
54321

```c++
Enter a number?
987654321
123456789

```

* [Try it your Self](http://cpp.sh/8e3d)
* [source](https://github.com/samithaHewawasam/cpp/blob/master/reverseOrder.cpp)

( 34 ) A triangular number can also be generated by the formula for any integer value of n.

triangularNumber = n (n + 1) / 2

For example, the 10th triangular number, 55, can be generated by substituting 10 as the value for n in the preceding formula. Write a program that generates a table of triangular numbers using the preceding formula.

```c++
Number	Triangular
1	        1
2	        3
3	        6
4	        10
5	        15
6	        21
7	        28
8	        36
9	        45
10	       55

```

* [Try it your Self](http://cpp.sh/7fng)
* [source](https://github.com/samithaHewawasam/cpp/blob/master/triangular.cpp)

( 35 ) The factorial of an integer n, written n!, is the product of the consecutive integers 1 to n. For example, 5 factorial is calculated as :

5! = 5 x 4 x 3 x 2 x 1 = 120

Write a program to generate and print factorial for a user given integer.

```c++
Enter an integer?
5
Factorial Number: 120

```

* [Try it your Self](http://cpp.sh/9756)
* [source](https://github.com/samithaHewawasam/cpp/blob/master/factorialNumber.cpp)
