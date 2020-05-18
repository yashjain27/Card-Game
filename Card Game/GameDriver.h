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
    Player _player1;
    Player _player2;
    Player _player3;
    Player _player4;
    Player _winningPlayer;
    Deck _deck;
    bool _winner;

public:
    //Constructor
    GameDriver();
    
    /// Deal a round of 4 cards evenly amongst the 4 players
    void deal();
    
    /// Check if game is over
    /// @return a bool indicating whether the game is over or not
    bool gameOver();};

#endif /* GameDriver_h */
