#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "tokenizer.h"
#include "parser.h"
#include "assembly.h"

int main() {
  char input[256];
  printf("Enter an arithmetic expression (e.g., 3 + 4 - 2): ");
  fgets(input, sizeof(input), stdin);

  size_t len = strlen(input);
  if (len > 0 && input[len - 1] == '\n') {
    input[len - 1] = '\0';
  }

  Token *tokens = tokenize(input);
  int result;

  if (parse(tokens, &result)) {
    printf("Parsed result: %d\n", result);
    generate_assembly(tokens);
  } else {
    printf("Invalid Expression\n");
  }
  free(tokens);
  return 0;
}
