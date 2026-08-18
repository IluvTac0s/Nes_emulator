/*
 * SuperAccurateNesEmulator(SANE)
 Copyright (C) 2026  Sergei Knatsko

 This program is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.

 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include <stdint.h>
#include <stdio.h>

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
int main(void) {
    cpu.ProgramCounter = 0xC000; // arbitrary test value
    cpu.A_register = 0;
    cpu.X_register = 0;
    cpu.Y_register = 0;

    printf("SANE NES emulator boot (stub)\n");
    printf("PC=%04X A=%02X X=%02X Y=%02X\n",
           cpu.ProgramCounter, cpu.A_register, cpu.X_register, cpu.Y_register);

    return 0;
}
