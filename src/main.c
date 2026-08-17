#include <sys/types.h>
typedef unsigned char byte;
ushort ProgramCounter;
/*TODO: ADD A STACK POINTER:
 * The processor supports a 256 byte stack located between $0100 and $01FF. The stack pointer is an 8 bit register and holds the low 8 bits of the next free location on the stack. The location of the stack is fixed and cannot be moved.

 Pushing bytes to the stack causes the stack pointer to be decremented. Conversely pulling bytes causes it to be incremented.

 The CPU does not detect if the stack is overflowed by excessive pushing or pulling operations and will most likely result in the program crashing.

 */
byte A_register;;
byte X_register;
byte Y_register;
