//
//  Card.h
//  Card Game
//
//  Created by Yash Jain on 5/17/20.
//  Copyright © 2020 Yash Jain. All rights reserved.
//

#ifndef CARD_H
#define CARD_H
#include <string>
using String = std::string;

class Card{

private:
    std::string _rank;
    std::string _suit;
    bool _face;
    
public:
    //Constructor
    Card(std::string rank, std::string suit, bool face);
    
    /// Get the rank of the card
    /// @return the rank of the card
    String getRank();
    
    /// Get the card's suit
    /// @return the suit of the card
    String getSuit();
    
    
    /// Get the boolean value of the card of whether it is a face card
    /// @return the boolean value of whether it's a face card
    bool getFace();
    
    /// Get the full card description
    /// @return the rank and suit of the card
    String getCard();
    
};

#endif /* Card_h */
