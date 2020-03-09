#include <iostream>

using namespace std;
class test
{
    int a,b;
public:
    getval(int x,int y)
    {
        a=x;b=y;
    }
    friend test sum(test,test);
    dispval(test);
};
test sum(test t1,test t2)
{
    test t;
    t.a=t1.a+t2.a;
    t.b=t1.b+t2.b;
    return t;
}
test::dispval(test t)
{
    cout<<"\nVALUE OF A: "<<t.a;
    cout<<"\nVALUE OF B: "<<t.b;
}
int main()
{
    test A,B,C;
    A.getval(10,20);
    B.getval(30,40);
    C=sum(A,B);
    A.dispval(A);
    B.dispval(B);
    C.dispval(C);
    return 0;
}
