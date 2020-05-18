//
//  Deck.cpp
//  Card Game
//
//  Created by Yash Jain on 5/17/20.
//  Copyright © 2020 Yash Jain. All rights reserved.
//

#include "Deck.h"


    //Constructor
Deck::Deck(){
    //Random seed
    srand((unsigned int) time(NULL));
    
    //Build deck
    buildDeck();
}

///Shuffle the deck
void Deck::shuffleDeck(){
    for(unsigned  i = 0; i < _deck.size(); i++){
        std::swap(_deck.at(i), _deck.at(rand() % _deck.size()));
    }
}

/// Draw the top card from the deck
/// @return the Card object which is on top of the Deck
Card Deck::drawCard(){
    Card cardToReturn = _deck.back();
    _deck.pop_back();
    return cardToReturn;
}

///Build deck
void Deck::buildDeck(){
    //Clear deck if there was one previously
    _deck.clear();
    
    //Clubs
    _deck.push_back(Card("Ace", "Clubs", false));
    _deck.push_back(Card("2", "Clubs", false));
    _deck.push_back(Card("3", "Clubs", false));
    _deck.push_back(Card("4", "Clubs", false));
    _deck.push_back(Card("5", "Clubs", false));
    _deck.push_back(Card("6", "Clubs", false));
    _deck.push_back(Card("7", "Clubs", false));
    _deck.push_back(Card("8", "Clubs", false));
    _deck.push_back(Card("9", "Clubs", false));
    _deck.push_back(Card("10", "Clubs", false));
    _deck.push_back(Card("Jack", "Clubs", true));
    _deck.push_back(Card("Queen", "Clubs", true));
    _deck.push_back(Card("King", "Clubs", true));
    
    //Diamonds
    _deck.push_back(Card("Ace", "Diamonds", false));
    _deck.push_back(Card("2", "Diamonds", false));
    _deck.push_back(Card("3", "Diamonds", false));
    _deck.push_back(Card("4", "Diamonds", false));
    _deck.push_back(Card("5", "Diamonds", false));
    _deck.push_back(Card("6", "Diamonds", false));
    _deck.push_back(Card("7", "Diamonds", false));
    _deck.push_back(Card("8", "Diamonds", false));
    _deck.push_back(Card("9", "Diamonds", false));
    _deck.push_back(Card("10", "Diamonds", false));
    _deck.push_back(Card("Jack", "Diamonds", true));
    _deck.push_back(Card("Queen", "Diamonds", true));
    _deck.push_back(Card("King", "Diamonds", true));
    
    //Hearts
    _deck.push_back(Card("Ace", "Hearts", false));
    _deck.push_back(Card("2", "Hearts", false));
    _deck.push_back(Card("3", "Hearts", false));
    _deck.push_back(Card("4", "Hearts", false));
    _deck.push_back(Card("5", "Hearts", false));
    _deck.push_back(Card("6", "Hearts", false));
    _deck.push_back(Card("7", "Hearts", false));
    _deck.push_back(Card("8", "Hearts", false));
    _deck.push_back(Card("9", "Hearts", false));
    _deck.push_back(Card("10", "Hearts", false));
    _deck.push_back(Card("Jack", "Hearts", true));
    _deck.push_back(Card("Queen", "Hearts", true));
    _deck.push_back(Card("King", "Hearts", true));
    
    //Spades
    _deck.push_back(Card("Ace", "Spades", false));
    _deck.push_back(Card("2", "Spades", false));
    _deck.push_back(Card("3", "Spades", false));
    _deck.push_back(Card("4", "Spades", false));
    _deck.push_back(Card("5", "Spades", false));
    _deck.push_back(Card("6", "Spades", false));
    _deck.push_back(Card("7", "Spades", false));
    _deck.push_back(Card("8", "Spades", false));
    _deck.push_back(Card("9", "Spades", false));
    _deck.push_back(Card("10", "Spades", false));
    _deck.push_back(Card("Jack", "Spades", true));
    _deck.push_back(Card("Queen", "Spades", true));
    _deck.push_back(Card("King", "Spades", true));
}

/// Check whether the deck is empty
/// @return true if the deck is empty, false otherwise
bool Deck::isOver(){
    if(_deck.empty()){
        std::cout << "Deck is over. Please return cards and re-shuffle." << std::endl;
        return true;
    }else{
        return false;
    }
}

/// Print the current shuffled deck
void Deck::printDeck(){
    std::cout << "Shuffled deck: "<< std::endl;
    for(unsigned  i = 0; i < _deck.size(); i++){
        std::cout << _deck.at(i).getCard() << std::endl;
    }
    std::cout << "*****************************"<< std::endl;
}
