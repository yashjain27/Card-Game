//
//  main.cpp
//  Card Game
//
//  Created by Yash Jain on 5/16/20.
//  Copyright © 2020 Yash Jain. All rights reserved.
//

#include <iostream>
#include "GameDriver.cpp"
using namespace std;

int main(int argc, const char * argv[]) {
    GameDriver gameDriver = GameDriver();
    
    while(!gameDriver.gameOver()){}
    
    return 0;
}
