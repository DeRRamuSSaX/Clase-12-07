// #include <stdio.h>
//
// int main(int argc, char const *argv[]) {
//   char palabra[10] = "Soto";
//   int i = -1;
//   while (i < 10)
//     printf("%c\n", palabra[i++]);
//   return 0;
// }

// #include <stdio.h>
//
// int main(int argc, char const *argv[]) {
//   int i = 0;
//   int sum = 0;
//   int input;
//   // int input_1;
//   // int input_2;
//   // int input_3;
//   while (i++ < 10) {
//     scanf("%d", &input);
//     sum += input;
//   }
//   printf("%d\n", sum);
//   return 0;
// }

// %d %d", &input_1, &input_2, &input_3

//archivos
// #include <stdio.h>
//
// int main(int argc, char const *argv[]) {
//   FILE *fp; //puntero FILE/Archivo
//   fp = fopen("alumnos.txt", "r");
//   while (fgets(line, 100, fp) != NULL) {
//     printf("%s\n", line);
//   }
//   fclose(fp);
//   return 0;
// }

// #include <stdio.h>
// #define MAXLINE 100
//
// int main(int argc, char const *argv[]) {
//   FILE *fp; //puntero FILE/Archivo
//   char *file_name = argv[1];
//   char line[MAXLINE];
//   fp = fopen("alumnos.txt", "r");
//   while (fgets(line, MAXLINE, fp) != NULL) {
//     printf("%s", line);
//   }
//   fclose(fp);
//   return 0;
// }

// #include <stdio.h>
// #define MAXLINE 100
//
// int main(int argc, char const *argv[]) {
//   FILE *fp; //puntero FILE/Archivo
//   // char *file_name = argv[1];
//   char line[MAXLINE];
//   // fp = fopen("alumnos.txt", "r");
//   while (fgets(line, MAXLINE, stdin) != NULL) {
//     printf("%s", line);
//   }
//   // fclose(fp);
//   return 0;
// }

#include <stdio.h>
#define MAXLINE 100

int main(int argc, char const *argv[]) {
  // FILE *fp; //puntero FILE/Archivo
  // char *file_name = argv[1];
  int d, m, y;
  char line[MAXLINE];
  // // fp = fopen("alumnos.txt", "r");
  while (fgets(line, MAXLINE, stdin) != NULL) {
    // printf("%s", line);
    sscanf(line, "%d/%d/%d", &d, &m, &y);
  }
  // fgets(line, MAXLINE, stdin);
  // fclose(fp);
  printf("Hoy es %d del %d del año %d\n", d, m, y);
  return 0;
}

//caracter por caracter
// int c;
// while ((c = getchar()) != EOF) {
//   putchar
// }
// return 0;

// ejemplo scanf
// int a = 0;
// int ptr_a = &a;
// scanf("%d", ptr_a);
// printf("%d\n", a);
// return 0;

// ejemplo buffer
// int c;
// char buf[100];
// int i = 0;
// while ((c = getchar()) != EOF) {
//
// }
