#include <stdlib.h>
#include <stdio.h>

/*My state machine
    A D C
    B D H
    C F G 
    D B H 
    E D A 
    F C B 
    G G E 
    H A F
        Starting state is "B"
    */
    typedef struct Machine{
        char name;
        int variable;
        int number;
        struct Machine *state0;
        struct Machine *state1;
    }

    fsm;
    fsm my_state[8];

    void data_state(){
        my_state[0].name = 'A';
        my_state[0].variable = 0;
        my_state[0].state0 = my_state + 3; 
        my_state[0].state1 = my_state + 2;

        my_state[1].name = 'B';
        my_state[1].variable = 1;
        my_state[1].state0 = my_state + 3; 
        my_state[1].state1 = my_state + 7;

        my_state[2].name = 'C';
        my_state[2].variable = 2;
        my_state[2].state0 = my_state + 5; 
        my_state[2].state1 = my_state + 6;

        my_state[3].name = 'D';
        my_state[3].variable = 3;
        my_state[3].state0 = my_state + 1; 
        my_state[3].state1 = my_state + 7;

        my_state[4].name = 'E';
        my_state[4].variable = 4;
        my_state[4].state0 = my_state + 3; 
        my_state[4].state1 = my_state + 0;

        my_state[5].name = 'F';
        my_state[5].variable = 5;
        my_state[5].state0 = my_state + 2; 
        my_state[5].state1 = my_state + 1;

        my_state[6].name = 'G';
        my_state[6].variable = 6;
        my_state[6].state0 = my_state + 6; 
        my_state[6].state1 = my_state + 4;

        my_state[7].name = 'H';
        my_state[7].variable = 7;
        my_state[7].state0 = my_state + 0; 
        my_state[7].state1 = my_state + 5;
    }

    void print_my_state(){
    int i = 0;
    for(i = 0; i < 8; i++){
            printf("%c %c %c \n", my_state[i].name, my_state[i].state0->name, my_state[i].state1->name);
        }
    }

int main(int argc, char * argv[])
{
    int i = 0;
    char inst[3];
    data_state();
    fsm present_state = my_state[1];
    printf("Starting state is %c \n", present_state.name);

    for(i=0; i<=4;i++){
	    scanf("%c",&inst[i]);
		if (inst[i] == '\n'){
		   break;
		}
	  }
        


    if(inst[0] == '0'){
        printf("%c\n", present_state.state0->name);
        present_state = my_state[present_state.state0->number];
    }

    if(inst[0] == '1'){
        printf("%c\n", present_state.state1->name);
        present_state = my_state[present_state.state1->number];
    }

    if(inst[0] == 'p'){
        print_my_state();
    }

    if(inst[0] == 'c'){
        if(inst[2] == '0'){
            if(inst[4] == 'A'){
                present_state.state0 = my_state;
                my_state[present_state.number].state0 = my_state;
            }
            else if(inst[4] == 'B'){
                present_state.state0 = my_state+1;
                my_state[present_state.number].state0 = my_state+1;
            }
            else if(inst[4] == 'C'){
                present_state.state0 = my_state+2;
                my_state[present_state.number].state0 = my_state+2;
            }
            else if(inst[4] == 'D'){
                present_state.state0 = my_state+3;
                my_state[present_state.number].state0 = my_state+3;
            }
            else if(inst[4] == 'E'){
                present_state.state0 = my_state+4;
                my_state[present_state.number].state0 = my_state+4;
            }
            else if(inst[4] == 'F'){
                present_state.state0 = my_state+5;
                my_state[present_state.number].state0 = my_state+5;
            }
            else if(inst[4] == 'G'){
                present_state.state0 = my_state+6;
                my_state[present_state.number].state0 = my_state+6;
            }
            else if(inst[4] == 'H'){
                present_state.state0 = my_state+7;
                my_state[present_state.number].state0 = my_state+7;
            }
            else{
                printf("Print a valid letter");
            }
        }
        else if(inst[2] == '1'){
            if(inst[4] == 'A'){
                present_state.state1 = my_state;
                my_state[present_state.number].state1 = my_state;
            }
            else if(inst[4] == 'B'){
                present_state.state1 = my_state+1;
                my_state[present_state.number].state1 = my_state+1;
            }
            else if(inst[4] == 'C'){
                present_state.state1 = my_state+2;
                my_state[present_state.number].state1 = my_state+2;
            }
            else if(inst[4] == 'D'){
                present_state.state1 = my_state+3;
                my_state[present_state.number].state1 = my_state+3;
            }
            else if(inst[4] == 'E'){
                present_state.state1 = my_state+4;
                my_state[present_state.number].state1 = my_state+4;
            }
            else if(inst[4] == 'F'){
                present_state.state1 = my_state+5;
                my_state[present_state.number].state1 = my_state+5;
            }
            else if(inst[4] == 'G'){
                present_state.state1 = my_state+6;
                my_state[present_state.number].state1 = my_state+6;
            }
            else if(inst[4] == 'H'){
                present_state.state1 = my_state+7;
                my_state[present_state.number].state1 = my_state+7;
            }
            else{
                printf("Print a valid letter.");
            }

        }

    }

    exit(0);
}

