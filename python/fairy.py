import random

print("")
print("# = = = = = = = = = = = =")
print("# Hello Developer,")
print("# I am your lucky Fairy,")
print("# Probably you have issue with your project,")
print("# I will help you find a cause of a bug.")
print("# = = = = = = = = = = = =")
print("")
print("# Your lucky advice is:")
print("")

causes = [
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
    ]

print(causes[random.randrange(1,10)])
print("")
