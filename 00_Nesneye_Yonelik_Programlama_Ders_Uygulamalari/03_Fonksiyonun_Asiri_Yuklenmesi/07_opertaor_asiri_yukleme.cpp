#include <iostream>
using namespace std;

struct Mat{
    int x;
    int y;
    void operator++(int)//posfix ++
    // postfix ++ (sonek artırma) operatörü 
    {
        x++;
        y++;
        cout<<x<<","<<y<<endl;

    }

}m1;

int main(){
    m1.x = 5;
    m1.y = 5;
    m1.x++;
    cout<<m1.x<<endl;
    m1++;
    return 0;
}