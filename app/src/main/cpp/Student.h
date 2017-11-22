//
// Created by android on 2017/11/22.
//

#ifndef NDKDEMO_STUDENT_H
#define NDKDEMO_STUDENT_H


#include <string>

class Student {

private:
    std::string name;
    int age;

public:
    std::string getName();
    void setName(std::string name);
};


#endif //NDKDEMO_STUDENT_H
