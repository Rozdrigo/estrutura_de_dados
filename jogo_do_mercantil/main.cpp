#include iostream

using namespace std;

int main() {
  int num_of_products = 0;

  cin  num_of_products;

  float values_of_products[num_of_products];
  float user_values_of_products[num_of_products];
  char user_char_of_products[num_of_products];

  for (int i = 0; i  num_of_products; i++) {
    cin  values_of_products[i];
  }
  for (int i = 0; i  num_of_products; i++) {
    cin  user_values_of_products[i];
  }
  for (int i = 0; i  num_of_products; i++) {
    cin  user_char_of_products[i];
  }

  int points_of_first_user = 0;
  int points_of_last_user = 0;

  for (int i = 0; i  num_of_products; i++) {
        if(values_of_products[i] == user_values_of_products[i]) points_of_first_user++;
        else if (values_of_products[i]  user_values_of_products[i] && user_char_of_products[i] == 'M') points_of_last_user++;
        else if (values_of_products[i]  user_values_of_products[i] && user_char_of_products[i] == 'm') points_of_last_user++;
        else points_of_first_user++;
  }
  if (points_of_first_user  points_of_last_user) {
    cout  primeiro;
  } else if (points_of_first_user == points_of_last_user) {
    cout  empate;
  } else {
    cout  segundo;
  }
}