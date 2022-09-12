//ROM 0x15070
.headersize 0x7FFFF400
.org 0x8005B6E4
LI a0, 0x1CED490 //ROM addr to read from
LUI a1, 0x8040 //RAM addr to write to
ORI a2, r0, 0x7F00 //size of DMA
JAL dmaCopy2
NOP
J DisplacedBootCode
NOP
NOP //delete this line for clarity


.headersize 0x7E712B70
.org 0x80400000
DisplacedBootCode:
JAL cBootFunction
NOP
//restore displaced boot code
LUI at, 0x800E
SW s1, 0x8910 (at)
JAL mallocPerm
ADDIU a0, r0, 0x0010
ADDU s0, v0, r0
ADDU a0, s1, r0
ADDU a1, s0, r0
JAL 0x80061FE8
ADDIU a2, r0, 0x0010
J 0x8005B708
NOP


getCustomMessageID: //a1 holds message ID
ADDIU sp, sp, -0x28
SW ra, 0x0020 (sp)

LUI t0, 0x8000
AND t1, t0, a1
BEQ t1, t0, isPointer
NOP
SLL t0, a1, 2 //multiply index by 4
LI t1, stringPointers
ADDU t1, t1, t0
LW t2, 0x0000 (t1) //load pointer to message
LBU t0, 0x0000 (t2) //check if first character is 0
BNEL t0, r0, displayNewMessage
ADDU a1, t2, r0
displayNewMessage:
isPointer: //here temporarily for testing

newMessage:
J 0x8006D7E0
NOP



.align 8
.importobj "obj/main.o"