//
//  GameDriver.cpp
//  Card Game
//
//  Created by Yash Jain on 5/17/20.
//  Copyright © 2020 Yash Jain. All rights reserved.
//

#include <stdio.h>
#include "Player.cpp"
#include "Deck.cpp"

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
    GameDriver(): player1("Player 1"), player2("Player 2"), player3("Player 3"), player4("Player 4"){
        //Shuffle deck
        deck.shuffleDeck();
        
        //Print shuffled deck
        deck.printDeck();
    }
    
    //Deal
    void deal(){
        //Player 1
        player1.draw(deck.drawCard());
        
        //Player 2
        
        
        //Player 3
        
        
        //Player 4
    }
    
    //GameOver
    bool gameOver(){
        return false;
    }
};
