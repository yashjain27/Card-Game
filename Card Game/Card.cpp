//
//  Card.cpp
//  Card Game
//
//  Created by Yash Jain on 5/17/20.
//  Copyright © 2020 Yash Jain. All rights reserved.
//

#include <stdio.h>
#include <string>
using namespace std;

class Card{

private:
    string rank;
    string suit;
    bool face;
    
public:
    //Constructor
    Card(string rank, string suit, bool face){
        this->rank = rank;
        this->suit = suit;
        this->face = face;
    }
    
    /// Get the rank of the card
    /// @return the rank of the card
    string getRank(){
        return rank;
    }
    
    /// Get the card's suit
    /// @return the suit of the card
    string getSuit(){
        return suit;
    }
    
    
    /// Get the boolean value of the card of whether it is a face card
    /// @return the boolean value of whether it's a face card
    bool getFace(){
        return face;
    }
    
    /// Get the full card description
    /// @return the rank and suit of the card
    string getCard(){
        return (rank + " of " + suit);
    }
    
};
