//
//  main.cpp
//  obj and classes
//  main program
//  Created by Chris Becker on 4/6/17.
//  Copyright © 2017 Chris Becker. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include "Header.h"

using namespace std;

int main() {
    
    Time lunch(12,14); //just 2 variables
    Time Breakfast(88,30,00); //time object with all 3 variables
    
    
    Breakfast.setHour(8); //setting hour
    Breakfast.setMinute(45); //minute
    Breakfast.setSecond(02); //second
    
    Breakfast.getHour(); cout<<endl; //can get all individual hours
    
    Breakfast.print(); cout<<endl; //prints the whole thing out
    
    Breakfast.printMilitary(); cout<< endl; //prints the military time
    
    lunch.print(); cout<<endl; //printing the object that was initialized with just hour and minute
    
    
}
