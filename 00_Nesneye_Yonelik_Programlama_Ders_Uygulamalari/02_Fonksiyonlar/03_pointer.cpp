#include <iostream>

using namespace std;
void degistir1(int x, int y){
    int gecici;
    gecici = x;
    x = y;
    y = gecici;
}

void degistir2(int *x, int *y){
    int gecici;
    gecici = *x;
    *x = *y;
    *y = gecici;
}
 
void degistir3( int &x, int &y )
{	int gecici;
	gecici = x;
	x = y;
	y = gecici;
}


int main(){
    int a,b;
    a = 12;
    b = 27;
    cout<<"degistir1 fonksiyonundan once a:"<<a<<" b: "<<b<<endl;
    degistir1(a,b);
    cout<<"degistir1 fonksiyonundan sonra a:"<<a<<" b: "<<b<<endl;

    cout<<"degistir2 fonksiyonundan once a:"<<a<<" b: "<<b<<endl;
    degistir2(&a,&b);
    cout<<"degistir2 fonksiyonundan sonra a:"<<a<<" b: "<<b<<endl;

    cout<<"degistir3 fonksiyonundan once a:"<<a<<" b: "<<b<<endl;
    degistir3(a,b);
    cout<<"degistir3 fonksiyonundan sonra a:"<<a<<" b: "<<b<<endl;

}