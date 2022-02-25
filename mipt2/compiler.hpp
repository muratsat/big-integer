#include <iostream>
#include <vector>
#include <map>

using namespace std;

enum type{
    RM,
    RR,
    RI,
    J
};

enum code {
    HALT = 0,
    SYSCALL = 1,
    ADD = 2,
    ADDI = 3,
    SUB = 4,
    SUBI = 5,
    MUL = 6,
    MULI = 7,
    DIV = 8,
    DIVI = 9,
    LC = 12,
    SHL = 13,
    SHLI = 14,
    SHR = 15,
    SHRI = 16,
    AND = 17,
    ANDI = 18,
    OR = 19,
    ORI = 20,
    XOR = 21,
    XORI = 22,
    NOT = 23,
    MOV = 24,
    ADDD = 32,
    SUBD = 33,
    MULD = 34,
    DIVD = 35,
    ITOD = 36,
    DTOI = 37,
    PUSH = 38,
    POP = 39,
    CALL = 40,
    CALLI = 41,
    RET = 42,
    CMP = 43,
    CMPI = 44,
    CMPD = 45,
    JMP = 46,
    JNE = 47,
    JEQ = 48,
    JLE = 49,
    JL = 50,
    JGE = 51,
    JG = 52,
    LOAD = 64,
    STORE = 65,
    LOAD2 = 66,
    STORE2 = 67,
    LOADR = 68,
    LOADR2 = 69,
    STORER = 70,
    STORER2 = 71
};

class compiler{

    // table of codes and their numbers
    map<string, int> code;

    // table of code and their types
    map<string, int> codeType;

    // table of register name and their number
    map<string, int> registerInt;

    public:
    compiler();
    ~compiler();
    
    // read and return vector of lines
    // from FILENAME
    vector<string> readfile(const char* filename);

    // split string into 
    // separate words
    vector<string> split_words(string line);

    // operation code
    // returns -1 if doesn't exist
    int opcode(string word);

    // operation type(RM, RR, RI, J)
    // returns -1 if doesn't exist
    int optype(string word);
};