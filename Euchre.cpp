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
#define SCORE 10

#include "Player.h"
#include "Card.h"
#include "Deck.h"
//i player interface 

using namespace std;


//void Deck(vector<int> &deck);

//deck of cards
vector<int> deck;

vector<Player> players;

//holds players teams
vector<Player> teamOne;
vector<int> teamTwo;







int main()
{
    createCards();
    return 0;
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
void Shuffle(vector<int> &deck) 
{

  std::random_shuffle(deck.begin(), deck.end());
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
