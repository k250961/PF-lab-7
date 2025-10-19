#include <stdio.h>

int main() {
    int arr[10] = {0, 0, 0, 1, 0, 0, 1, 1, 0, 1};
    int n;
    int bookings = 0;
    
    while (bookings < 5) {
        printf("Enter seat number (0-9): ");
        scanf("%d", &n);

        if (n < 0 || n > 9) {
            printf("Invalid seat number! Please enter between 0 and 9.\n\n");
            continue;
        }
        
        if (arr[n] == 1) {
            printf("Seat already booked\n\n");
        } else {
            arr[n] = 1;
            bookings++;
            printf("Seat has been confirmed and booked on your name\n\n");
        }
    }
    
    printf("\n5 seats successfully booked!\n");
    printf("Final seat status (0 = empty, 1 = booked):\n");
    
    for (int i = 0; i < 10; i++) {
        printf("Seat %d : %d\n", i, arr[i]);
    }
    
    return 0;
}

