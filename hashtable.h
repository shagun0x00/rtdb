#ifndef __HASHTABLE_H__
#define __HASHTABLE_H__
#include <stdint.h>
#include <stdbool.h>


uint8_t hasher(char* key);

bool insert_value(char *key, char *value);

char *retrive_value(char* key);


#endif