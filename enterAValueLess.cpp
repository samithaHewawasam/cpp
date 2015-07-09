/*
  *Project:30;
  *Author:Samitha Hewawasam;
  *Date:2015-07-07;
  *Tool:atom text editor;
  *Compiler:g++;
  *OS:ubuntu 14.04;
  *Extra Tools: astyle prity print
*/

#include <iostream>

using namespace std;
int main() {
    int number,count=0;
    for(int i=1; i<=10; i++) {

        cout<<"Enter a number\n";
        cin>>number;

        count++;

        if(number < 1) {
            cout<<"You have entered "<<count<<"numbers"<<endl;
            break;

        }

    }

}
