#include <iostream>

using namespace std;

void terstenYazdir(int dizi[],int uzunluk)
{
    for (int i=uzunluk-1; i>=0; i--)
    {
        cout<<i+1<<".eleman: "<<dizi[i]<<endl;
    }
}

void karesiniAl(int dizi[],int uzunluk)
{
	cout<<"Dizi elemanlari: ";
	for(int i =0; i<uzunluk; i++)
	{
		cout<<dizi[i]<<" ";
		//cout<<"Diziye girilen elemanlarin karesi :"<<dizi[i]*dizi[i]<<"\n";
	}
	cout<<"\nDiziye girilen elemanlarin karesi :";
	for(int i =0; i<uzunluk; i++)
	{ 
		cout<<dizi[i]*dizi[i];
	}
}

int main()
{
 
    int dizi_uzunlugu;
    
    cout<<"Dizinin Uzunlugunu giriniz"<<endl;
    cin>>dizi_uzunlugu;
    int dizi[dizi_uzunlugu];
    

    for (int i=0;i<dizi_uzunlugu; i++)
    {
    	cout<<i+1<<".elemani giriniz: ";
        cin>>dizi[i]; 
    }

    
    while (true){
    	int secim;
    	cout<<"\nIslem Menusu:"<<endl;
		cout<<"1-Diziyi tersten yazdir"<<endl;
		cout<<"2-Dizinin elemanlarinin karesini al"<<endl;
		cout<<"3-Cikis"<<endl;
		
    	cin>>secim;
    	
	
  
		switch (secim)
		{
		    case 1:{
		        terstenYazdir(dizi,dizi_uzunlugu);
		        break;
		    }
		    case 2:{
		        karesiniAl(dizi, dizi_uzunlugu);
		        break;
		    } 
		    case 3:{
            	cout << "--> Cikis yapildi.." << endl;
            	break;
			}
			default:
			{
				cout << "1-3 arasinda bir sayi girmediniz!";
			}    
		}
		
		
	}
	    

	
}