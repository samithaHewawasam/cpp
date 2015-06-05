/*
  *Project:17;
  *Author:Samitha Hewawasam;
  *Date:2015-06-05;
  *Tool:atom text editor;
  *Compiler:g++;
  *OS:ubuntu 14.04;
  *Extra Tools: astyle prity print
*/

#include <iostream>

void main(){

  //let's get char varible to hold user input
  char ch;

  //Ask from user to input
  cout<<"Enter your Grade [ A, B, C, D, F ] ?\n";
  cin>>ch;

  if(ch == "A" || ch == "a" )
    cout<<"Excellent";
  else if(ch == "B" || ch == "b")
    cout<<"Good";
  else if(ch == "C" || ch == "c" )
    cout<<"Fair";
  else if(ch == "D" || ch == "d")
    cout<<"Poor";
  else if(ch == "F" || ch == "f")
    cout<<"Fail";
  else
   cout<<"Invalid data";
}
