//
//  halfOfSquare.hpp
//  purePuzzles
//
//  Created by Oshan Yelena Ranasinghe on 2024-06-05.
//

#ifndef halfOfSquare_hpp
#define halfOfSquare_hpp

#include <stdio.h>
using namespace std;

void lineOfSquare(){
    for(int hashNum = 0; hashNum < 5; hashNum ++){
        cout << "#";
    }
    cout << "\n";
}

// half of square reduction - 5x5 square
void fiveByFiveSquare(){
    for (int hashLine = 0; hashLine < 5; hashLine ++) {
        for (int hashNum = 0; hashNum < 5; hashNum ++) {
            cout<< "#";
        }
        cout<< "\n";
    }

}

// count down by counting up

void countDown(){
    for(int row = 0; row < 5; row ++){
        cout << 5-row << "\n";
    }
}

// final desired function
void halfOfSquare(){
    for (int row = 0; row < 5; row ++) {
        for(int hashNum = 0; hashNum < 5 - row; hashNum ++){
            cout<< "#";
        }
        cout << "\n";
    }

}




#endif /* halfOfSquare_hpp */
