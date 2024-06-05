//
//  sidewaysTriangle.h
//  purePuzzles
//
//  Created by Oshan Yelena Ranasinghe on 2024-06-05.
//

#ifndef sidewaysTriangle_h
#define sidewaysTriangle_h
using namespace std;


void sidewaysTriangle(){
    for (int row = 0; row <= 7; row ++) {
        for (int hashNum = 0; hashNum < 4 - abs(4 - row); hashNum ++) {
            cout<<"#";
        }
        cout<<"\n";
    }
}

#endif /* sidewaysTriangle_h */
