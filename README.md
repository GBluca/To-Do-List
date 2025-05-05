# 📝 Task Manager in C++ - La mia To-Do List intelligente

Ho creato un gestionale di task da terminale che non solo funziona, ma dimostra come scrivo codice C++ professionale. Ecco cosa sapere:

## 💡 Cosa fa?
- **Aggiungi task**: Scrivi cosa devi fare e il sistema lo memorizza
- **Completa task**: Segnale come fatto con un comando semplice
- **Visualizza tutto**: Vedere la lista completa, con stato aggiornato
- **Elimina**: Rimuovi task che non ti servono più
- **Robustezza**: Gestisce gli errori "come un pro" - se sbagli input, non crasha!

## 🔧 Come l'ho costruito?
### La struttura dietro le quinte
- **Task**: Ogni voce della lista (testo + stato completato/non completato)
- **TaskManager**: Il "cervello" che:
    - Tiene traccia di tutti i task
    - Applica le regole (es. "non puoi completare un task che non esiste")
    - Gestisce gli input sbagliati senza rompersi

### Tecnologie chiave
- **C++ moderno** (standard 17)
- **OOP pulita**: Classi ben definite con responsabilità chiare
- **STL**: Uso intelligente di vector e string per evitare problemi di memoria
- **I/O robusto**: Gestione degli input utente che previene i comportamenti strani

## ✨ Perché è interessante?
- **Codice pulito e documentato**: Facile da leggere e modificare
- **Error handling solido**: Ho pensato a molti casi d'errore
- **Efficiente**: Non spreca risorse anche con tanti task
- **Estensibile**: Pronto per nuove funzionalità

## 💡 Cosa potrei aggiungere?
- Salvataggio automatico su file
- Priorità (alta/media/bassa)
- Scadenze e promemoria
- Interfaccia colorata

Dimostra che so scrivere codice C++ solido, mantenibile e pronto per il mondo reale!

## 🛠️ Architettura e Tecnologie
### Struttura OOP
```plaintext
├── Task                # Modello base (entità)
│   ├── Descrizione
│   └── Stato (completato/non completato)
└── TaskManager         # Controller
    ├── Gestione lista
    ├── Logica operazioni
    └── Validazione input