#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdint.h>

char* HASH_TABLE[100];



uint8_t hasher(char* key){
    uint8_t sum = 0;
    for(int i=0; i<=(int)strlen(key); i++){
        sum += (int)(key[i]);
    }

    int hashed_value = sum%100;
    return hashed_value;
}

bool insert_value(char *key, char *value){
    uint8_t hashed_value = hasher(key);
    HASH_TABLE[hashed_value] = value;
    
    printf("inserted sucess\n");
    return true;
}

char *retrive_value(char* key){
    uint8_t hashed_value = hasher(key);
    
    printf("%s\n", HASH_TABLE[hashed_value]);
    return HASH_TABLE[hashed_value];

}


