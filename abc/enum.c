#include <stdio.h>

int main()
{
    enum sex{man,woman}s;
    char msg[2][10] = {"男性","女性"};
    for(s=man;s<=woman;s++)
    switch(s)
    {
        case man:
            puts(msg[man]);
            break;
        case woman:
            puts(msg[woman]);
            break;
    }   
    return 0;
}
