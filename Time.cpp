//
//  Time.cpp
//  obj and classes
//
//  Created by Chris Becker on 4/7/17.
//  Copyright © 2017 Chris Becker. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <iomanip>
#include "Header.h"

using namespace std;

Time::Time(){
    
    //setting up the variables of the time object
    hour = 0;
    minute = 0;
    second = 0;
    
}

Time::Time(int h, int m, int s){
    //sets the hour minute and second with some initial values
    setHour(h);
    setMinute(m);
    setSecond(s);

}
void Time::setHour(int h){
    //calidates hour input else puts it to 0
    if(h >= 0 && h <= 23){
        hour = h;
    }
    else {
        hour = 0;
    }

}

void Time::setMinute(int m){
    //validates minute input else 0
    if(m >= 0 && m <=59){
        minute = m;
    }
    else{
        minute = 0;
    }
}

void Time::setSecond(int s){
    //validates second input else 0
    if(s >= 0 && s <=59){
        second = s;
    }
    else{
        second = 0;
    }

}

void Time::print(){
    
    //the printing of hour will be set to 2 char spaces if one is empty a 0 takes its place
    cout<<setfill('0') <<setw(2)
    //if hour equals zero or 12 print 12 else print hour mod 12
    <<((hour == 0 || hour == 12) ? 12 : hour % 12)
    
    //prints out the minute and second in 2 char spaces (still has set fill of 0
    <<":" <<setw(2) <<minute <<":" <<setw(2) <<second
    
    //if hour is less than 12 print am else pm
    <<(hour < 12 ? " am" : " pm");
   
    
}

void Time::printMilitary(){
    //same set fill and set w stuff for just hour and minute
    cout<< setfill('0') << setw(2) << hour <<setw(2) << minute ;
}

void Time::setTime(int h, int m, int s){
    
    //lets you call the setTime function to change the time
    
    setHour(h);
    setMinute(m);
    setSecond(s);
  
}

int Time::getHour(){
    return hour;
}

int Time::getMinute(){
    return minute;
}

int Time::getSecond(){
    return second;
}


