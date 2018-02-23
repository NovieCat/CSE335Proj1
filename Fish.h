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
using namespace std;
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
    virtual void print() const {
        printf("%-7s" , "Name:");
        printf("%-8s" , Name);
        printf(" ");
        printf("%-7s" , "Type:");
        printf("%-10s" , Type);
        printf("%-8s" , "Weight:");
        printf("%-3i" , (int)Weight);
        printf("%-6s", "Price: ");
        printf("%-7F", Price);
        printf("%-10s", "WaterType:");
        printf("%-9s", WaterType);
    }
    
    //get/set fluffy
    string GetWaterType(){
        return WaterType;
    }
    
    void SetWaterType(bool newWaterType){
        WaterType = newWaterType;
    }
};

#endif /* FISH_H */

