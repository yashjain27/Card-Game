//
//  GameDriver.cpp
//  Card Game
//
//  Created by Yash Jain on 5/17/20.
//  Copyright © 2020 Yash Jain. All rights reserved.
//


#include "GameDriver.h"

//Constructor
GameDriver::GameDriver(): _player1("Player 1"), _player2("Player 2"), _player3("Player 3"), _player4("Player 4"){
    //Shuffle deck
    _deck.shuffleDeck();
    
    //Print shuffled deck
    _deck.printDeck();
    
    std::cout << "Let the game begin!" << std::endl << std::endl;
}

/// Deal a round of 4 cards evenly amongst the 4 players
void GameDriver::deal(){
    //Player 1
    _player1.draw(_deck.drawCard());
    if((_winner = _player1.checkWin()) == true){
        //Player 1 has won declare victory and show the winning combinations
        _player1.toPrintWin();
        return;
    }
    
    //Player 2
    _player2.draw(_deck.drawCard());
    if((_winner = _player2.checkWin()) == true){
        //Player 2 has won declare victory and show the winning combinations
        _player2.toPrintWin();
        return;
    }
    
    //Player 3
    _player3.draw(_deck.drawCard());
    if((_winner = _player3.checkWin()) == true){
        //Player 3 has won declare victory and show the winning combinations
        _player3.toPrintWin();
        return;
    }
    
    //Player 4
    _player4.draw(_deck.drawCard());
    if((_winner = _player4.checkWin()) == true){
        //Player 4 has won declare victory and show the winning combinations
        _player4.toPrintWin();
        return;
    }
    
    
    std::cout << std::endl;
    
    //Check if deck is empty, if empty, players should return cards and deck should be reshuffled
    if(_deck.isOver()){
        _deck.buildDeck();
        _deck.shuffleDeck();
        _deck.printDeck();
    }
}

/// Check if game is over
/// @return a bool indicating whether the game is over or not
bool GameDriver::gameOver(){
    return _winner;
}

