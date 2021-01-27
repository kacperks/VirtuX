#include <stdbool.h>

bool running = true;

int ip;

int main(){
    //int instr = program[ip];
    
    while(running){
        eval (fetch());
        ip++;
    }
    
}
void eval(int instr){
    switch(instr){
        case HLT:
            running = false;
            break;
    }
}


int fetch() {
    return program[ip];
}

typedef enum{
    PSH,
    ADD,
    POP,
    SET,
    HLT
} InstructionSet;

const int program[] = {
    PSH, 5,
    PSH, 6,
    ADD,
    POP,
    HLT
};
