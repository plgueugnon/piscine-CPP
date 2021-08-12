#!/bin/bash

# Setting colors for bash script

YEL=`tput setaf 3`
NC=`tput setaf sgr0`
GRE=`tput setaf 2`
RED=`tput setaf 1`
WHT=`tput setaf 7`


echo "${YEL}....TESTING EX00....${WHT}"
# make -j -C ./ex00/ -f Makefile
ex00/make -f Makefile

echo "${YEL}TEST input =  ./megaphone \"shhhhh... I think the students are asleep...\"${WHT}"
./megaphone "shhhhh... I think the students are asleep..."
echo "${YEL}TEST input = ./megaphone Damnit \" ! \" \"Sorry students, I thought this thing was off.\"${WHT}"
./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
echo "${YEL}TEST input = ./megaphone ${WHT}"
./megaphone 

#make fclean -C ./ex00/ -f Makefile

echo "${GRE}....END OF EX00 TEST....${WHT}"