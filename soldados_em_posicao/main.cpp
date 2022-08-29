#include <iostream>

using namespace std;

int main() {
  int line_one[3];
  int line_two[3];
  int line_three[3];

  for(int i = 0; i < 3; i++){
    cin >> line_one[i];
  }
  for(int i = 0; i < 3; i++){
    cin >> line_two[i];
  }
  for(int i = 0; i < 3; i++){
    cin >> line_three[i];
  }
  int points = 0;
  for(int i = 0; i < 3; i++){
    if(line_three[i] < line_two[i]){
      points++;
    }
    if(line_two[i] < line_one[i]){
      points++;
    }
  }
  cout << points;
}