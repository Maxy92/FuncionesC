#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int power_of_two(int n) {

int power = 1;
for (int i = 1; i <= n; i++) {
  power = power * 2;

}
printf("%d\n",power );

};


int main(int argc, char const *argv[]) {
int x = atoi(argv[1]);
power_of_two(x);
  return 0;
}
