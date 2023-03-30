#include <iostream>



int bulan (){
    int Month;

    for(int n=1;n<=3;n++)
    {
    std::cout<<"Enter 1 number between  to 3 : ";
    std::cin>>Month;
    if (Month==1)
    {
        std::cout<<"January"<<std::endl;
    }
    else if(Month==2)
    {
        std::cout<<"February"<<std::endl;
 
    }
    else if(Month==3)
    {
        std::cout<<"March"<<std::endl;

    }
    else
    {
        std::cout<<"Wrong Input"<<std::endl;
    }
    }
    return 0;
}
    

    
////////////////////////////////////////////////////////

    int cppprogram(){
        //This will print the string 
        for (int n=4;n>=2;n--)
        {
            std::cout<<"C++ Programming\n";
        }
        std::cout<<"END\n";


        return 0;
    }
////////////////////////////////////////////////////////
int kira(){
    for (int n=10;n>=1;n--)
    {
    std::cout<<n<<" , ";
    std::cout<<"FIRE!";
    }
 return 0;
} 

int markah()
{
    int mark;
    for (int a=1;a<=3;++a)
    {
    std::cout<<"Mark for student "<<a<<std::endl;
        for (int b=1;b<=3;++b)
        {
            std::cout<<"Please keyin mark for Quiz "<<b<<": ";
            
            std::cin>>mark;
            
           
        }
    
 
    }
return 0;
}

int main(){
    bulan();
    cppprogram();
    kira();
    markah();
    return 0;
}

