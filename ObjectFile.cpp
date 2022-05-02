#include <stdio.h>
#include <stdint.h>
#include <malloc.h>



int generateOBJ_file() {

    uint16_t program[] = 
    {
        0x3000, 
        0xF023,
        0xF025
    };

    FILE* file = fopen("out.obj", "wb");  

    if (file == NULL) { 
        printf("Error");
        getchar();
        return 1;
    }

    fwrite(program, sizeof(uint16_t), 3, file); 

    fclose(file);   
    return 0;
}