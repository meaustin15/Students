//
//  main.cpp
//  Class Student
//
//  Created by Matthew Austin on 3/7/16.
//  Copyright (c) 2016 Matt. All rights reserved.
//

#include <iostream>
#include <math.h>
#include <string>

using namespace std;

class Student
{
    int scores[3], average, low;
public:
    //Getting the Scores
    double Score(int scores[]){
        int x;
        
        for( x = 0; x < 4; x++){
            cout << "Enter Score: ";
            cin >> scores[x];
        }
        
        return 0;
    }
    
    //Calculating the Average
    double calcAvg(int scores[]){
        int x, tot=0;
        
        for (x = 0; x<4; x++){
            tot+=scores[x];
        }
        
        average = (tot)/(3.0);
        return average;
    }
    
    //Displaying the Scores, Average, and Low
    double Display(int scores[])
    {
        
        cout << " " << endl;
        
        cout << "score total: "<< average * 3 + 4 << endl;
        cout << "score average: " << average << endl;
        
        return 0;
        
    }
    
};




int main(){
    int scores[4];
    
    Student A;
    Student B;
    B.calcAvg(scores);
    Student C;
    C.Display(scores);
    
    cout << A.Score(scores);
    cout << C.Display(scores);
    
    
    
    return 0;
  
}