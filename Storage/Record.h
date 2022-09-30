//
// Created by Jerome Chew on 26/9/22.
//

#ifndef RECORD_H
#define RECORD_H


class Record {
    bool isDeleted;

public:
    Record(char tconst[10], float averageRating, int numVotes);

    Record();

    void displayRecord();
    char getTconst();
    float getAverageRating();
    int getNumVotes();
    bool getIsDeleted();
    bool setIsDeleted(bool del);

    char tconst[10];
    float averageRating;
    int numVotes;
};


#endif