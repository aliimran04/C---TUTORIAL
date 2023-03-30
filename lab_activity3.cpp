#include <iostream>

/*int main()
{
    int operate;
    int firstno=0;
    int secno=0;
    std::cout<<"*********************************"<<std::endl;
    std::cout<<"Simple Calculator"<<std::endl;
    std::cout<<"*********************************"<<std::endl;
    std::cout<<"Operations : "<<std::endl;
    std::cout<<"1. Addition "<<std::endl;
    std::cout<<"2. Substraction "<<std::endl;
    std::cout<<"3. Multiplication "<<std::endl;
    std::cout<<"4. Division "<<std::endl;
    std::cout<<"*********************************"<<std::endl;



    std::cout<<"Select Operation : (1-4)"<<std::endl;
    std::cin>>operate;
    
    std::cout<<"Enter any  first number : "<<std::endl;
    std::cin>>firstno;
    std::cout<<"Enter any second number : "<<std::endl;
    std::cin>>secno;
    switch (operate){
    
        case 1:{
        
        int result=firstno+secno;
        std::cout<<"*********************************"<<std::endl;
        std::cout<<"RESULT : "<<result<<std::endl;
        std::cout<<"*********************************"<<std::endl;
        break;
        }
    

        case 2:{
    
        int result=firstno-secno;
        std::cout<<"*********************************"<<std::endl;
        std::cout<<"RESULT : "<<result<<std::endl;
        std::cout<<"*********************************"<<std::endl;
        break;
        }

        case 3:{
        
        int result=firstno*secno;
        std::cout<<"*********************************"<<std::endl;
        std::cout<<"RESULT : "<<result<<std::endl;
        std::cout<<"*********************************"<<std::endl;
        break;
        }

        case 4:{
        
        int result=firstno/secno;
        std::cout<<"*********************************"<<std::endl;
        std::cout<<"RESULT : "<<result<<std::endl;
        std::cout<<"*********************************"<<std::endl;
        break;
        }


        
    }
    return 0;
} */

int main()
{
    std::cout<<"*********************************"<<std::endl;
    std::cout<<"       MULTIPLICATION TABLE  "<<std::endl;
    std::cout<<"*********************************"<<std::endl;

    int nombor;
    int result=0;
    std::cout<<"Enter the number : ";
    std::cin>>nombor;

    for (int multiply=1;multiply<=10;multiply++)
    {
        result=multiply*nombor;
        std::cout<<multiply<<" * "<<nombor<<" = "<<result<<std::endl;
    }
    return 0;
}
