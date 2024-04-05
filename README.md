# World Simulation Project

This C++ project simulates a world where a human and various animals coexist. It includes classes for organisms such as sheep, wolves, turtles, and more, as well as plants like grass and berries.

## Overview

The project is structured using object-oriented programming principles. Each organism is represented by a class that inherits from a base class `Organism`. The world itself is represented by the `Swiat` class, which manages the grid and interactions between organisms.

## Files

- `main.cpp`: The main file of the project, responsible for running the simulation and managing user input.
- `Swiat.hpp`: Header file for the `Swiat` class, which contains declarations of member functions and variables.
- Various `.cpp` files: Each containing the implementation of specific organism classes such as `Owca`, `Wilk`, `Lis`, `Zolw`, `Antylopa`, and plant classes like `Trawa`, `Mlecz`, `Guarana`, `WilczeJagody`, `BarszczSosnowskiego`, and the `Czlowiek` class representing the human.
- `Punkt.cpp`: Implementation of the `Punkt` class, which represents a point in the grid.

## Usage

To run the simulation, compile the project and execute the generated executable. The simulation will start, and you can interact with it using the specified controls.

## Controls

- Movement: Use `w` (up), `a` (left), `s` (down), and `d` (right) keys to move the human.
- Special Ability: Press `q` to activate the human's special ability (if available).
- Saving: Press `z` to save the current state of the world to a file.

## Future Improvements

- Add more organisms and plants to increase the diversity of the simulated world.
- Implement additional features such as breeding, aging, and interactions between organisms.
- Improve the user interface and visualization of the world.
