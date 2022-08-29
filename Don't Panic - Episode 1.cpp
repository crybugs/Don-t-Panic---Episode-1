#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    // number of floors
    int nb_floors;
    // width of the area
    int width;
    // maximum number of rounds
    int nb_rounds;
    // floor on which the exit is found
    int exit_floor;
    // position of the exit on its floor
    int exit_pos;
    // number of generated clones
    int nb_total_clones;
    // ignore (always zero)
    int nb_additional_elevators;
    // number of elevators
    int nb_elevators;
    int elevators[100]={};
    scanf("%d%d%d%d%d%d%d%d", &nb_floors, &width, &nb_rounds, &exit_floor, &exit_pos, &nb_total_clones, &nb_additional_elevators, &nb_elevators);
    int n = 0;
    int m = 0;
    for (int i = 0; i < nb_elevators; i++) {
        // floor on which this elevator is found
        int elevator_floor;
        // position of the elevator on its floor
        int elevator_pos;
        scanf("%d%d", &elevator_floor, &elevator_pos);
        elevators[elevator_floor]=elevator_pos;
        fprintf(stderr,"%d",elevator_pos);
    }
    
    
    

    // game loop
    while (1) {
        // floor of the leading clone
        int clone_floor;
        // position of the leading clone on its floor
        int clone_pos;
        // direction of the leading clone: LEFT or RIGHT
        char direction[11];
        scanf("%d%d%s", &clone_floor, &clone_pos, direction);
        int init = clone_pos;
        fprintf(stderr,"%d",m);
        // Write an action using printf(). DON'T FORGET THE TRAILING \n
        // To debug: fprintf(stderr, "Debug messages...\n");
        
        if(clone_pos-elevators[clone_floor]<0){
            printf("WAIR\n");
            printf("BLOCK\n");
        }
        printf("WAIT\n");
        while(n==0){
            if (exit_pos-clone_pos<0 && clone_floor==exit_floor){
                printf("WAIT\n");
                printf("BLOCK\n");
                n+=1;
            } 
            else{
                break;
            }
        }
        while(exit_pos-clone_pos>=0 && clone_floor==exit_floor){
            if (exit_pos-clone_pos>0){
                printf("WAIT\n");
            }
            else{
                printf("BLOCK\n");
            }
        }
        


        
    }

    return 0;
}