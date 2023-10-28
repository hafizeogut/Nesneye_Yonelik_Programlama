#include <iostream>
using namespace std;

void hesapla( int x, int y , int *top, int *fark, int *carp)
{
	*top=x+y;
	*fark=x-y;
	*carp=x*y;
	
}

int main(  )
{
	int a, b,top1,fark1,carp1;
	a = 3;
	b = 10;
	hesapla(a,b,&top1,&fark1,&carp1);

       cout<< "toplam : "<<top1<<endl;
       cout<<" fark : "<<fark1<<endl;
       cout<<" carp : "<<carp1<<endl;	
    return 0; 
}
