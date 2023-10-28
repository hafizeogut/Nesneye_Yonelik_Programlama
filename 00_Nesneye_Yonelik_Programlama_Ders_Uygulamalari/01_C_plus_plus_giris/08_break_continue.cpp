#include <iostream>

using namespace std;

int main(){
    for(int x = 1; x <=20; x++)
    {
        if(x == 6){
            break;
        }
        cout<<x<<endl;
    }
    
    for(int a=0; a <= 9; a++)
    {
        if(a ==3) continue;
        cout<<a<< endl;
    }
    return 0;
}