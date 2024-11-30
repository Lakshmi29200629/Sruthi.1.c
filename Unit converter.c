#include <stdio.h>
int main() {
  float value, convertedValue;
  char choice, unitFrom, unitTo;
  printf("Enter the value: ");
  scanf("%f", &value);
  printf("Enter the unit to convert from (m for meters, g for grams): ");
  scanf(" %c", &unitFrom);
  printf("Enter the unit to convert to (k for kilometers, kg for kilograms): ");
  scanf(" %c", &unitTo);
  if (unitFrom == 'm' && unitTo == 'k') { // Meters to Kilometers
    convertedValue = value / 1000;
    printf("%.2f meters is equal to %.2f kilometers\n", value, convertedValue);
  } else if (unitFrom == 'g' && unitTo == 'kg') { // Grams to Kilograms
    convertedValue = value / 1000;
    printf("%.2f grams is equal to %.2f kilograms\n", value, convertedValue);
  } else {
    printf("Invalid unit combination.\n");
  }
  return 0;
}
