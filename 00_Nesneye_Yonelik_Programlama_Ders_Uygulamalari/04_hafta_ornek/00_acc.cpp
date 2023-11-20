#include <iostream>

#include <list>

using namespace std;

struct Agac{
    int kod;
    int mal;
};

struct Acc{
    list<Agac*>agaclistesi;
    list<Acc*>acclist;
};

Acc * acc0 =new Acc();
Acc * acc1=new Acc();
Acc * acc2=new Acc();

int al(Acc*acc){
    acc ->agaclistesi.pop_back();
    cout<<acc->agaclistesi.size()<<endl;//4//6
    return 0;

}

int main(){
    Agac *cam =new Agac;
    Agac *kavak =new Agac();
    
    cam -> kod =2;
    cam -> mal = 5;

    kavak ->kod = 9;
    kavak ->mal = 25;


    acc0->agaclistesi.push_back(cam);
    acc0->agaclistesi.push_back(kavak);
    acc0->agaclistesi.push_back(cam);
    acc0->agaclistesi.push_back(kavak);

    acc1->acclist.push_back(acc0);
    acc1->acclist.push_back(acc0);

    cout<<acc1->acclist.size()<<endl;//1

    cout<<(acc1->acclist.front())->agaclistesi.size()<<endl;

    acc2 = acc1 ->acclist.front();
    cout<<acc2->agaclistesi.size()<<endl;

    al(acc1->acclist.front());

    cout<<acc0->agaclistesi.size()<<endl;
    al(acc0);
    cout<<"son"<<endl; //7
}