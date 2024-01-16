#include<iostream>
using namespace std;
// pointer in function
void swap(int *a, int *b)
{
    int temp = *a ;
    *a =*b;
    *b = temp; 
}
int main(){
     // what is a pointers?
     /*  A pointer in C++ is a variable that stores the memory address of another variable. It points to an object, which can be  */

     // int a=3;
     // int* b =&a;
     // & ---> address of operators
     // * ---> Dereferences Operators

     // cout<< b;
     // output --> 0x61fe48 (address)

     // cout<< "The Address of a is "<< &a <<endl;
     // cout<<"The Address of a is" <<b<<endl;

     // // * --> (value at) Dereference operators
     // cout<<"The value of at address b is "<< *b << endl;

     // //pointers to pointers
     // int** c = &b;

     // cout<<"The Address of b is "<<&b<< endl;
     // cout<<"The Address of b is "<<c<< endl;
     // cout<<"The value at Address c is "<< *c<< endl;
     // cout<<"The value at address value_at(value_at(c)) is "<<**c<< endl;


     // int arr[] = {10,20,30};

     // // cout<<*arr<<endl;  // first index values
     // int *ptr = arr;

     // for (int i = 0; i < 3; i++)
     // {
     //      cout<< *(arr+i)<<endl;
     // }
     
     // pssing vlaue to the function
     int a = 10,b=20;
     swap(&a,&b);

     cout<< a << " "<< b << endl;
     return 0;
}