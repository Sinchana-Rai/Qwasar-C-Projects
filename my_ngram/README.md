# Welcome to My Ngram
***

## Task
Write a program my_ngram; It will count the number of occurrences per character.

## Description
Program will take an input string from the user and count the number of occurances of the alphabets and displays the count of each letter.


## Installation
Include a makefile, Your code must be compiled with the flags -Wall -Wextra -Werror.
Your makefile must have a clean & fclean rules.

Example of some rules for Makefiles:

            all : $(TARGET)

            $(TARGET) : $(OBJ)
                gcc $(CFLAGS) -o $(TARGET) $(OBJ)

            $(OBJ) : $(SRC)
                gcc $(CFLAGS) -c $(SRC)

            clean:
                rm -f *.o

            fclean: clean
                rm -f $(TARGET)

            re: fclean all

DOnot 

## Usage
Execute the program with -> ./my_ngram "<input string>"
Eg: ./my_ngram "abc"
```

### The Core Team


<span><i>Made at <a href='https://qwasar.io'>Qwasar SV -- Software Engineering School</a></i></span>
<span><img alt='Qwasar SV -- Software Engineering School's Logo' src='https://storage.googleapis.com/qwasar-public/qwasar-logo_50x50.png' width='20px' /></span>
