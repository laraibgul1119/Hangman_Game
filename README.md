
# Hangman Game in C++ 🎮

This repository contains a simple command-line Hangman game implemented in C++. The game allows players to guess letters to uncover a hidden word, with a limited number of attempts.

## Features ✨

*   **Classic Gameplay:** Enjoy the traditional Hangman experience.
*   **Word Categories:** Words are chosen from a predefined list (currently fruits).
*   **Attempt Tracking:** Keep track of remaining guesses.
*   **User-Friendly Interface:** Simple command-line interaction.

## How to Play ▶️

1.  The game will present you with a hidden word, represented by underscores.
2.  You will be prompted to guess a letter.
3.  If the letter is correct, it will be revealed in the word.
4.  If the letter is incorrect, you lose an attempt.
5.  The game ends when you either guess the word correctly or run out of attempts.

## Installation and Setup ⚙️

To compile and run this game, you will need a C++ compiler (e.g., g++).

1.  **Clone the repository:**

    ```bash
    git clone https://github.com/laraibgul1119/Hangman_Game.git
    ```

2.  **Navigate to the project directory:**

    ```bash
    cd Hangman_Game
    ```

3.  **Compile the source code:**

    ```bash
    g++ Game.cpp Hangman.cpp -o HangmanGame
    ```

4.  **Run the game:**

    ```bash
    ./HangmanGame
    ```

## Project Structure 📁

*   `Game.h` / `Game.cpp`: Contains the main game logic and flow.
*   `Hangman.h` / `Hangman.cpp`: Implements the core Hangman game mechanics, including word selection, guess handling, and display.
*   `LICENSE`: MIT License details.
*   `README.md`: This document.

## Contributing 🤝

Feel free to fork this repository, make improvements, and submit pull requests. All contributions are welcome!

## License 📄

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## Contact 📧

For any questions or suggestions, please open an issue on this repository.

