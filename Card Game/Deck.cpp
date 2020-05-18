//
//  Deck.cpp
//  Card Game
//
//  Created by Yash Jain on 5/17/20.
//  Copyright © 2020 Yash Jain. All rights reserved.
//

#include <iostream>
#include <vector>
#include "Card.cpp"
using namespace std;

class Deck{

private:
    //Pop last element O(1), search O(1) for swapping, Delete last element O(1), Push to tail O(1)
    vector<Card> deck;
    
public:
    //Constructor
    Deck(){
        //Random seed
        srand((unsigned int) time(NULL));
        
        //Build deck
        buildDeck();
    }
    
    ///Shuffle the deck
    void shuffleDeck(){
        for(unsigned  i = 0; i < deck.size(); i++){
            swap(deck.at(i), deck.at(rand() % deck.size()));
        }
    }
    
    /// Draw the top card from the deck
    /// @return the Card object which is on top of the Deck
    Card drawCard(){
        Card cardToReturn = deck.back();
        deck.pop_back();
        return cardToReturn;
    }
    
    ///Build deck
    void buildDeck(){
        //Clear deck if there was one previously
        deck.clear();
        
        //Clubs
        deck.push_back(Card("Ace", "Clubs", false));
        deck.push_back(Card("2", "Clubs", false));
        deck.push_back(Card("3", "Clubs", false));
        deck.push_back(Card("4", "Clubs", false));
        deck.push_back(Card("5", "Clubs", false));
        deck.push_back(Card("6", "Clubs", false));
        deck.push_back(Card("7", "Clubs", false));
        deck.push_back(Card("8", "Clubs", false));
        deck.push_back(Card("9", "Clubs", false));
        deck.push_back(Card("10", "Clubs", false));
        deck.push_back(Card("Jack", "Clubs", true));
        deck.push_back(Card("Queen", "Clubs", true));
        deck.push_back(Card("King", "Clubs", true));
        
        //Diamonds
        deck.push_back(Card("Ace", "Diamonds", false));
        deck.push_back(Card("2", "Diamonds", false));
        deck.push_back(Card("3", "Diamonds", false));
        deck.push_back(Card("4", "Diamonds", false));
        deck.push_back(Card("5", "Diamonds", false));
        deck.push_back(Card("6", "Diamonds", false));
        deck.push_back(Card("7", "Diamonds", false));
        deck.push_back(Card("8", "Diamonds", false));
        deck.push_back(Card("9", "Diamonds", false));
        deck.push_back(Card("10", "Diamonds", false));
        deck.push_back(Card("Jack", "Diamonds", true));
        deck.push_back(Card("Queen", "Diamonds", true));
        deck.push_back(Card("King", "Diamonds", true));
        
        //Hearts
        deck.push_back(Card("Ace", "Hearts", false));
        deck.push_back(Card("2", "Hearts", false));
        deck.push_back(Card("3", "Hearts", false));
        deck.push_back(Card("4", "Hearts", false));
        deck.push_back(Card("5", "Hearts", false));
        deck.push_back(Card("6", "Hearts", false));
        deck.push_back(Card("7", "Hearts", false));
        deck.push_back(Card("8", "Hearts", false));
        deck.push_back(Card("9", "Hearts", false));
        deck.push_back(Card("10", "Hearts", false));
        deck.push_back(Card("Jack", "Hearts", true));
        deck.push_back(Card("Queen", "Hearts", true));
        deck.push_back(Card("King", "Hearts", true));
        
        //Spades
        deck.push_back(Card("Ace", "Spades", false));
        deck.push_back(Card("2", "Spades", false));
        deck.push_back(Card("3", "Spades", false));
        deck.push_back(Card("4", "Spades", false));
        deck.push_back(Card("5", "Spades", false));
        deck.push_back(Card("6", "Spades", false));
        deck.push_back(Card("7", "Spades", false));
        deck.push_back(Card("8", "Spades", false));
        deck.push_back(Card("9", "Spades", false));
        deck.push_back(Card("10", "Spades", false));
        deck.push_back(Card("Jack", "Spades", true));
        deck.push_back(Card("Queen", "Spades", true));
        deck.push_back(Card("King", "Spades", true));
    }
    
    /// Check whether the deck is empty
    /// @return true if the deck is empty, false otherwise
    bool isOver(){
        if(deck.empty()){
            cout << "Deck is over. Please return cards and re-shuffle." << endl;
            return true;
        }else{
            return false;
        }
    }
    
    /// Print the current shuffled deck
    void printDeck(){
        cout << "Shuffled deck: "<< endl;
        for(unsigned  i = 0; i < deck.size(); i++){
            cout << deck.at(i).getCard() << endl;
        }
        cout << "*****************************"<< endl;
    }
};
