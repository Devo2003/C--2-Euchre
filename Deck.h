#pragma once
#include <iostream>
#include <vector>
#include "Card.h"


//void Deck(vector<int> &deck);
std::vector<Card> cards;

int main()
{


}

//sets up all combination of card types
void createCards(){
    for (int i = (int)Suits::Diamonds; i <= (int)Suits::Clubs; i++)
    {
        for (int j = (int)cardNames:: Ace; j <= (int)cardNames::King; j++)
        {
            Card c;
            
            c.value = 1;
            c.suit = (Suits)i;
            c.name = (cardNames)j;

            if (c.name == cardNames::Jack)
            {
                c.value = 10;
            }
            else if (c.name == cardNames::Queen)
            {
                c.value = 10;
            }
            else if (c.name == cardNames::King)
            {
                c.value = 10;
            }
            else
            {
                c.value = (int)c.name;

            }
            std:: cout << (int)c.name << "of" << (int)c.suit << std::endl;
            
            
            
        
        }
        
    }
    
}