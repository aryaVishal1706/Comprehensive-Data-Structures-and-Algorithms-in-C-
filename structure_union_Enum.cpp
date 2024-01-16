#include<iostream>
using namespace std;

// Structure --> the different different datatype can be merged into one 

// Basic Syntax
// struct employee{
//      // data
//      int eid;
//      char favchar;
//      float  salary;
// };

// This structure can be declare using e vishal
typedef struct employee{
     // data ---> TOtal Memeory allocation is 9 bytes
     // sum of all bytes is allocated to the money
     int eid;            // 4 Bytes
     char favchar;       //1 Bytes
     float  salary;      //4 Bytes
}e;

// Uninon --> the one datatype  from many datatypes is used in union 
union money{
     // data ---> TOtal Memeory allocation is 4 bytes 
     // Maximum memory is allocated to the money in union
     // Better memory management
     int rice ;          // 4 bytes
     char car;           //1  Bytes
     float pound ;       // 4 Bytes
};

int main(){

     // struct employee harry;
     // e harry;
     // harry.eid =1;
     // harry.favchar ='C';
     // harry.salary =1224344;

     // cout<< "The value of employee ID" << harry.eid  << endl;
     // cout<< "The value of employee favorite character " << harry.favchar  << endl;
     // cout<< "The value of employee salary" << harry.salary  << endl;

     enum Meal{breakfast, lunch , dinner};

     Meal m1 = lunch;
     cout<< "The Value of enum variable " << m1   << endl;
     cout<<(m1 == 1)<<endl;
     return 0;
}