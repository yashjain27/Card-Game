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
Player::Player(string name):isWinner(false), valueCounter(0), faceCounter(0){
    this->name = name;
}

//Draw a card
void Player::draw(Card card){
    cout << name << " has received " << card.getCard() << endl;
    string cardValue = card.getRank();
    //Check for face card, if found return without proceeding to value card check
    if(card.getFace()){
        faceCounter++;
        faceStack.push_back(card.getCard());
        return;
    }
    
    if(hand.find(cardValue) == hand.end()){
        //New card's rank(value) not found in player's hands. Add it to hashmap
        hand[cardValue] = card.getCard();
    }else{
        //New card's rank already exists. Add it to the valueStack, remove reference from Hashmap
        string similarRank = card.getCard() + " and " + hand.at(cardValue);
        valueCounter++;
        valueStack.push_back(similarRank);
        hand.erase(cardValue);
    }
}

//isWinner
bool Player::checkWin(){
    if(valueCounter >= 2 && faceCounter >= 2){
        isWinner = true;
    }else{
        isWinner = false;
    }
    return isWinner;
}

//Return cards back to restart the game
void Player::restart(){
    //Clear hand as the player has to return cards back to the deck
    hand.clear();
}

//Print winning combination
void Player::toPrintWin(){
    if(isWinner){
        string firstCombo = name + " won! First combo: " + valueStack.at(0) + " and " + faceStack.at(0);
        string secondCombo = "Second combo: " + valueStack.at(1) + " and " + faceStack.at(1);
        cout << firstCombo << endl;
        cout << secondCombo << endl;
    }
}


