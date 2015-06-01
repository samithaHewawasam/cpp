/*
  *Project:09;
  *Author:Samitha Hewawasam;
  *Date:2015-05-20;
  *Tool:atom text editor;
  *Compiler:g++;
  *OS:ubuntu 14.04;
  *Extra Tools: astyle prity print
*/

#include <iostream>


void main() {

    float mm, feet;

    cout<<"Enter mm ?\n";
    cin>>mm;

//Convert mm into feet via bellow equation
    feet = mm/(25*12);

//Output to the user
    cout<<"Feet: "<<feet;


}
