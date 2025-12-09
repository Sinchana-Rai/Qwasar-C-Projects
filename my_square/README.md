# Welcome to My Square
***
My Square	
Submit directory	ex00
Submit file	my_square.c
Description
Create a program which displays a beautiful square.

my_square(5,3) should display:

$>./a.out 5 3
o---o
|   |
o---o
$>
my_square(5, 1) should display:

$>./a.out 5 1
o---o
$>
my_square(1, 1) should display:

$>./a.out 1 1
o
$>
my_square(1, 5) should display:

$>./a.out 1 5
o
|
|
|
o
$>
my_square(4, 4) should display:

$>./a.out 4 4
o--o
|  |
|  |
o--o
$>
Tips:

0.
$>gcc my_file.c
$>./a.out

1.
int main(int ac, char **av);

2.
int x = atoi(av[1]);
int y = atoi(av[2]);

3.
Be careful segfault. :-)
From docode you can download the qwasar_my_square by executing this command to compare your output with ours:

curl -s https://storage.googleapis.com/qwasar-public/qwasar_my_square.tgz | tar zxvf - -C ./
It works exactly like yours should be working:

$>./qwasar_my_square 4 4
o--o
|  |
|  |
o--o
$>


## Task
Create a program which displays a square.

## Description
Assignment is to create a program which displays a square for the width and height given by the user.
Corners will be represented by 'o' and sides will be represented by '-'.
The space with in the square will be filled with spaces.
If the User provides insufficient arguments the program returns Null.

## Installation
Compile the program with the command gcc -o my_square my_square.c.
Then Execute the program with ./my_square <width> <height> . Width and Height will be whole numbers.

## Usage
./my_project argument1 argument2
```
Example - ./my_square 4 4


### The Core Team


<span><i>Made at <a href='https://qwasar.io'>Qwasar SV -- Software Engineering School</a></i></span>
<span><img alt='Qwasar SV -- Software Engineering School's Logo' src='https://storage.googleapis.com/qwasar-public/qwasar-logo_50x50.png' width='20px' /></span>
