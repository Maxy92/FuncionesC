int dot_product(int u[], int v[], int n) {
  int res = 0;
  for (int i = 0; i < n; i++) {
    res += u[i] * v[i];
  }
  return res;
}

int main(int argc, char *argv[]) {
  int u[] = {1, 2, 3, 4};
  int v[] = {0, 0, 0, 4};
  int res = dot_product(u,v,4);
  printf("%d\n", res);
  return 0;
}
