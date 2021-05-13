// Display ABCD Game ex. a=apple with Switch Game

#include <stdio.h>

void main()
{
    char ch;
    printf("Enter the character (A-Z): ");
    scanf(" %c", &ch);
    switch (ch)
    {
    case 'a':
    case 'A':
        printf("A for Apple");
        break;
    case 'b':
    case 'B':
        printf("B for Ball");
        break;
    case 'c':
    case 'C':
        printf("C for Cat");
        break;
    case 'd':
    case 'D':
        printf("D for Dog");
        break;
    case 'e':
    case 'E':
        printf("E for Elephant");
        break;
    case 'f':
    case 'F':
        printf("F for Fish");
        break;
    case 'g':
    case 'G':
        printf("G for Goat");
        break;
    case 'h':
    case 'H':
        printf("H for Hen");
        break;
    case 'i':
    case 'I':
        printf("I for Icecream");
        break;
    case 'j':
    case 'J':
        printf("J for Junk");
        break;
    case 'k':
    case 'K':
        printf("K for King");
        break;
    case 'l':
    case 'L':
        printf("L for Lion");
        break;
    case 'm':
    case 'M':
        printf("M for Monkey");
        break;
    case 'n':
    case 'N':
        printf("N for Nest");
        break;
    case 'o':
    case 'O':
        printf("O for Orange");
        break;
    case 'p':
    case 'P':
        printf("P for Peacock");
        break;
    case 'q':
    case 'Q':
        printf("Q for Queen");
        break;
    case 'r':
    case 'R':
        printf("R for Rat");
        break;
    case 's':
    case 'S':
        printf("S for Sun");
        break;
    case 't':
    case 'T':
        printf("T for TIger");
        break;
    case 'u':
    case 'U':
        printf("U for Umbrella");
        break;
    case 'v':
    case 'V':
        printf("V for Van");
        break;
    case 'w':
    case 'W':
        printf("W for Watch");
        break;
    case 'x':
    case 'X':
        printf("X for X-Ray");
        break;
    case 'y':
    case 'Y':
        printf("Y for Yellow");
        break;
    case 'z':
    case 'Z':
        printf("Z for Zebra");
        break;
    default:
        printf("Invalid Character");
    }
}