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

        void listTask() const{
            if(!tasks.empty()) {
                for(size_t i = 0; i < tasks.size(); i++) {
                    std::cout << "\nTask #" << i+1
                              << "\nStatus: " << (tasks[i].isCompleted() ? "Done" : "To do")
                              << "\nDescription: " << tasks[i].getDescription()
                              << "\n";  // Aggiunge un newline finale
                }
            } else {
                std::cout << "Nessun task presente!\n";
            }
        }

    bool markTaskCompleted(int index) {
        if(index < 1 || index > tasks.size()) {
            return false;  // Indice non valido
        }
        tasks[index-1].markCompleted();
        return true;  // Operazione riuscita
    }

    bool removeTask(int index) {
        if(index < 0 || index >= tasks.size() + 1 ) {
            return false;
        }
        tasks.erase(tasks.begin() + index - 1 );
        return true;
    }

    size_t taskCount() const {
        return tasks.size();
    }

};



#endif //TASKMANAGER_H
