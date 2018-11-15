//
//  main.cpp
//  Hashy
//
//  Created by D@ on 11/3/18.
//  Copyright © 2018 Max Luu. All rights reserved.
//

#include <iostream>
#include "hashNode.hpp"
#include "hashMap.hpp"
#include "makeSeuss.hpp"
#include <string>
int main(int argc, const char* argv[]) {
    makeSeuss* book = new makeSeuss("DrSeuss.txt", "Seuss.txt", true, false);
    book->getHashMap()->printMap();
    delete book;
    return 0;
}
