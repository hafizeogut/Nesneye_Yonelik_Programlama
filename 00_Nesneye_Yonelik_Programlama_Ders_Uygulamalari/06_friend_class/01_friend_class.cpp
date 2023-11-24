#include <iostream>
using namespace std;

class Node; // İleri bildirim

class Packet {
    string type;
    int source;
    int dest;
    int size;

public:
    void degerVer(string t, int s, int d, int sz){
        type = t; source = s; dest = d; size = sz; 
    } 

    void getNodeIp(Node);
    friend class Node;
};

class Node {
    int ip;

public:
    void setValue(int i) {ip = i;}

    void sendPacket(Packet pt){
        cout << pt.type << " turunde paket " << pt.source << " kaynagindan" << endl;
        cout << pt.dest << " hedefine gonderilmistir" << endl;
    }

    friend class Packet;
};

void Packet::getNodeIp(Node n){
    cout << "Dugum ip si " << n.ip << endl;
}

int main(){
    Packet p;
    p.degerVer("routeRequest", 192, 193, 512);
    Node n1, n2;
    n1.setValue(192);
    n2.setValue(193);
    n1.sendPacket(p);
    p.getNodeIp(n1);

 
    return 0;
}
