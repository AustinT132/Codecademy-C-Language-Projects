#include <stdio.h>

int main() {
  
  const char appleLocation = 'F';
  int appleQuantity = 23;
  int appleReviewDisplay = 82.5;
  float applePrice = 1.49;
  float appleReview;

  appleReview = (float)appleReviewDisplay;
  printf("An apple costs: $%.2f, there are %d in inventory found in section: %c and your customers gave it an average review of %d%%!", applePrice, appleQuantity, appleLocation, appleReviewDisplay);

}
