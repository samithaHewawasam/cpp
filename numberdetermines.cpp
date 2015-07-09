/*
  *Project:24;
  *Author:Samitha Hewawasam;
  *Date:2015-07-07;
  *Tool:atom text editor;
  *Compiler:g++;
  *OS:ubuntu 14.04;
  *Extra Tools: astyle prity print
*/

#include <iostream>

void main() {

    int number,p=0,n=0,z=0;

    for(int i=0; i<5; i++) {
        cout<<"Enter a number?\n";
        cin>>number;

        if(number > 0) {
            p++;
        };
        if(number < 0) {
            n++;
        };
        if(number == 0) {
            z++;
        };

    }

    cout<<"Positive Numbers Count: "<<p<<endl;
    cout<<"Negative Numbers Count: "<<n<<endl;
    cout<<"Zero Numbers Count: "<<z<<endl;


}
