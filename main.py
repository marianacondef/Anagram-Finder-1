print("This program will tell you whether two words are anagrams of each other or not!")
playAgain = "N"
def game(playAgain):
  firstWord = input("Write a word: ")
  secondWord = input("Write another word: ")
  s1 = []
  s2 = []
  for i in range(len(firstWord)):
    if firstWord[i] != " ":
      s1.append(firstWord[i].lower())
  for i in range(len(secondWord)):
    if secondWord[i] != " ":
      s2.append(secondWord[i].lower())

  if sorted(s1) == sorted(s2):
    print("Congrats! It's an Anagram! :)")
  else:
    print("Not Anagram :(")
    
  playAgain = input("Wanna play again? Yes (Y) or No (N): ") 
  
  if playAgain.upper() == "Y":
    game(playAgain)
  else:
    print("Thanks for playing!")
  
game(playAgain) 

