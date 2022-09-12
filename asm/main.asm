.n64 // Let armips know we're coding for the N64 architecture
.open "rom/mp1.z64", "rom/mp1.mod.z64", 0 // Open the ROM file
.include "asm/symbols.asm" // Include mp1.asm to tell armips' linker where to find the game's function(s)
.include "asm/bootPatch.asm" //patch boot routine to DMA our code from ROM
.include "asm/stringHooks.asm"
.headersize 0x7E712B70 // Set the displacement between ROM and RAM addresses
.close // Close the ROM file