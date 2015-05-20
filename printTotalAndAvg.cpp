/*
  *Project:05;
  *Author:Samitha Hewawasam;
  *Date:2015-05-20;
  *Tool:atom text editor;
  *Compiler:g++;
  *OS:ubuntu 14.04;
  *Extra Tools: astyle prity print
*/

#include <iostream>

void main() {

    /* Int varible type can store 4bytes and
    it's trypical rage between
    -2147483648 to 2147483647*/
    int x,y,z,total=0;

    /* float varible type can store 4bytes and
    it's trypical rage between
    +/- 3.4e +/- 38 (~7 digits)*/
    float avg=0;

    /* Enter 3 numbers */

    cout<<"Enter 1st number ?\n";
    cin>>x;

    cout<<"Enter 2nd number ?\n";
    cin>>y;

    cout<<"Enter 3rd number ?\n";
    cin>>z;

    /* Find the total of given 3 numbers */

    total = x + y +z;

    /* Find the average of total */

    avg = total/3;

    /* Print total and average */

    cout<<"Total: "<<total<<endl;

    cout<<"Average: "<<avg<<endl;




}
