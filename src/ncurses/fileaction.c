#include "fileaction.h"

char getfileactionchar(int action)
{
    switch (action)
    {
        case FILEACTION_UNRESOLVED:
            return ' ';
        case FILEACTION_KEEP:
            return '+';
        case FILEACTION_DELETE:
            return '-';
        case FILEACTION_ERROR:
            return '!';
        default:
            return '?';
    }
}