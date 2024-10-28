#include <stdio.h>
#include "assembly.h"

void generate_assembly(Token *tokens) {
  int pos = 0;
  printf("LOAD %d\n", tokens[pos].value);
  pos++;
  
  while (tokens[pos].type != TOKEN_END) {
    if (tokens[pos].type == TOKEN_PLUS) {
      pos++;
      printf("ADD %d\n", tokens[pos].value);
    } else if (tokens[pos].type == TOKEN_MINUS) {
      pos++;
      printf("SUB %d\n", tokens[pos].value);
    } else if (tokens[pos].type == TOKEN_MULTIPLICATION) {
      pos++;
      printf("MUL %d\n", tokens[pos].value);
    } else if (tokens[pos].type == TOKEN_DIVISION) {
      pos++;
      printf("DIV %d\n", tokens[pos].value);
    }
    pos++;
  }
}
