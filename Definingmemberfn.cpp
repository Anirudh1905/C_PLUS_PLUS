
#include <iostream>
using namespace std;
class Test
{
    int roll;
    float per;
public:
    getdata(int x,float y);
    putdata()
    {
        cout<<"roll= "<<roll;
        cout<<"\nper= "<<per;
    }
};
Test::getdata(int x,float y)
{
    roll=x;
    per=y;
}
int main()
{
    Test t;
    t.getdata(101,85.3);
    t.putdata();
    return 0;
}
