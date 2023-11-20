#include <iostream>

using namespace std;

class  Node{
    private:
        string type;
        int source;
        int dest;
     public:
        int size();              
        void setVariable(string, int, int);             
         string getType(); 
         int getSourceId();           
         int getDestId(); 
};   

int Node::size()
{ 
  return sizeof(int)*2+sizeof(string);
} 
        
void Node::setVariable(string t, int s , int d) 
{
  type=t; source=s; dest=d;
}  
         
string Node::getType() 
{
  return type;
}
         
int Node::getSourceId() 
{
  return source;
}  
         
int Node::getDestId()
{
  return dest;
}


int main ()
{
   Node n;
   n.setVariable("routeRequest", 125, 859);
   cout<<"size of node="<<n.size()<<endl;
   cout<<"type of node is "<<n.getType()<<endl;
   cout<<"Source Id of node is "<<n.getSourceId()<<endl;
   cout<<"Destination Id of node is "<<n.getDestId()<<endl;
  return 0;
}
