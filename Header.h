//
//  Header.h
//  obj and classes
//
//  Created by Chris Becker on 4/7/17.
//  Copyright © 2017 Chris Becker. All rights reserved.
//

#ifndef Header_h
#define Header_h

class Time{
    
private:
    
    int hour;
    int minute;
    int second;
    
public:
    
    Time();//default constructor
    Time(int h, int m = 0, int s = 0);
    
    //various printing methods
    void print();
    void printMilitary();
    
    //individually set variables
    void setHour(int h);
    void setMinute(int m);
    void setSecond(int s);
    void setTime(int h, int m , int s ); //setting all 3 variables
    
    //get individual variables
    int getHour(); 
    int getMinute();
    int getSecond();
    
    
};

#endif /* Header_h */
