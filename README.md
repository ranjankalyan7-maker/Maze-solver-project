#  Maze Solver Using C Programming

 Introduction

A Maze Solver is a program designed to find a valid path from a starting point to a destination within a maze. A maze is typically represented as a grid consisting of open paths and blocked cells, where the objective is to navigate from the entry point to the exit without crossing any obstacles.

In this project, the maze is represented using a two-dimensional array, where `1` indicates a valid path and `0` represents a blocked cell. The program analyzes the maze and determines whether a path exists from the top-left corner (start) to the bottom-right corner (destination).

To solve this problem, a recursive approach based on **Depth First Search (DFS)** is used. The algorithm explores possible paths step by step and backtracks when it encounters a dead end, ensuring that all potential routes are checked until a valid path is found.

Maze solving is an important concept in computer science as it helps in understanding algorithms, recursion, and problem-solving techniques. It also has practical applications in areas such as robotics, game development, artificial intelligence, and navigation systems.

The main aim of this project is to implement an efficient maze-solving program in C and display the path from the source to the destination if it exists.
## ✨ Features

* ✔️ **Maze Representation using 2D Array**
  The maze is implemented using a matrix where values define paths and obstacles.

* ✔️ **Path Finding Capability**
  The program efficiently finds a valid path from the start to the destination.

* ✔️ **Recursive Backtracking (DFS)**
  Uses Depth First Search technique to explore all possible paths and backtrack when needed.

* ✔️ **User Input Support**
  Allows users to enter custom maze values during runtime.

* ✔️ **Solution Visualization**
  Displays the final path in the form of a solution matrix.

* ✔️ **Simple and Efficient Logic**
  Easy-to-understand implementation suitable for beginners in data structures.

* ✔️ **Error Handling (Basic)**
  Displays message when no path exists.

* ✔️ **Lightweight Program**
  Requires minimal memory and runs efficiently on basic systems.

* ✔️ **Educational Purpose**
  Helps in understanding recursion, arrays, and pathfinding algorithms.
## 🧠 Concepts Used

* 🔹 **Depth First Search (DFS)**
  The maze solver is based on DFS, where the algorithm explores one path fully before trying alternative paths.

* 🔹 **Recursion**
  The program uses recursion to move through the maze and check possible paths.

* 🔹 **Backtracking**
  When a path leads to a dead end, the algorithm backtracks to explore other possible routes.

* 🔹 **Two-Dimensional Array**
  The maze is represented using a 2D matrix where `1` indicates a path and `0` indicates a blocked cell.

* 🔹 **Matrix Traversal**
  The algorithm traverses the maze step-by-step in allowed directions.

* 🔹 **Conditional Logic**
  Used to check boundaries, valid paths, and destination conditions.

* 🔹 **Functions in C**
  The `solve()` function is used to implement the maze-solving logic.

## 📊 Data Structures Used

* 🔹 **Two-Dimensional Array (Matrix)**
  The maze is represented using a 2D array where each element indicates whether a cell is open (`1`) or blocked (`0`).
  Another 2D array is used to store the solution path.

* 🔹 **Implicit Stack (Recursion Call Stack)**
  The program uses recursion, which internally utilizes the system call stack to keep track of function calls and path traversal. This acts like a stack data structure in Depth First Search (DFS).

* 🔹 **Variables and Indexing**
  Integer variables are used to store row and column indices for navigating through the maze.

* 🔹 **Function Structure**
  Functions are used to organize the logic, where each recursive call represents a step in the traversal process.
