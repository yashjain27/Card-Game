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
    
    //Deal
    void deal();
    
    //GameOver
    bool gameOver();};

#endif /* GameDriver_h */
