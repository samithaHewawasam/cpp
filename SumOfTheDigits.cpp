/*
  *Project:36;
  *Author:Samitha Hewawasam;
  *Date:2015-07-10;
  *Tool:atom text editor;
  *Compiler:g++;
  *OS:ubuntu 14.04;
  *Extra Tools: astyle prity print
*/

#include <iostream>

void main() {

    int number,temp,mul=1,count=0,total=0;

    cout<<"Enter a number?\n";
    cin>>number;
    temp=number; // Let's assign number to a temp variable
    while(number) { // While number become 0 looping...

        number /=10; // Number is being dividing by 10 to find the number variable digits length
        count++; // Use count varible to counts digits length

    }

    while(count) {  // While count variable becomes 0 looping

        total+=(temp/mul)%10; // The logic. temp/mul is always return two digits and after divide it by 10 it will return appropiate decimal weight. They append value to total

        mul*=10; // Using mul variable to get decimal weight.

        count--; // Count variable getting decrement by 1


    }

    cout<<"The total value is: "<<total;


}
