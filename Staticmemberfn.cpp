#include<iostream>
using namespace std;
class Test
{
    int n;
    static int c;
public:
    setn();
    dispn();
    static dispc();
};
Test::setn()
{
    n=++c;
}
Test::dispn()
{
    cout<<"\nOBJECT NO. "<<n;
}
Test::dispc()
{
    cout<<"\nCOUNTER "<<c;
}
int Test::c;
int main()
{
    Test t1,t2,t3;
    t1.setn();
    t2.setn();
    t3.setn();
    Test::dispc();
    t1.dispn();
    t2.dispn();
    t3.dispn();
    return 0;
}
