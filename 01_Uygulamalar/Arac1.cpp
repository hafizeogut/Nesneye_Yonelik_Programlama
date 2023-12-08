#include <iostream>

using namespace std;

class Arac{

	protected:
		string model;
	public:
		Arac(){
			model="null";
		}
		Arac(string model){
			this->model = model; 
			
		}
		void aracGoster(){
			cout<<model<<" "<<endl;
		}
		void aracSur(){
			cout<<"arac suruluyor"<<endl;
		}
};

//:public Arac yukarýdaki public özellikler Oto classýna aktarýldý.
class Oto:public Arac{
	private:
		string yakit;
	protected:
		int yil;
	
	public:
		Oto(){
			model="null";
			yakit = "null";
			yil = 0;
			
		}
		Oto(string model,string yakit,int yil){
			this->model = model;
			this->yakit=yakit;
			this->yil=yil;
			
		}
		void otoDurdur(){
			cout<<"oto durduruldu"<<endl;
		}
		void aracGoster(){
			cout<<model<<" "<<yakit<<" "<<yil<<endl;
		}
	
};
class Servis{
	public:
		void servisCagir(){
			cout<<"servis cgirildi";
		}
	
};
class Eoto:public Oto,public Servis{
	private:
		int bataryaSeviyesi;
	public:
		Eoto(){
			
		}
		Eoto(string model,int yil,int bataryaSeviyesi){
			this->model=model;
			this->yil=yil;
			this->bataryaSeviyesi=bataryaSeviyesi;
		}
		
		void sarjEt(int sarjMik){
			this->bataryaSeviyesi=this->bataryaSeviyesi+sarjMik;
		}
		void aracGoster(){
			cout<<model<<" "<<yil<<" "<<bataryaSeviyesi<<endl;
		}
};


int main(){
	Arac *a = new Arac("suv");
	a->aracGoster();
	a->aracSur();
	cout<<"---"<<endl;
	
	
	Oto *o=new Oto("sedan","dizel",2024);
	o->aracGoster();
	o->aracSur();
	o->otoDurdur();
	
	
	Eoto *eo=new Eoto("ticari",2024,20);
	eo->aracGoster();
	eo->aracSur();
	eo->otoDurdur();
	eo->sarjEt(60);
	eo->aracGoster();
	eo->servisCagir();
}
