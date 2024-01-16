#include<iostream>
#include<iomanip>
using namespace std;
int c=45;
int main(){
     // int a,b,c;
     // cout<<"Enter the value of a";
     // cin>> a;
     // cout<<"Enter the value of b";
     // cin>> b;
     // c= a+b;
     // cout<<"The sum is "<<c;
     // cout<<"\nThe global value of c is "<<::c;

     // float d= 34.4;
     // long double e=34.4;

     // cout<<"The value of d is "<<d <<endl<<"The value of e is "<<e<<endl; 


     // // Reference variables 
     // // Shubham --> monty --> Rohu --> some person has many names

     // float x= 445;
     // cout<<"Value of x is " << x <<endl;
     // float &y=x;
     // cout<<"\n\nValue of refernece variabel y is " << y <<endl;

     // // Typecasting

     // float z= 35.35;
     // cout<<"the value of int(Z) is " <<(int)z<<endl; 


     // Constants :--> the value is not changes after assigning the values      
     // Used
     // const int a =120;
     // // not valid to change
     // // a=23;
     // cout << "\nThe value of a is" << a; 

     // // Manipulator 
     // int a =3,b=4,c=4566;
     // cout<<"The value of a is  : "<< a <<endl;
     // cout<<"The value of b is  : "<< b <<endl;
     // cout<<"The value of c is  : "<< c <<endl;
     
     // cout<<endl<<"With Setw"<<endl;
     // cout<<"The value of a is  : "<< setw(4) << a <<endl;
     // cout<<"The value of b is  : "<< setw(4) << b <<endl;
     // cout<<"The value of c is  : "<< setw(4) << c <<endl;
     
     // Operators Precedences in c++
     int a=3, b= 4;
     int c= a*5+b;
     // precedensy --> the weight of the operators
     // multiplication and division have more priority than addition and subtraction
     
     // Associativity --> the order of operations 
     // 1--> left to Right
     // 2--> Right to Left
     cout<< c;
     return 0;
}