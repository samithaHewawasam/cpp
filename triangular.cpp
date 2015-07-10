/*
  *Project:34;
  *Author:Samitha Hewawasam;
  *Date:2015-07-10;
  *Tool:atom text editor;
  *Compiler:g++;
  *OS:ubuntu 14.04;
  *Extra Tools: astyle prity print
*/

#include <iostream>

int triangularNumber;
void main() {

    cout<<"Number\tTriangular"<<endl;
    for(int i=1; i<=10; i++) {

        triangularNumber = i*(i+1)/2;
        cout<<i<<"\t"<<triangularNumber<<endl;

    }

}
