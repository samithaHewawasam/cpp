/*
  *Project:03;
  *Author:Samitha Hewawasam;
  *Date:2015-05-20;
  *Tool:atom text editor;
  *Compiler:g++;
  *OS:ubuntu 14.04;
  *Extra Tools: astyle prity print
*/

#include <iostream>

void main() {

    /*
    We get integer varibles as n1, n2, sum, difference, product, quotient
    */
    int n1, n2, sum, difference, product, quotient;

    //So now we need to ask from user to enter numbers respectively

    cout<<"Enter first number ?";
    cin>>n1;

    cout<<"Enter second number ?";
    cin>>n2;

    // Find the sum
    sum=n1+n2;

    // Now print output to the user
    cout<<"The SUM is : "<<sum<<endl;

    // Find the difference
    difference=n1-n2;

    // Now print output to the user
    cout<<"The DIFFERENCE is : "<<difference<<endl;

    // Find the difference
    product=n1*n2;

    // Now print output to the user
    cout<<"The PRODUCT is : "<<product<<endl;

    // Find the difference
    quotient=n1/n2;

    // Now print output to the user
    cout<<"The QUOTIENT is : "<<quotient<<endl;



}
