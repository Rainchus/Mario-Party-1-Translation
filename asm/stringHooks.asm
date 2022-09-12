.headersize 0x7FFFF400
.org 0x8006D7D8 //hook "LoadStringWindow?" (a1 holds string ID)
J getCustomMessageID
NOP