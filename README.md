# 🎯 Number Guessing Game

A simple, interactive Number Guessing Game built using C++. The program generates a random number between 1 and 100, and the player tries to guess it using hints provided by the game.

## 📌 About the Project

This project is a beginner-friendly C++ application that demonstrates basic programming concepts, including random number generation, conditional statements, loops, and user input.

## ✨ Features

- 🎲 Generates a random number between 1 and 100.
- ⬆️ Displays "Too high" if the guess exceeds the secret number.
- ⬇️ Displays "Too low" if the guess is below the secret number.
- 🏆 Displays a congratulatory message when the correct number is guessed.
- 🔄 Continues until the player guesses the correct number.

## 🛠️ Technologies Used

- **Language:** C++
- **Libraries:** `iostream`, `cstdlib`, `ctime`
- **Compiler:** GCC (or any compatible C++ compiler)

## 🚀 Getting Started

### 1. Clone the Repository

```bash
git clone https://github.com/Anshika-2008/Number_Guessing_Game.git
```

### 2. Navigate to the Project Directory

```bash
cd Number_Guessing_Game
```

### 3. Compile the Program

Using GCC:

```bash
g++ numberGuessingGame.cpp -o numberGuessingGame
```

### 4. Run the Game

**Windows:**

```bash
.\numberGuessingGame.exe
```

**Linux/macOS:**

```bash
./numberGuessingGame
```

## 🎮 How to Play

1. Run the program.
2. Enter a number between 1 and 100 when prompted.
3. Read the hint displayed by the program.
4. Keep guessing until you find the correct number.
5. The game congratulates you when you guess correctly!

## 💻 Sample Output

```text
Enter your guess (1-100): 50
Too low
Enter your guess (1-100): 75
Too high
Enter your guess (1-100): 65
Congratulations! You guessed correctly.
```

*Note: The sample output is illustrative. The secret number is randomly generated each time the program runs.*

## 📚 Concepts Practiced

- C++ input and output
- Random number generation using `rand()` and `srand()`
- Conditional statements (`if-else`)
- Infinite loops (`while`)
- User input and program control flow

## 👩‍💻 Author

**Anshika Porwal**

---

If you enjoy this project, feel free to explore the code and try improving the game!