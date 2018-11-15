//
//  hashMap.hpp
//  Hashy
//
//  Created by D@ on 11/3/18.
//  Copyright © 2018 Max Luu. All rights reserved.
//

#ifndef hashMap_hpp
#define hashMap_hpp

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "hashNode.hpp"

class hashMap {
    friend class makeSeuss;
    hashNode **map;
    std::string first;
    int numKeys;
    int mapSize;
    bool h1;
    bool c1;
    int collisionct1;
    int collisionct2;
    
public:
    hashNode** getMap();
    int getCollisionCt1();
    int getCollisionCt2();
    hashMap(bool hash1, bool coll1);
    void addKeyValue(std::string k, std::string v);
    int calcHash(std::string k);
    int calcHash2(std::string k);
    void getClosestPrime();
    void reHash();
    void collHash1(hashNode* i, hashNode* h);
    void collHash2(int i, hashNode* h);
    int findKey(std::string k);
    int getIndex(std::string k);
    void printMap();
    bool isPrime(int x);
};


#endif /* hashMap_hpp */
