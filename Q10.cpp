#include <stdio.h>
int main() {
    int arr[10];
    int n, a = 0, index;
    
    printf("Enter 10 random integers:\n");
    
    for(int i = 0; i < 10; i++) {
        printf("Random integer for %d:", i);
        scanf("%d", &arr[i]);
    }
    
    printf("Enter your search value:");
    scanf("%d", &n);
    for(int i = 0; i < 10; i++) {
        if(arr[i] == n) {
        a = 1;
        index = i;
        break;
    }
    
    }
    if(a == 1) {
        printf("Search value %d found at index %d", n, index);
    }
    else {
        printf("Search value %d does not exist in given array", n);
    }

    return 0;
}

