//
// Created by Jerome Chew on 26/9/22.
//

#ifndef BLOCK_H
#define BLOCK_H
#include "Record.h"
#include <iostream>
#include <vector>

using namespace std;

class Block
{
    int maxRecords;
    int curRecords;
    vector<Record> records;

public:
    Block();
    Block(int blockSize);
    void displayBlock();
    int insertRecord(Record record);
    bool deleteRecord(int offset);
    bool getAvailableSpace();

    Record *getRecord(int offset);
};

#endif