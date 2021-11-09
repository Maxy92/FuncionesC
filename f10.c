#include "stdlib.h"
#include "stdio.h"
#include "time.h"


int fun(int a, int b){
int temp = a;
a = b;
b = temp;

printf("%d y %d\n",a,b );

}
int main(int argc, char const *argv[]) {
int x = atoi(argv[1]);
int y = atoi(argv[2]);
fun(x,y);



  return 0;
}
