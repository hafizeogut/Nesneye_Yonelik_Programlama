#include <iostream> 
#include <string> 
using namespace std; 

class Karakter{ 

    private: 
        int kimlik; 
        string isim; 
        bool hareketEdiyor; 
        int yon; 
        int para; 
        int aclik; 
        int susuzluk; 
        bool uyuyor; 
        int saglik; 
        int seviye; 
        int deneyim;
        int kimlikNumarasi; 
        int guc;
    public: 
        //Karakteri Oluşutuma işlemi yapıldı. 
        Karakter (int kimlik){ 
            this->kimlik=kimlik;
            hareketEdiyor=false;
            yon=0, 
            para=0;
            aclik=50;
            susuzluk=50; 
            uyuyor=false; 
            saglik=100; 
            seviye=1; 
            deneyim=0; 
        } 

        string isimDondur(string isim){ 
            return isim; 
        } 

        //Karakterin hareket etme durumunu değiştirildi. 
        void hareketDurumunuDegistir(bool hareketEdiyor){ 
            if (0<susuzluk<100 and 0<aclik<150 and uyuyor==false){ 
                this->hareketEdiyor=hareketEdiyor;       
            } 
            else{ 
                cout<<"Hareket etmek için uygun koşullarda değilsiniz"<<endl; 
            } 
        }       
        //Karkterin yönünü değiştirildi. 
        void yonuDegistir(int yeniYon){ 
            if (uyuyor==false){ 
                yon=yeniYon; 
            } 
        } 
        //Karakterin yönü döndürüldü.   
        int yonuDondur(){ 
            return yon; 
        } 
        //Karakterin parası değiştirildi 
        void parayiDegistir(int para){ 
            if(para<0){ 
                cout<<"Para birimi negatif olamaz"<<endl; 
            } 
            else{ 
                this->para=para; 
            } 
        }
        //Karakterin parası döndürme işlemi yapıldı 
        int parayiDondur(){ 
            return para; 
        } 
        //Karakterin uyku durumunu değiştirildi. 
        void uykudurumunuDegistir(bool uyuyor){ 

            if(uyuyor==false){ 
                uyuyor=true; 
                this->uyuyor=uyuyor; 
            } 

            else{ 
                this->uyuyor=uyuyor; 
                cout<<"Karakteriniz zaten uyuyor!"<<endl;
            } 

        }        
        //Karakterin uyku durumu döndürüldü. 
        bool uykuDurumunuDondur(){ 
            return uyuyor; 
        } 
        //Karakterin deneyim seviyesi değiştirildi 
        void deneyimiDegistir(int deneyim){ 
            this->deneyim=deneyim; 
        }

        //Karakterin deneyim seviyesini döndürüldü. 
        int deneyimiDondur(){ 
            return deneyim; 
        } 

        //Karakterin açlık seviyesini değiştir 
        void acligiDegistir(int aclik){ 
            if(0<aclik<100 and uyuyor==false){ 
                this->aclik=aclik; 
            } 
            else{ 
                cout<<"Acliği değiştirmek için uygun şartlara sahip değilsiniz"<<endl; 
            } 
        }   

        //Karakterin açlığı azaltıldı. 

        void acligiAzalt(){ 
            if(aclik>0){ 
                aclik--; 
            } 
        }  
        //Karakterin açlığı arttırıldı. 
        void acligiArtir(){ 
            if(aclik<100){ 
                aclik++; 
            } 

        } 
        //Karakterin açlık seviyesini dödürüldü. 

        int acligiDondur(){ 
            return aclik; 
        }    
        //Karakterin susuzluk seviyesi değiştirikdi 
        void susuzluguDegistir(int susuzluk){ 
            if(0<susuzluk<100 and uyuyor==false){ 
            this->susuzluk=susuzluk; 
            } 
            else{ 
                cout<<"Susuzluk  değeriniz 0 ile 100 arasında olmalıdır!"<<endl;	
            } 
        } 
        //Karalterin susuzluk seviyesini arttırıldı. 
        void susuzluguArtir(){ 
            if(susuzluk<100){ 
            susuzluk++; 
            } 

            else{ 
                cout<<"Susuzluğu daha dazla arttıramazsınız"<<endl;  
            } 

        } 
        //Karakterin susuzluk seviyesi azaldı. 
        void susuzluguAzalt(){ 
            if(susuzluk>0){ 
                susuzluk--; 
            } 
            else{ 
                cout<<"Susuzluğu daha dazla azaltamazsınız"<<endl; 
            } 
        } 
        //Karakterin susuzluk seviyesini döndürür	
        int susuzluguDondur(){ 
            return susuzluk; 
        }         
        void sagligiDegistir(int saglik) { 

            this->saglik = saglik; 

        }		 
        //Karakterin sağlığı azaltıldı 
        void sagligiAzalt(int zarar){ 
            if(saglik>0){ 
                saglik-=zarar; 
            } 
            else{ 
                cout<<"Sağlığını daha fazla azaltamazsınız"<<endl; 
            } 
        } 
        //Karakterin sağlığı arttırıldı 
        void sagligiArtir(int iyilestirme){ 
            if (saglik<100){ 
                saglik+=iyilestirme;          
            } 
            else{ 
                cout<<"Sağlığı daha fazla arttıramazsınız!"<<endl; 
            } 

        }
        int sagligiDondur(){ 
            return saglik; 
        }

