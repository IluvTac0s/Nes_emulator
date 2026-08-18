#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

typedef uint8_t byte;
/* TODO:add this
 * mAPPING OF CPU:
 * $0000–$07FF -2 KB internal RAM
 * $0800–$0FFF mirror of ram
 * 1000–$17FF mirror of ram
 * 1800–$1FFFmirror of ram
 * $2000–$2007- nes ppu registers
 * 2008–$3FFF -Mirrors of $2000–$2007 (repeats every 8 bytes)
 * 4000–$4017- NES APU and I/O registers
 * $4018–$401F  APU and I/O functionality that is normally disabled. See CPU Test Mode.
 * $4020–$FFFF Unmapped. Available for cartridge use.
 * *$6000–$7FFF Usually cartridge RAM, when present.
 * * $8000–$FFFF Usually cartridge ROM and mapper registers.
 */
typedef struct {
    uint16_t ProgramCounter;
    byte A_register;
    byte X_register;
    byte Y_register;
} CPU;

CPU cpu;

static void die_usage(const char *prog) {
    fprintf(stderr, "Usage: %s <rom.nes>\n", prog);
    exit(1);
}

int main(int argc, char **argv) {
    if (argc < 2) die_usage(argv[0]);

    const char *rom_path = argv[1];

    FILE *f = fopen(rom_path, "rb");
    if (!f) {
        perror("Failed to open ROM");
        return 1;
    }

    fseek(f, 0, SEEK_END);
    long size = ftell(f);
    fseek(f, 0, SEEK_SET);
    fclose(f);

    if (size <= 0) {
        fprintf(stderr, "ROM file seems empty.\n");
        return 1;
    }

    // Still stub: just show that we received the ROM argument.
    cpu.ProgramCounter = 0xC000;
    cpu.A_register = 0;
    cpu.X_register = 0;
    cpu.Y_register = 0;

    printf("SANE NES emulator boot (stub)\n");
    printf("ROM: %s (%ld bytes)\n", rom_path, size);
    printf("PC=%04X A=%02X X=%02X Y=%02X\n",
           cpu.ProgramCounter, cpu.A_register, cpu.X_register, cpu.Y_register);

    return 0;
}
