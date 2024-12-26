#include <iostream>
using namespace std ;

    class xyz
{
private:
    int a, b;

public:
    void gatedata()
    {
        cout << "\n Enter two number:" ;
        cin >> a >> b;
    }
    void putdata()
    {
        cout << "\n a=" << a << " b = " << b;
    }
};

int main()
{

    xyz aa[5];
    int i;
    for (i = 0; i < 5; i++)
    {
        aa[i].gatedata();
    }
    for (i = 0; i < 5; i++)
    {
        aa[i].putdata();
    }
    return 0;
}