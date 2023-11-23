#include <iostream>


using namespace std;

class Packet{
    private:
        string type;
        int source;
        int dest;
        int size;
    public:
        void    degerVer(string t,int s, int d, int sz){

            type = t;
            source = s;
            dest = d;
            size =sz;

        }

        friend class Node;

};

class Node{

    private:
        int id;

    public:
        void setValue(int i){
            id = i;
        }
        void sendPacket(Packet);

};

void Node::sendPacket(Packet pt){
    cout<<pt.type<< " turunda paket "<<pt.source<<" kaynağindan "<<endl;
    cout<<pt.dest<<" hedefine gönderildi "<<endl;
}

int main(){
    Packet p;
    p.degerVer("routeRequest ",192,193,512);

    Node n1,n2;

    n1.setValue(192);
    n2.setValue(193);

    n1.sendPacket(p);
}