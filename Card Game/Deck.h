//
//  Deck.h
//  Card Game
//
//  Created by Yash Jain on 5/18/20.
//  Copyright © 2020 Yash Jain. All rights reserved.
//

#ifndef DECK_H
#define DECK_H
#include <iostream>
#include <vector>
#include "Card.h"
using namespace std;

class Deck{

private:
    //Pop last element O(1), search O(1) for swapping, Delete last element O(1), Push to tail O(1)
    vector<Card> deck;
    
public:
    //Constructor
    Deck();
    
    ///Shuffle the deck
    void shuffleDeck();
    
    /// Draw the top card from the deck
    /// @return the Card object which is on top of the Deck
    Card drawCard();
    
    ///Build deck
    void buildDeck();
    
    /// Check whether the deck is empty
    /// @return true if the deck is empty, false otherwise
    bool isOver();
    
    /// Print the current shuffled deck
    void printDeck();
};


#endif /* Deck_h */
