#include <stdint.h>

typedef uint8_t byte;

typedef struct {
    uint16_t ProgramCounter;   // 16-bit PC
    byte A_register; //
    byte X_register;
    byte Y_register;
    /*
     * TODO:
     * make a stack pointer
     *as well as stack definition:
     * The NES CPU's stack is 256 bytes in size and located at memory page $01 ($0100–$01FF).
     */
} CPU;
CPU cpu;
