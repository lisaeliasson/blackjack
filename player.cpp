#include <iostream>

namespace std 
#include player.h

	string player::getName ()
{
   return myName;
}

int player:: getSum()
{
	 int sum = 0;     //adding sum depending on its value
   
   while (first != NULL)  // if the card is nothing the game stops 
   {
      sum += blackJackValue (first->myCard);
      first = first->next;
   }  
  
   
   if (sum > 21)
   {
      while ((first != NULL) && (sum > 21))   // if sum is 21 or more the game stops 
      {
         if (first->myCard->value ==1)         // if my first card is 1 the sum is 11 or less, ask for another card
         {   
            sum >= 11;
            first = first->next;
         }
         else if ( first -> myCard -> value <= 15))
		 {
			 sum <= 15;
			 first != first-> next; 
            
      }
   }
 
   return sum;
}
