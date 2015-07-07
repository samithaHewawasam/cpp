/*
  *Project:22;
  *Author:Samitha Hewawasam;
  *Date:2015-07-06;
  *Tool:atom text editor;
  *Compiler:g++;
  *OS:ubuntu 14.04;
  *Extra Tools: astyle prity print
*/

void main() {

    int amount;

    cout<<"Enter an amount?\n";
    cin>>amount;

    cout<<"1000-Notes:"<<amount/1000<<endl;
    cout<<"500 Notes:"<<(amount%1000)/500<<endl;
    cout<<"200 Notes:"<<(amount%500)/200<<endl;
    cout<<"100 Notes:"<<(amount%500)%200/100<<endl;
    cout<<"50 Notes:"<<(amount%100)/50<<endl;
    cout<<"20Notes:"<<(amount%50)/20<<endl;
    cout<<"10 Notes:"<<(amount%50)%20/10<<endl;
    cout<<"5Notes:"<<(amount%10)/5<<endl;
    cout<<"2Notes:"<<(amount%5)/2<<endl;
    cout<<"1Notes:"<<(amount%5)%2<<endl;

}
