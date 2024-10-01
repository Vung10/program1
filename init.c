// Name: 
// Assignment: Program 1 - Part 1
// Class: CSC453 Fall 2022
// File: init.c

#include "global.h"

struct entry keywords[] =
{
    {"if", IF, -1},
    {"else", ELSE, -1},
    // TO BE COMPLETED
    {"return", RETURN, -1},
    {"int", INT, -1},
    {"float", FLOAT, -1},
    {"char", CHAR, -1},
    {"for", FOR, -1},
    {"do", DO, -1},
    {"switch", SWITCH, -1},
    {"case", CASE, -1},
    {"break", BREAK, -1},
    {"continue", CONTINUE, -1},
    {"default", DEFAULT, -1},
    {0, 0, 0}
};

void init() {
    struct entry *p;

    for (p = keywords; p->token; p++) {
	insert(p->lexptr, p->token, p->var_index);
    }
}
