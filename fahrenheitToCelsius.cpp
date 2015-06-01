/*
  *Project:06;
  *Author:Samitha Hewawasam;
  *Date:2015-06-01;
  *Tool:atom text editor;
  *Compiler:g++;
  *OS:ubuntu 14.04;
  *Extra Tools: astyle prity print
*/

#include <iostream>

// Convert temperature from Fahrenheit degrees to Celsius degrees

void main(){

  // We get float variables because temperature may contains fractional part
  float F,C;

  // Ask from users to enter Fahrenheit (F)
  cout<<"Enter Fahrenheit temperature ? \n";
  cin>>F;

  //Convert Fahrenheit into Celsius via bellow equation
  C = (F-32)*5/9;

  // Now print output
  cout<<"Celsius : "<<C;

}
