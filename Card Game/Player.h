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
using namespace std;

class Player{

private:
    string name;
    bool isWinner;
    unsigned valueCounter; //Count number of pairs for same value cards
    unsigned faceCounter;  //Count number of face cards
    vector<string> valueStack;
    vector<string> faceStack;
    unordered_map<string, string> hand;
    
public:
    //Constructor
    Player(); //Empty Constructor
    
    //Overloaded constructor
    Player(string name);
    
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
