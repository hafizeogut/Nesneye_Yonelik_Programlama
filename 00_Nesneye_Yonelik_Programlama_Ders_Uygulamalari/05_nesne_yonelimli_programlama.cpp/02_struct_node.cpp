#include <iostream>

using namespace std;

struct  Node{
        string type;
        int source;
        int dest;
        
        int size() {
            return      sizeof(int)*2+sizeof(string);
        }      
};   


int main ()
{
   Node n;
   n.type="routeRequest";
   n.source=192;
   n.dest=185;
   cout<<"type of node is "<<n.type<<endl;
   cout<<"size of node="<<n.size()<<endl;
  
    cout<<"ok"<<endl; 
    return 0;
}	 