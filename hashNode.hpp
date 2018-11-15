//
//  hashNode.hpp
//  Hashy
//
//  Created by D@ on 11/3/18.
//  Copyright © 2018 Max Luu. All rights reserved.
//

#ifndef hashNode_hpp
#define hashNode_hpp

#include <stdio.h>
#include <string>
#include <time.h>
class hashNode {
    friend class hashMap;
    std::string keyword;
    std::string *values;
    hashNode* next;
    int valuesSize;
    int currSize;
    
public:
    hashNode();
    hashNode(std::string s);
    hashNode(std::string s, std::string v);
    void addValue(std::string v);
    void dblArray();
    std::string getRandValue();
};


#endif /* hashNode_hpp */
