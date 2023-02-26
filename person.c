#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdint.h>
#include "person.h"

struct Person {
    char *name;
    int *phone[10];
    char *group;
    char *gender;
    struct Person * next;
    struct Person * prev;

};