/*
  *Project:20;
  *Author:Samitha Hewawasam;
  *Date:2015-06-05;
  *Tool:atom text editor;
  *Compiler:g++;
  *OS:ubuntu 14.04;
  *Extra Tools: astyle prity print
*/

#include <iostream>

void main(){

//let's get a char varible, 2 varibles for float, an integer

int rate;
float salary, bonus;
char name;



//Ask from employee to enter

cout<<"Enter employee name:\n";
cin>>name;

cout<<"Enter employee salary:\n";
cin>>salary;

cout<<"Enter performance rating:\n";
cin>>rate;

if(rate == 1)
  bonus=10;
else if(rate == 2)
  bonus=5;
else if(rate == 3)
  bonus=2.5;
else if(rate == 4)
  bonus=0;
else
 cout<<"Invalid data";


cout<<"Employee name:"<< name;
cout<<"Employee salary:"<<salary;
cout<<"Employee rating:"<<rate;
cout<<"Employee bonus:"<<salary +  salary*bonus/100;
cout<<"Salary and bonus: "<<rate;

}
