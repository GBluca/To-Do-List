# 📝 Task Manager (To-Do List) in C++

Un semplice gestore di task da terminale scritto in C++, che dimostra le mie competenze nella programmazione orientata agli oggetti (OOP) e nella gestione di input utente.

## 🚀 Funzionalità
- **Aggiungi, visualizza, completa e rimuovi task**
- Interfaccia a riga di comando intuitiva
- Salvataggio dello stato dei task (completato/non completato)
- Gestione dinamica della lista con `std::vector`

## 🛠️ Tecnologie e Concetti Chiave
- **C++17**
- **OOP**: Classi (`Task`, `TaskManager`), incapsulamento
- **STL**: `std::vector`, `std::string`
- **Input/Output**: `std::cin`, `std::cout`
- **Gestione della memoria**: Nessuna allocazione dinamica diretta (grazie a STL)

## 📂 Struttura del Codice
```plaintext
.
├── main.cpp             # Punto d'ingresso e loop principale
├── Task.h               # Classe Task (descrizione + stato)
├── TaskManager.h        # Classe per la gestione della lista
└── README.md            # Questo file
