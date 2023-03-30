#include <iostream>
    

/*int main()
{

    
    double average;
    int total=0;
    double number;
    for (int counter=1; counter<=5; counter++)
    {
        std::cout<<"Please input number : "<<std::endl;
        std::cin>>number;
        total=total+number;

    } 
    average=total/5;
    std::cout<<"Your average of 5 numbers is " << average;
    return 0;
}*/ 

/*int main()
{
    double average;
    int total=0;
    double number;
    int counter=1;
    while ( counter<=5)
    {
        std::cout<<"Please input number : "<<std::endl;
        std::cin>>number;
        total=total+number;
        counter++;

    } 
    average=total/5;
    std::cout<<"Your average of 5 numbers is " << average;
    return 0;
} */

/*int main ()
{
    double average;
    int total=0;
    double number;
    int counter=1;
    do
    {
        std::cout<<"Please input number : "<<std::endl;
        std::cin>>number;
        total=total+number;
        counter++;

    } 
    while(counter<=5);
    average=total/5;
    std::cout<<"Your average of 5 numbers is " << average;
    return 0; 
} */

/*int main ()
{
    
    int mark=0;
    int total=0;
    for (int student=1;student<=10;student++)
    {
        std::cout<<"Please input your quiz mark : "<<std::endl;
        std::cin>>mark;
        if (mark<0||mark>25)
        {
          std::cout<<"Please input mark ranges from 0 to 25 only"<<std::endl;  
          student--;
            
        }
        else
        {
            total=total+mark;
            
            

        }
              
            
        
        
        
    }
        int average=total/10;
        std::cout<<"the average is "<<average;
    return 0; 
}*/

/*int main ()
{
    
    const int payper1=8;
    float hour;
    const float KWSP=0.1;
    float total;
    float deduction;
    float gross;
    float sum=0;
    for (int emp=1;emp<=5;emp++)
    {
        std::cout<<"Please input your working hour : "<<std::endl;
        std::cin>>hour;
        total=hour*payper1;   //semua ni akan reset bila run for loop
        deduction=total*KWSP;
        gross=total-deduction;

        sum=sum+gross;  //yg ni dia simpan var setiap kali run for

              
            
        
        
        
    }
        
        
        std::cout<<"the total is RM "<<sum<<std::endl;
        float average=sum/5;
        std::cout<<"the average is "<<average;
    return 0; 
}*/

int main()
{

    
    int upperlimit;
    int lowerlimit;
    std::cout<<"Please input lower limit : "<<std::endl;
    std::cin>>lowerlimit;
    std::cout<<"Please input upper limit : "<<std::endl;
    std::cin>>upperlimit;
    for (int counter=lowerlimit; counter<=upperlimit; counter++)
    {
        std::cout<<counter<<" ";
        

    } 
    
    return 0;
}

/*using namespace std;
int main()
{
    int upper,lower;
    cout<<"Upper bound: ";
    cin>>upper;
    cout<<"Lower bound: ";
    cin>>lower;

    for(lower;lower<=upper;lower++)
    {
        cout<<lower<<" ";
    }

} */
 
 




   