        //Karakterin seviyesini arttırır 
        void seviyeyiArtir(){ 
            if (0<susuzluk<100 and 0<aclik<50){ 
                seviye++; 
            } 
            else{ 
                cout<<"Açlık ve susuzluk seviyesi seviye artırmak için uygun değil!"<<endl; 
            } 
        } 
        //Karakterin seviyesi değiştirldi. 
        void seviyeyiDegistir(int seviye){ 
            this->seviye=seviye; 
        } 

        //Karakterin seviyesi döndürüldü 
        int seviyeyiDondur(){ 
            return seviye; 
        }  
        //Karakterimn uyku durumunu değiştir 
        void uykuDurumunuDegistir(bool uyuyor){ 
            if(uyuyor==false){ 
                uyuyor=true; 
                this->uyuyor=uyuyor; 
            } 
            else{
                uyuyor=false; 
                this->uyuyor=uyuyor; 
            } 
        } 
        //Kimlik numarası döndürüldü 
        int kimlikNumarasiniDondur(int kimlikNumarasi){ 
            return kimlikNumarasi; 
        } 
        //Karakterin hareket durumunu döndürüldü. 
        int hareketDurumunuDondur(){ 
            return hareketEdiyor; 
        } 
        // Güç kontrol fonksiyonu
        void guc_kontrol(const Karakter& diger_karakter) {
            if (guc > diger_karakter.guc)
                cout << this->kimlik << " Kimlikli numaralı " << this->isim << " daha güçlü.\n";
            else if (guc < diger_karakter.guc)
                cout << diger_karakter.kimlik << " Kimlikli numaralı " << diger_karakter.isim << " daha güçlü.\n";
            else
                cout << "Güç seviyeleri eşit.\n";
        }
}; 

