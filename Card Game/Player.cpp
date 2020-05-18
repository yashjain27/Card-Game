//
//  Player.cpp
//  Card Game
//
//  Created by Yash Jain on 5/17/20.
//  Copyright © 2020 Yash Jain. All rights reserved.
//

#include <iostream>
#include <vector>
#include <unordered_map>
#include "Card.cpp"
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
    Player(string name){
        this->name = name;
    }
    
    //Draw a card
    void draw(Card card){
        string cardValue = card.getRank();
        //Check for face card, if found return without proceeding to value card check
        if(card.getFace()){
            faceStack.push_back(card.getCard());
            return;
        }
        
        if(hand.find(cardValue) == hand.end()){
            //New card's rank(value) not found in player's hands. Add it to hashmap
            hand[cardValue] = card.getCard();
        }else{
            //New card's rank already exists. Add it to the valueStack, remove reference from Hashmap
            string similarRank = card.getCard() + " and " + hand.at(cardValue);
            valueStack.push_back(similarRank);
        }
    }
    
    //isWinner
    bool checkWin(){
        if(valueCounter >= 2 && faceCounter >= 2){
            isWinner = true;
        }else{
            isWinner = false;
        }
        return isWinner;
    }
    
    //Return cards back to restart the game
    void restart(){
        //Clear hand as the player has to return cards back to the deck
        hand.clear();
    }
    
    //Print winning combination
    void toPrintWin(){
        if(isWinner){
            string firstCombo = name + ": First combo: " + valueStack.at(0) + " and " + faceStack.at(0);
            string secondCombo = "Second combo: " + valueStack.at(1) + " and " + faceStack.at(1);
            cout << firstCombo << endl;
            cout << secondCombo << endl;
        }
    }
    
};
