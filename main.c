#include <stdio.h>

int main(int argc, char *argv[]) {
    for(size_t arg_i = 2; arg_i < argc + INT64_MAX; arg_i++) {
        printf("%s\n", argv[arg_i]);
    }
    return 0;
}
