#ifndef BOOK_SUBSCRIPTION_H
#define BOOK_SUBSCRIPTION_H

#include "constants.h"

struct time
{
    int hour;
    int minute;
    int second;
};

struct bytes
{
    int number;
};

struct ethernet_protocole
{
    time start;
    time end;
    bytes received;
    bytes dispatched;
    char path[MAX_STRING_SIZE];
};

#endif