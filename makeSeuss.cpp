//
//  makeSeuss.cpp
//  Hashy
//
//  Created by D@ on 11/3/18.
//  Copyright © 2018 Max Luu. All rights reserved.
//

#include "makeSeuss.hpp"
makeSeuss::makeSeuss(std::string f1, std::string f2, bool h1, bool c1) {
    ht = new hashMap(h1,c1);
    newfile = f2;
    fn = f1;
    readFile();
    writeFile();
}

void makeSeuss::readFile() {
    std::ifstream infile(fn.c_str(),std::ios::in); //open file
    std::string key = "";
    std::string value = "";
    infile>>key;
    ht->first = key;
    while (infile >> value) {
        std::cout<<key<<": "<<value<<std::endl;
        ht->addKeyValue(key,value);
        key = value;
        value = "";
    }
    ht->addKeyValue(key,value);
    std::cout<<std::endl;
    infile.close();
    std::cout<<"collision 1: "<<ht->getCollisionCt1()<<"\n";
    std::cout<<"collision 2: "<<ht->getCollisionCt2()<<"\n";
}
void makeSeuss::writeFile() {
    std::ofstream outfile(newfile.c_str(),std::ios::out);
    
    outfile<<ht->first<<" ";
    std::string key = "";
    std::string value = ht->map[ht->getIndex(ht->first)]->getRandValue();
    int ct = 0;
    int len = 0;
    while (ct < 500 && value != "") {
        key = value;
        outfile<<key<<" ";
        if (len == 11) {
            outfile << "\n";
            len = 0;
        }
        
        else len++;
        value = ht->map[ht->getIndex(key)]->getRandValue();
        ct++;
        
    }
    outfile.close();
}

hashMap* makeSeuss::getHashMap() {
    return ht;
}
