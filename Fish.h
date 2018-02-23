/* 
 * File:   Fish.h
 * Author: rasu
 *
 * Created on February 12, 2018, 12:14 PM
 */

#ifndef FISH_H
#define FISH_H

#include <iostream>
#include <string>

class Fish: public Pet{
protected:
    string WaterType;
    
public:
    //constructors
    Fish(){
        Name = "n/a";
        Type = "unknown";
        Weight = 0;
        Price = 0;
        WaterType = true;
    }
    Fish(string newName, string newType, unsigned int newWeight, double newPrice, string newWaterType){
        Name = newName;
        Type = newType;
        Weight = newWeight;
        Price = newPrice;
        WaterType = newWaterType;
    }
    Fish(const Fish& baseFish){
        if (this != &baseFish){
            Name = baseFish.Name;
            Type = baseFish.Type;
            Weight = baseFish.Weight;
            Price = baseFish.Price;
            WaterType = baseFish.WaterType;
        }
    }
    Fish& operator=(const Fish& baseFish){
        if (this != &baseFish){
            Name = baseFish.Name;
            Type = baseFish.Type;
            Weight = baseFish.Weight;
            Price = baseFish.Price;
            WaterType = baseFish.WaterType;
        }
        return *this;
    }
    //destructor
    virtual ~Fish(){}
    
    //print
    void print(){
        printf("%-20s", "cat");
        printf("meow");
    }
};

#endif /* FISH_H */

