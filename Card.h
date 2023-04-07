#pragma once
#include <vector>
#include <iostream>


enum Suits{Diamonds, Hearts, Spades, Clubs};

//enum cardNames{ Ace, Nine, Ten, Jack, Queen, King };

vector<std::string>cNames{"Ace", "Nine", "Ten", "Jack", "Queen", "King"};

class Card{
public: 

int Value;

Suits Suit;
string cNames;

void _cards(Suits suit, int value, string name)
{
    Value = value;
    Suit = suit;
    cNames = name;

}

};




