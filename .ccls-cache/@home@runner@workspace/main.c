#include <stdio.h>
#include <string.h>
//initialize varables 
int main(void) {
  char textMessage[890];
  int messageLength = 0;
  
// Explain how the program works, and ask for the user's input, and capture the input for message analysis.  
  printf("This program will print a text message to the screen that is entered by the user.\nThe size of the text message is limit to 140 characters or less.\n\nEnter your text message: \n\n");
  scanf("%[^\n]", textMessage);
  messageLength = strlen(textMessage);

  // Print one of two messages, one if 140 characters or less, and one if more than 140 characters.
  if (messageLength < 141)
    printf("\nYour message is: %d characters long and will be posted.\n", messageLength);
  else
    printf("\nYour message is: %d characters long and is too long to post. The message will be rejected.\n", messageLength);
      
  return 0;
}