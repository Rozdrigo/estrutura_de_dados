#include <iostream>
#include <iomanip>

bool primo(int n){
  for(int i = 2; i < n; i++){
    if(n%i == 0){
      return false;
    }
  }
  return true;
}

int main() {
  int user_enter_one = 0;
  int user_enter_two = 0;
  std::cin >> user_enter_one;
  std::cin >> user_enter_two;

  for(int i = user_enter_one; i <= user_enter_two; i++){
    if(primo(i)){
      std::cout << i << "\n";
    }
  }
}