int main(){ 
    setlocale(LC_ALL,"Turkish"); 
    //Karakter Oluşturuldu. 
    Karakter karakter(12345); 
    cout<<"Karakterin kimlik numarası: "<<karakter.kimlikNumarasiniDondur(12345)<<endl;
    cout<<"Karakterin ismi: "<<karakter.isimDondur("Hafize")<<endl; 
    //Karakterin hareket etme durumu değiştirildi. 
    karakter.hareketDurumunuDegistir(true); 
    cout<<"Karakter hareket ediyor: "<<karakter.hareketDurumunuDondur()<<endl;  
    //karakter yönü değiştirildi. 
    karakter.yonuDegistir(1); 
    cout<<"Karakterin yönü: "<<karakter.yonuDondur()<<endl;     
    //Karakterin parası değiştirildi. 
    karakter.parayiDegistir(100); 
    cout<<"Karakterin parası: "<<karakter.parayiDondur()<<endl;     
    //Karakterin açlık seviyesi değiştirildi. 
    karakter.acligiDegistir(75); 
    cout<<"Karakterin açlık seviyesi: "<<karakter.acligiDondur()<<endl;   
    //Karakterin suzuluk seviyesi değiştirildi. 
    karakter.susuzluguDegistir(25); 
    cout<<"Karakterin susuzluk seviyesi: "<<karakter.susuzluguDondur()<<endl;   
    //Karakterin uyku durumu değiştirildi 
    karakter.uykuDurumunuDegistir(true); 
    cout<<"Karakter uyuyor: "<<karakter.uykuDurumunuDondur()<<endl;     
    //Karakterin sağlık durumunu değiştirildi. 
    karakter.sagligiDegistir(50); 
    cout<<"Karakterin sağlık seviyesi: "<<karakter.seviyeyiDondur()<<endl;   
    //Karakterin deneyim seviyesi değiştirildi. 
    karakter.deneyimiDegistir(100); 
    cout<<"Deneyim seviyesi: "<<karakter.deneyimiDondur()<<endl;     
    //Karakterin açlık seviyesini azaltıldı. 
    karakter.acligiAzalt(); 
    cout << "Karakterin açlık seviyesi (azaltıldıktan sonra): " <<karakter.acligiDondur()<<endl;     
    //Karakterin susuzluk değeri azaltıldı. 
    karakter.susuzluguAzalt(); 
    cout << "Karakterin susuzluk seviyesi (azaltıldıktan sonra): " <<karakter.susuzluguDondur()<<endl;     
    //Karakterin açlık seviyesini arttırıldı. 
    karakter.acligiArtir(); 
    cout << "Karakterin açlık seviyesi (arttırıldıtan sonra): " <<karakter.acligiDondur()<<endl;   
    //Karakterin susuzluk değeri azaltıldı. 
    karakter.susuzluguArtir(); 
    cout << "Karakterin susuzluk seviyesi (azaltıldıktan sonra): " <<karakter.susuzluguDondur()<<endl;     
    //Karakterin sağlığını arttırıldı. 
    karakter.sagligiArtir(50); 
    cout<<"Karakterin sağlık seviyesi(arttırdıktan sonra): "<<karakter.sagligiDondur()<<endl;     
    //Karakterin sağlığı azaltıldı. 
    karakter.sagligiAzalt(25); 
    cout<<"Karakterin sağlık seviyesi(azaltıldıktan sonra): "<<karakter.sagligiDondur()<<endl<<endl;  
    //Karakter Oluşturuldu. 
    Karakter karakter1(123456); 
    cout<<"Karakterin kimlik numarası: "<<karakter1.kimlikNumarasiniDondur(123456)<<endl;  
    cout<<"Karakterin ismi: "<<karakter1.isimDondur("Betül")<<endl;  
    //Karakterin hareket etme durumu değiştirildi. 
    karakter.hareketDurumunuDegistir(true); 
    cout<<"Karakter hareket ediyor: "<<karakter1.hareketDurumunuDondur()<<endl;  
    //karakter yönü değiştirildi. 
    karakter.yonuDegistir(1); 
    cout<<"Karakterin yönü: "<<karakter1.yonuDondur()<<endl;  
    //Karakterin parası değiştirildi. 
    karakter.parayiDegistir(100); 
    cout<<"Karakterin parası: "<<karakter1.parayiDondur()<<endl;  
    //Karakterin açlık seviyesi değiştirildi. 
    karakter.acligiDegistir(75); 
    cout<<"Karakterin açlık seviyesi: "<<karakter1.acligiDondur()<<endl;  
    //Karakterin suzuluk seviyesi değiştirildi. 
    karakter.susuzluguDegistir(25); 
    cout<<"Karakterin susuzluk seviyesi: "<<karakter1.susuzluguDondur()<<endl;  
    //Karakterin uyku durumu değiştirildi 
    karakter.uykuDurumunuDegistir(true); 
    cout<<"Karakter uyuyor: "<<karakter1.uykuDurumunuDondur()<<endl;  
    //Karakterin sağlık durumunu değiştirildi.
    karakter.sagligiDegistir(50); 
    cout<<"Karakterin sağlık seviyesi: "<<karakter1.seviyeyiDondur()<<endl;  
    //Karakterin deneyim seviyesi değiştirildi. 
    karakter.deneyimiDegistir(100); 
    cout<<"Deneyim seviyesi: "<<karakter1.deneyimiDondur()<<endl;  

    //Karakterin açlık seviyesini azaltıldı. 
    karakter.acligiAzalt(); 
    cout << "Karakterin açlık seviyesi (azaltıldıktan sonra): " <<karakter1.acligiDondur()<<endl;  
    //Karakterin susuzluk değeri azaltıldı. 
    karakter.susuzluguAzalt(); 
    cout << "Karakterin susuzluk seviyesi (azaltıldıktan sonra): " <<karakter1.susuzluguDondur()<<endl;    
    //Karakterin açlık seviyesini arttırıldı. 
    karakter.acligiArtir(); 
    cout << "Karakterin açlık seviyesi (arttırıldıtan sonra): " <<karakter1.acligiDondur()<<endl; 
    //Karakterin susuzluk değeri azaltıldı. 
    karakter.susuzluguArtir(); 
    cout << "Karakterin susuzluk seviyesi (azaltıldıktan sonra): " <<karakter1.susuzluguDondur()<<endl; 
    //Karakterin sağlığını arttırıldı. 
    karakter.sagligiArtir(50); 
    cout<<"Karakterin sağlık seviyesi(arttırdıktan sonra): "<<karakter1.sagligiDondur()<<endl;     
    //Karakterin sağlığı azaltıldı. 
    karakter.sagligiAzalt(25); 
    cout<<"Karakterin sağlık seviyesi(azaltıldıktan sonra): "<<karakter1.sagligiDondur()<<endl; 
    karakter.guc_kontrol(karakter1);

    return 0; 
} 