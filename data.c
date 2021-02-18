#include"data.h"
action_table table[ACTION_TABLE_MAXSIZE];
/* all instructions are defined here with the opcode, func and supported addressing methods */
instruction_descriptor instruction_table[] = {{"mov", 0, 0, {1, 1, 0, 1}, {0, 1, 0, 1}},
                                              {"cmp", 1, 0, {1, 1, 0, 1}, {1, 1, 0, 1}},
                                              {"add", 2, 1, {1, 1, 0, 1}, {0, 1, 0, 1}},
                                              {"sub", 2, 2, {1, 1, 0, 1}, {0, 1, 0, 1}},
                                              {"lea", 4, 0, {0, 1, 0, 0}, {0, 1, 0, 1}},
                                              {"clr", 5, 1, {0, 0, 0, 0}, {0, 1, 0, 1}},
                                              {"not", 5, 2, {0, 0, 0, 0}, {0, 1, 0, 1}},
                                              {"inc", 5, 3, {0, 0, 0, 0}, {0, 1, 0, 1}},
                                              {"dec", 5, 4, {0, 0, 0, 0}, {0, 1, 0, 1}},
                                              {"jmp", 9, 1, {0, 0, 0, 0}, {0, 1, 1, 0}},
                                              {"bne", 9, 2, {0, 0, 0, 0}, {0, 1, 1, 0}},
                                              {"jsr", 9, 3, {0, 0, 0, 0}, {0, 1, 1, 0}},
                                              {"red", 12, 0, {0, 0, 0, 0}, {0, 1, 0, 1}},
                                              {"prn", 13, 0, {0, 0, 0, 0}, {1, 1, 0, 1}},
                                              {"rts", 14, 0, {0, 0, 0, 0}, {0, 0, 0, 0}},
                                              {"stop", 15, 0, {0, 0, 0, 0}, {0, 0, 0, 0}}};






