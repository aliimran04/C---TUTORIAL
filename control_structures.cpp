#include <iostream>
#include <string>



int main(){
    std::string nama;
    int umur;
    int warga;
    int credit;
    std::cout<<"Masukkan nama kau : ";
    std::getline(std::cin ,nama);
  
    std::cout<<"Masukkan umur kau : ";
    std::cin>>umur;
    if (umur>=18)
    {
        std::cout<<"Tekan 1 kalau Warganegara, tekan 2 kalau bukan warganegara  : ";
        std::cin>>warga;
        if(warga==1)
        {
            std::cout<<"Masukkan jumlah kredit SPM kau  : " ;
            std::cin>>credit;
            if (credit>=5)
            {
               std::cout<<"Layak dapat biasiswa wahai si " <<nama; 
            }
            else{
                std::cout<<"Tak layak dapat biasiswa wahai si  "<<nama;
            }
        }
        else
        {
            std::cout<<"Tak layak dapat biasiswa wahai si  "<<nama;
        }
    }
    else
    {
        std::cout<<"Tak layak dapat biasiswa wahai si  "<<nama;
    }
    

    return 1;

}
