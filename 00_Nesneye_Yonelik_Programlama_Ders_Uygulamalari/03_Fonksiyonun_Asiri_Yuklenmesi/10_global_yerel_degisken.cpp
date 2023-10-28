#include <conio.h> 
#include <iostream>    
using namespace std;

#include <iostream>

int k = 10;   //global k



int main()
{
     int k;       //yerel k
     for (k = 0; k < 5; ++k) 
       { 
           cout<< " yerel degisken   " << k ; 
           cout<< " Global degisken  " << ::k <<endl;   
        }
   
     ::k++;
     cout<<endl;
     cout<< " Donguden sonra \n " ;
     cout<< " yerel degisken   " << k ; 
     cout<< " Global degisken  " << ::k <<endl;   
     getch();
     return 0; 
}
