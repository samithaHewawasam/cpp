/*
  *Project:10;
  *Author:Samitha Hewawasam;
  *Date:2015-06-01;
  *Tool:atom text editor;
  *Compiler:g++;
  *OS:ubuntu 14.04;
  *Extra Tools: astyle prity print
*/

#include <iostream>


void main(){

  //Lets get two integers
  int a, b;

  //Ask from uers to enter two varibles respectively
  cout<<"Enter 1st varible ? \n";
  cin>>a;

  cout<<"Enter 2nd varible ? \n";
  cin>>b;

  //Assume that a is smaller than b

  if(a < b){

    // So when a is smaller than b,  a < b condition return true so this block will execute
    //lets output a

    cout<<"Smallest number is: "<<a;


  }else{

    // So when b is smaller than a,  a < b condition return false so this block will execute
    //lets output b

    cout<<"Smallest number is: "<<b;

  }

}
