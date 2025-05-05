#include <iostream>
#include <limits>
#include "TaskManager.h"

void clearInputBuffer() {
    std::cin.clear(); //reset stato errore dello stream
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //pulizia stream fino al carattere /n
}

int main() {
    TaskManager manager;
    int choice;

    while(true) {
        std::cout << "1. Aggiungi task\n"
                  << "2. Completa task\n"
                  << "3. Mostra task\n"
                  << "4. Rimuovi task\n"
                  << "5. Esci\n\n"
                  << "Scelta: ";

        // Controllo input menu principale
        if(!(std::cin >> choice)) {
            std::cout << "Input non valido! Inserisci un numero.\n";
            clearInputBuffer();
            continue;
        }

        switch(choice) {
            case 1: { // ADD_TASK
                std::string desc;
                std::cout << "\nDescrizione task: ";
                clearInputBuffer();  // Pulisce il buffer prima di getline
                std::getline(std::cin, desc);

                if(desc.empty()) {
                    std::cout << "Descrizione vuota non ammessa!\n";
                    break;
                }

                manager.addTask(desc);
                break;
            }

            case 2: { // COMPLETE_TASK
                if(manager.taskCount() == 0) {
                    std::cout << "Nessun task presente!\n";
                    break;
                }

                manager.listTask();
                int index;
                std::cout << "\nIndice del task da completare: ";

                if(!(std::cin >> index)) {
                    std::cout << "Indice non valido!\n";
                    clearInputBuffer();
                    break;
                }

                if(!manager.markTaskCompleted(index)) {
                    std::cout << "Indice fuori range!\n";
                }
                break;
            }

            case 3: { // SHOW_TASKS
                manager.listTask();
                break;
            }

            case 4: { // REMOVE_TASK
                if(manager.taskCount() == 0) {
                    std::cout << "Nessun task presente!\n";
                    break;
                }

                manager.listTask();
                int index;
                std::cout << "\nIndice del task da rimuovere: ";

                if(!(std::cin >> index)) {
                    std::cout << "Indice non valido!\n";
                    clearInputBuffer();
                    break;
                }

                if(!manager.removeTask(index)) {
                    std::cout << "Indice fuori range!\n";
                }
                break;
            }

            case 5: { // EXIT
                std::cout << "Arrivederci!\n";
                return 0;
            }

            default:
                std::cout << "Scelta non valida!\n";
                clearInputBuffer();
        }

        std::cout << "\n";
    }
}