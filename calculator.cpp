/*
  *Project:12;
  *Author:Samitha Hewawasam;
  *Date:2015-06-01;
  *Tool:atom text editor;
  *Compiler:g++;
  *OS:ubuntu 14.04;
  *Extra Tools: astyle prity print
*/

#include <iostream>

void main() {

    //Lets get two float varibles
    float a, b;

    //Lets get an option as a char varible
    char op;

    //Ask from user to enter two numbers respectively
    cout<<"Enter an number ?\n";
    cin>>a;

    cout<<"Enter an number ?\n";
    cin>>b;

    cout<<"Enter an option?\n";
    cin>>op;

    //Let's go though the if else

    if(op == '+') {
        cout<<a+b;
    } else if(op == '+') {
        cout<<a-b;
    } else if(op == '*') {
        cout<<a*b;
    } else if(op == '/') {
        cout<<a/b;
    } else {
        cout<<"Invalid option";
    }

}
