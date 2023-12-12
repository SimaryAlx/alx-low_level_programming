<H1 align="center", height="1500"> <ins> README.md File </ins> </H1>
<H1 align="center", height="1500"> <ins> 0x18. C - Dynamic libraries README.md File</ins> </H1>

![BekaHabesha.]( https://i.ibb.co/pPdSt8h/Alx-logo-0x18-C-Dynamic-libraries.jpg)

##

* File_name: <ins>**README.md file**</ins>
* Created: <ins>**On November 13, 2023**</ins>
* Author: <ins>***Bereket Dereje Mekonnen***</ins>
* Project: <ins>**0x18. C - Dynamic libraries**</ins>
* GitHub repository: <ins>**alx-low_level_programming**</ins>
* Directory: <ins>**0x18-dynamic_libraries**</ins>
* Project Tasks: <ins>**Mandatory and Advanced**</ins>
* Tasks in number: <ins>**4 Tasks (2-Mandatory & 2-Advanced)**</ins>
* Mandatory_Tasks: <ins>**From Task 0 to 1**</ins>
* Advanced_Tasks: <ins>**From Task 2 to 3**</ins>

##

![BekaHabesha.]( https://i.ibb.co/y5wmQyd/Alx-enginn-Build-ur-future.png)

### **PROJECT_TITLE:**
<h2 align="center"> <ins>0x18. C - Dynamic libraries</ins> </h2>

### **GITHUB_REPOSITORY:**
<h2 align="center"> <ins>alx-low_level_programming</ins> </h2>

### **DIRECTORY:**
<h2 align="center"> <ins>0x18-dynamic_libraries</ins> </h2>

##

<h1 align="center"> <ins> PROJECT TASKS (Mandatory and Advanced)</h1> </ins>

<h1 align="center">MANDATORY_TASKS (From Task 0 to 1)</h1>

## **No. 0. A library is not a luxury but one of the necessities of life**
  * <ins>**libdynamic.so**</ins>
    * <ins>**Create the dynamic library libdynamic.so containing all the functions listed below:**</ins>
      * int _putchar(char c);
      * int _islower(int c);
      * int _isalpha(int c);
      * int _abs(int n);
      * int _isupper(int c);
      * int _isdigit(int c);
      * int _strlen(char *s);
      * void _puts(char *s);
      * char *_strcpy(char *dest, char *src);
      * int _atoi(char *s);
      * char *_strcat(char *dest, char *src);
      * char *_strncat(char *dest, char *src, int n);
      * char *_strncpy(char *dest, char *src, int n);
      * int _strcmp(char *s1, char *s2);
      * char *_memset(char *s, char b, unsigned int n);
      * char *_memcpy(char *dest, char *src, unsigned int n);
      * char *_strchr(char *s, char c);
      * unsigned int _strspn(char *s, char *accept);
      * char *_strpbrk(char *s, char *accept);
      * char *_strstr(char *haystack, char *needle);

    * If you haven’t coded all of the above functions 
      * create empty ones, with the right prototype.
        * Don’t forget to push your main.h file in your repository,
          * containing at least all the prototypes of the above functions.


* julien@ubuntu:~/0x18. Dynamic libraries$ ls -la lib*
  * -rwxrwxr-x 1 julien julien 13632 Jan  7 06:25 libdynamic.so

###

* julien@ubuntu:~/0x18. Dynamic libraries$ nm -D libdynamic.so

      0000000000000a90 T _abs
      0000000000000aa9 T _atoi
      0000000000202048 B __bss_start
                       w __cxa_finalize
      0000000000202048 D _edata
      00000000000011f8 T _fini
                       w __gmon_start__
      0000000000000900 T _init
      0000000000000bd7 T _isalpha
      0000000000000c04 T _isdigit
      0000000000000c25 T _islower
      0000000000000c46 T _isupper
                       w _ITM_deregisterTMCloneTable
                       w _ITM_registerTMCloneTable
                       w _Jv_RegisterClasses
      0000000000000c67 T _memcpy
      0000000000000caa T _memset
      0000000000000ce9 T _putchar
      0000000000000d0e T _puts
      0000000000000d4a T _strcat
      0000000000000dcf T _strchr
      0000000000000e21 T _strcmp
      0000000000000e89 T _strcpy
      0000000000000eeb T _strlen
      0000000000000f15 T _strncat
      0000000000000fa5 T _strncpy
      0000000000001029 T _strpbrk
      000000000000109d T _strspn
      0000000000001176 T _strstr
                       U write

##

## **No. 1. Without libraries what have we? We have no past and no future**
  * <ins>**1-create_dynamic_lib.sh**</ins>
    * <ins>**Create a script that creates a dynamic library called liball.**</ins>
      * so from all the .c files that are in the current directory.

###

* julien@ubuntu:~/0x18. Dynamic libraries$ ls *.c

      abs.c   isalpha.c  islower.c  memcpy.c  putchar.c  strcat.c        
      strcmp.c  strlen.c   strncpy.c  strspn.c

      atoi.c  isdigit.c  isupper.c  memset.c  puts.c     strchr.c  
      strcpy.c  strncat.c  strpbrk.c  strstr.c

###

* julien@ubuntu:~/0x18. Dynamic libraries$ ./1-create_dynamic_lib.sh 

###

* julien@ubuntu:~/0x18. Dynamic libraries$ nm -D --defined-only liball.so 

      0000000000000a90 T _abs
      0000000000000aa9 T _atoi
      0000000000202048 B __bss_start
      0000000000202048 D _edata
      0000000000202050 B _end
      00000000000011f8 T _fini
      0000000000000900 T _init
      0000000000000bd7 T _isalpha
      0000000000000c04 T _isdigit
      0000000000000c25 T _islower
      0000000000000c46 T _isupper
      0000000000000c67 T _memcpy
      0000000000000caa T _memset
      0000000000000ce9 T _putchar
      0000000000000d0e T _puts
      0000000000000d4a T _strcat
      0000000000000dcf T _strchr
      0000000000000e21 T _strcmp
      0000000000000e89 T _strcpy
      0000000000000eeb T _strlen
      0000000000000f15 T _strncat
      0000000000000fa5 T _strncpy
      0000000000001029 T _strpbrk
      000000000000109d T _strspn
      0000000000001176 T _strstr

###

* julien@ubuntu:~/0x18. Dynamic libraries$ 

#

<h1 align="center"> ADVANCED_TASKS (From Task 2 to 3)</h1>

## **No. 2. Let's call C functions from Python**
  * <ins>**100-operations.so**</ins>

    * I know, you’re missing C when coding in Python.
      * So let’s fix that!

    * <ins>**Create a dynamic library that contains C functions that can be called from Python.**</ins>
      * See example for more detail.

###

* julien@ubuntu:~/0x18$ cat 100-tests.py

      import random
      import ctypes

      cops = ctypes.CDLL('./100-operations.so')
      a = random.randint(-111, 111)
      b = random.randint(-111, 111)
      print("{} + {} = {}".format(a, b, cops.add(a, b)))
      print("{} - {} = {}".format(a, b, cops.sub(a, b)))
      print("{} x {} = {}".format(a, b, cops.mul(a, b)))
      print("{} / {} = {}".format(a, b, cops.div(a, b)))
      print("{} % {} = {}".format(a, b, cops.mod(a, b)))

###

* julien@ubuntu:~/0x16. Doubly linked lists$ python3 100-tests.py 

      66 + -76 = -10
      66 - -76 = 142
      66 x -76 = -5016
      66 / -76 = 0
      66 % -76 = 66

###

* julien@ubuntu:~/0x18$ python3 100-tests.py

      -34 + -57 = -91
      -34 - -57 = 23
      -34 x -57 = 1938
      -34 / -57 = 0
      -34 % -57 = -34

###

* julien@ubuntu:~/0x18$ python3 100-tests.py 

      -5 + -72 = -77
      -5 - -72 = 67
      -5 x -72 = 360
      -5 / -72 = 0
      -5 % -72 = -5

###

* julien@ubuntu:~/0x18$ python3 100-tests.py 

      39 + -62 = -23
      39 - -62 = 101
      39 x -62 = -2418
      39 / -62 = 0
      39 % -62 = 39

###

* julien@ubuntu:~/0x18$ 

##

## **No. 3. Code injection: Win the Giga Millions!**
  * <ins>**101-make_me_win.sh**</ins>

![Beki.]( http://4.bp.blogspot.com/-9rqm8Pg1apY/UZHoC79xXtI/AAAAAAAACOs/0Fp4A4ipUqM/s320/tumblr_mlzp3qgHss1s5xo13o3_r1_1280.jpg)

    * I bought a ticket for the Giga Millions and chose these numbers: 9, 8, 10, 24, 75 + 9.
      * If you could run two commands on the same server where the Giga Millions program runs, could you make me win the Jackpot?
    
    * Our mole got us a copy of the program, you can download it here.
      * Our mole also gave us a piece of documentation:
/* Giga Millions program                                                                                    
  * Players may pick six numbers from two separate pools of numbers:                                                
  * - five different numbers from 1 to 75 and                                                                       
  * - one number from 1 to 15                                                                                       
  * You win the jackpot by matching all six winning numbers in a drawing.                                           
  * Your chances to win the jackpot is 1 in 258,890,850                                                             
  *                                                                                                                 
  * usage: ./gm n1 n2 n3 n4 n5 bonus

* You can’t modify the program gm itself as Master Sysadmin Sylvain (MSS)
  * always checks its MD5 before running it
* The system is an Linux Ubuntu 16.04
* The server has internet access
* Our mole will be only able to run two commands from a shell script,
  * without being detected by MSS
* Your shell script should be maximum 3 lines long.
  * You are not allowed to use ;, &&, ||, |, ` 
  * (it would be detected by MSS), and
  * have a maximum of two commands
* Our mole has only the authorization to upload one file on the server.
  * It will be your shell script
* Our mole will run your shell script this way:
  * mss@gm_server$ . ./101-make_me_win.sh
* Our mole will run your shell script from the same directory containing the program gm,
  * exactly 98 seconds before MSS runs gm with my numbers:
    * ./gm 9 8 10 24 75 9
* MSS will use the same terminal and session than our mole
* Before running the gm program,
  * MSS always check the content of the directory
* MSS always exit after running the program gm
* TL;DR;
  * This is what is going to happen

###

      mss@gm_server$ . ./101-make_me_win.sh
      mss@gm_server$ rm 101-make_me_win.sh
      mss@gm_server$ ls -la
      . .. gm
      mss@gm_server$ history -c
      mss@gm_server$ clear
      mss@gm_server$ ls -la
      . .. gm
      mss@gm_server$ md5sum gm
      d52e6c18e0723f5b025a75dea19ef365  gm
      mss@gm_server$ ./gm 9 8 10 24 75 9
      --> Please make me win!
      mss@gm_server$ exit

##
