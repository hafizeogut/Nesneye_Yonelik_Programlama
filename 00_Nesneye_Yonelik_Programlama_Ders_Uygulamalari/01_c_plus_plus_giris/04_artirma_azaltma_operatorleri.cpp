#include<iostream>

using namespace std;

int main(){
    int x = 4;
    int y = 8;

    cout <<"x = "<<x<<endl;
    cout <<"y = "<<y<<endl;
    //cout<<"++x "<<++x<<endl;
    //cout<<"--y "<<--y<<endl;
    cout<<"++x * --y= "<<++x*--y<<endl<<endl;
    cout <<"x = "<<x<<endl;
    cout <<"y = "<<y<<endl<<endl;

    x = 4;
    y = 8;
    

    cout <<"x = "<<x<<endl;
    cout <<"y = "<<y<<endl;
    //cout<<"x++ "<<x++<<endl;
    //cout<<"y-- "<<y--<<endl;
    cout<<"x++ * y--= "<<x++*y--<<endl<<endl;
    cout <<"x = "<<x<<endl;
    cout <<"y = "<<y<<endl;
    return 0;
}