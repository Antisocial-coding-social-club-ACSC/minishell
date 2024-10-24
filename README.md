# MINISHELL
******
Is a command-line interpreter, mimics the bash but doing the basics functionality.
- The shell will work only in interactive mode (no scripts, i.e. the executable takes no arguments)
- Run simple commands with absolute, relative path (e.g. /bin/ls, ../bin/ls)
- Run simple commands without a path (e.g. ls, cat, grep, etc…)
- Have a working history (you can navigate through commands with up/down arrows)
- Implement pipes (|)
- Implement redirections (<, >, >>)
- Implement the here-doc (<<)
- Handle double quotes ("") and single quotes (''), which should escape special characters, beside $ for double quotes.
- Handle environment variables ($ followed by a sequence of characters).
- Handle signals like in bash (ctrl + C, ctrl + \, ctrl + D).
- Implement the following built-ins:
    *echo (option -n only)
    *exit
    *env (with no options or arguments)
    *export (with no options)
    *unset (with no options)
    *cd
    *pwd
- And for the bonus part (optional, but i did it, because it’s cool!)
- handle && and || with the parenthesis () for priority.
- handle * wildcards for the current working directory.

**#Things to deal:**
- Many test cases
- Software architecture
- System calls
- File descriptors
- Team coordination, management and work distribution.

**#Indispensable**
- Planning and research, to avoid overhauling the whole design later
****
# THE PROJECT
- Has two parts : the **parsing** (where you treat user input) and the **execution** (where you execute what have been parsed).
The implementation is split in this to parts **FRONT END** && **BACK END**
-  **FRONT END** The front-end is the part that deals with user input and user interaction, like commands and signals.
-  **BACK END** is where the internal work is done (the execution).

## **FRONT END**
We have two things to take care:
    -**Command** (user as string)
    - **Signals** (Ctrl + c etc..)
### **Comands**:
To understand this, the commands, it's neccesary to see how bash parse commands>>> parsing a command goes through two phases (**the lexical analysis (lexing)** which produces “lexems” and then the **syntax analysis** parsing the lexems)

**THE LEXICAL ANALYSIS:**
Its the first part of the compilation, where is taking the input from the user and dividing in "lexemas" and processing it char by char into “tokens"
EXAMPLE>>  int x = 10;
 - **Lexemas:** It is the exact sequence of characters that appears in the source code.- 
 Example >>>> 
 int
x
=
10
;
- **Tokens:** A token is an abstract representation of a sequence of characters that has a specific meaning within the context of a programming language. Each token can consist of one or more characters and is classified into different types.-
Example >>>>>
KEYWORD (int)
IDENTIFIER (x)
OPERATOR (=)
LITERAL (10)
PUNCTUATION (;)
First, the most important thing to us is the type of the lexems/tokens — not the values — and the order they came in.

**SYNTAX ANALYSIS / PARSING:**
