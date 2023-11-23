#include <iostream>

using namespace std;

class Packet{
      private:
              string type;
              int source;
              int dest;
              int size;
      public:
             void degerVer(string t, int s, int d, int sz){                   
                                  
                  type=t; source=s; dest=d; size=sz; 
               }
             
             Packet maxSize(Packet); //
             void sendPacket(Packet);
                     
};


Packet Packet::maxSize(Packet pt2){ //
    if (this->size >= pt2.size)
            return *this; //
    else 
        return pt2; //
}
void Packet::sendPacket(Packet p){
   cout<<p.type<<" paketi " << p.source<< " kaynaktan ";
   cout<< p.dest<<" hedefine gonderildi "<<endl;    
 }

int main(){
        Packet p1,p2;
        p1.degerVer("routeRequest", 192, 193, 512);
        p2.degerVer("Data", 194, 195, 1024);

        p1.sendPacket(p1.maxSize(p2));

}