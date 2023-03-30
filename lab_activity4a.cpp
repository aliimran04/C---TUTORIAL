#include <iostream>

int main()
{
int NUM=4;
int markah[NUM];
std::cout<<"Sila masukkan markah anda "<<std::endl;
/*int salary[NUM] = {2000, 3400, 1900, 2500, 3300, 1238, 3200, 2700,
3600, 4500}; */

for(int i=0;i<NUM;i++)
{
    std::cin>>markah[i];
}

std::cout<<"Mata Pelajaran \tMarkah"<<std::endl;
for (int i=0; i<NUM; i++)
{
std::cout<<i<<"\t\t"<<markah[i]<<std::endl;
}
return 0;
}

/*int main()
{
    char huruf[4]={'a','b','c','d'};
    std::cout<<huruf[0]<<huruf[1]<<huruf[2]<<huruf[3];
    return 0;
}*/