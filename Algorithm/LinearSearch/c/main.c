#include <stdio.h>


int linear_search(int data[], int length, int target)
{
    if(data == NULL) {
        return -1; //Not found.
    }

    int i;
    for(i = 0; i < length; i++) {
        if (data[i] == target) {
            return i;
        }
    }

    return -1; //Not found.
}

int main(void)
{
    int data[5] = { 4, 2, 3, 5, 1 };
    int result = linear_search(data, (sizeof(data) / sizeof(int)), 5);

    if(result == -1) {
        puts("Not found.\r");
    } else {
        printf("Found: index %d\n", result);
    }

    return 0;
}
