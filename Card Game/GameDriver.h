//
//  GameDriver.h
//  Card Game
//
//  Created by Yash Jain on 5/18/20.
//  Copyright © 2020 Yash Jain. All rights reserved.
//

#ifndef GameDriver_h
#define GameDriver_h
#include <stdio.h>
#include "Player.h"
#include "Deck.h"

class GameDriver{
private:
    Player player1;
    Player player2;
    Player player3;
    Player player4;
    Player winningPlayer;
    Deck deck;
    bool winner;

public:
    //Constructor
    GameDriver();
    
    /// Deal a round of 4 cards evenly amongst the 4 players
    void deal();
    
    /// Check if game is over
    /// @return a bool indicating whether the game is over or not
    bool gameOver();};

#endif /* GameDriver_h */
