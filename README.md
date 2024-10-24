# MINISHELL
******
Is a command-line interpreter, mimics the bash but doing the basics functionality.

**How it's works?**

MINISHELL works in a **LOOP**, when the shell is running, it loops infinitely through the following stages:

1- Display the **prompt** "minish$" before reading each command line.
2- Readline is used to read command from the user's terminal.
3- The command line is interpreted (tokenized, parsed, expanded, quotes removed).
Breaks the input into words and operators, obeying the quoting rules described in Quoting. These tokens are separated by metacharacters. Parses the tokens into commands. Performs the various expansions, breaking the expanded tokens. Performs any necessary redirections and removes the redirection operators4 and their operands from the argument list.
4- The command line is redirected and executed.
5-Optionally waits for the command to complete and collects its exit status.

**#Things to deal:**
- Many test cases
- Software architecture
- System calls
- File descriptors
- Team coordination, management and work distribution.
- Planning and research, to avoid overhauling the whole design later
****
# THE PROJECT - DEVELOPMENT 
- Has two parts : the **parsing** (where you treat user input) and the **execution** (where you execute what have been parsed).
The implementation is split in this to parts **FRONT END** && **BACK END**
-  **FRONT END** The front-end is the part that deals with user input and user interaction, like commands and signals.
-  **BACK END** is where the internal work is done (the execution).

## **FRONT END**
We have two things to take care:
- **Command** (user as string)
- **Signals** (Ctrl + c etc..)
### **Comands**:
To understand this, the commands, it's neccesary to see how bash or every compiler parse commands>>> parsing a command goes through two phases (**the lexical analysis (lexing)** which produces “lexems” and then the **syntax analysis** parsing the lexems)

**THE LEXICAL ANALYSIS:**
Its the first part of the compilation, where is taking the input from the user and dividing in "lexemas" and processing it char by char into “tokens"... In this process we delete spaces, Tabs and we add "" '' if it's necessesary.
-     EXAMPLE>>  int x = 10;
 **Lexemas:** It is the exact sequence of characters that appears in the source code.-
- int
- x
- =
- 10
- ;

 **Tokens:** A token is an abstract representation of a sequence of characters that has a specific meaning within the context of a programming language. Each token can consist of one or more characters and is classified into different types.- 
- KEYWORD (int)
- IDENTIFIER (x)
- OPERATOR (=)
- LITERAL (10)
- PUNCTUATION (;)

First, the most important thing to us is the type of the lexems/tokens — not the values — and the order they came in.
[Lexical analisys video](https://www.youtube.com/watch?v=MZ9NZdZteG4&ab_channel=NesoAcademy)

**SYNTAX ANALYSIS / PARSING:**:   
