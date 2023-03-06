#include<iostream>
//here is global variables that can be used everywhere in this program
int main(){
    //here is local variables that can only be used in this function only
    int quantity;
    double price;
    double total;
    std::cout << "Welcome to the Kedai Baju" << std::endl;
    std::cout << "Please enter the clothes quantity you want to buy "<< std::endl;
    std::cin >> quantity;
    std::cout << "Please enter the clothes price in RM "<< std::endl;
    std::cin >> price;
    total=quantity*price;
    std::cout << "Your total is RM " << total<< std::endl;
    const double DISCOUNT50=0.5;
    const double DISCOUNT40=0.4;
    double deduct40=(DISCOUNT40*total);
    double deduct50=(DISCOUNT50*total);
    double discount=total-deduct50;
    double discount2=total-deduct40;
    
    std::cout << "Your total price after 50% off is RM " << discount << std::endl;
    std::cout << "The deducted amount for 50% off is RM " << deduct50 << std::endl;
    std::cout << "Your total price after 40% off is RM " << discount2 << std::endl;
    std::cout << "The deducted amount for 40% off is RM " << deduct40 << std::endl;
    std::cout << "Your total price before 50% off and 40% off is RM " << total << std::endl;

    return 0;
}