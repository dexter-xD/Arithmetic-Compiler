#include "parser.h"

int parse(Token *tokens, int *result) {
  int pos = 0;
  if (tokens[pos].type != TOKEN_NUMBER) {
    return 0;
  }
  *result = tokens[pos].value;
  pos++;

  while (tokens[pos].type != TOKEN_END) {
    if (tokens[pos].type == TOKEN_PLUS) {
      pos++;
      if (tokens[pos].type != TOKEN_NUMBER) {
        return 0;
      }
      *result += tokens[pos].value;
    } else if (tokens[pos].type == TOKEN_MINUS) {
      pos++;
      if (tokens[pos].type != TOKEN_NUMBER) {
        return 0;
      }
      *result -= tokens[pos].value;
    } else if (tokens[pos].type == TOKEN_MULTIPLICATION) {
      pos++;
      if (tokens[pos].type != TOKEN_NUMBER) {
        return 0;
      }
      *result *= tokens[pos].value;
    } else if (tokens[pos].type == TOKEN_DIVISION) {
      pos++;
      if (tokens[pos].type != TOKEN_NUMBER) {
        return 0;
      }
      *result /= tokens[pos].value;
    } else {
      return 0;
    }
    pos++;
  }
  return 1;
}
