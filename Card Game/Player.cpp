//
//  Player.cpp
//  Card Game
//
//  Created by Yash Jain on 5/17/20.
//  Copyright © 2020 Yash Jain. All rights reserved.
//
#include "Player.h"

//Constructor
Player::Player(){}; //Empty Constructor

//Overloaded constructor
Player::Player(String name):_isWinner(false), _valueCounter(0), _faceCounter(0),_name(name){}

/// Player to receive a card from the deck
/// @param card - card received by the player from the deck
void Player::draw(Card card){
    std::cout << _name << " has received " << card.getCard() << std::endl;
    String cardValue = card.getRank();
    //Check for face card, if found return without proceeding to value card check
    if(card.getFace()){
        _faceCounter++;
        _faceStack.push_back(card.getCard());
        return;
    }
    
    if(_hand.find(cardValue) == _hand.end()){
        //New card's rank(value) not found in player's hands. Add it to hashmap
        _hand[cardValue] = card.getCard();
    }else{
        //New card's rank already exists. Add it to the valueStack, remove reference from Hashmap
        String similarRank = card.getCard() + " and " + _hand.at(cardValue);
        _valueCounter++;
        _valueStack.push_back(similarRank);
        _hand.erase(cardValue);
    }
}

/// Check if player won
bool Player::checkWin(){
    if(_valueCounter >= 2 && _faceCounter >= 2){
        _isWinner = true;
    }else{
        _isWinner = false;
    }
    return _isWinner;
}

/// Return cards back to restart the game
void Player::restart(){
    //Clear hand as the player has to return cards back to the deck
    _hand.clear();
}

/// Print winning combination
void Player::toPrintWin(){
    if(_isWinner){
        String firstCombo = _name + " won! First combo: " + _valueStack.at(0) + " and " + _faceStack.at(0);
        String secondCombo = "Second combo: " + _valueStack.at(1) + " and " + _faceStack.at(1);
        std::cout << firstCombo << std::endl;
        std::cout << secondCombo << std::endl;
    }
}


