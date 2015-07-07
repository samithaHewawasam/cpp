/*
  *Project:21;
  *Author:Samitha Hewawasam;
  *Date:2015-07-06;
  *Tool:atom text editor;
  *Compiler:g++;
  *OS:ubuntu 14.04;
  *Extra Tools: astyle prity print
*/
#include <iostream>

void main() {

    float sales,bonus;

    cout<<"Enter sales amount?\n";
    cin>>sales;

    if(sales < 50000) {

        bonus = 0;

    } else if(sales >= 50000 && sales < 100000) {

        bonus = sales * 10/100;

    } else if(sales >= 100000) {

        bonus = sales * 20/100;

    }

    cout<<"Total Sales: "<<sales + bonus;

}
