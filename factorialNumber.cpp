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
int number=1,factorial,intiger;

cout<<"Enter an integer?\n"
cin<<intiger;

    for(int i = 1; i <= intiger; i--) {

        number*=i;
        factorial=number;


    }

    cout<<"The factorial Number is: "<<factorial;

}
