#include "Card.h"

//Constructor
Card::Card(std::string rank, std::string suit, bool face):_rank(rank),_suit(suit),_face(face){}

/// Get the rank of the card
/// @return the rank of the card
String Card::getRank(){
    return _rank;
}
    
/// Get the card's suit
/// @return the suit of the card
String Card::getSuit(){
    return _suit;
}
    
    
/// Get the boolean value of the card of whether it is a face card
/// @return the boolean value of whether it's a face card
bool Card::getFace(){
    return _face;
}

/// Get the full card description
/// @return the rank and suit of the card
String Card::getCard(){
    return (_rank + " of " + _suit);
}
