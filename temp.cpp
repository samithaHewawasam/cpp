/*
  *Project:15;
  *Author:Samitha Hewawasam;
  *Date:2015-06-05;
  *Tool:atom text editor;
  *Compiler:g++;
  *OS:ubuntu 14.04;
  *Extra Tools: astyle prity print
*/

#include <iostream>

void main(){

  //let's get a float varible to hold temperature
  float temp;

  //Ask from user to enter temperature
  cout<<"Please enter value of temperature\n";
  cin>>temp;

  if(temp < 0)
    cout<<"ICE";
  else if(temp > 0 && temp < 100)
    cout<<"WATER";
  else if(temp > 100)
    cout<<"STEAM";
  else
    cout<<"Invalid Data Provided";

}
