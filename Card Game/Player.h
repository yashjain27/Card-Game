//
//  Player.h
//  Card Game
//
//  Created by Yash Jain on 5/18/20.
//  Copyright © 2020 Yash Jain. All rights reserved.
//

#ifndef Player_h
#define Player_h
#include <iostream>
#include <vector>
#include <unordered_map>
#include "Card.h"
using String = std::string;

class Player{

private:
    String _name;
    bool _isWinner;
    unsigned _valueCounter; //Count number of pairs for same value cards
    unsigned _faceCounter;  //Count number of face cards
    std::vector<String> _valueStack;
    std::vector<String> _faceStack;
    std::unordered_map<String, String> _hand;
    
public:
    //Constructor
    Player(); //Empty Constructor
    
    //Overloaded constructor
    Player(String name);
    
    /// Player to receive a card from the deck
    /// @param card - card received by the player from the deck
    void draw(Card card);
    
    /// Check if player won
    bool checkWin();
    
    /// Return cards back to restart the game
    void restart();
    
    /// Print winning combination
    void toPrintWin();
    
};

#endif /* Player_h */
