#include <stdio.h>

int main() {
  float temperature, convertedTemperature;
  char choice;

  printf("Enter the temperature: ");
  scanf("%f", &temperature);

  printf("Enter C for Celsius to Fahrenheit, F for Fahrenheit to Celsius: ");
  scanf(" %c", &choice);

  if (choice == 'C' || choice == 'c') {
    convertedTemperature = (temperature * 9 / 5) + 32;
    printf("%.2f Celsius is equal to %.2f Fahrenheit\n", temperature, convertedTemperature);
  } else if (choice == 'F' || choice == 'f') {
    convertedTemperature = (temperature - 32) * 5 / 9;
    printf("%.2f Fahrenheit is equal to %.2f Celsius\n", temperature, convertedTemperature);
  } else {
    printf("Invalid choice.\n");
  }

  return 0;
}
