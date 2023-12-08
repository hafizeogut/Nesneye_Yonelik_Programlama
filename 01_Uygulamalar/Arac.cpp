#include <iostream>

using namespace std;

class Arac{
	private:
		string model;
	public:
		Arac(){
			model="null";
			
		}
		Arac(string model){
			this->model = model;
			
		}
		void aracGoster(){
			cout<<model<<endl;
		}
		void aracSur(){
			cout<<"arac suruluyor"<<endl;
		}
};

//:public Arac yukarýdaki public özellikler Oto classýna aktarýldý.
class Oto:public Arac{
	private:
		string model;string yakit;
	public:
		Oto(){
			model="null";
			yakit = "null";
			
		}
		Oto(string model,string yakit){
			this->model = model;
			this->yakit=yakit;
			
		}
		void aracGoster(){
			cout<<model<<" "<<yakit<<endl;
		}
		void aracSur(){
			cout<<"arac suruluyor"<<endl;
		}
	
};

int main(){
	Arac *a = new Arac("suv");
	a->aracGoster();
	a->aracSur();
	cout<<"---"<<endl;
	Oto *o=new Oto("sedan","dizel");
	o->aracGoster();
	o->aracSur();
}
