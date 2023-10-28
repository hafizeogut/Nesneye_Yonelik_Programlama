
#include <stdlib.h> 
#include <time.h>
#include <iostream>
using namespace std;
   
int main() {
    srand(time(0));	
    int k;
    for (k = 0; k < 10; ++k) {
	    cout<< rand()%10+1<<endl;
    } 
return 0; 
}
