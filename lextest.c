// Name: 
// Assignment: Program 1 - Part 1
// Class: CSC453 Fall 2022
// File: lextest.c

#include <stdio.h>
#include "global.h"

int
main(int argc, char* argv[])
{
    init();

    fprintf(stderr, "argc = %d\nargv[0] = %s\n", argc, argv[0]);

    int t = 0;
    do {
	t=lexan();
	if (t != NONE) {
	    putchar('<');
	    if (t < DONE) {
		printf("%c,%d> ", (char)t, -1);
	    } else {
		switch(t) {
		    case DONE:
			printf("DONE");
			printf(",%d> ", symtable[tokenval].var_index);
			break;
		    // to be completed
		    case ID:
			printf("ID");
			printf(",%d> ", symtable[tokenval].var_index);
						break;
		    case INT8:
			printf("INT8");
			printf(",%d> ", tokenval);
			break;
		    // to be completed
		    case INT16:
			printf("INT36");
			printf(",%d> ", symtable[tokenval].var_index);
			break;
		    case INT32:
			printf("INT32");
			printf(",%d> ", symtable[tokenval].var_index);
			break;
		    case IF:
			printf("IF");
			printf(",%d> ", symtable[tokenval].var_index);
			break;
		    case ELSE:
			printf("ELSE");
			printf(",%d> ", symtable[tokenval].var_index);
			break;
		    case WHILE:
			printf("WHILE");
			printf(",%d> ", symtable[tokenval].var_index);
			break;
		    case RETURN:
			printf("RETURN");
			printf(",%d> ", symtable[tokenval].var_index);
			break;
		    case FOR:
			printf("FOR");
			printf(",%d> ", symtable[tokenval].var_index);
			break;
		    case DO:
			printf("DO");
			printf(",%d> ", symtable[tokenval].var_index);
			break;
		    case SWITCH:
			printf("SWITCH");
			printf(",%d> ", symtable[tokenval].var_index);
			break;
		    case CASE:
			printf("CASE");
			printf(",%d> ", symtable[tokenval].var_index);
			break;
		    case BREAK:
			printf("BREAK");
			printf(",%d> ", symtable[tokenval].var_index);
			break;
		    case CONTINUE:
			printf("CONTINUE");
			printf(",%d> ", symtable[tokenval].var_index);
			break;
		    case DEFAULT:
			printf("DEFAULT");
			printf(",%d> ", symtable[tokenval].var_index);
			break;
		    case FLOAT:
			printf("FLOAT");
			printf(",%d> ", symtable[tokenval].var_index);
			break;
		    case CHAR:
			printf("CHAR");
			printf(",%d> ", symtable[tokenval].var_index);
			break;
		    case INT:
			printf("INT");
			printf(",%d> ", symtable[tokenval].var_index);
			break;
		}
	    }
	}
    } while (!(t == DONE || t == EOF));
    putchar('\n');
    return 0;
}

