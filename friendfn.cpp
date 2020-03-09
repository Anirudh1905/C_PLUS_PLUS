#include <iostream>

using namespace std;

class A;
class B
{
    int b;
public:
    getval(int x)
    {
        b=x;
    }
    putval()
    {
        cout<<"\nVALUE OF B: "<<b;
    }
    friend void add (A,B);
};
class A
{
    int a;
public:
    getval(int x)
    {
        a=x;
    }
    putval()
    {
        cout<<"\nVALUE OF A: "<<a;
    }
    friend void add (A,B);
};
void add(A t1,B t2)
{
    cout<<"\nADDITION IS: "<<(t1.a+t2.b);
}
int main()
{
    A a;
    B b;
    a.getval(100);
    b.getval(200);
    a.putval();
    b.putval();
    add(a,b);
    return 0;
}
