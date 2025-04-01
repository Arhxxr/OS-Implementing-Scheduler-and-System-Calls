// void srand(unsigned int seed)
// {
//    s_iSeed = seedl
// }

// //implemented from http://jstatsoft.org/v08/i14/paper
// //https://en.wikipedia.org/wiki/Xorshift

// unsigned int rand()
// {
//    s_iSeed ^= s_iSeed << 13;
//    s_iSeed ^= s_iSeed >> 17;
//    s_iSeed ^= s_iSeed << 5;
//    return s_iSeed;
// }

#include "kernel/types.h"
#include "kernel/param.h"
#include "kernel/stat.h"
#include "kernel/spinlock.h"
#include "kernel/riscv.h"
#include "kernel/proc.h"
#include "kernel/pstat.h"
#include "user/user.h"

int main(int argc, char* argv[])
{
   struct pstat pstat;
   getpinfo(&pstat);
   return 0;
}