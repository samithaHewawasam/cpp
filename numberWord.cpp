/*
  *Project:23;
  *Author:Samitha Hewawasam;
  *Date:2015-07-07;
  *Tool:atom text editor;
  *Compiler:g++;
  *OS:ubuntu 14.04;
  *Extra Tools: astyle prity print
*/

#include <iostream>

void main(){

int number,h,t,r;
const char* numbers[10] = {"Zero","One","Two","Three","Four","Five","Six","Seven","eight","nine"};

    cout<<"Enter a number?\n";
    cin>>number;

    h=number/100;
    t=(number%100)/10;
    r=number%10;

    if(h){
       cout<<numbers[h]<<" ";
    }
    if(t){
       cout<<numbers[t]<<" ";
    }
    if(r){
       cout<<numbers[r];
    }

}
