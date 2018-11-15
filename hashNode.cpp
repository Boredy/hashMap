//
//  hashNode.cpp
//  Hashy
//
//  Created by D@ on 11/3/18.
//  Copyright © 2018 Max Luu. All rights reserved.
//

#include "hashNode.hpp"
hashNode::hashNode() {
    keyword = "";
    valuesSize = 0;
    currSize = 0;
    values = NULL;
    next = NULL;
}

hashNode::hashNode(std::string s) {
    srand((unsigned)time(NULL));
    keyword = s;
    valuesSize = 100;
    currSize = 0;
    values = new std::string[valuesSize];
    next = NULL;
    
}

hashNode::hashNode(std::string s, std::string v) {
    srand((unsigned)time(NULL));
    keyword = s;
    valuesSize = 100;
    currSize = 1;
    values = new std::string[valuesSize];
    values[0] = v;
    next = NULL;
}

void hashNode::addValue(std::string v) {
    if (currSize == valuesSize) {
        dblArray();
    }
    
    values[currSize] = v;
    currSize++;
}

void hashNode::dblArray() {
    valuesSize = valuesSize * 2;
    std::string* arr = new std::string[valuesSize];
    for (int i = 0; i < valuesSize; i++) {
        values[i] = arr[i];
    }
    values = arr;
    
}

std::string hashNode::getRandValue() {
    if (currSize == 0) {
        return "";
    } else {
        int i;
        do {
            i = rand() % currSize;
        } while (values[i] == "");
        return values[i];
    }
}
