//
//  GameDriver.cpp
//  Card Game
//
//  Created by Yash Jain on 5/17/20.
//  Copyright © 2020 Yash Jain. All rights reserved.
//


#include "GameDriver.h"

//Constructor
GameDriver::GameDriver(): player1("Player 1"), player2("Player 2"), player3("Player 3"), player4("Player 4"){
    //Shuffle deck
    deck.shuffleDeck();
    
    //Print shuffled deck
    deck.printDeck();
}

//Deal
void GameDriver::deal(){
    //Player 1
    player1.draw(deck.drawCard());
    if((winner = player1.checkWin()) == true){
        //Player 1 has won declare victory and show the winning combinations
        player1.toPrintWin();
        return;
    }
    
    //Player 2
    player2.draw(deck.drawCard());
    if((winner = player2.checkWin()) == true){
        //Player 2 has won declare victory and show the winning combinations
        player2.toPrintWin();
        return;
    }
    
    //Player 3
    player3.draw(deck.drawCard());
    if((winner = player3.checkWin()) == true){
        //Player 3 has won declare victory and show the winning combinations
        player3.toPrintWin();
        return;
    }
    
    //Player 4
    player4.draw(deck.drawCard());
    if((winner = player4.checkWin()) == true){
        //Player 4 has won declare victory and show the winning combinations
        player4.toPrintWin();
        return;
    }
    
    
    cout << endl;
    
    //Check if deck is empty, if empty, players should return cards and deck should be reshuffled
    if(deck.isOver()){
        deck.buildDeck();
        deck.shuffleDeck();
        deck.printDeck();
    }
}

//GameOver
bool GameDriver::gameOver(){
    return winner;
}

