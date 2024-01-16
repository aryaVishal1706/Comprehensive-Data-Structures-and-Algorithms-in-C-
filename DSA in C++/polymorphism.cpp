#include <iostream>
using namespace std;
class A
{
public:
     void fun()
     {
          cout << "I am a function wit no argument " << endl;
     }
     void fun(int a)
     {
          cout << "I am a function wit 1 argument " << endl;
     }
     void fun(int a, int b)
     {
          cout << "I am a function wit 2 argument " << endl;
     }
};

// Polymorphism
class complex
{
private:
     float real, img;

public:
     complex(float r = 0, float i = 0)
     {
          real = r;
          img = i;
     }
     // operator overloading
     complex operator+(complex const &obj)
     {
          complex res;
          res.img = img + obj.img;
          res.real = real + obj.real;
          return res;
     }

     void display()
     {
          cout << real << " + i" << img << endl;
     }
};

class base
{
public:
     virtual void print()
     {
          cout << "This is base class's print functions" << endl;
     }
     void display()
     {
          cout << "This is the base class's display functions" << endl;
     }
};

class derived : public base
{
public:
      void print()
     {
          cout << "This is derived class's print functions" << endl;
     }
     void display()
     {
          cout << "This is the derived class's display functions" << endl;
     }
};
int main()
{
     // A t;
     // t.fun();
     // t.fun(2);
     // t.fun(3,4);
     // complex c1(12, 7), c2(6, 7);
     // complex c3 = c1 + c2;
     // c3.display();

     // function overloading


     base *baseptr;
     derived d;
     baseptr = &d;
     baseptr -> print();
     baseptr -> display();
     return 0;
}