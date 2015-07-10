/*
  *Project:37;
  *Author:Samitha Hewawasam;
  *Date:2015-07-10;
  *Tool:atom text editor;
  *Compiler:g++;
  *OS:ubuntu 14.04;
  *Extra Tools: astyle prity print
*/

#include <iostream>

void main() {
    int intiger;

    cout<<"Enter an integer?\n";
    cin>>intiger;

    for(int i = 1; i <= intiger; i++) {

        for(int x=intiger; x >= i; x--) {

            cout<<"*";

        }
        cout<<endl;

    }


}
