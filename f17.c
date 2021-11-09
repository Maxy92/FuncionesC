#include "stdlib.h"
#include "stdio.h"

int pp(int n) {
  /*
Escribir una función que calcule el producto
punto de dos vectores de dimensión N.
  */
int a[n];
int b[n];
int producto_punto = 0;
for (int i = 0; i < n; i++) {
  a[n] = i;
  b[n] = i;
}
for (int i = 0; i < n; i++) {
  a[i]=i+1;
  b[i]=i+1;
  producto_punto = producto_punto + a[i]*b[i];
};
printf("%d\n",producto_punto );
};
int main(int argc, char const *argv[]) {
  int x = atoi(argv[1]);
  pp(x);
  return 0;
};
