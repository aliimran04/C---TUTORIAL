#include <iostream>
#include <string>

using namespace std;
int main()
{
   string raptor_prompt_variable_zzyz;
   int quantityofbrownies;
   int totaldrinkscost;
   int totalcostafterdiscountforbrowniesanddrinks;
   int totalbrowniesanddrinkscost;
   int totaladdoncost;
   int b1;
   int p2;
   int a1;
   int p3;
   int discountofbrowniesandaddon;
   string name;
   string responsefordrinks;
   int b3;
   int a2;
   int discountoftotalcost;
   int countercustomer;
   int totalbrowniescost;
   int totalcostforbrowniesandaddon;
   int response;
   int b2;
   int totalcost;
   string selectionofbrownies;
   int a3;
   int discountofbrowniesanddrinks;
   int discountofdrinks;
   int totalcostafterdiscountforbrownies;
   int quantityofdrinks;
   int totalcostafterdiscount;
   string responseforaddon;
   int totalcostafterdiscountfordrinks;
   int totalcostforbrowniesandaddonafterdiscount;
   string selectionsofaddon;
   string responseforbrownies;
   string selectionofdrinks;
   int b4;
   int p1;
   int discountofbrownies;

   countercustomer =0;
   while (1)
   {
      countercustomer =countercustomer+1;
      raptor_prompt_variable_zzyz ="Hi, how can we address you?";
      cout << raptor_prompt_variable_zzyz << endl;
      cin >> name;
      raptor_prompt_variable_zzyz ="Would you like to try our brownies?";
      cout << raptor_prompt_variable_zzyz << endl;
      cin >> responseforbrownies;
      if (responseforbrownies=="Yes")
      {
         a1 =0;
         a2 =0;
         a3 =0;
         while (1)
         {
            raptor_prompt_variable_zzyz ="What would you like to try? Oreo Brownies=A1, Nutella Browwnies=A2, Fruity Brownies=A3";
            cout << raptor_prompt_variable_zzyz << endl;
            cin >> selectionofbrownies;
            if (selectionofbrownies=="A1")
            {
               raptor_prompt_variable_zzyz ="How many do you like?";
               cout << raptor_prompt_variable_zzyz << endl;
               cin >> quantityofbrownies;
               a1 =a1+quantityofbrownies;
            }
            else
            {
               if (selectionofbrownies=="A2")
               {
                  raptor_prompt_variable_zzyz ="How many do you like?";
                  cout << raptor_prompt_variable_zzyz << endl;
                  cin >> quantityofbrownies;
                  a2 =a2+quantityofbrownies;
               }
               else
               {
                  if (selectionofbrownies=="A3")
                  {
                     raptor_prompt_variable_zzyz ="How many do you like?";
                     cout << raptor_prompt_variable_zzyz << endl;
                     cin >> quantityofbrownies;
                     a3 =a3+quantityofbrownies;
                  }
                  else
                  {
                     cout << "The code value you entered is unavailable, pls try again. Thank You. So choose 'No' to continue for your selection of Brownies." << endl;                  }
               }
            }
            raptor_prompt_variable_zzyz ="Is that enough? Yes=1, No=0";
            cout << raptor_prompt_variable_zzyz << endl;
            cin >> response;
            if (response==1) break;
         }
         raptor_prompt_variable_zzyz ="Do you like to put add on? ";
         cout << raptor_prompt_variable_zzyz << endl;
         cin >> responseforaddon;
         if (responseforaddon=="Yes")
         {
            totalbrowniescost =(3.2*a1)+(3.5*a2)+(3.8*a3);
            p1 =0;
            p2 =0;
            p3 =0;
            while (1)
            {
               raptor_prompt_variable_zzyz ="What would you want to add? Chocalate Rice=P1, M&M=P2, Nuts=P3";
               cout << raptor_prompt_variable_zzyz << endl;
               cin >> selectionsofaddon;
               if (selectionsofaddon=="P1")
               {
                  p1 =p1+1;
               }
               else
               {
                  if (selectionsofaddon=="P2")
                  {
                     p2 =p2+1;
                  }
                  else
                  {
                     if (selectionsofaddon=="P3")
                     {
                        p3 =p3+1;
                     }
                     else
                     {
                        cout << "The code value you entered is unavailable, pls try again thank you." << endl;                     }
                  }
               }
               raptor_prompt_variable_zzyz ="Is that enough? Yes=1, No=0";
               cout << raptor_prompt_variable_zzyz << endl;
               cin >> response;
               if (response==1) break;
            }
            totaladdoncost =(1*p1)+(1.8*p2)+(1.5*p3);
            raptor_prompt_variable_zzyz ="Since You alreaady ordered our brownies, how about try out our drinks?";
            cout << raptor_prompt_variable_zzyz << endl;
            cin >> responsefordrinks;
            if (responsefordrinks=="Yes")
            {
               b1 =0;
               b2 =0;
               b3 =0;
               b4 =0;
               while (1)
               {
                  raptor_prompt_variable_zzyz ="What would you like to drink? Iced Lemon Tea=B1, Strawbery=B2, Honey Dew=B3, Watermellon=B4";
                  cout << raptor_prompt_variable_zzyz << endl;
                  cin >> selectionofdrinks;
                  if (selectionofdrinks=="B1")
                  {
                     raptor_prompt_variable_zzyz ="How many do you like?";
                     cout << raptor_prompt_variable_zzyz << endl;
                     cin >> quantityofdrinks;
                     b1 =b1+quantityofdrinks;
                  }
                  else
                  {
                     if (selectionofdrinks=="B2")
                     {
                        raptor_prompt_variable_zzyz ="How many do you like?";
                        cout << raptor_prompt_variable_zzyz << endl;
                        cin >> quantityofdrinks;
                        b2 =b2+quantityofdrinks;
                     }
                     else
                     {
                        if (selectionofdrinks=="B3")
                        {
                           raptor_prompt_variable_zzyz ="How many do you like?";
                           cout << raptor_prompt_variable_zzyz << endl;
                           cin >> quantityofdrinks;
                           b3 =b3+quantityofdrinks;
                        }
                        else
                        {
                           if (selectionofdrinks=="B4")
                           {
                              raptor_prompt_variable_zzyz ="How many do you like?";
                              cout << raptor_prompt_variable_zzyz << endl;
                              cin >> quantityofdrinks;
                              b4 =b4+quantityofdrinks;
                           }
                           else
                           {
                              cout << "The code value you entered is unavailable, pls try again. Thank You. So choose 'No'  to continue for your selection of drinks." << endl;                           }
                        }
                     }
                  }
                  raptor_prompt_variable_zzyz ="Is that enough? Yes=1, No=0";
                  cout << raptor_prompt_variable_zzyz << endl;
                  cin >> response;
                  if (response==1) break;
               }
               totaldrinkscost =(2.5*b1)+(3.5*b2)+(3.5*b3)+(4*b4);
               totalcost =totaladdoncost+totalbrowniescost+totaldrinkscost;
               if (countercustomer<=3)
               {
                  discountoftotalcost =totalcost*0.2;
                  totalcostafterdiscount =totalcost-discountoftotalcost;
                  cout << "Congrats!!! You are our first 3 customer and you will get a discount for 20 percent and that would cost you RM"<<totalcostafterdiscount<<". And thank you for purchasing our products :) " << name << ". Original price= "<< totalcost <<". Amount of discount=RM"<<discountoftotalcost<<". Price after discount=RM"<< totalcostafterdiscount << endl;               }
               else
               {
                  cout << "Ok, that would cost you RM"<<totalcost<<". And thank you for purchasing our products :) "<<name << endl;               }
            }
            else
            {
               totalcostforbrowniesandaddon =totalbrowniescost+totaladdoncost;
               if (countercustomer<=3)
               {
                  discountofbrowniesandaddon =totalcostforbrowniesandaddon*0.2;
                  totalcostforbrowniesandaddonafterdiscount =totalcostforbrowniesandaddon-discountofbrowniesandaddon;
                  cout << "Congrats!!! You are our first 3 customer and you will get a discount for 20% and that would cost you RM"<< totalcostforbrowniesandaddonafterdiscount << ". And thank you for purchasing our products :) "<<name<<". Original price= "<< totalcostforbrowniesandaddon<< ". Amount of discount=RM"<< discountofbrowniesandaddon<<". Price after discount=RM"<<totalcostforbrowniesandaddonafterdiscount << endl;               }
               else
               {
                  cout << "Ok, that would cost you RM"<<totalcostforbrowniesandaddon<<". And thank you for purchasing our products :) "<<name << endl;               }
            }
         }
         else
         {
            totalbrowniescost =(3.2*a1)+(3.5*a2)+(3.8*a3);
            raptor_prompt_variable_zzyz ="Since You alreaady ordered our brownies, how about try out our drinks?";
            cout << raptor_prompt_variable_zzyz << endl;
            cin >> responsefordrinks;
            if (responsefordrinks=="Yes")
            {
               b1 =0;
               b2 =0;
               b3 =0;
               b4 =0;
               while (1)
               {
                  raptor_prompt_variable_zzyz ="What would you like to drink? Iced Lemon Tea=B1, Strawbery=B2, Honey Dew=B3, Watermellon=B4";
                  cout << raptor_prompt_variable_zzyz << endl;
                  cin >> selectionofdrinks;
                  if (selectionofdrinks=="B1")
                  {
                     raptor_prompt_variable_zzyz ="How many do you like?";
                     cout << raptor_prompt_variable_zzyz << endl;
                     cin >> quantityofdrinks;
                     b1 =b1+quantityofdrinks;
                  }
                  else
                  {
                     if (selectionofdrinks=="B2")
                     {
                        raptor_prompt_variable_zzyz ="How many do you like?";
                        cout << raptor_prompt_variable_zzyz << endl;
                        cin >> quantityofdrinks;
                        b2 =b2+quantityofdrinks;
                     }
                     else
                     {
                        if (selectionofdrinks=="B3")
                        {
                           raptor_prompt_variable_zzyz ="How many do you like?";
                           cout << raptor_prompt_variable_zzyz << endl;
                           cin >> quantityofdrinks;
                           b3 =b3+quantityofdrinks;
                        }
                        else
                        {
                           if (selectionofdrinks=="B4")
                           {
                              raptor_prompt_variable_zzyz ="How many do you like?";
                              cout << raptor_prompt_variable_zzyz << endl;
                              cin >> quantityofdrinks;
                              b4 =b4+quantityofdrinks;
                           }
                           else
                           {
                              cout << "The code value you entered is unavailable, pls try again. Thank You. So choose 'No'  to continue for your selection of drinks." << endl;                           }
                        }
                     }
                  }
                  raptor_prompt_variable_zzyz ="Is that enough? Yes=1, No=0";
                  cout << raptor_prompt_variable_zzyz << endl;
                  cin >> response;
                  if (response==1) break;
               }
               totaldrinkscost =(2.5*b1)+(3.5*b2)+(3.5*b3)+(4*b4);
               totalbrowniesanddrinkscost =totalbrowniescost+totaldrinkscost;
               if (countercustomer<=3)
               {
                  discountofbrowniesanddrinks =totalbrowniesanddrinkscost*0.2;
                  totalcostafterdiscountforbrowniesanddrinks =totalbrowniesanddrinkscost-discountofbrowniesanddrinks;
                  cout << "Congrats!!! You are our first 3 customer and you will get a discount for 20% and that would cost you RM"<<totalcostafterdiscountforbrowniesanddrinks<<". And thank you for purchasing our products :) "<<name << endl;                  cout << "Original price= "<<totalbrowniesanddrinkscost<<". Amount of discount=RM"<<discountofbrowniesanddrinks<<". Price after discount=RM"<<totalcostafterdiscountforbrowniesanddrinks << endl;               }
               else
               {
                  cout << "Ok, that would cost you RM"<<totalbrowniesanddrinkscost<<". And thank you for purchasing our brownies and drinks :) "<<name << endl;               }
            }
            else
            {
               if (countercustomer<=3)
               {
                  discountofbrownies =totalbrowniescost*0.2;
                  totalcostafterdiscountforbrownies =totalbrowniescost-discountofbrownies;
                  cout << "Congrats!!! You are our first 3 customer and you will get a discount for 20% and that would cost you RM"<<totalcostafterdiscountforbrownies<<". And thank you for purchasing our products :) "<<name << endl;                  cout << "Original price= "<<totalbrowniescost<<". Amount of discount=RM"<<discountofbrownies<<". Price after discount=RM"<<totalcostafterdiscountforbrownies << endl;               }
               else
               {
                  cout << "Ok, that would cost you RM"<<totalbrowniescost<<". And thank you for purchasing our brownies :) "<<name << endl;               }
            }
         }
      }
      else
      {
         raptor_prompt_variable_zzyz ="Then how about try our drinks?";
         cout << raptor_prompt_variable_zzyz << endl;
         cin >> responsefordrinks;
         if (responsefordrinks=="Yes")
         {
            b1 =0;
            b2 =0;
            b3 =0;
            b4 =0;
            while (1)
            {
               raptor_prompt_variable_zzyz ="What would you like to drink?  Iced Lemon Tea=B1, Strawbery=B2, Honey Dew=B3, Watermellon=B4";
               cout << raptor_prompt_variable_zzyz << endl;
               cin >> selectionofdrinks;
               if (selectionofdrinks=="B1")
               {
                  raptor_prompt_variable_zzyz ="How many do you like?";
                  cout << raptor_prompt_variable_zzyz << endl;
                  cin >> quantityofdrinks;
                  b1 =b1+quantityofdrinks;
               }
               else
               {
                  if (selectionofdrinks=="B2")
                  {
                     raptor_prompt_variable_zzyz ="How many do you like?";
                     cout << raptor_prompt_variable_zzyz << endl;
                     cin >> quantityofdrinks;
                     b2 =b2+quantityofdrinks;
                  }
                  else
                  {
                     if (selectionofdrinks=="B3")
                     {
                        raptor_prompt_variable_zzyz ="How many do you like?";
                        cout << raptor_prompt_variable_zzyz << endl;
                        cin >> quantityofdrinks;
                        b3 =b3+quantityofdrinks;
                     }
                     else
                     {
                        if (selectionofdrinks=="B4")
                        {
                           raptor_prompt_variable_zzyz ="How many do you like?";
                           cout << raptor_prompt_variable_zzyz << endl;
                           cin >> quantityofdrinks;
                           b4 =b4+quantityofdrinks;
                        }
                        else
                        {
                           cout << "The code value you entered is unavailable, pls try again. Thank You. So choose 'No'  to continue for your selection of drinks." << endl;                        }
                     }
                  }
               }
               raptor_prompt_variable_zzyz ="Is that enough? Yes=1, No=0";
               cout << raptor_prompt_variable_zzyz << endl;
               cin >> response;
               if (response==1) break;
            }
            totaldrinkscost =(2.5*b1)+(3.5*b2)+(3.5*b3)+(4*b4);
            if (countercustomer<=3)
            {
               discountofdrinks =totaldrinkscost*0.2;
               totalcostafterdiscountfordrinks =totaldrinkscost-discountofdrinks;
               cout << "Congrats!!! You are our first 3 customer and you will get a discount for 20% and that would cost you RM"<<totalcostafterdiscountfordrinks<<". And thank you for purchasing our products :) "<<name << endl;               cout << "Original price= "<<totaldrinkscost<<". Amount of discount=RM"<<discountofdrinks<<". Price after discount=RM"<<totalcostafterdiscountfordrinks << endl;            }
            else
            {
               cout << "Ok, that would cost you RM"<<totaldrinkscost << endl;               cout << "Thank you for your purchase :) "+name << endl;            }
         }
         else
         {
            cout << "Thank you for coming :(  "+name << endl;         }
      }
      if (countercustomer>=5) break;
   }

   return 0;
}
