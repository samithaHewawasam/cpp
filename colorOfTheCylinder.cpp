/*
  *Project:15;
  *Author:Samitha Hewawasam;
  *Date:2015-06-05;
  *Tool:atom text editor;
  *Compiler:g++;
  *OS:ubuntu 14.04;
  *Extra Tools: astyle prity print
*/

#include <iostream>
#include <string>


int main() {

    //lets get a char for user input charachter
    string color;

    //Ask from user to enter it
    cout<<"Please enter your first letter of color either UPERCASE || lowercase  ?\n";
    cin>>color;

    if(color == "O")
        cout<<"The contents of the cylinder is ammonia";
    else if(color == "B")
        cout<<"The contents of the cylinder is carbon monoxide";
    else if(color == "Y")
        cout<<"The contents of the cylinder is hydrogen";
    else if(color == "G")
        cout<<"The contents of the cylinder is oxygen";


}
