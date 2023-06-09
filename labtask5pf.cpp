#include <iostream>

double buy(char choice,double myr)
{
    double hasil;
    if (choice=='D' || choice=='d'){
        hasil=myr/4.50 ;
       return hasil;
    }
    else if(choice=='E'||choice=='e'){
        hasil=myr/4.80;
        return hasil;
    }
    else if (choice=='Y'||choice=='y')
    {
        hasil=myr/3.39;
        return hasil;
    }
    else{
        return 0;
    }
    
}
int main(){
    double myr;
    char choice;
    std::cout<<"Please Enter Your Amount in Malaysia Ringgit (RM) : "<<std::endl;
    std::cin>>myr;
    std::cout<<std::endl;
    std::cout<<"TYPE OF CURRENCY"<<std::endl;
    std::cout<<"----------------------"<<std::endl;
    std::cout<<"(Dollar) $1 = RM4.50"<<std::endl;
    std::cout<<"(Euro) Euro 1 = RM4.80"<<std::endl;
    std::cout<<"(Yen) JPY 1 = RM3.39"<<std::endl;

    std::cout<<"Please enter your type of currency (D/E/Y): ";
    std::cin>>choice;
    
    
    /*double total=buy(choice,myr);
    use total at the is:*/

    if (choice=='D' || choice=='d'){
        std::cout<<"The amount of Malaysian Ringgit in US Dollar is "<<buy(choice,myr)<<" US Dollar";
    }
    else if(choice=='E'||choice=='e'){
        std::cout<<"The amount of Malaysian Ringgit in Euro is "<<buy(choice,myr)<<" Euro";
    }
    else if (choice=='Y'||choice=='y')
    {
       std::cout<<"The amount of Malaysian Ringgit in Japanese Yen is "<<buy(choice,myr)<<" Japanese Yen";
    }
    else{
        return 0;
    }
    
}   


