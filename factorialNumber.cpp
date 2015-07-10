/*
  *Project:35;
  *Author:Samitha Hewawasam;
  *Date:2015-07-10;
  *Tool:atom text editor;
  *Compiler:g++;
  *OS:ubuntu 14.04;
  *Extra Tools: astyle prity print
*/

#include <iostream>

void main() {
int intiger,factorial=1;

cout<<"Enter an integer?\n";
cin>>intiger;

    for(int i = intiger; i > 0; i--) {

        factorial*=i;

    }

    cout<<"Factorial Number: "<<factorial;


}
