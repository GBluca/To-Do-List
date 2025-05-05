//
// Created by gbluc on 05/05/2025.
//

#ifndef TASK_H
#define TASK_H
#include <string>


class Task {

    std::string description;
    bool completed;

public:

    Task() {
        completed = false;
    }

    explicit Task(const std::string &description) {
        this->description += description;
        completed = false;
    }

    void markCompleted() {
        completed = true;
    }

    std::string getDescription() const {
        return  this->description;
    }

    bool isCompleted() const {
        return completed;
    }




};



#endif //TASK_H
