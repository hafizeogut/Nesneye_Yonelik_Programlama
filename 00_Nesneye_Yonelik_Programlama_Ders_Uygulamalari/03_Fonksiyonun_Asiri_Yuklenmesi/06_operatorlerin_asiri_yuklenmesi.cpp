#include <iostream>

using namespace std;

struct Mat{
    int x;
    int y;
    void operator++()
    {
        x++;
        y++;
    }
}m1;

int main()
{
    m1.x = 5;
    m1.y = 5;
    ++m1;
    cout<<m1.x<<endl;
    ++m1;
    return 0;
}