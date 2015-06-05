/*
  *Project:19;
  *Author:Samitha Hewawasam;
  *Date:2015-06-05;
  *Tool:atom text editor;
  *Compiler:g++;
  *OS:ubuntu 14.04;
  *Extra Tools: astyle prity print
*/


#include <iostream>


void main(){


  //lst's get an integer varible
  int x;


  //Ask from user to enter it
  cout<<"Please enter an integer ?\n";
  cin>>x;

  if(x == 0)
    cout<<"GIven number is Zero";
  else if(x < 0)
    cout<<"GIven number is Negative";
  else
    cout<<"GIven number is Positive";


}
