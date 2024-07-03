#include <stdio.h>

int main(void) {
  FILE *f = fopen("hello.c", "w");
  if (f == NULL) {
    printf("ERROR: RETRY");
    return 1;
  }
  fprintf(f, "#include <stdio.h>\n int main(void) {\n");
  int c;
  printf("Type heighest number to go to in the if statements: ");
  scanf("%d", &c);
  c++;
  for (int i = 0; i < c; i++) {
    if (i % 2 == 0) {
      fprintf(f, "if(%d == %d)\n {printf(\"Even\");}\n", i, i);
    } else {
      fprintf(f, "if(%d == %d)\n {printf(\"Odd\");}\n", i, i);
    }
  }
  fprintf(f, "}");
  fclose(f);
  return 0;
}
