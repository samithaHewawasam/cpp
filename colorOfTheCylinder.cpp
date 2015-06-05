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

void main() {

    //lets get a char for user input charachter
    char color;

    //Ask from user to enter it
    cout<<"Please enter your first letter of color either UPERCASE || lowercase  ?\n";
    cin>>color;

    if(color == "O" || color == "o")
        cout<<"The contents of the cylinder is ammonia";
    else if(color == "B" || color == "b")
        cout<<"The contents of the cylinder is carbon monoxide";
    else if(color == "Y" || color == "y")
        cout<<"The contents of the cylinder is hydrogen";
    else if(color == "G" || color == "g")
        cout<<"The contents of the cylinder is oxygen";
    else
      cout<<"Glad to be of service";

    //Let's print ending message
    cout<<"\nGlad to be of service";


}
