#pragma once
#include <iostream>
#include <vector>
#include "Card.h"
#include "string"


//void Deck(vector<int> &deck);
std::vector<Card> cards;
Card c;

//sets up all combination of card types
void createCards()
{

    for (int i = 0; i < Suits->size(); i++)
    {
        for (int j = 0; j < cNames->size(); j++)
        {
          
          std::cout << cNames[j] + " of " +  Suits[i] << std::endl;
          

          //std::cout << "hey" << std::endl;

        }
    }
}
    /*
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {

            Card c;
            c = Card();
            
        
            c.Value = 1;
            c.Suit = (Suits)i;
            //c.cNames = (string)4;

            

            if (c.cNames == "Ace")
            {
                c.Value = 1;
                
            }
            else if (c.cNames == "Jack")
            {
                c.Value = 10;
            }
            else if (c.cNames == "Queen")
            {
                c.Value = 11;
            }
            else if (c.cNames == "King")
            {
                c.Value = 12;
            }
            else
            {
                c.Value = c.cNames;
            }
            std:: cout << c.cNames << "of" << c.Suit << std::endl;
            

            cards.push_back(c);
            

          //std:: cout << "hey" << std::endl;

        }

        
        
        
    }
}
*/
/*

void Deck() 
{
  for (int i = 0; i < 4; i++) 
  {
    for (int c = 1; c < 6; c++) 
    {

      
    }
  }
}
*/
