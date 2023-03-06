/*LABORATARY TASK 2
MUHAMMAD ALI IMRAN BIN JALALUDDIN
01DDT22F1023
DDTN2*/
#include <iostream>



int main(){
    double pineapple=3.99;
    double green_apple=1.25;
    double dragon_fruit=4.99;
    double tender_coconut=5.55;
    int quantity_pine;
    int quantity_green;
    int quantity_drag;
    int quantity_coco;
    
    std::cout <<"======================="<<std::endl;
    std::cout <<"Welcome to Lala Grocer"<<std::endl;
    std::cout <<"======================="<<std::endl;
    std::cout<<"List of Fruit and Price per Piece: "<<std::endl;
    std::cout<<"===================================="<<std::endl;
    std::cout<<"Pineapple = "<<pineapple<<std::endl;
    std::cout<<"Green Apple = "<<green_apple<<std::endl;
    std::cout<<"Dragon Fruit = "<<dragon_fruit<<std::endl;
    std::cout<<"Tender Coconut = "<<tender_coconut<<std::endl;
    std::cout<<"===================================="<<std::endl;
    std::cout<<"Please enter the quantity for Pineapple :";
    std::cin>>quantity_pine;
    double result_pine=quantity_pine*pineapple;
    
    std::cout<<"Please enter the quantity for Green Apple :";
    std::cin>>quantity_green;
    double result_green=quantity_green*green_apple;
    std::cout<<"Please enter the quantity for Dragon Fruit :";
    std::cin>>quantity_drag;
    double result_drag=quantity_drag*dragon_fruit;
    std::cout<<"Please enter the quantity for Tender Coconut :";
    std::cin>>quantity_coco;
    double result_coco=quantity_coco*tender_coconut;

    std::cout<<"================================================="<<std::endl;
    std::cout<<"Fruit and Price Details :"<<std::endl;
    std::cout<<"================================================="<<std::endl;
    std::cout<<" 1: "<<quantity_pine<<" Pineapple : "<<"RM "<<result_pine<<std::endl;
    std::cout<<" 2: "<<quantity_green<<" Green Apple : "<<"RM "<<result_green<<std::endl;
    std::cout<<" 3: "<<quantity_drag<<" Dragon Fruit : "<<"RM "<<result_drag<<std::endl;
    std::cout<<" 4: "<<quantity_coco<<" Tender Coconut : "<<"RM "<<result_coco<<std::endl;
    std::cout<<"==============================================================="<<std::endl;
    double total_amount=result_pine+result_green+result_drag+result_coco;
    std::cout<<"Total amount of price RM: "<<total_amount<<std::endl;
    std::cout<<"==============================================================="<<std::endl;


    return 0;




}