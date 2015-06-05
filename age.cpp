/*
  *Project:14;
  *Author:Samitha Hewawasam;
  *Date:2015-06-05;
  *Tool:atom text editor;
  *Compiler:g++;
  *OS:ubuntu 14.04;
  *Extra Tools: astyle prity print
*/

#include <iostream>

void main() {

    //lets get an integer varible for age
    int age;

    //Ask from user to enter it
    cout<<"Please enter your age?\n";
    cin>>age;

    //check user's age whether Adult , child or senior citizen
    if(age < 18)
        cout<<"you are a child";
    else if(18 <= age && age < 65)
        cout<<"you are an adult";
    else if(age >= 65)
        cout<<"you are a senior citizen";
    else
        cout<<"Invalid data provided";
}
