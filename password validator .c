#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
  char password[100];
  int length, hasUpper, hasLower, hasDigit, hasSpecial;

  printf("Enter your password: ");
  scanf("%s", password);

  length = strlen(password);
  hasUpper = hasLower = hasDigit = hasSpecial = 0;

  // Check for length
  if (length < 8) {
    printf("Password must be at least 8 characters long.\n");
    return 1; // Indicate failure
  }

  // Check for character types
  for (int i = 0; i < length; i++) {
    if (isupper(password[i])) {
      hasUpper = 1;
    } else if (islower(password[i])) {
      hasLower = 1;
    } else if (isdigit(password[i])) {
      hasDigit = 1;
    } else if (!isalnum(password[i])) { // Check for special character
      hasSpecial = 1;
    }
  }

  // Check if all criteria are met
  if (hasUpper && hasLower && hasDigit && hasSpecial) {
    printf("Password meets all criteria.\n");
  } else {
    printf("Password does not meet all criteria.\n");
    if (!hasUpper) printf("Password must contain at least one uppercase letter.\n");
    if (!hasLower) printf("Password must contain at least one lowercase letter.\n");
    if (!hasDigit) printf("Password must contain at least one digit.\n");
    if (!hasSpecial) printf("Password must contain at least one special character.\n");
  }

  return 0; 
}
