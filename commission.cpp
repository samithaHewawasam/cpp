/*
  *Project:08;
  *Author:Samitha Hewawasam;
  *Date:2015-06-01;
  *Tool:atom text editor;
  *Compiler:g++;
  *OS:ubuntu 14.04;
  *Extra Tools: astyle prity print
*/
#include <iostream>

void main(){

  float amount, sales_comm, company_receives;

  //Ask Salesperson to enter amount
  cout<<"Enter the amount ?\n";
  cin>>amount;

  //calculate the Salesperson's commission
  sales_comm = amount* (8.00/100);

  //Output the Salesperson's commission
  cout<<"Salesperson's commission is: "<<sales_comm<<endl;

  //calculate the company receives amount
  company_receives = amount - sales_comm;

  //Output the company receives amount
  cout<<"Company receives amount is: "<<company_receives<<endl;


}
