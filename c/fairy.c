#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define green_color  "\x1b[32m"
#define yellow_color "\x1b[33m"
#define cyan_color   "\x1b[36m"
#define color_reset  "\x1b[0m"

void header()
  {
    printf("\n");
    printf("# = = = = = = = = = = = = \n");
    printf("# " yellow_color "Hello Developer,\n" color_reset);
    printf("# " yellow_color "I am your lucky Fairy,\n" color_reset);
    printf("# " yellow_color "Probably you have issue with your project,\n" color_reset);
    printf("# " yellow_color "I will help you find a cause of a bug.\n" color_reset);
    printf("# = = = = = = = = = = = = \n");
    printf("\n");
    printf("# " cyan_color "Your lucky advice is:\n" color_reset);
  }

int main()
{
  header();

  char* causes[20] =
    {
      "It works on my machine.",
      "Where were you when the program blew up?",
      "Why do you want to do it that way?",
      "You can't use that version on your system.",
      "Even thought it doesn't work, how does it feel?",
      "Did you check for a virus on your system?",
      "Somebody must have changed my code!",
      "It works, but it hasn't been tested.",
      "THIS can't be the source of THAT!",
      "I can't test everything!",
      "It's just some unlucky coincidence.",
      "You must have the wrong version.",
      "I haven't touched that module for weeks!",
      "There has to be something funky in your data.",
      "What did you type in wrong to get it to crash?",
      "It must be a hardware problem.",
      "How is that possible?",
      "It worked yesterday.",
      "It's never done that before.",
      "That's weird..."
    };

  time_t t;
  srand((unsigned) time(&t));

  printf("\n");
  int choice = rand() % 20;
  printf(green_color "  %s\n" color_reset, causes[choice]);
  printf("\n");

  return 0;
}
