#include "coding.hpp"

std::string code(std::string data)
{
    std::string showCode;

    for(int i=0; i<data.size(); i++)
    {
        switch(data[i])
        {
            //--------------------------
            //NUMBERS

            case '1':
            showCode.append(".---- "); continue;
            case '2':
            showCode.append("..--- "); continue;
            case '3':
            showCode.append("...-- "); continue;
            case '4':
            showCode.append("....- "); continue;
            case '5':
            showCode.append("..... "); continue;
            case '6':
            showCode.append("-.... "); continue;
            case '7':
            showCode.append("--... "); continue;
            case '8':
            showCode.append("---.. "); continue;
            case '9':
            showCode.append("----. "); continue;
            case '0':
            showCode.append("----- "); continue;

            //--------------------------
            //SMALL AND BIG LETTERS

            case 'a': case 'A':
            showCode.append(".- ");continue;
            case 'b': case 'B':
            showCode.append("-... "); continue;
            case 'c': case 'C':
            showCode.append("-.-. "); continue;
            case 'd': case 'D':
            showCode.append("-.. "); continue;
            case 'e': case 'E':
            showCode.append(". "); continue;
            case 'f': case 'F':
            showCode.append("..-. "); continue;
            case 'g': case 'G':
            showCode.append("--. "); continue;
            case 'h': case 'H':
            showCode.append(".... "); continue;
            case 'i': case 'I':
            showCode.append(".. "); continue;
            case 'j': case 'J':
            showCode.append(".--- "); continue;
            case 'k': case 'K':
            showCode.append("-.- "); continue;
            case 'l': case 'L':
            showCode.append(".-.. "); continue;
            case 'm': case 'M':
            showCode.append("-- "); continue;
            case 'n': case 'N':
            showCode.append("-. "); continue;
            case 'o': case 'O':
            showCode.append("--- "); continue;
            case 'p': case 'P':
            showCode.append(".--. "); continue;
            case 'q': case 'Q':
            showCode.append("--.- "); continue;
            case 'r': case 'R':
            showCode.append(".-. "); continue;
            case 's': case 'S':
            showCode.append("... "); continue;
            case 't': case 'T':
            showCode.append("- "); continue;
            case 'u': case 'U':
            showCode.append("..- "); continue;
            case 'v': case 'V':
            showCode.append("...- "); continue;
            case 'w': case 'W':
            showCode.append(".-- "); continue;
            case 'x': case 'X':
            showCode.append("-..- "); continue;
            case 'y': case 'Y':
            showCode.append("-.-- "); continue;
            case 'z': case 'Z':
            showCode.append("--.. "); continue;

            //-------------------------
            //MARKS AND SYMBOLS

            case '.':
            showCode.append(".-.-.- "); continue;
            case ',':
            showCode.append("--..-- "); continue;
            case '\'':
            showCode.append(".----. "); continue;
            case '\"':
            showCode.append(".-..-. "); continue;
            case '_':
            showCode.append("..--.- "); continue;
            case ':':
            showCode.append("---... "); continue;
            case ';':
            showCode.append("-.-.-. "); continue;
            case '?':
            showCode.append("..--.. "); continue;
            case '!':
            showCode.append("-.-.-- "); continue;
            case '-':
            showCode.append("-....- "); continue;
            case '+':
            showCode.append(".-.-. "); continue;
            case '/':
            showCode.append("-..-. "); continue;
            case '(':
            showCode.append("-.--. "); continue;
            case ')':
            showCode.append("-.--.- "); continue;
            case '=':
            showCode.append("-...- "); continue;
            case '@':
            showCode.append(".--.-. "); continue;
            case ' ':
            showCode.append("  "); continue;
        }
    }
   return showCode;
}


