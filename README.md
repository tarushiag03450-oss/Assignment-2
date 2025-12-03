# 🎮 Assignment 2 – Game Analysis & Improvements

---

# 📌 PART 1 — Analysis of the Existing Game  
Repository Studied:  
https://github.com/shoonyank/game

The existing game is a simple terminal-based endless runner written in C.  
In this game, the player must avoid an obstacle that moves from the right side of the screen to the left.  
The player's only action is jumping to avoid collision.

---

## 🧠 Understanding the Game Logic

### 1️⃣ Game Loop  
The game uses an infinite loop that continuously:
- Draws the game screen  
- Moves the obstacle  
- Updates player position  
- Detects collision  
- Controls game speed  

This loop acts as the engine of the game.

---

### 2️⃣ Player Movement  
- Player is shown as `O`  
- Player can jump when a key is pressed  
- Jump height is managed using:
  - jump flag  
  - jumpCounter  
- After reaching jump peak, player automatically falls back  

---

### 3️⃣ Obstacle Movement  
- Obstacle is represented by `|`  
- It moves left one step at a time  
- When it reaches X = 0, it resets to the right  
- This creates an endless running effect  

---

### 4️⃣ Collision Detection  
Collision happens when:

Obstacle X == Player X AND Player is NOT jumping

If collision occurs → Game Over.

---

### 5️⃣ Rendering (ASCII Graphics)  
- O = Player  
- | = Obstacle  
- _ = Ground  
- The screen is refreshed using system("cls")  
- Simple text-based graphics make the game playable in a terminal  

---

### 6️⃣ Concepts Used  
- Loops  
- Conditions  
- Functions  
- ASCII graphics  
- Keyboard input (kbhit(), getch())  
- Basic physics (jump logic)  
- Delay / timing using Sleep()  

---

# 📌 PART 2 — Improvements Implemented  
As per Assignment 2 instructions, I added 3 enhancements to the original game:

---

# 🟩 1. Score System  
A score increases every time the obstacle passes the player successfully.

---

# 🟦 2. Lives System  
Instead of instant game over, the player now gets 3 lives.

---

# 🟪 3. Start Menu + Restart Option  
Before the game starts, a menu appears:

1. Start Game  
2. Exit  

After game ends:

Play Again? (1 = Yes / 0 = No)

---

# 🎉 FINAL RESULT  
The updated game includes:

- Score System  
- Lives System  
- Start Menu  
- Replay Option  
- Better user experience  
- Clean code  

This completes Assignment 2 as per the given requirements.

---

# 👩‍💻 Developer  
**Name:** Tarushi Agrawal  
**Course:** B.Tech CSE  
**Assignment:** 2 – Analyze and Improve an Existing Game
