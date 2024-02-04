#ifndef FILEACTION_H
#define FILEACTION_H

#define FILEACTION_UNRESOLVED 0
#define FILEACTION_KEEP       1
#define FILEACTION_DELETE    -1
#define FILEACTION_DELIST    -2
#define FILEACTION_ERROR     -3

char getfileactionchar(int action);

#endif