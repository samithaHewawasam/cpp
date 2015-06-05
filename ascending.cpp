/*
  *Project:18;
  *Author:Samitha Hewawasam;
  *Date:2015-06-05;
  *Tool:atom text editor;
  *Compiler:g++;
  *OS:ubuntu 14.04;
  *Extra Tools: astyle prity print
*/

#include <iostream>


void main() {

//let's get 3 integer varibles to hold 3 numbers
    int a,b,c;

//ask from user to enter those
    cout<<"Enter your 1st number?\n";
    cin>>a;

    cout<<"Enter your 2nd number?\n";
    cin>>b;

    cout<<"Enter your 3rd number?\n";
    cin>>c;

    cout<<"\nAscending Order is bellow\n";

    if(a < b && a < c) {
        cout<<a<<endl;
        if(b < c) {
            cout<<b<<endl;
            cout<<c<<endl;
        }
    }
    else if(b < a && b < c) {
        cout<<b<<endl;
        if(a < c) {
            cout<<a<<endl;
            cout<<c<<endl;
        }
    }
    else if(c < a && c < b) {
        cout<<c<<endl;
        if(a < b) {
            cout<<a<<endl;
            cout<<b<<endl;
        }
    }

}
