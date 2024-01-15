# Tic-Tac-Toe Board Lesson

## Background

### What is Our Goal?

We have just learned what a class is in object-oriented programming and how it might theoretically help us write better code. Now it is time to put it into practice with an example!

We are going to write some C++ code that will implement a tic-tac-toe board. We will start with some unorganized code written directly in `main`, and then slowly evolve it to use classes. Be on the lookout for where we use the four principles of object-oriented programming:

1. Encapsulation
2. Abstraction
3. Inheritance (Not Used in This Lesson)
4. Polymorphism (Not Used in This Lesson)

### Why Tic-Tac-Toe?

I like to use tic-tac-toe as an example app because:

1. Most people know how to play the game, so there is shared knowledge on how it should work.
2. The game is surprisingly rich in teaching value. You can talk about a huge variety of topics including code design, testing strategies, client/server architectures, and much more!

## Compiling and Running the App

I set this project up to use `g++` on Mac. You can run each of the steps of the lesson using the Makefile:

```bash
make 1
make 2
make 3
make 4
make 5
```

You can also clean up artifacts using `make clean`.

## Checkpoints

### 1. Data Structure Without Encapsulation

* This code compiles and works! It is a first step towards moving to an object-oriented design.
* The board data structure is exposed in the public `main`.
* We are modifiying a data structure with no safety (e.g. suppose I tried to set `board[100] = "X"`)!
* The code to print a board to the screen is exposed with all of its internals public.
* What are some of the advantages and disadvantages of being able to modify the `board` data structure directly?

### 2. Abstraction Through Functions

* We have modified the code slightly to encapsulate some of the behavior in `main`.
* The `board` data structure is still exposed in the public `main`.
* However, we have some abstractions that allow us to mark and print the board.
* Is this an improvement on our design from the previous step? Why or why not?

### 3. Functions With Validations

* We can add some validations to make sure the user's input is not out of range.
* Functions make it easy to keep our code DRY (don't repeat yourself)!
* How many times would we have had to implement the validation check if we did not use a function to encapsulate marking the board?

### 4. Board Class With Public Methods

* We seem to have a combination of data and behavior that changes together. This is the perfect time to implement a class!
* You need a constructor for the `Board` class so that you can set the initial board state.
* Notice how we no longer need to pass in the `board` data structure when marking the board or printing it to the console.
* Pay attention to compiler warnings as you write code!
* How does writing a class make it easy for consumers of your code to extend on your ideas? On a related note, this is one of the core principles of good API design!

### 5. Board Class With Encapsulation

* Technically speaking, we could still access the `board` data structure in the `Board` class in step four.
* By making `board` private, this line will now throw an error: `std::cout << board.board;`
* Why is it useful to make `board` private? Why might it be a bad thing for users of this class to be able to change the data structure directly?
