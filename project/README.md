
#### Description:
What if I had one place that gathered my interests? From books, games, to music?
When this idea came to me,I thought it would be fun, so I started writing this code.
how my program work:
first it will show you menu table wich consist of
        a. GAMES/Quizes
        b. GAMES/ROCK PAPER SCISSORS
        c. BOOK LIBRARY
        d. SONGS RECOMENDATIONS
**if the user enter (a)** another window will appear
                 Enter 1 to start the game
                 Enter 2 for help
                 Enter 3 to exit

If the user enters 1, the game will start. In this game, there are a total of 10 questions with 4 options, and the user will be asked questions continuously if he or she keeps giving the right answers. Once the user gives a wrong answer, the program will tell him which answer was correct and show this message: (SORRY, you didn't answer all the questions correctly. Thanks for your participation. Try again.If the user answers all 10 questions correctly, another message will appear(CONGRATULATION and print the score number).and in both situations, the user has the choice to play again or go back to the main menu.
if the user enters 2 for help some information will be displayed and the the user can go back or exit.if the user enters 3 the program will stop execution.

Back to the main menu, **if the user enters (b)**, then the Rock Paper Scissors game will begin.  the program will asks the user 3 times The user should enter 1, 2, or 3 for Rock, Paper, and Scissors, and if the user enters another number, the program will stop and an invalid input message will appear on the screen.
When the user enters a valid number, the program will print a message, for example: (You choose r), which represents rock. After that, it's the computer's turn, using a function named generateRandomNumber, which gives me a random number between 1 and 3 every time. Then the comparison process will start. Using another function named greater, which takes two arguments (char , char) and returns an integer after a comparison between the two, the code displays the winner of each iteration; if the user enters ‘r’ (actually ‘1’) and the computer or random function generates 's' , then the code displays You Got It! The match is won by the player who has won more rounds after three, and a draw occurs if the same character is produced in any round.
After the three rounds, the player can press N to exit or go back to the main menu.

Back to the main menu again, **if the user enters (c)** the library, a welcome message will appear, and the program will ask the user to enter their name. A welcome message will appear with their name on it, and then it will ask how many books the user wants. The user can choose an unlimited number of books.After that, a category table will appear to choose from if the user enters invalid input (*you did not choose any category*). If the user enters 1, for example, a list of some books in this category will appear, which the user can choose from. When the user chooses 3 from the list, which is "Give and Take"book ,some information will be provided (name of the book, author, year published, price, and number of pages).After that, the program will ask the user if he wants to borrow or purchase the book.For borrowing, a timetable of the period allowed to borrow a book will appear, and the user should choose among these:(1:one week. 2:10 days. 3:two weeks.) and with each selection the program will remined the user about the borrowing period with day and date.
If the user chooses to purchase this book, the program will ask the user if he has a coupon for a discount. If he hasn't, this message will appear: Dear customer, thank you for your purchase.) If he has a coupon and if the coupon is not correct, this message will appear.( Unfortunately,it seems that the coupon does not match the one we have. THANK YOU), meanwhile, if the coupon is correct, the user will get a 10% discount,
the user after that can Press Y to go back to main menu or press N to exit.

Back to the main menu, **if the user enters (d)** song recommendations,a welcome message will appear and a list of some music genres (metal, rock,POP and jazz) will be displayed for the user to choose from.
When the user chooses a specific genre, some songs with their artist name will appear; some are popular, and some are new releases.
the user after that can go back to main menu or press N to exit.

