#include <iostream>

using namespace std;

class Dortgen {
  int x, y; 
 public:
  void DegerVer(int,int);
  int Alan (void);
};

void Dortgen::DegerVer(int a, int b) {
    x = a;
    y = b;
}

int Dortgen::Alan (void) {
    return x*y;
}

int main () 
{
    Dortgen *P1=new Dortgen;
    Dortgen *P2=new Dortgen;
    
    P1->DegerVer(3,4); 
    P2->DegerVer(5,8);  
    cout << "Alan1: " << P1->Alan()<<'\n';
    cout << "Alan2: " << P2->Alan()<<endl;
    delete P1, P2;

    return 0;
}
