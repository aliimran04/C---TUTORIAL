/*LOY YONG SIANG 01DDT22F1012
LUQMAN BIN NOOR HALIM 01DDT22F1113
MUHAMMAD ALI IMRAN BIN JALALUDDIN 01DDt22F1023 */
#include <iostream>
#include <string>
using namespace std;
int main()
{
const double dis=0.2;
char size,again;
string sauce,crunch;
double nsauce,csauce, ttlcsauce,
ncrunch,ccrunch,ttlccrunch,csize,ttl,sum=0, ttldis, dissum;
int count=0;
cout<<"*******************************************************************
*****************************************************"<<endl;
cout<<" Ice Cream
Corner"<<endl;
cout<<"*******************************|***********************************
**********|******************************************"<<endl;
cout<<" Size | Sauce
| Crunch"<<endl;
cout<<"*******************************|***********************************
**********|******************************************"<<endl;
cout<<"(S)Small: RM4.00 |(S1)Chocolate Hazelnut -1 Scoop:
RM2.00 |(C1)Oreo Crumbs -1 Scoop: RM2.00"<<endl;
cout<<"(M)Medium: RM6.00 |(S2)Dark Chocolate -1 Scoop:
RM1.50 |(C2)Lacasitos -1 Scoop: RM2.50"<<endl;
cout<<"(L)Large: RM8.00 |(S3)Caramelised biscuit -1 Scoop:
RM2.50 |(C3)Caramelised biscuit -1 Scoop: RM2.00"<<endl;
cout<<"*******************************************************************
*****************************************************"<<endl;
do
{
next:
here:
cout<<"Please enter the code for your choice of Ice Cream size(S/M/L): ";
cin>>size;
cin.clear();
cin.ignore(1000,'\n');
fflush(stdin);
switch (size)
{
case 'S': case's':
csize=4;
break;
case 'M': case'm':
csize=6;
break;
case 'L': case'l':
csize=8;
break;
default:
cout<<"Code unavailable, please re-enter code following(S/M/L)";
cout<<endl;
goto here;
}
back:
cout<<"Please enter the code for your choice of Sauce(S1/S2/S3): ";
cin>>sauce;
cin.clear();
cin.ignore(1000,'\n');
fflush(stdin);
if (sauce=="S1"||sauce=="s1")
{
csauce=2;
}
else if(sauce=="S2"||sauce=="s2")
{
csauce=1.5;
}
else if(sauce=="S3"||sauce=="s3")
{
csauce=2.5;
}
else
{
cout<<"Code unavailable, please re-enter code following(S1/S2/S3)";
cout<<endl;
goto back;
}
cout<<"Please enter the number of scoop for sauce: ";
cin>>nsauce;
cin.clear();
cin.ignore(1000,'\n');
ttlcsauce=nsauce*csauce;
back2:
cout<<"Please enter the code for your choice of Crunch(C1/C2/C3): ";
cin>>crunch;
cin.clear();
cin.ignore(1000,'\n');
fflush(stdin);
if (crunch=="C1"||crunch=="c1")
{
ccrunch=2;
}
else if(crunch=="C2"||crunch=="c2")
{
ccrunch=1.5;
}
else if(crunch=="C3"||crunch=="c3")
{
ccrunch=2.5;
}
else
{
cout<<"Code unavailable, please re-enter code following(C1/C2/C3)";
cout<<endl;
goto back2;
}
cout<<"Please enter the number of scoop for crunch: ";
cin>>ncrunch;
cin.clear();
cin.ignore(1000,'\n');
ttlccrunch=ncrunch*ccrunch;
ttl=csize+ttlcsauce+ttlccrunch;
sum=ttl+sum;
cout<<endl;
cout<<"Total Price for ("<<count+1<<") ice-cream: RM"<<ttl<<endl;
cout<<endl;
back3:
cout<<"Do you want to order next ice-cream? If yes, ENTER Y/y. If no,
ENTER N/n: ";
cin>>again;
cin.clear();
cin.ignore(1000,'\n');
fflush(stdin);
switch(again)
{
case 'Y': case'y':
count++;
break;
case 'N': case'n':
if(count>1)
{
ttldis=sum*dis;
sum=sum-ttldis;
}
else
cout<<endl;
cout<<"************************************"<<endl;
cout<<" Total price: RM"<<sum<<endl;
cout<<"************************************"<<endl;
break;
default:
cout<<"Please enter YES(Y/y) OR NO(N/n)";
goto back3;
}
cout<<endl;
}while(again=='Y'||again=='y');
return 0;
}