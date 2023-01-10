#include<stdio.h>
int TOH(int n , char from_rod, char to_rod, char aux_rod) {
    if(n==1){
        printf("/n the rod move disc 1 from rod %c to %c ",from_rod ,to_rod);
    }
    towerofHanoi(n-1, from_rod, aux_rod, to_rod);
    printf("\n Move disk %d from rod %c to rod %c", n, from_rod, to_rod);
    towerOfHanoi(n-1, aux_rod, to_rod, from_rod);
}
int main()
{
    int n = 4; // Number of disks
    towerOfHanoi(n, 'A\', \'C\', \'B\'); 
    return 0;
}