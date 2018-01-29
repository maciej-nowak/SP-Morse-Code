#include "decoding.hpp"

using namespace std;

std::string decode(std::string data)
{
    int counter=data.size(), i=0;
    std::string letter, readCode, temp;

    while(counter>0)
    {
        if(data[i]==' ' && data[i+1]==' ')
        {
            readCode.append(" ");
            i++; counter--;
        }

        else
        {
            while(data[i]!=' ' && counter!=0)
            {
                temp=data[i];
                letter.append(temp);
                i++; counter--;
            }

            //---------------------------------------
            //NUMBERS

            if(letter==".----") readCode.append("1");
            else if(letter=="..---") readCode.append("2");
            else if(letter=="...--") readCode.append("3");
            else if(letter=="....-") readCode.append("4");
            else if(letter==".....") readCode.append("5");
            else if(letter=="-....") readCode.append("6");
            else if(letter=="--...") readCode.append("7");
            else if(letter=="---..") readCode.append("8");
            else if(letter=="----.") readCode.append("9");
            else if(letter=="-----") readCode.append("0");

            //---------------------------------------
            //LETTERS

            if(letter==".-") readCode.append("a");
            else if(letter=="-...") readCode.append("b");
            else if(letter=="-.-.") readCode.append("c");
            else if(letter=="-..") readCode.append("d");
            else if(letter==".") readCode.append("e");
            else if(letter=="..-.") readCode.append("f");
            else if(letter=="--.") readCode.append("g");
            else if(letter=="....") readCode.append("h");
            else if(letter=="..") readCode.append("i");
            else if(letter==".---") readCode.append("j");
            else if(letter=="-.-") readCode.append("k");
            else if(letter==".-..") readCode.append("l");
            else if(letter=="--") readCode.append("m");
            else if(letter=="-.") readCode.append("n");
            else if(letter=="---") readCode.append("o");
            else if(letter==".--.") readCode.append("p");
            else if(letter=="--.-") readCode.append("q");
            else if(letter==".-.") readCode.append("r");
            else if(letter=="...") readCode.append("s");
            else if(letter=="-") readCode.append("t");
            else if(letter=="..-") readCode.append("u");
            else if(letter=="...-") readCode.append("v");
            else if(letter==".--") readCode.append("w");
            else if(letter=="-..-") readCode.append("x");
            else if(letter=="-.--") readCode.append("y");
            else if(letter=="--..") readCode.append("z");

            //-------------------------
            //MARKS AND SYMBOLS

            if(letter==".-.-.-") readCode.append(".");
            else if(letter=="--..--") readCode.append(",");
            else if(letter==".----.") readCode.append("\'");
            else if(letter==".-..-.") readCode.append("\"");
            else if(letter=="..--.-") readCode.append("_");
            else if(letter=="---...") readCode.append(":");
            else if(letter=="-.-.-.") readCode.append(";");
            else if(letter=="..--..") readCode.append("?");
            else if(letter=="-.-.--") readCode.append("!");
            else if(letter=="-....-") readCode.append("-");
            else if(letter==".-.-.") readCode.append("+");
            else if(letter=="-..-.") readCode.append("/");
            else if(letter=="-.--.") readCode.append("(");
            else if(letter=="-.--.-") readCode.append(")");
            else if(letter=="-...-") readCode.append("=");
            else if(letter==".--.-.") readCode.append("@");
        }

        letter=""; i++; counter--;
    }

    return readCode;
}
