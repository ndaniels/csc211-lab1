% CSC 211 Lab 1: Fixing a program
% Spring 2017

- log into lab machines
- set up docker command if you didn't already
- run docker
- download code with git
- try to compile it
- run it with a certain input
- run it with a different input
- run it under valgrind
- look for the error message
- fix the bug
- git commit

#Find a partner

You will do this lab with a partner, and ideally, you will work with that partner for the first programming assignment. So, *find a partner*.

#Logging into the lab machines

###Step 1:

You should have received an email with your lab username and password. Take turns (with your partner) logging into your accounts. At the very least, make sure one of you is able to log in.

You may use your own computer if Docker is working properly from the previous lab.

###Step 2:

Open Docker if it is not running (the whale icon in the menu bar will tell you its status).

Open Terminal if it is not running (if you don't see it, hold the `command` key and hit space, then type Terminal and hit return).

####If you are on a lab machine, or didn't get this working in the previous lab:

Create a folder on the Desktop called CSC211.

Type `echo "alias d211=\"docker run -t -i -v ~/Desktop/CSC211:/home/student/data ndaniels/csc211-dev\"" >> ~/.bash_profile`. This writes the `alias` command into the file `.bash_profile` which ensures that it will make the `d211` alias available whenever you open up a Terminal.

Close and re-open the terminal window.

###Step 3:

Type `d211` which should launch the CSC211 docker environment.

Type `cd data` which will put you in the folder that's shared with the Desktop.

Type `git pull 