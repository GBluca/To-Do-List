//
// Created by gbluc on 05/05/2025.
//

#ifndef TASKMANAGER_H
#define TASKMANAGER_H
#include <iostream>
#include <ostream>
#include <vector>
#include "Task.h"


class TaskManager {

    std::vector<Task> tasks;

public:

    void addTask(const std::string& description) {
        this->tasks.emplace_back(description);
    }

    void listTask() {

        if(!tasks.empty()) {
            for(size_t i=0;i<tasks.size();i++) {
                std::cout << "task n°: " << i+1 << "status: " << tasks[i].isCompleted() ? "done" : "to do" << std::endl
                << "descroption :" << tasks[i].getDescription() ;
            }
        }
    }

    void markTaskCompleted(int index) {
        tasks[index].marlCompleted();
    }

    void removeTask(int index) {
        tasks.erase(tasks.begin() + index);
    }

};



#endif //TASKMANAGER_H
