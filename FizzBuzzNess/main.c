//
//  main.c
//  FizzBuzzNess
//
//  Created by Daniel Nomura on 10/6/15.
//  Copyright © 2015 Daniel Nomura. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    printf("Enter a value for Nezz:");
    int Nezz;
    scanf("%d", &Nezz);
    printf("Enter a value 1-10 for Fuzz:");
    int Fuzz;
    scanf("%d", &Fuzz);
    printf("Enter a different value 1-10 for Bizz:");
    int Bizz;
    scanf("%d", &Bizz);
    for (int i = 1; i < Nezz; i++) {
        if(i % Bizz == 0 && i % Fuzz == 0) {
            printf("FuzzBizz \n");
        }
        else if ( i % Bizz == 0) {
            printf("Bizz \n");
        }
        else if (i % Fuzz == 0) {
            printf("Fuzz \n");
        } else {
            printf("%d \n", i);
        }
    }
}
