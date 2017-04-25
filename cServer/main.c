//
//  main.c
//  cServer
//
//  Created by Jake Goh on 25/4/17.
//  Copyright © 2017 Jake Goh Si Yuan. All rights reserved.
//

#include <stdio.h>
#include <unistd.h>

int main(int argc, const char * argv[]) {
    int status;
    pid_t pid = fork();
    if(pid==0){
        printf("shiok\n");

        int ret = execl("/usr/bin/gcc", "gcc","/Users/jakegsy/Documents/Yale-NUS/OS/cServer/cServer/compilethis.c","-c",(char*)NULL);
        printf("memate\n");
        if(ret==-1){
            perror("ret");
        }
    }
    else if (waitpid(pid, &status, 0) >0) {
        printf("%d status\n",&status);
    }
    printf("shiok\n");

    return 0;
}
