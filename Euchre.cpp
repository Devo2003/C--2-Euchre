#include <algorithm>
#include <chrono>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <iterator>
#include <numeric>
#include <random>
#include <vector>

#include "Player.h"
#include "Card.h"
#include "Deck.h"
//i player interface 

using namespace std;


//void Deck(vector<int> &deck);

//deck of cards
std::vector<int> deck;
std::vector<string> Suit;

vector<Player> players;

//holds teams
std::vector<int> redteam;
std::vector<int> blueteam;


namespace Euchre{


int main()
{
    createCards();

}

void setUpTeams()
{


}

void sumHands(int** x)
{
    //return accumulate(hand.begin(), hand.end(), 0);

}
void dealcard()
{
  //hand.push_back(deck.back());
  //deck.pop_back();
  


}
void showDeck() 
{
  for (int i = 0; i < deck.size(); i++) 
  {
    std::cout << deck[i] << " ";
  }
  std::cout << "\n" << endl;
}

//creates deck
void Deck() 
{
  for (int i = 0; i < 2; i++) 
  {
    for (int c = 1; c < 14; c++) 
    {
      if (c > 9) 
      {
        deck.push_back(10);
      }

      if (c <= 9) 
      {
        deck.push_back(c);
      }
    }
  }
}
}