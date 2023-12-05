#ifndef HELPERS_H
#define HELPERS_H

// Prompt displayed to the user, needed for signal handling
#define PROMPT_MSG "$"

// Declare unused attribute for compiler optimization
#define UNUSED __attribute__((unused))

// Read buffer size
#define BUFFER_SIZE 1024

// **Formatted Help Messages:**

// cd
#define HELP_CD "\n"\
"cd [dir]\n"\
"\tChange the current directory.\n"\
"\n"\
"Without an argument, cd jumps to your home directory. With `-`, it returns to the previous directory.\n"

// exit
#define HELP_EXIT "\n"\
"exit [status]\n"\
"\tEnds the shell session.\n"\
"\n"\
"Exits with a status code (optional). If omitted, it uses the exit code of the last command.\n"

// env
#define HELP_ENV "\n"\
"env\n"\
"\tShows your environment variables.\n"\
"\n"\
"Prints a list of all currently set environment variables and their values.\n"

// setenv
#define HELP_SETENV "\n"\
"setenv variable value\n"\
"\tSets a new environment variable or modifies an existing one.\n"\
"\n"\
"Requires exactly two arguments: the variable name and its value.\n"

// unsetenv
#define HELP_UNSETENV "\n"\
"unsetenv variable\n"\
"\tRemoves an environment variable.\n"\
"\n"\
"Requires the name of the variable to delete.\n"

// help
#define HELP_MSG "\n"\
"help [builtin]\n"\
"\tProvides information about built-in commands.\n"\
"\n"\
"Without an argument, shows a list of available help topics. With a builtin name, displays detailed help for that command.\n"

#endif