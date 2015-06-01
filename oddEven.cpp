/*
  *Project:11;
  *Author:Samitha Hewawasam;
  *Date:2015-06-01;
  *Tool:atom text editor;
  *Compiler:g++;
  *OS:ubuntu 14.04;
  *Extra Tools: astyle prity print
*/

#include <iostream>

void main(){

  //Lets get an integer barible
  int x, m;

  //Ask user to enter an integer
  cout<<"Enter an integer ?\n";
  cin>>x;

  //An integer to be odd it's modular should be 1 after devide it from 2

  //Lets find modular
  m=x%2;

  if(m == 1){

  cout<<x<<" is ODD";

  }else{

  cout<<x<<" is EVEN";

  }


}
