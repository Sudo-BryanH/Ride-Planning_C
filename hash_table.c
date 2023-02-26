#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdint.h>
#include "hash_table.h"

struct pair {
    char *first;
    
};

struct hash_table {
    int size;
    struct pair *list[];

};






