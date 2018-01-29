#include "music.hpp"

void listen(std::string data)
{
    for(int i=0; i<data.size(); i++)
    {
        if(data[i]=='.') Beep(1000,100);
        else if(data[i]=='-') Beep(2000,100);
        else if(data[i]==' ') Beep(0,100);
    }
}
