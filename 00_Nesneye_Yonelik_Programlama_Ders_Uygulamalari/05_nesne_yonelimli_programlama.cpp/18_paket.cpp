#include<iostream>


using namespace std;
class Packet{
    private:
        string type;
        int source;
        int dest;
        int size;

    public:
        void setVariable(string, int, int,int);
        string getType(){return type;}
        int getSourceId(){return source;}
        int getDestId(){ return dest;} 
        int getSize() { return size;} 

        void getMaxPacket(Packet);
        void sendPacket(Packet);
};

void Packet::setVariable(string t, int s , int d, int  sz) 
{
  type=t; source=s; dest=d, size=sz;
} 

void Packet ::getMaxPacket(Packet pt){
    if (this->getSize()>pt.getSize()){
        sendPacket(*this);
    }
    else{
        sendPacket(pt);
    }

}

void Packet::sendPacket(Packet pt){
    cout<<pt.type<<"sent form "<<pt.source<<"to "<<pt.dest<<endl;
}

int main(){
    Packet p1,p2;

    p1.setVariable("routeRequest", 192,193,512); 
    p2.setVariable("routeRequest", 194,193,1024);

    p1.getMaxPacket(p2);


}

