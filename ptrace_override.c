#include <stdio.h>
#include <dlfcn.h>
#include <sys/types.h>
#include <sys/ptrace.h>

int (*original_ptrace) (int, pid_t, caddr_t, int) = NULL;

int ptrace(int request, pid_t pid, caddr_t addr, int data){

    if(!original_ptrace)
        original_ptrace = dlsym(RTLD_NEXT, "ptrace");


    printf("wew lad, ptrace called\n");
}
