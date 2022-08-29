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

  int sum_line_one = 0;
  int sum_line_two = 0;
  int sum_line_three = 0;

  int col_one[] = {line_one[0], line_two[0], line_three[0]};
  int col_two[] = {line_one[1], line_two[1], line_three[1]};
  int col_three[] = {line_one[2], line_two[2], line_three[2]};

  int d_one[] = {line_one[0], line_two[1], line_three[2]};
  int d_two[] = {line_one[2], line_two[1], line_three[0]};

  
  int sum_col_one = 0;
  int sum_col_two = 0;
  int sum_col_three = 0;

  int sum_d_one = 0;
  int sum_d_two = 0;
  
  for(int i = 0; i < 3; i++){
    sum_line_one += line_one[i];
    sum_line_two += line_two[i];
    sum_line_three += line_three[i];
    sum_col_one += col_one[i];
    sum_col_two += col_two[i];
    sum_col_three += col_three[i];
    sum_d_one += d_one[i];
    sum_d_two += d_two[i];
  }

  int sum_list[] = {sum_line_one, sum_line_two, sum_line_three, sum_col_one, sum_col_two, sum_col_three, sum_d_one, sum_d_two};

  for(int i = 0; i<8; i++){
    if(sum_list[i] != sum_line_one){
      cout << "nao";
      return 0;
    }
  }

  cout << "sim";

  return 0;
}