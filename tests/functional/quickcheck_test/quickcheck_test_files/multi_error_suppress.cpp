int* foo() {
  int x = 42;
  return &x;
}

int main() {
  int y;

  // codechecker_suppress [all] some comment
  y = 7;
  int* x = foo();
  y = 10;

  return y + *x;
}
