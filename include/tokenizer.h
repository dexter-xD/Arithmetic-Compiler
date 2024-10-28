#ifndef TOKENIZER_H
#define TOKENIZER_H

typedef enum { TOKEN_NUMBER, TOKEN_PLUS, TOKEN_MINUS, TOKEN_MULTIPLICATION, TOKEN_DIVISION, TOKEN_END } TokenType;

typedef struct {
  TokenType type;
  int value;
} Token;

Token *tokenize(const char *input);

#endif
