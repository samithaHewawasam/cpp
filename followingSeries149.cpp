/*
  *Project:31;
  *Author:Samitha Hewawasam;
  *Date:2015-07-07;
  *Tool:atom text editor;
  *Compiler:g++;
  *OS:ubuntu 14.04;
  *Extra Tools: astyle prity print
*/

#include <iostream>

void main() {
    int number=1;
    for(int i=1; i<=10; i++) {

        for(int a=1; a<=i; a++) {
        number=i*i;
        }
         cout<<number<<endl;
    }

}
