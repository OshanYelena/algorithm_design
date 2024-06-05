//
//  luhunChecksumValidator.h
//  purePuzzles
//
//  Created by Oshan Yelena Ranasinghe on 2024-06-05.
//

#ifndef luhunChecksumValidator_h
#define luhunChecksumValidator_h
using namespace std;



int doubleDigitValue(int digit){
    int doubledDigit = digit * 2;
    int sum;
    if(doubledDigit >= 10) sum = 1 + doubledDigit % 10;
    else sum = doubledDigit;
    return digit;
}

void charDigitToInt(){
    int digit;
    cout<<"Enter a digit number: ";
    cin>> digit;
    int sum = digit - 0;
    cout<<"Is this sum of digits " << sum << "? \n";
}


void simpleChecksumFixedLength(){
    char digit;
    int checksum = 0;
    cout<< "Enter a six-digit number: ";
    for(int position = 1; position < 7; position ++){
        cin>> digit;
        checksum += digit - '0';
        
    }
    cout << "Checksum is " << checksum << ". \n";
    if(checksum % 10 == 0){
        cout << "checksum is divisible by 10. Valid. \n";
    } else {
        cout << "Checksum is not divisible by 10. Invalid. \n";
    }
}



void luhunChecksumFixedLength(){
    char digit;
    int checksum = 0;
    cout<< "Enter a six-digit number: ";
    for(int position = 1; position < 7; position ++){
        cin>> digit;
        if(position % 2 == 0){
            checksum += digit - '0';
        } else {
            checksum += doubleDigitValue(digit - '0');
        }
        
    }
    cout << "Checksum is " << checksum << ". \n";
    if(checksum % 10 == 0){
        cout << "checksum is divisible by 10. Valid. \n";
    } else {
        cout << "Checksum is not divisible by 10. Invalid. \n";
    }
}



void luhunChecksumDynamicLength(){
    char digit;
    int checksum = 0;
    int position = 1;
    
    cout<< "Enter a number with an even number of digits: ";
    digit = cin.get();
    while(digit != 10){
        if(position % 2 == 0){
            checksum += digit - '0';
        } else {
            checksum += doubleDigitValue(digit - '0');
            digit = cin.get();
            position++;
        }
    }

    cout << "Checksum is " << checksum << ". \n";
    if(checksum % 10 == 0){
        cout << "checksum is divisible by 10. Valid. \n";
    } else {
        cout << "Checksum is not divisible by 10. Invalid. \n";
    }
}


void luhunChecksumValidator(){
    char digit;
    int oddLengthChecksum = 0;
    int evenLenghtCheksum = 0;
    int position = 1;
    
    cout << "Enter a Number: ";
    digit = cin.get();
    while(digit != 10){
        if(position % 2 == 0){
            oddLengthChecksum += doubleDigitValue(digit - '0');
            evenLenghtCheksum += digit - '0';
        } else {
            evenLenghtCheksum += doubleDigitValue(digit - '0');
            oddLengthChecksum += digit - '0';
        }
        digit = cin.get();
        position++;
    }
    int checksum;
    if((position - 1) % 2 == 0) checksum = evenLenghtCheksum;
    else checksum = oddLengthChecksum;
    cout << "Checksum is: " << checksum << ". \n";
    if(checksum % 10 == 0){
        cout << "Checksum is divisible by 10. Valid. \n";
    } else {
        cout << "Checksum is not divisible by 10. Invalid. \n";
    }
}




#endif /* luhunChecksumValidator_h */
