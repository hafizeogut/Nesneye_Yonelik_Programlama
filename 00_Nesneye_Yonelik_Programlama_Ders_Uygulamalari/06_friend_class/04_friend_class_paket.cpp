#include <iostream>

using namespace std;


class Packet{
    private:
        string type;
        int source;
        int dest;
        int size;

    public:
        void setVeriable(string,int,int,int);
        void MaxPacket(Packet);
        void sendPacket(Packet);
};

void Packet::setVeriable(string t, int s,int d, int sz){

    type=t; source=s; dest=d, size=sz;
}

void Packet ::MaxPacket(Packet pt){
    if ((this->size) >pt.size){
        sendPacket(*this);
    }
    else{
        sendPacket(pt);
    }
}

void Packet::sendPacket(Packet ptt)
{
     cout<<ptt.type<<" sent from "<< ptt.source<< " to "<< ptt.dest<< endl;
}


int main(){
    Packet p1,p2;
    p1.setVeriable("routeRequest", 192,193,5102); 
    p2.setVeriable("routeRequest", 194,193,1024); 
    p1.MaxPacket(p2);
}