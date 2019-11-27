<h1 align="center">MovieMate</h1>

<div align="center">
  
[![Maintenance](https://img.shields.io/badge/Maintained%3F-yes-green.svg)](https://GitHub.com/Techno-Disaster/MovieMate/graphs/commit-activity)
[![contributions welcome](https://img.shields.io/badge/contributions-welcome-brightgreen.svg?style=flat)](https://github.com/Techno-Disaster/MovieMate/issues)

</div>

This is a simple file-handling project developed in C as my first-year project. Its kindoff like a clone of PirateBay exceptthe GUI.    
It takes the input of the name of the movie from the user and displays the information stored about that movie in the file "Name.txt". The information that is shown is the cast, budget, awards, plot, etc and also a link is provided for streaming the movie online. The total list of movies is given at the end of the this file. Below are some intricate details about the program which may help you in understanding and executing the program successfully. 

## How to Use:
1) Please enter any of the names of the movies from the list given at the end of this file whose information you want to obtain.
(NOTE: The input isn't case-sensitive. Also trailing and leading spaces in the movie name won't change the output.
REMEMBER: There shouldn't be any more spaces(not more than one white space) between the words of the movie's name than the spaces present in the names shown at the end. Also there should not be any space between ":" and a word in the inputted name of the movie.)

For example: If you want to search for the movie "Doctor Strange", the user can give inputs in any of the ways shown below:

    doctor strange
    DOCTOR STRANGE
    DOCTOR STRANGE   
    doctor strange
    doCTor sTrAngE

and so on in any combination of upper case and lower case letters of the words "Doctor Strange" and also with any combination of leading and trailing spaces can be given as input.
I have achieved this by converting whatever input is given by user to CAPITALS. 

2) If you want to search for another movie from the list given enter either 'Y' or 'y' to the question "Do you want to search for another movie?". 
Enter 'N' or 'n' to end the code.(Any other letter except for 'Y' and 'y' will also end the program.)

3) The information about the movies is stored in the text file "Name.txt".

4) The program also searches for movies dynamically.
    For example: If u enter "aven" you will get a output even though aven is not the name of a movie. But it will only give the first movie with aven in it. 

## Important:

IMPORTANT: For the code to execute properly, the file which contains the information about the movies(Name.txt) should be present in the same folder as the source code i.e. the "Moviemate.c" file.

IMPORTANT: The "Name.txt" file's encoding should not be changed to Unicode. It's encoding is currently ANSI and should remain ANSI or the program will not execute successfully.

## Current Data:
### Will be updated frequently.
List of the movies that we can search using the given code are:

    DOCTOR STRANGE	
    THE AVENGERS:ENDGAME
    TITANIC
    AVATAR
    THE WOLF OF THE WALL STREET
    AVENGERS:INFINITY WAR
    ANNABELLE:CREATION
    NEWTON
    INCEPTION
    BLACK PANTHER
    CAPTAIN AMERICA:CIVIL WAR
    GUARDIANS OF THE GALAXY
    GUARDIANS OF THE GALAXY:VOLUME 2
    IRON MAN
    IRON MAN 2
    IRON MAN 3
    THE AVENGERS
    SPIDERMAN:HOMECOMING
    AVENGERS:AGE OF ULTRON
