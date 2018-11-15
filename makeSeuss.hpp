//
//  makeSeuss.hpp
//  Hashy
//
//  Created by D@ on 11/3/18.
//  Copyright © 2018 Max Luu. All rights reserved.
//

#ifndef makeSeuss_hpp
#define makeSeuss_hpp

#include "hashMap.hpp"
#include <iostream>
#include <fstream>
class makeSeuss {
    hashMap *ht;
    std::string fn;
    std::string newfile;
public:
    hashMap* getHashMap();
    makeSeuss(std::string file, std::string newf, bool h1, bool c1);
    void readFile();
    void writeFile();
    
};
#endif /* makeSeuss_hpp */
