#include <iostream>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>

#define ERR_MESSAGE "ERROR FROM EX4"
#define OUTPUT_FILE_NAME "to_srv"

int main(int argc, char *argv[]) {
    //check params correct
    if (argc != 5) {
        printf(ERR_MESSAGE);
        exit(1);
    }

    // init params
    pid_t server_pid = atoi(argv[1]);
    int var1 = atoi(argv[2]);
    int operation = atoi(argv[3]);
    int var2 = atoi(argv[4]);

    //open file
    int result = fopen(OUTPUT_FILE_NAME, O_WRONLY | O)


    return 0;
}
