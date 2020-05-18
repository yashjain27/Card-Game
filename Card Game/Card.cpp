#include "Card.h"

//Constructor
Card::Card(string rank, string suit, bool face){
    this->rank = rank;
    this->suit = suit;
    this->face = face;
}

/// Get the rank of the card
/// @return the rank of the card
string Card::getRank(){
    return rank;
}
    
/// Get the card's suit
/// @return the suit of the card
string Card::getSuit(){
    return suit;
}
    
    
/// Get the boolean value of the card of whether it is a face card
/// @return the boolean value of whether it's a face card
bool Card::getFace(){
    return face;
}

/// Get the full card description
/// @return the rank and suit of the card
string Card::getCard(){
    return (rank + " of " + suit);
}
