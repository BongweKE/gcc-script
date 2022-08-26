# gcc-script
![Alt](https://i.imgur.com/t6kvvTG.png "Unix")
A script to make it easier to compile given C file in betty standard, Run it and
test the output on first run:
Run this using the commands 
~~~~
./gcc ./compile.sh ./file-to compile
~~~~
We Expect that the compiler will either give an error message or compile and run
the resultant file, named a.out please note that the compiled file will be
named a.out. You can modify this script to also include a different name for
the file to be compiled.

## Guidelines On Making It Work:
1. If you wish, modify the source.c file to include anything you want
then compile it, prefarrably use
~~~~
$ gcc ./source.c -o _gcc
~~~~
2. We have a test file, prompt.c which mimicks a shell which will print out
whatever you type into the prompt
3. Assuming you have an executable named _gcc in your folder, or whatever the
executable you're using is named. Now, It's time to use the compiler
4. use the command
~~~~
$ ./_gcc ./compiler.sh ./prompt.c
~~~~
5. Note that prompt.c is an example c file and you can use whichever c file
you want and compile it.

## Note
- Using the current settings of source.c and compiler.sh, we give the file
whichever default name your gcc has.
- You're expected to be using a machine which has gcc installed therefore
compatibility might be for some if not all debian unix distros
- For portability, the executable, `_gcc` and `compiler.sh` should be copied
into whichever folder you're working on or be added to path executables
of your bash terminal
- In case your compilation was erroneous, there are going to be some weird lines
which you should just ignore for now.
- In future, I'll add a control flow to check if compilation was successful
before outputing the last line in `compiler.sh`
- If you test using `prompt.c` you can exit the temporary prompt using Ctrl+D

### Ensure compiler.sh is executable and you have gcc
