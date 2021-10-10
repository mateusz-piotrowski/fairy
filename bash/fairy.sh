#!/bin/bash

title () {
  echo ""
  echo "# = = = = = = = = = = = = "
  printf "#$(tput setaf 3) Hello Developer,$(tput sgr0)\n"
  printf "#$(tput setaf 3) I am your lucky Fairy,$(tput sgr0)\n"
  printf "#$(tput setaf 3) Probably you have issue with your project,$(tput sgr0)\n"
  printf "#$(tput setaf 3) I will help you find a cause of a bug.$(tput sgr0)\n"
  echo "# = = = = = = = = = = = = "
  echo ""
  printf "#$(tput setaf 6) Your lucky advice is:$(tput sgr0)\n"
  echo ""
}

title

causes[1]="It works on my machine."
causes[2]="Where were you when the program blew up?"
causes[3]="Why do you want to do it that way?"
causes[4]="You can't use that version on your system."
causes[5]="Even thought it doesn't work, how does it feel?"
causes[6]="Did you check for a virus on your system?"
causes[7]="Somebody must have changed my code!"
causes[8]="It works, but it hasn't been tested."
causes[9]="THIS can't be the source of THAT!"
causes[10]="I can't test everything!"
causes[11]="It's just some unlucky coincidence."
causes[12]="You must have the wrong version."
causes[13]="I haven't touched that module for weeks!"
causes[14]="There has to be something funky in your data."
causes[15]="What did you type in wrong to get it to crash?"
causes[16]="It must be a hardware problem."
causes[17]="How is that possible?"
causes[18]="It worked yesterday."
causes[19]="It's never done that before."
causes[20]="That's weird..."

random_cause=$(($RANDOM % 20 + 1 ))

printf "$(tput setaf 2)  ${causes[$random_cause]}$(tput sgr0)\n"
echo ""
