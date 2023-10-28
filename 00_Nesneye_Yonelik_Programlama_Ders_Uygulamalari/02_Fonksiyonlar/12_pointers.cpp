#include <conio.h> 
#include <iostream>    
using namespace std;
void calculate( int x, int y , int *add, int *dif, int *mul)
{
	*add=x+y;
	*dif=x-y;
	*mul=x*y;	
}
int main(  )
{
	int a, b,addi,diff,mult;
	a = 3;  b = 10;
	calculate(a,b,&addi,&diff,&mult);
    cout<<"Total: "<<addi<<endl;
    cout<<"Difference : "<<diff<<endl;
    cout<<"Multiple: "<<mult<<endl;	
    
    getch();
    return 0; 
}
