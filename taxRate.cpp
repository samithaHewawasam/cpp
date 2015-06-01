/*
  *Project:07;
  *Author:Samitha Hewawasam;
  *Date:2015-06-01;
  *Tool:atom text editor;
  *Compiler:g++;
  *OS:ubuntu 14.04;
  *Extra Tools: astyle prity print
*/


#include <iostream>


void main() {


    float price, tax, total;

    cout<<"Please enter the price of GOOD ?\n";
    cin>>price;

    cout<<"Please enter tax rate of GOOD ? \n";
    cin>>tax;

//Calculate the total amount that customer should pay for this good

    total = price + price * (tax/100);

//print total
    cout<<"The TOTAL is: "<<total<<endl;

//print tax
    cout<<"The TAX is: " << price * (tax/100)<<endl;

}
