#include <iostream>

using namespace std;
int add(int, int);

int main()
{
    int x,y;            
        
    x=5;  y=10;

    cout << "Toplam = " <<add(x, y)<< endl;

    return 0; 
} 



int add(int a, int b)
{
	return a + b;
}
