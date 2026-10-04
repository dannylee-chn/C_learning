#include<stdio.h>

#define OP_PRINT_INT 0
#define OP_PRINT_DOUBLE 1
#define OP_PRINT_STRING 2

//联合体：所有成员共用一块内存，同一时刻只能存其中一个成员
typedef union Operand {//操作数
    int int_operand;//4
    double double_operand;//8
    char *string_operand;//8
}Operand;

typedef struct Instruction {
    int operator;
    Operand operand;
}Instruction;

void Process(Instruction *instruction) {
    switch (instruction->operator ) {
        case OP_PRINT_INT:printf("%d\n",instruction->operand.int_operand);
            break;
            case OP_PRINT_DOUBLE:printf("%lf\n",instruction->operand.double_operand);
            break;
              case OP_PRINT_STRING:printf("%s\n",instruction->operand.string_operand);
        default:
            fprintf(stderr,"Unsupported operator:%d\n",instruction->operator);
    }
}

int main() {
    Operand test1={.int_operand = 4};
    printf("%d\n",sizeof(Operand));

    Instruction instruction={
        .operator=OP_PRINT_STRING,
        .operand = {
            .string_operand = "Hello world"
        }
    };
    Process(&instruction);
    return 0;
}