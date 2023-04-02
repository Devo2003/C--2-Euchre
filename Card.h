#pragma once
#include <iostream>


enum class Suits{Diamonds, Hearts, Spades, Clubs};

enum class cardNames{ Ace, Nine, Ten, Jack, Queen, King };

class Card{
public: 

int value;

Suits suit;
cardNames name;

};




