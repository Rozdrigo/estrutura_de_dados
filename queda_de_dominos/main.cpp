#include <iostream>
#include <iomanip>

int main() {
  int array_size = 0;

  std::cin >> array_size;

  int domino[array_size];

  for(int i = 0; i<array_size; i++){
    std::cin >> domino[i];
  }

  for(int i = 0; i<array_size-1; i++){
    if(domino[i] > domino[i+1]){
      std::cout << "precisa de ajuste";
      return 0;
    }
  }
  std::cout << "ok";
}