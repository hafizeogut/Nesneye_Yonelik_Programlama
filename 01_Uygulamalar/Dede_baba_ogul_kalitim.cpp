// üst sýnýftaki method ile alt sýnýftaki ayný isimli ilk method function overriding yapar.
// alt sýnýfta 2 tane ayný isimli method varsa aralarýndaki fark parametre ise function overloading yapar.
#include<iostream>
using namespace std;
class Dede{
	protected:
		string ad;
	public:
		Dede() {
			cout <<"Dede-DC" << endl; ad="Hamdi";    
		}
		void virtual icecekSoyle()	{
			cout << ad << " dede ayran soyledi." << endl;	
		} 
	private:
		void atSur() {	
			cout << "Dede at suruyor." << endl<<endl;
		}
};

class Baba : public Dede{
/*	protected:
		string ad;
	public: // sadece public ve protected üyeler gelir.
		Dede() { cout <<"D-DC" << endl; ad="Hamdi";    }
		void icecekSoyle()	{	cout << ad << " dede ayran soyledi." << endl;	} 		*/
	protected:
		int tc;
	public:
		Baba() { // function overriding
			cout <<"Baba-DC" << endl; ad = "Mustafa"; tc = 1223;
			}
		void icecekSoyle(){// function overloading 
			cout << ad << " baba cay soyledi." << endl;  
		} 
		void icecekSoyle(int i){  
			cout << ad << " baba " << i << " cay soyledi." << endl <<endl;  
		} 
};

class Dayi{
	public:
		Dayi() { 
			cout << "Dayi-DC" << endl;
		}
		void icecekSoyle(){
			cout << "dayi cappicino soyledi." << endl;
		}
		void gezmeyeGit(){	
			cout << " dayi tatili" << endl<<endl;
		}
};

class Cocuk : public Baba , public Dayi /*  public Dede */ {
	private:
		string hesKodu;
	public:
		Cocuk() {
			cout <<"Cocuk-DC" << endl; 
			ad = "Zafer"; tc = 1223; 
			hesKodu = "xyz";
		}
		void icecekSoyle() 	{  
			cout << ad << " cocuk cay soyledi." <<endl<< endl;  
		} 
};

int main()
{
	Dede *d = new Dede();		
	d->icecekSoyle();  
	
	Baba *b = new Baba(); 		
	b->icecekSoyle();
	
	Cocuk *c = new Cocuk(); 	
	c->icecekSoyle();
	
	
	Dede *d1 = new Cocuk();
	d1->icecekSoyle();//poliformizm
	 
	
	 
}
