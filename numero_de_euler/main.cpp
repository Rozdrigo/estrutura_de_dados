#include <iostream>
#include <iomanip>

double fatorial(int n) {
  double result = 1;
  for (int i = 1; i <= n; i++) {
    result *= i;
  }
  return result;
}

double euler(int n) {
  double result = 1;
  for (int i = 1; i <= n; i++) {
    result += 1 / fatorial(i);
  }
  return result;
}

int main() {
  std::cout << std::fixed << std::setprecision(6);

  int user_input = 0;
  
  std::cin >> user_input;
  std::cout << euler(user_input);
}