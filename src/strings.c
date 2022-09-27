#include "../include/mp1.h"

#define IMAGE_PAD "\x1A\x1A\x1A\x1A"

char stringIndex_00[] = {0};
char stringIndex_01[] = {0};
char stringIndex_02[] = {0};
char stringIndex_03[] = {0};
char stringIndex_04[] = {0};
char stringIndex_05[] = {0};
char stringIndex_06[] = {0};
char stringIndex_07[] = {0};
char stringIndex_08[] = {0};
char stringIndex_09[] = {0};
char stringIndex_0A[] = {0};
char stringIndex_0B[] = {0};
char stringIndex_0C[] = {0};
char stringIndex_0D[] = {0};
char stringIndex_0E[] = {0};
char stringIndex_0F[] = {0};
char stringIndex_10[] = {0};
char stringIndex_11[] = {0};
char stringIndex_12[] = {0};
char stringIndex_13[] = {0};
char stringIndex_14[] = {0};
char stringIndex_15[] = {0};
char stringIndex_16[] = {0};
char stringIndex_17[] = {0};
char stringIndex_18[] = {0};
char stringIndex_19[] = {0};
char stringIndex_1A[] = {0};
char stringIndex_1B[] = {0};
char stringIndex_1C[] = {0};
char stringIndex_1D[] = {0};
char stringIndex_1E[] = {0};
char stringIndex_1F[] = {0};
char stringIndex_20[] = {0};
char stringIndex_21[] = {0};
char stringIndex_22[] = {0};
char stringIndex_23[] = {0};
char stringIndex_24[] = {0};
char stringIndex_25[] = {0};
char stringIndex_26[] = {0};
char stringIndex_27[] = {0};
char stringIndex_28[] = {0};
char stringIndex_29[] = {0};
char stringIndex_2A[] = {0};
char stringIndex_2B[] = {0};
char stringIndex_2C[] = {0};
char stringIndex_2D[] = {0};
char stringIndex_2E[] = {0};
char stringIndex_2F[] = {0};
char stringIndex_30[] = {0};
char stringIndex_31[] = {0};
char stringIndex_32[] = {0};
char stringIndex_33[] = {0};
char stringIndex_34[] = {0};
char stringIndex_35[] = {0};
char stringIndex_36[] = {0};
char stringIndex_37[] = {0};
char stringIndex_38[] = {0};
char stringIndex_39[] = {0};
char stringIndex_3A[] = {0};
char stringIndex_3B[] = {0};
char stringIndex_3C[] = {0};
char stringIndex_3D[] = {0};
char stringIndex_3E[] = {0};
char stringIndex_3F[] = {0};
char stringIndex_40[] = {0};
char stringIndex_41[] = {0};
char stringIndex_42[] = {0};
char stringIndex_43[] = {0};
char stringIndex_44[] = {0};
char stringIndex_45[] = {0};
char stringIndex_46[] = {0};
char stringIndex_47[] = {0};
char stringIndex_48[] = {0};
char stringIndex_49[] = {0};
char stringIndex_4A[] = {0};
char stringIndex_4B[] = {0};
char stringIndex_4C[] = {0};
char stringIndex_4D[] = {0};
char stringIndex_4E[] = {0};
char stringIndex_4F[] = {0};
char stringIndex_50[] = {0};
char stringIndex_51[] = {0};
char stringIndex_52[] = {0};
char stringIndex_53[] = {0};
char stringIndex_54[] = {0};
char stringIndex_55[] = {0};
char stringIndex_56[] = {0};
char stringIndex_57[] = {0};
char stringIndex_58[] = {0};
char stringIndex_59[] = {0};
char stringIndex_5A[] = {0};
char stringIndex_5B[] = {0};
char stringIndex_5C[] = {0};
char stringIndex_5D[] = {0};
char stringIndex_5E[] = {0};
char stringIndex_5F[] = {0};
char stringIndex_60[] = {0};
char stringIndex_61[] = {0};
char stringIndex_62[] = {0};
char stringIndex_63[] = {0};
char stringIndex_64[] = {0};
char stringIndex_65[] = {0};
char stringIndex_66[] = {0};
char stringIndex_67[] = {0};
char stringIndex_68[] = {0};
char stringIndex_69[] = {0};
char stringIndex_6A[] = {0};
char stringIndex_6B[] = {0};
char stringIndex_6C[] = {0};
char stringIndex_6D[] = {0};
char stringIndex_6E[] = {0};
char stringIndex_6F[] = {0};
char stringIndex_70[] = {0};
char stringIndex_71[] = {0};
char stringIndex_72[] = {0};
char stringIndex_73[] = {0};
char stringIndex_74[] = {0};
char stringIndex_75[] = {0};
char stringIndex_76[] = {0};
char stringIndex_77[] = {0};
char stringIndex_78[] = {0};
char stringIndex_79[] = {0};
char stringIndex_7A[] = {0};
char stringIndex_7B[] = {0};
char stringIndex_7C[] = {0};
char stringIndex_7D[] = {0};
char stringIndex_7E[] = {0};
char stringIndex_7F[] = {0};
char stringIndex_80[] = {0};
char stringIndex_81[] = {0};
char stringIndex_82[] = {0};
char stringIndex_83[] = {0};
char stringIndex_84[] = {0};
char stringIndex_85[] = {0};
char stringIndex_86[] = {0};
char stringIndex_87[] = {0};
char stringIndex_88[] = {0};
char stringIndex_89[] = {0};
char stringIndex_8A[] = {0};
char stringIndex_8B[] = {0};
char stringIndex_8C[] = {0};
char stringIndex_8D[] = {0};
char stringIndex_8E[] = {0};
char stringIndex_8F[] = {0};
char stringIndex_90[] = {0};
char stringIndex_91[] = {0};
char stringIndex_92[] = {0};
char stringIndex_93[] = {0};
char stringIndex_94[] = {0};
char stringIndex_95[] = {0};
char stringIndex_96[] = "Ciao, sono Toad. Ti guidero'\nin giro a\x05 Fungopoli\x02.\xFF\x0BScegli il luogo dove vuoi andare\ncon il cursore.";
char stringIndex_97[] = "\x0BScegli il luogo dove vuoi andare\ncon il cursore.";
char stringIndex_98[] = "\x0BQuesto e' il\x05 Tubo Warp\x02,\nl'entrata per l'avventura.";
char stringIndex_99[] = "\x0B Cosa vuoi fare?\n\x0E\x0C Partire per l'avventura\x0D\n\x0E\x0C Ascoltare le regole di gioco\x0D";
char stringIndex_9A[] = "\x0B Cosa vuoi fare?\n\x0E\x0C Continuare la partita precedente\x0D\n\x0E\x0C Partire per l'avventura\x0D\n\x0E\x0C Ascoltare le regole di gioco\x0D";
char stringIndex_9B[] = "\x0BQuesto e' il\x05 Negozio Fungo\x02.\nQui puoi comprare oggetti.";
char stringIndex_9C[] = "\x0BQuesta e' la\x05 Banca Fungo\x02.\nConserva i tuoi oggetti qui.";
char stringIndex_9D[] = "\x0BQuesta e' la\x05 Casa dei Minigiochi\x02.\nQui puoi giocare ai Minigiochi.";
char stringIndex_9E[] = "\x0BQuesta e' la\x05 Casa Opzioni\x02.\nScegli le impostazioni del gioco qui'.";
char stringIndex_9F[] = {0};
char stringIndex_A0[] = "\x0BQuesta zattera ti puo' portare\nall'\x05 Isola dei Minigiochi\x02.";
char stringIndex_A1[] = {0};
char stringIndex_A2[] = {0};
char stringIndex_A3[] = "\x0B Ti daro' oggetti in cambio\n di gettoni.";
char stringIndex_A4[] = "\x0B Esci Dal Negozio.";
char stringIndex_A5[] = "\x0B Esci Dal Negozio?\n\x0E\x0CSi'\x0D     \x0E\x0CNo\x0D";
char stringIndex_A6[] = "\x0B Vorresti degli oggetti?\n\x0E\x0CSi'\x0D     \x0E\x0CNo\x0D";
char stringIndex_A7[] = {0};
char stringIndex_A8[] = {0};
char stringIndex_A9[] = "\x0BIl costo e' di\x03 \x11 Gettoni\x08\nVuoi Comprarlo?\n\x0E\x0CSi'\x0D     \x0E\x0CNo\x0D";
char stringIndex_AA[] = "\x0BGrazie tante!\nVuoi comprare qualcos'altro?\n\x0E\x0CSi'\x0D     \x0E\x0CNo\x0D";
char stringIndex_AB[] = "\x0B Appare Casualmente, e ottieni\n il numero di gettoni mostrato.";
char stringIndex_AC[] = "\x0B Appare Casualmente, e perdi\n il numero di gettoni mostrato.";
char stringIndex_AD[] = "\x0B Appare Casualmente, e solo i\n numeri da 8 a 10 appariranno\n sul blocco.";
char stringIndex_AE[] = "\x0B Appare Casualmente, e solo i\n numeri da 1 a 3 appariranno\n sul blocco.";
char stringIndex_AF[] = "\x0B Appare Casualmente, e scambia\n le posizioni dei giocatori\n sui tabelloni.";
char stringIndex_B0[] = {0};
char stringIndex_B1[] = "\x0B Conta quante volte avete ruotato\nil Control Stick.\nUsalo nella Casa Minigiochi.";
char stringIndex_B2[] = {0};
char stringIndex_B3[] = {0};
char stringIndex_B4[] = "\x0B Questo e' il disco per\n il Jukebox all'interno\n della Casa Opzioni.";
char stringIndex_B5[] = "\x0BQuesto pappagallo e' bravo ad\nimitare le voci dei personaggi.\nVive nella Casa Opzioni.";
char stringIndex_B6[] = "\x0BOttieni un\x05 10 percento\x08 di interessi\nsui gettoni che ottieni con questo\nSalvadanaio Fortunato.";
char stringIndex_B7[] = "\x0BPunta i tuoi gettoni con questo\nSalvadanaio per ottenere il\x05 Doppio\x08\no la \x03meta'\x08 di quanto hai guadagnato.";
char stringIndex_B8[] = {0};
char stringIndex_B9[] = {0};
char stringIndex_BA[] = {0};
char stringIndex_BB[] = {0};
char stringIndex_BC[] = {0};
char stringIndex_BD[] = {0};
char stringIndex_BE[] = {0};
char stringIndex_BF[] = {0};
char stringIndex_C0[] = {0};
char stringIndex_C1[] = {0};
char stringIndex_C2[] = {0};
char stringIndex_C3[] = {0};
char stringIndex_C4[] = {0};
char stringIndex_C5[] = {0};
char stringIndex_C6[] = {0};
char stringIndex_C7[] = {0};
char stringIndex_C8[] = {0};
char stringIndex_C9[] = {0};
char stringIndex_CA[] = {0};
char stringIndex_CB[] = {0};
char stringIndex_CC[] = {0};
char stringIndex_CD[] = {0};
char stringIndex_CE[] = {0};
char stringIndex_CF[] = {0};
char stringIndex_D0[] = {0};
char stringIndex_D1[] = {0};
char stringIndex_D2[] = {0};
char stringIndex_D3[] = {0};
char stringIndex_D4[] = {0};
char stringIndex_D5[] = {0};
char stringIndex_D6[] = {0};
char stringIndex_D7[] = {0};
char stringIndex_D8[] = {0};
char stringIndex_D9[] = {0};
char stringIndex_DA[] = {0};
char stringIndex_DB[] = {0};
char stringIndex_DC[] = {0};
char stringIndex_DD[] = {0};
char stringIndex_DE[] = {0};
char stringIndex_DF[] = {0};
char stringIndex_E0[] = {0};
char stringIndex_E1[] = {0};
char stringIndex_E2[] = {0};
char stringIndex_E3[] = {0};
char stringIndex_E4[] = {0};
char stringIndex_E5[] = {0};
char stringIndex_E6[] = {0};
char stringIndex_E7[] = {0};
char stringIndex_E8[] = {0};
char stringIndex_E9[] = {0};
char stringIndex_EA[] = {0};
char stringIndex_EB[] = {0};
char stringIndex_EC[] = {0};
char stringIndex_ED[] = {0};
char stringIndex_EE[] = {0};
char stringIndex_EF[] = {0};
char stringIndex_F0[] = {0};
char stringIndex_F1[] = {0};
char stringIndex_F2[] = {0};
char stringIndex_F3[] = {0};
char stringIndex_F4[] = {0};
char stringIndex_F5[] = {0};
char stringIndex_F6[] = {0};
char stringIndex_F7[] = {0};
char stringIndex_F8[] = {0};
char stringIndex_F9[] = {0};
char stringIndex_FA[] = {0};
char stringIndex_FB[] = {0};
char stringIndex_FC[] = {0};
char stringIndex_FD[] = {0};
char stringIndex_FE[] = {0};
char stringIndex_FF[] = {0};
char stringIndex_100[] = {0};
char stringIndex_101[] = {0};
char stringIndex_102[] = {0};
char stringIndex_103[] = {0};
char stringIndex_104[] = {0};
char stringIndex_105[] = {0};
char stringIndex_106[] = {0};
char stringIndex_107[] = {0};
char stringIndex_108[] = {0};
char stringIndex_109[] = {0};
char stringIndex_10A[] = {0};
char stringIndex_10B[] = {0};
char stringIndex_10C[] = {0};
char stringIndex_10D[] = {0};
char stringIndex_10E[] = {0};
char stringIndex_10F[] = {0};
char stringIndex_110[] = {0};
char stringIndex_111[] = {0};
char stringIndex_112[] = {0};
char stringIndex_113[] = {0};
char stringIndex_114[] = {0};
char stringIndex_115[] = {0};
char stringIndex_116[] = {0};
char stringIndex_117[] = {0};
char stringIndex_118[] = {0};
char stringIndex_119[] = {0};
char stringIndex_11A[] = {0};
char stringIndex_11B[] = {0};
char stringIndex_11C[] = {0};
char stringIndex_11D[] = {0};
char stringIndex_11E[] = {0};
char stringIndex_11F[] = {0};
char stringIndex_120[] = {0};
char stringIndex_121[] = {0};
char stringIndex_122[] = {0};
char stringIndex_123[] = {0};
char stringIndex_124[] = {0};
char stringIndex_125[] = {0};
char stringIndex_126[] = {0};
char stringIndex_127[] = {0};
char stringIndex_128[] = {0};
char stringIndex_129[] = {0};
char stringIndex_12A[] = {0};
char stringIndex_12B[] = {0};
char stringIndex_12C[] = {0};
char stringIndex_12D[] = {0};
char stringIndex_12E[] = {0};
char stringIndex_12F[] = {0};
char stringIndex_130[] = {0};
char stringIndex_131[] = {0};
char stringIndex_132[] = {0};
char stringIndex_133[] = {0};
char stringIndex_134[] = {0};
char stringIndex_135[] = {0};
char stringIndex_136[] = {0};
char stringIndex_137[] = {0};
char stringIndex_138[] = {0};
char stringIndex_139[] = {0};
char stringIndex_13A[] = {0};
char stringIndex_13B[] = {0};
char stringIndex_13C[] = {0};
char stringIndex_13D[] = {0};
char stringIndex_13E[] = {0};
char stringIndex_13F[] = {0};
char stringIndex_140[] = {0};
char stringIndex_141[] = {0};
char stringIndex_142[] = {0};
char stringIndex_143[] = {0};
char stringIndex_144[] = {0};
char stringIndex_145[] = {0};
char stringIndex_146[] = {0};
char stringIndex_147[] = {0};
char stringIndex_148[] = {0};
char stringIndex_149[] = {0};
char stringIndex_14A[] = {0};
char stringIndex_14B[] = {0};
char stringIndex_14C[] = {0};
char stringIndex_14D[] = {0};
char stringIndex_14E[] = {0};
char stringIndex_14F[] = {0};
char stringIndex_150[] = {0};
char stringIndex_151[] = {0};
char stringIndex_152[] = {0};
char stringIndex_153[] = {0};
char stringIndex_154[] = {0};
char stringIndex_155[] = {0};
char stringIndex_156[] = {0};
char stringIndex_157[] = {0};
char stringIndex_158[] = {0};
char stringIndex_159[] = {0};
char stringIndex_15A[] = {0};
char stringIndex_15B[] = {0};
char stringIndex_15C[] = {0};
char stringIndex_15D[] = {0};
char stringIndex_15E[] = {0};
char stringIndex_15F[] = {0};
char stringIndex_160[] = {0};
char stringIndex_161[] = {0};
char stringIndex_162[] = {0};
char stringIndex_163[] = {0};
char stringIndex_164[] = {0};
char stringIndex_165[] = {0};
char stringIndex_166[] = {0};
char stringIndex_167[] = {0};
char stringIndex_168[] = {0};
char stringIndex_169[] = {0};
char stringIndex_16A[] = {0};
char stringIndex_16B[] = {0};
char stringIndex_16C[] = {0};
char stringIndex_16D[] = {0};
char stringIndex_16E[] = {0};
char stringIndex_16F[] = {0};
char stringIndex_170[] = {0};
char stringIndex_171[] = {0};
char stringIndex_172[] = {0};
char stringIndex_173[] = {0};
char stringIndex_174[] = {0};
char stringIndex_175[] = {0};
char stringIndex_176[] = {0};
char stringIndex_177[] = {0};
char stringIndex_178[] = {0};
char stringIndex_179[] = {0};
char stringIndex_17A[] = {0};
char stringIndex_17B[] = {0};
char stringIndex_17C[] = {0};
char stringIndex_17D[] = {0};
char stringIndex_17E[] = {0};
char stringIndex_17F[] = {0};
char stringIndex_180[] = {0};
char stringIndex_181[] = {0};
char stringIndex_182[] = {0};
char stringIndex_183[] = {0};
char stringIndex_184[] = {0};
char stringIndex_185[] = {0};
char stringIndex_186[] = {0};
char stringIndex_187[] = {0};
char stringIndex_188[] = {0};
char stringIndex_189[] = {0};
char stringIndex_18A[] = {0};
char stringIndex_18B[] = {0};
char stringIndex_18C[] = {0};
char stringIndex_18D[] = {0};
char stringIndex_18E[] = {0};
char stringIndex_18F[] = {0};
char stringIndex_190[] = {0};
char stringIndex_191[] = {0};
char stringIndex_192[] = {0};
char stringIndex_193[] = {0};
char stringIndex_194[] = {0};
char stringIndex_195[] = {0};
char stringIndex_196[] = {0};
char stringIndex_197[] = {0};
char stringIndex_198[] = {0};
char stringIndex_199[] = {0};
char stringIndex_19A[] = {0};
char stringIndex_19B[] = {0};
char stringIndex_19C[] = {0};
char stringIndex_19D[] = {0};
char stringIndex_19E[] = {0};
char stringIndex_19F[] = {0};
char stringIndex_1A0[] = {0};
char stringIndex_1A1[] = {0};
char stringIndex_1A2[] = {0};
char stringIndex_1A3[] = {0};
char stringIndex_1A4[] = {0};
char stringIndex_1A5[] = {0};
char stringIndex_1A6[] = {0};
char stringIndex_1A7[] = {0};
char stringIndex_1A8[] = {0};
char stringIndex_1A9[] = {0};
char stringIndex_1AA[] = {0};
char stringIndex_1AB[] = {0};
char stringIndex_1AC[] = {0};
char stringIndex_1AD[] = {0};
char stringIndex_1AE[] = {0};
char stringIndex_1AF[] = {0};
char stringIndex_1B0[] = {0};
char stringIndex_1B1[] = {0};
char stringIndex_1B2[] = {0};
char stringIndex_1B3[] = {0};
char stringIndex_1B4[] = {0};
char stringIndex_1B5[] = {0};
char stringIndex_1B6[] = {0};
char stringIndex_1B7[] = {0};
char stringIndex_1B8[] = {0};
char stringIndex_1B9[] = {0};
char stringIndex_1BA[] = {0};
char stringIndex_1BB[] = {0};
char stringIndex_1BC[] = {0};
char stringIndex_1BD[] = {0};
char stringIndex_1BE[] = {0};
char stringIndex_1BF[] = {0};
char stringIndex_1C0[] = {0};
char stringIndex_1C1[] = {0};
char stringIndex_1C2[] = {0};
char stringIndex_1C3[] = {0};
char stringIndex_1C4[] = {0};
char stringIndex_1C5[] = {0};
char stringIndex_1C6[] = {0};
char stringIndex_1C7[] = {0};
char stringIndex_1C8[] = {0};
char stringIndex_1C9[] = {0};
char stringIndex_1CA[] = {0};
char stringIndex_1CB[] = {0};
char stringIndex_1CC[] = {0};
char stringIndex_1CD[] = {0};
char stringIndex_1CE[] = {0};
char stringIndex_1CF[] = {0};
char stringIndex_1D0[] = {0};
char stringIndex_1D1[] = {0};
char stringIndex_1D2[] = {0};
char stringIndex_1D3[] = {0};
char stringIndex_1D4[] = {0};
char stringIndex_1D5[] = {0};
char stringIndex_1D6[] = {0};
char stringIndex_1D7[] = {0};
char stringIndex_1D8[] = {0};
char stringIndex_1D9[] = {0};
char stringIndex_1DA[] = {0};
char stringIndex_1DB[] = {0};
char stringIndex_1DC[] = {0};
char stringIndex_1DD[] = {0};
char stringIndex_1DE[] = {0};
char stringIndex_1DF[] = {0};
char stringIndex_1E0[] = {0};
char stringIndex_1E1[] = {0};
char stringIndex_1E2[] = {0};
char stringIndex_1E3[] = {0};
char stringIndex_1E4[] = {0};
char stringIndex_1E5[] = {0};
char stringIndex_1E6[] = {0};
char stringIndex_1E7[] = {0};
char stringIndex_1E8[] = {0};
char stringIndex_1E9[] = {0};
char stringIndex_1EA[] = {0};
char stringIndex_1EB[] = {0};
char stringIndex_1EC[] = {0};
char stringIndex_1ED[] = {0};
char stringIndex_1EE[] = {0};
char stringIndex_1EF[] = {0};
char stringIndex_1F0[] = {0};
char stringIndex_1F1[] = {0};
char stringIndex_1F2[] = {0};
char stringIndex_1F3[] = {0};
char stringIndex_1F4[] = {0};
char stringIndex_1F5[] = {0};
char stringIndex_1F6[] = {0};
char stringIndex_1F7[] = {0};
char stringIndex_1F8[] = {0};
char stringIndex_1F9[] = {0};
char stringIndex_1FA[] = {0};
char stringIndex_1FB[] = {0};
char stringIndex_1FC[] = {0};
char stringIndex_1FD[] = {0};
char stringIndex_1FE[] = {0};
char stringIndex_1FF[] = {0};
char stringIndex_200[] = {0};
char stringIndex_201[] = {0};
char stringIndex_202[] = {0};
char stringIndex_203[] = {0};
char stringIndex_204[] = {0};
char stringIndex_205[] = {0};
char stringIndex_206[] = {0};
char stringIndex_207[] = {0};
char stringIndex_208[] = {0};
char stringIndex_209[] = {0};
char stringIndex_20A[] = {0};
char stringIndex_20B[] = {0};
char stringIndex_20C[] = {0};
char stringIndex_20D[] = {0};
char stringIndex_20E[] = {0};
char stringIndex_20F[] = {0};
char stringIndex_210[] = {0};
char stringIndex_211[] = {0};
char stringIndex_212[] = {0};
char stringIndex_213[] = {0};
char stringIndex_214[] = {0};
char stringIndex_215[] = {0};
char stringIndex_216[] = {0};
char stringIndex_217[] = {0};
char stringIndex_218[] = {0};
char stringIndex_219[] = {0};
char stringIndex_21A[] = {0};
char stringIndex_21B[] = {0};
char stringIndex_21C[] = {0};
char stringIndex_21D[] = {0};
char stringIndex_21E[] = {0};
char stringIndex_21F[] = {0};
char stringIndex_220[] = {0};
char stringIndex_221[] = {0};
char stringIndex_222[] = {0};
char stringIndex_223[] = {0};
char stringIndex_224[] = {0};
char stringIndex_225[] = {0};
char stringIndex_226[] = {0};
char stringIndex_227[] = {0};
char stringIndex_228[] = {0};
char stringIndex_229[] = {0};
char stringIndex_22A[] = {0};
char stringIndex_22B[] = {0};
char stringIndex_22C[] = {0};
char stringIndex_22D[] = {0};
char stringIndex_22E[] = {0};
char stringIndex_22F[] = {0};
char stringIndex_230[] = {0};
char stringIndex_231[] = {0};
char stringIndex_232[] = {0};
char stringIndex_233[] = {0};
char stringIndex_234[] = {0};
char stringIndex_235[] = {0};
char stringIndex_236[] = {0};
char stringIndex_237[] = {0};
char stringIndex_238[] = {0};
char stringIndex_239[] = {0};
char stringIndex_23A[] = {0};
char stringIndex_23B[] = "Benvenuti!\nSono la vostra guida,\nKoopa Troopa.\xFF\x0BQui nella giungla, ci sono\ndelle rovine misteriose.\xFF\x0BSi dice che qui sia nascosto\nun\x06 tesoro grandioso\x08.\nSe cercherete questo tesoro,\nsicuramente uno di voi lo trovera'.\xFF\x0BMa attenti! Ci sono molte trappole\nin questa giungla! Qualunque cosa fate\nnon fermatevi sugli\x05 Spazi ?\x08, siccome\nnon garantisco che siate al sicuro.\xFF\x0B Detto cio', ora\n decidiamo l'ordine dei turni\xFF";
char stringIndex_23C[] = {0};
char stringIndex_23D[] = {0};
char stringIndex_23E[] = {0};
char stringIndex_23F[] = {0};
char stringIndex_240[] = {0};
char stringIndex_241[] = {0};
char stringIndex_242[] = {0};
char stringIndex_243[] = {0};
char stringIndex_244[] = {0};
char stringIndex_245[] = {0};
char stringIndex_246[] = {0};
char stringIndex_247[] = {0};
char stringIndex_248[] = "Colpisci il Dado con @,\nParte prima il numero piu' grande.";
char stringIndex_249[] = "L'ordine e' deciso.\nPrima parte \x06\x11\x08.\xFF";
char stringIndex_24A[] = "Poi \x06\x12\x08.\xFF";
char stringIndex_24B[] = "A Seguire \x06\x13\x08.\xFF";
char stringIndex_24C[] = "Infine \x06\x14\x08.\xFF";
char stringIndex_24D[] = "Questo sara' l'ordine dei turni.\xFF\x0B Infine, un regalo da parte mia...\n\x06 10 Gettoni\x08 per ognuno di voi.\n Spero vi saranno utili.\xFF";
char stringIndex_24E[] = "Ora iniziamo.\nMirate tutti alle\n\x07Stelle\x08, e Buona Fortuna!\xFF";
char stringIndex_24F[] = {0};
char stringIndex_250[] = {0};
char stringIndex_251[] = {0};
char stringIndex_252[] = {0};
char stringIndex_253[] = {0};
char stringIndex_254[] = {0};
char stringIndex_255[] = {0};
char stringIndex_256[] = {0};
char stringIndex_257[] = {0};
char stringIndex_258[] = {0};
char stringIndex_259[] = {0};
char stringIndex_25A[] = {0};
char stringIndex_25B[] = {0};
char stringIndex_25C[] = {0};
char stringIndex_25D[] = {0};
char stringIndex_25E[] = {0};
char stringIndex_25F[] = {0};
char stringIndex_260[] = {0};
char stringIndex_261[] = {0};
char stringIndex_262[] = {0};
char stringIndex_263[] = {0};
char stringIndex_264[] = {0};
char stringIndex_265[] = {0};
char stringIndex_266[] = {0};
char stringIndex_267[] = {0};
char stringIndex_268[] = {0};
char stringIndex_269[] = {0};
char stringIndex_26A[] = {0};
char stringIndex_26B[] = {0};
char stringIndex_26C[] = {0};
char stringIndex_26D[] = {0};
char stringIndex_26E[] = {0};
char stringIndex_26F[] = {0};
char stringIndex_270[] = {0};
char stringIndex_271[] = {0};
char stringIndex_272[] = {0};
char stringIndex_273[] = {0};
char stringIndex_274[] = {0};
char stringIndex_275[] = {0};
char stringIndex_276[] = {0};
char stringIndex_277[] = {0};
char stringIndex_278[] = {0};
char stringIndex_279[] = {0};
char stringIndex_27A[] = {0};
char stringIndex_27B[] = {0};
char stringIndex_27C[] = {0};
char stringIndex_27D[] = {0};
char stringIndex_27E[] = {0};
char stringIndex_27F[] = {0};
char stringIndex_280[] = {0};
char stringIndex_281[] = {0};
char stringIndex_282[] = {0};
char stringIndex_283[] = {0};
char stringIndex_284[] = "\x0BPrima che l'avventura abbia inizio,\ndevi scegliere le impostazioni di gioco.\nPrego, rispondi ad alcune domande.\xFF";
char stringIndex_285[] = "\x0BPer prima cosa, quante persone\ngiocheranno stavolta?\xFF";
char stringIndex_286[] = "\x0B Adesso, scegli i personaggi che\nsaranno utilizzati dai giocatori.\xFF";
char stringIndex_287[] = "\x0B Adesso, scegli i\x03 3\x02 personaggi che\nsaranno controllati dal computer.\xFF";
char stringIndex_288[] = "\x0B Adesso, scegli i\x03 2\x02 personaggi che\nsaranno controllati dal computer.\xFF";
char stringIndex_289[] = "\x0B Adesso, scegli\x03 l'unico\x02 personaggio che\nsara' controllato dal computer.\xFF";
char stringIndex_28A[] = "\x0B Ok, ora scegli a quale tabellone\nvuoi andare.\xFF";
char stringIndex_28B[] = "\x0B\x02 Va bene questo?\n\x0E\x0CSi'\x0D     \x0E\x0CNo\x0D";
char stringIndex_28C[] = "\x0B\x05 Giungla Avventurosa di DK.\x02\n Usa il Potere delle Stelle per\n trovare il segreto delle rovine.\n\x06   Difficolta' del Tabellone \x2A";
char stringIndex_28D[] = "\x0B\x05 Torta di Compleanno di Peach.\x02\n Usa il Potere delle Stelle per\n finire questa torta deliziosa.\n\x06   Difficolta' del Tabellone \x2A\x2A";
char stringIndex_28E[] = "\x0B\x05 Isola Tropicale di Yoshi.\x02\n Usa il Potere delle Stelle per\n riunire i due Yoshi.\n\x06   Difficolta' del Tabellone \x2A\x2A";
char stringIndex_28F[] = "\x0B\x05 Canyon Battaglia di Wario.\x02\n Usa il Potere delle Stelle per porre\n fine alla battaglia di Bob-Ombe.\n\x06   Difficolta' del Tabellone \x2A\x2A";
char stringIndex_290[] = "\x0B\x05 Sala Motori di Luigi.\x02\n Fai partire la misteriosa sala\n motori con il Potere delle Stelle.\n\x06   Difficolta' del Tabellone \x2A\x2A\x2A";
char stringIndex_291[] = "\x0B\x05 Castello Arcobaleno di Mario.\x02\n Usa il Potere delle Stelle per\n creare un bellissimo arcobaleno.\n\x06   Difficolta' del Tabellone \x2A";
char stringIndex_292[] = "\x0B\x05 Montagna di Magma di Bowser.\x02\n Usa il Potere delle Stelle per dare\n una lezione al perfido Bowser.\n\x06   Difficolta' del Tabellone \x2A\x2A\x2A";
char stringIndex_293[] = "\x0B\x05 Stella Eterna.\x02\n Eccoci alla sfida finale!\n Riprenditi le Stelle Rubate!\n\x06   Difficolta' del Tabellone \x2A\x2A\x2A";
char stringIndex_294[] = "\x0B\x05 Stella Eterna.\x02\n Usa il Potere delle Stelle per\n Ricostruire la grande Stella.\n\x06   Difficolta' del Tabellone \x2A\x2A\x2A";
char stringIndex_295[] = "\x0BOk, in fine, scegli il numero di turni\ndella partita.\xFF";
char stringIndex_296[] = "\x0B\x05 Partita Leggera\x02?\nIl gioco finisce dopo\x06 20 turni\x02.";
char stringIndex_297[] = "\x0BVuoi una\x05 Partita Standard\x02?\nIl gioco finisce dopo\x06 35 turni\x02.";
char stringIndex_298[] = "\x0BVuoi provare una\x05 Partita Completa\x02?\nIl gioco finisce dopo\x06 50 turni\x02.";
char stringIndex_299[] = "\x0BOra l'ultima domanda...\nVanno bene queste impostazioni?\n\x0E\x0CSi'\x0D    \x0E\x0CNo\x0D    \x0E\x0C\x03Reimposta\x02\x0D";
char stringIndex_29A[] = {0};
char stringIndex_29B[] = {0};
char stringIndex_29C[] = {0};
char stringIndex_29D[] = {0};
char stringIndex_29E[] = {0};
char stringIndex_29F[] = {0};
char stringIndex_2A0[] = "\x0B\x05 Un Giocatore\n\x06 1\x02 Giocatore\n\x03 3\x02 Personaggi COM";
char stringIndex_2A1[] = "\x0B\x05 Due Giocatori\n\x06 2\x02 Giocatori\n\x03 2\x02 Personaggi COM";
char stringIndex_2A2[] = "\x0B\x05 Tre Giocatori\n\x06 3\x02 Giocatori\n\x03 1\x02 Personaggio COM";
char stringIndex_2A3[] = "\x0B\x05 Quattro Giocatori\n\x06 4\x02 Giocatori\n\x03 0\x02 Personaggi COM";
char stringIndex_2A4[] = {0};
char stringIndex_2A5[] = "\x0BImposta il livello di difficolta' COM:\n\x0E\x0C Facile\x02\x0D\x0E\x0C Distinti\x0D\n\x0E\x0C Normale\x0D\n\x0E\x0C Difficile\x0D";
char stringIndex_2A6[] = "\x0BVuoi tornare a\x05 Fungopoli\x02?\n\x0E\x0CSi'\x0D     \x0E\x0CNo\x0D";
char stringIndex_2A7[] = {0};
char stringIndex_2A8[] = "\x0BScegli il\x03 Primo\x02 Personaggio COM.";
char stringIndex_2A9[] = "\x0BScegli il\x03 Secondo\x02 Personaggio COM.";
char stringIndex_2AA[] = "\x0BScegli il\x03 Terzo\x02 Personaggio COM.";
char stringIndex_2AB[] = {0};
char stringIndex_2AC[] = {0};
char stringIndex_2AD[] = {0};
char stringIndex_2AE[] = {0};
char stringIndex_2AF[] = {0};
char stringIndex_2B0[] = {0};
char stringIndex_2B1[] = {0};
char stringIndex_2B2[] = {0};
char stringIndex_2B3[] = {0};
char stringIndex_2B4[] = {0};
char stringIndex_2B5[] = {0};
char stringIndex_2B6[] = {0};
char stringIndex_2B7[] = {0};
char stringIndex_2B8[] = {0};
char stringIndex_2B9[] = {0};
char stringIndex_2BA[] = {0};
char stringIndex_2BB[] = {0};
char stringIndex_2BC[] = {0};
char stringIndex_2BD[] = {0};
char stringIndex_2BE[] = {0};
char stringIndex_2BF[] = {0};
char stringIndex_2C0[] = {0};
char stringIndex_2C1[] = {0};
char stringIndex_2C2[] = {0};
char stringIndex_2C3[] = {0};
char stringIndex_2C4[] = {0};
char stringIndex_2C5[] = {0};
char stringIndex_2C6[] = {0};
char stringIndex_2C7[] = {0};
char stringIndex_2C8[] = {0};
char stringIndex_2C9[] = {0};
char stringIndex_2CA[] = {0};
char stringIndex_2CB[] = {0};
char stringIndex_2CC[] = {0};
char stringIndex_2CD[] = {0};
char stringIndex_2CE[] = {0};
char stringIndex_2CF[] = {0};
char stringIndex_2D0[] = {0};
char stringIndex_2D1[] = {0};
char stringIndex_2D2[] = {0};
char stringIndex_2D3[] = {0};
char stringIndex_2D4[] = {0};
char stringIndex_2D5[] = {0};
char stringIndex_2D6[] = {0};
char stringIndex_2D7[] = {0};
char stringIndex_2D8[] = {0};
char stringIndex_2D9[] = {0};
char stringIndex_2DA[] = {0};
char stringIndex_2DB[] = {0};
char stringIndex_2DC[] = {0};
char stringIndex_2DD[] = {0};
char stringIndex_2DE[] = {0};
char stringIndex_2DF[] = {0};
char stringIndex_2E0[] = {0};
char stringIndex_2E1[] = {0};
char stringIndex_2E2[] = {0};
char stringIndex_2E3[] = {0};
char stringIndex_2E4[] = {0};
char stringIndex_2E5[] = {0};
char stringIndex_2E6[] = {0};
char stringIndex_2E7[] = {0};
char stringIndex_2E8[] = {0};
char stringIndex_2E9[] = {0};
char stringIndex_2EA[] = {0};
char stringIndex_2EB[] = {0};
char stringIndex_2EC[] = {0};
char stringIndex_2ED[] = {0};
char stringIndex_2EE[] = {0};
char stringIndex_2EF[] = {0};
char stringIndex_2F0[] = {0};
char stringIndex_2F1[] = {0};
char stringIndex_2F2[] = {0};
char stringIndex_2F3[] = {0};
char stringIndex_2F4[] = {0};
char stringIndex_2F5[] = {0};
char stringIndex_2F6[] = {0};
char stringIndex_2F7[] = {0};
char stringIndex_2F8[] = {0};
char stringIndex_2F9[] = {0};
char stringIndex_2FA[] = {0};
char stringIndex_2FB[] = {0};
char stringIndex_2FC[] = {0};
char stringIndex_2FD[] = {0};
char stringIndex_2FE[] = {0};
char stringIndex_2FF[] = {0};
char stringIndex_300[] = {0};
char stringIndex_301[] = {0};
char stringIndex_302[] = {0};
char stringIndex_303[] = {0};
char stringIndex_304[] = {0};
char stringIndex_305[] = {0};
char stringIndex_306[] = {0};
char stringIndex_307[] = {0};
char stringIndex_308[] = {0};
char stringIndex_309[] = {0};
char stringIndex_30A[] = {0};
char stringIndex_30B[] = {0};
char stringIndex_30C[] = {0};
char stringIndex_30D[] = {0};
char stringIndex_30E[] = {0};
char stringIndex_30F[] = {0};
char stringIndex_310[] = {0};
char stringIndex_311[] = {0};
char stringIndex_312[] = {0};
char stringIndex_313[] = {0};
char stringIndex_314[] = {0};
char stringIndex_315[] = {0};
char stringIndex_316[] = {0};
char stringIndex_317[] = {0};
char stringIndex_318[] = {0};
char stringIndex_319[] = {0};
char stringIndex_31A[] = {0};
char stringIndex_31B[] = {0};
char stringIndex_31C[] = {0};
char stringIndex_31D[] = {0};
char stringIndex_31E[] = {0};
char stringIndex_31F[] = {0};
char stringIndex_320[] = {0};
char stringIndex_321[] = {0};
char stringIndex_322[] = {0};
char stringIndex_323[] = {0};
char stringIndex_324[] = {0};
char stringIndex_325[] = {0};
char stringIndex_326[] = {0};
char stringIndex_327[] = {0};
char stringIndex_328[] = {0};
char stringIndex_329[] = {0};
char stringIndex_32A[] = {0};
char stringIndex_32B[] = {0};
char stringIndex_32C[] = {0};
char stringIndex_32D[] = {0};
char stringIndex_32E[] = {0};
char stringIndex_32F[] = {0};
char stringIndex_330[] = {0};
char stringIndex_331[] = {0};
char stringIndex_332[] = {0};
char stringIndex_333[] = {0};
char stringIndex_334[] = {0};
char stringIndex_335[] = {0};
char stringIndex_336[] = {0};
char stringIndex_337[] = {0};
char stringIndex_338[] = {0};
char stringIndex_339[] = {0};
char stringIndex_33A[] = {0};
char stringIndex_33B[] = {0};
char stringIndex_33C[] = {0};
char stringIndex_33D[] = {0};
char stringIndex_33E[] = {0};
char stringIndex_33F[] = {0};
char stringIndex_340[] = {0};
char stringIndex_341[] = {0};
char stringIndex_342[] = {0};
char stringIndex_343[] = {0};
char stringIndex_344[] = {0};
char stringIndex_345[] = {0};
char stringIndex_346[] = {0};
char stringIndex_347[] = {0};
char stringIndex_348[] = {0};
char stringIndex_349[] = {0};
char stringIndex_34A[] = {0};
char stringIndex_34B[] = {0};
char stringIndex_34C[] = {0};
char stringIndex_34D[] = {0};
char stringIndex_34E[] = {0};
char stringIndex_34F[] = {0};
char stringIndex_350[] = {0};
char stringIndex_351[] = {0};
char stringIndex_352[] = {0};
char stringIndex_353[] = {0};
char stringIndex_354[] = {0};
char stringIndex_355[] = {0};
char stringIndex_356[] = {0};
char stringIndex_357[] = {0};
char stringIndex_358[] = {0};
char stringIndex_359[] = {0};
char stringIndex_35A[] = {0};
char stringIndex_35B[] = {0};
char stringIndex_35C[] = {0};
char stringIndex_35D[] = {0};
char stringIndex_35E[] = {0};
char stringIndex_35F[] = {0};
char stringIndex_360[] = {0};
char stringIndex_361[] = {0};
char stringIndex_362[] = {0};
char stringIndex_363[] = {0};
char stringIndex_364[] = {0};
char stringIndex_365[] = {0};
char stringIndex_366[] = {0};
char stringIndex_367[] = {0};
char stringIndex_368[] = {0};
char stringIndex_369[] = {0};
char stringIndex_36A[] = {0};
char stringIndex_36B[] = {0};
char stringIndex_36C[] = {0};
char stringIndex_36D[] = {0};
char stringIndex_36E[] = {0};
char stringIndex_36F[] = {0};
char stringIndex_370[] = {0};
char stringIndex_371[] = {0};
char stringIndex_372[] = {0};
char stringIndex_373[] = {0};
char stringIndex_374[] = {0};
char stringIndex_375[] = {0};
char stringIndex_376[] = {0};
char stringIndex_377[] = {0};
char stringIndex_378[] = {0};
char stringIndex_379[] = {0};
char stringIndex_37A[] = {0};
char stringIndex_37B[] = {0};
char stringIndex_37C[] = {0};
char stringIndex_37D[] = {0};
char stringIndex_37E[] = {0};
char stringIndex_37F[] = {0};
char stringIndex_380[] = {0};
char stringIndex_381[] = {0};
char stringIndex_382[] = {0};
char stringIndex_383[] = {0};
char stringIndex_384[] = {0};
char stringIndex_385[] = {0};
char stringIndex_386[] = {0};
char stringIndex_387[] = {0};
char stringIndex_388[] = {0};
char stringIndex_389[] = {0};
char stringIndex_38A[] = {0};
char stringIndex_38B[] = {0};
char stringIndex_38C[] = {0};
char stringIndex_38D[] = {0};
char stringIndex_38E[] = {0};
char stringIndex_38F[] = {0};
char stringIndex_390[] = {0};
char stringIndex_391[] = {0};
char stringIndex_392[] = {0};
char stringIndex_393[] = {0};
char stringIndex_394[] = {0};
char stringIndex_395[] = {0};
char stringIndex_396[] = {0};
char stringIndex_397[] = {0};
char stringIndex_398[] = {0};
char stringIndex_399[] = {0};
char stringIndex_39A[] = {0};
char stringIndex_39B[] = {0};
char stringIndex_39C[] = {0};
char stringIndex_39D[] = {0};
char stringIndex_39E[] = {0};
char stringIndex_39F[] = {0};
char stringIndex_3A0[] = {0};
char stringIndex_3A1[] = {0};
char stringIndex_3A2[] = {0};
char stringIndex_3A3[] = {0};
char stringIndex_3A4[] = {0};
char stringIndex_3A5[] = {0};
char stringIndex_3A6[] = {0};
char stringIndex_3A7[] = {0};
char stringIndex_3A8[] = {0};
char stringIndex_3A9[] = {0};
char stringIndex_3AA[] = {0};
char stringIndex_3AB[] = {0};
char stringIndex_3AC[] = {0};
char stringIndex_3AD[] = {0};
char stringIndex_3AE[] = {0};
char stringIndex_3AF[] = {0};
char stringIndex_3B0[] = {0};
char stringIndex_3B1[] = {0};
char stringIndex_3B2[] = {0};
char stringIndex_3B3[] = {0};
char stringIndex_3B4[] = {0};
char stringIndex_3B5[] = {0};
char stringIndex_3B6[] = {0};
char stringIndex_3B7[] = {0};
char stringIndex_3B8[] = {0};
char stringIndex_3B9[] = {0};
char stringIndex_3BA[] = {0};
char stringIndex_3BB[] = {0};
char stringIndex_3BC[] = {0};
char stringIndex_3BD[] = {0};
char stringIndex_3BE[] = {0};
char stringIndex_3BF[] = {0};
char stringIndex_3C0[] = {0};
char stringIndex_3C1[] = {0};
char stringIndex_3C2[] = {0};
char stringIndex_3C3[] = {0};
char stringIndex_3C4[] = {0};
char stringIndex_3C5[] = {0};
char stringIndex_3C6[] = {0};
char stringIndex_3C7[] = {0};
char stringIndex_3C8[] = {0};
char stringIndex_3C9[] = {0};
char stringIndex_3CA[] = {0};
char stringIndex_3CB[] = {0};
char stringIndex_3CC[] = {0};
char stringIndex_3CD[] = {0};
char stringIndex_3CE[] = {0};
char stringIndex_3CF[] = {0};
char stringIndex_3D0[] = {0};
char stringIndex_3D1[] = {0};
char stringIndex_3D2[] = {0};
char stringIndex_3D3[] = {0};
char stringIndex_3D4[] = {0};
char stringIndex_3D5[] = {0};
char stringIndex_3D6[] = {0};
char stringIndex_3D7[] = {0};
char stringIndex_3D8[] = {0};
char stringIndex_3D9[] = {0};
char stringIndex_3DA[] = {0};
char stringIndex_3DB[] = {0};
char stringIndex_3DC[] = {0};
char stringIndex_3DD[] = {0};
char stringIndex_3DE[] = {0};
char stringIndex_3DF[] = {0};
char stringIndex_3E0[] = {0};
char stringIndex_3E1[] = {0};
char stringIndex_3E2[] = {0};
char stringIndex_3E3[] = {0};
char stringIndex_3E4[] = {0};
char stringIndex_3E5[] = {0};
char stringIndex_3E6[] = {0};
char stringIndex_3E7[] = {0};
char stringIndex_3E8[] = {0};
char stringIndex_3E9[] = {0};
char stringIndex_3EA[] = {0};
char stringIndex_3EB[] = {0};
char stringIndex_3EC[] = {0};
char stringIndex_3ED[] = {0};
char stringIndex_3EE[] = {0};
char stringIndex_3EF[] = {0};
char stringIndex_3F0[] = {0};
char stringIndex_3F1[] = {0};
char stringIndex_3F2[] = {0};
char stringIndex_3F3[] = {0};
char stringIndex_3F4[] = {0};
char stringIndex_3F5[] = {0};
char stringIndex_3F6[] = {0};
char stringIndex_3F7[] = {0};
char stringIndex_3F8[] = {0};
char stringIndex_3F9[] = {0};
char stringIndex_3FA[] = {0};
char stringIndex_3FB[] = {0};
char stringIndex_3FC[] = {0};
char stringIndex_3FD[] = {0};
char stringIndex_3FE[] = {0};
char stringIndex_3FF[] = {0};
char stringIndex_400[] = {0};
char stringIndex_401[] = {0};
char stringIndex_402[] = {0};
char stringIndex_403[] = {0};
char stringIndex_404[] = {0};
char stringIndex_405[] = {0};
char stringIndex_406[] = {0};
char stringIndex_407[] = {0};
char stringIndex_408[] = {0};
char stringIndex_409[] = {0};
char stringIndex_40A[] = {0};
char stringIndex_40B[] = {0};
char stringIndex_40C[] = {0};
char stringIndex_40D[] = {0};
char stringIndex_40E[] = {0};
char stringIndex_40F[] = {0};
char stringIndex_410[] = {0};
char stringIndex_411[] = {0};
char stringIndex_412[] = {0};
char stringIndex_413[] = {0};
char stringIndex_414[] = {0};
char stringIndex_415[] = {0};
char stringIndex_416[] = {0};
char stringIndex_417[] = {0};
char stringIndex_418[] = {0};
char stringIndex_419[] = {0};
char stringIndex_41A[] = {0};
char stringIndex_41B[] = {0};
char stringIndex_41C[] = {0};
char stringIndex_41D[] = {0};
char stringIndex_41E[] = {0};
char stringIndex_41F[] = {0};
char stringIndex_420[] = {0};
char stringIndex_421[] = {0};
char stringIndex_422[] = {0};
char stringIndex_423[] = {0};
char stringIndex_424[] = {0};
char stringIndex_425[] = {0};
char stringIndex_426[] = {0};
char stringIndex_427[] = {0};
char stringIndex_428[] = {0};
char stringIndex_429[] = {0};
char stringIndex_42A[] = {0};
char stringIndex_42B[] = {0};
char stringIndex_42C[] = {0};
char stringIndex_42D[] = {0};
char stringIndex_42E[] = {0};
char stringIndex_42F[] = {0};
char stringIndex_430[] = {0};
char stringIndex_431[] = {0};
char stringIndex_432[] = {0};
char stringIndex_433[] = "Sono Mario e i suoi migliori amici...\nMa sembra che qualcosa non vada.";
char stringIndex_434[] = "Cosa potrebbe mai essere?";
char stringIndex_435[] = "Stanno discutendo su chi sia tra loro\nla stella piu' grande, la Superstar!";
char stringIndex_436[] = "Wario dice:\n\xC0Una Superstar deve essere forte\xC1.";
char stringIndex_437[] = "Donkey Kong porta forza come secondo nome!";
char stringIndex_438[] = "O forse Mario sarebbe la migliore Superstar?";
char stringIndex_439[] = "O forse la Principessa Peach?";
char stringIndex_43A[] = "Aspetta! Non scordiamo Yoshi con la sua\nenergia!";
char stringIndex_43B[] = "Stanno litigando, tutti pretendono\ndi essere Superstar!";
char stringIndex_43C[] = "\xC0 ASPETTATE! FERMATEVI!!! \xC1";
char stringIndex_43D[] = "\xC0 Volete davvero essere tutti Superstar? \xC1";
char stringIndex_43E[] = "\xC0 Allora vediamo cosa serve per diventare\nuna Superstar. \xC1";
char stringIndex_43F[] = "\xC0 Serve solo forza per essere una Superstar? \xC1";
char stringIndex_440[] = "\xC0 Per essere una Superstar serve... Coraggio... \xC1";
char stringIndex_441[] = "\xC0 ...Saggezza e... \xC1";
char stringIndex_442[] = {0};
char stringIndex_443[] = "\xC0 ...Gentilezza... \xC1";
char stringIndex_444[] = "\xC0 Se tutti voi volete essere superstar,\nallora ho un' idea. \xC1";
char stringIndex_445[] = "\xC0 Perche' non usate il Tubo Warp a Fungopoli\nper catapultarvi nell'avventura? \xC1";
char stringIndex_446[] = "\xC0 Chi ne uscira' in vetta, sara' la Superstar. \xC1";
char stringIndex_447[] = "\xC0 Pero'... \xC1";
char stringIndex_448[] = "\xC0 Non si sa quali pericoli vi attenderanno. \xC1";
char stringIndex_449[] = "\xC0 Volete partire all'avventura? \xC1";
char stringIndex_44A[] = "\x0BPosso eliminare tutti i dati salvati.";
char stringIndex_44B[] = "\x0BQuesta e' la leva del suono.\nPuo' essere impostata su\n\x05Stereo\x08 o\x06 Mono\x08.";
char stringIndex_44C[] = "\x0B Esci dalla Casa Opzioni.";
char stringIndex_44D[] = "\x0B Esci dalla Casa Opzioni?\n\x0E\x0CSi'\x0D     \x0E\x0CNo\x0D";
char stringIndex_44E[] = {0};
char stringIndex_44F[] = {0};
char stringIndex_450[] = "\x0B Cosa vuoi da me?\n\x0E\x0C Veramente, niente\x0D\n\x0E\x0C Elimina i dati salvati\x0D";
char stringIndex_451[] = "\x0BPuoi usare gli oggetti qui\nquanto vuoi.\nPrenditela con comodo.\xFF";
char stringIndex_452[] = "\x0BSe elimini i dati salvati,\n\x03tutti i record verranno eliminati\x08.\nTieni presente che non sara'\npossibile riottenere questi dati.";
char stringIndex_453[] = "\x0B Ne sei proprio sicuro?\n\x0E\x0C Ho cambiato idea, non farlo\x0D\n\x0E\x0C Elimina tutti i miei dati\x0D";
char stringIndex_454[] = "\x0B Per premere il tasto per\n\x04 Eliminazione Dati\x08 premi \x2B\nPremi \x22 per annullare.";
char stringIndex_455[] = "\x0BImpostazione attuale: \x11.";
char stringIndex_456[] = {0};
char stringIndex_457[] = {0};
char stringIndex_458[] = "\x0BPer cambiare\nle impostazioni audio,\npremi @.";
char stringIndex_459[] = {0};
char stringIndex_45A[] = {0};
char stringIndex_45B[] = {0};
char stringIndex_45C[] = {0};
char stringIndex_45D[] = {0};
char stringIndex_45E[] = {0};
char stringIndex_45F[] = {0};
char stringIndex_460[] = {0};
char stringIndex_461[] = {0};
char stringIndex_462[] = {0};
char stringIndex_463[] = {0};
char stringIndex_464[] = {0};
char stringIndex_465[] = {0};
char stringIndex_466[] = {0};
char stringIndex_467[] = {0};
char stringIndex_468[] = {0};
char stringIndex_469[] = {0};
char stringIndex_46A[] = {0};
char stringIndex_46B[] = {0};
char stringIndex_46C[] = {0};
char stringIndex_46D[] = {0};
char stringIndex_46E[] = {0};
char stringIndex_46F[] = {0};
char stringIndex_470[] = {0};
char stringIndex_471[] = {0};
char stringIndex_472[] = {0};
char stringIndex_473[] = {0};
char stringIndex_474[] = {0};
char stringIndex_475[] = {0};
char stringIndex_476[] = {0};
char stringIndex_477[] = {0};
char stringIndex_478[] = {0};
char stringIndex_479[] = {0};
char stringIndex_47A[] = {0};
char stringIndex_47B[] = {0};
char stringIndex_47C[] = {0};
char stringIndex_47D[] = {0};
char stringIndex_47E[] = {0};
char stringIndex_47F[] = {0};
char stringIndex_480[] = {0};
char stringIndex_481[] = {0};
char stringIndex_482[] = {0};
char stringIndex_483[] = {0};
char stringIndex_484[] = {0};
char stringIndex_485[] = {0};
char stringIndex_486[] = {0};
char stringIndex_487[] = {0};
char stringIndex_488[] = {0};
char stringIndex_489[] = {0};
char stringIndex_48A[] = {0};
char stringIndex_48B[] = {0};
char stringIndex_48C[] = {0};
char stringIndex_48D[] = {0};
char stringIndex_48E[] = {0};
char stringIndex_48F[] = {0};
char stringIndex_490[] = {0};
char stringIndex_491[] = {0};
char stringIndex_492[] = {0};
char stringIndex_493[] = {0};
char stringIndex_494[] = {0};
char stringIndex_495[] = {0};
char stringIndex_496[] = {0};
char stringIndex_497[] = {0};
char stringIndex_498[] = {0};
char stringIndex_499[] = {0};
char stringIndex_49A[] = {0};
char stringIndex_49B[] = {0};
char stringIndex_49C[] = {0};
char stringIndex_49D[] = {0};
char stringIndex_49E[] = {0};
char stringIndex_49F[] = {0};
char stringIndex_4A0[] = {0};
char stringIndex_4A1[] = {0};
char stringIndex_4A2[] = {0};
char stringIndex_4A3[] = {0};
char stringIndex_4A4[] = {0};
char stringIndex_4A5[] = {0};
char stringIndex_4A6[] = {0};
char stringIndex_4A7[] = {0};
char stringIndex_4A8[] = {0};
char stringIndex_4A9[] = {0};
char stringIndex_4AA[] = {0};
char stringIndex_4AB[] = {0};
char stringIndex_4AC[] = {0};
char stringIndex_4AD[] = {0};
char stringIndex_4AE[] = {0};
char stringIndex_4AF[] = {0};
char stringIndex_4B0[] = {0};
char stringIndex_4B1[] = {0};
char stringIndex_4B2[] = {0};
char stringIndex_4B3[] = {0};
char stringIndex_4B4[] = {0};
char stringIndex_4B5[] = {0};
char stringIndex_4B6[] = {0};
char stringIndex_4B7[] = {0};
char stringIndex_4B8[] = {0};
char stringIndex_4B9[] = {0};
char stringIndex_4BA[] = {0};
char stringIndex_4BB[] = {0};
char stringIndex_4BC[] = {0};
char stringIndex_4BD[] = {0};
char stringIndex_4BE[] = {0};
char stringIndex_4BF[] = {0};
char stringIndex_4C0[] = {0};
char stringIndex_4C1[] = {0};
char stringIndex_4C2[] = {0};
char stringIndex_4C3[] = {0};
char stringIndex_4C4[] = {0};
char stringIndex_4C5[] = {0};
char stringIndex_4C6[] = {0};
char stringIndex_4C7[] = {0};
char stringIndex_4C8[] = {0};
char stringIndex_4C9[] = {0};
char stringIndex_4CA[] = {0};
char stringIndex_4CB[] = {0};
char stringIndex_4CC[] = {0};
char stringIndex_4CD[] = {0};
char stringIndex_4CE[] = {0};
char stringIndex_4CF[] = {0};
char stringIndex_4D0[] = {0};
char stringIndex_4D1[] = {0};
char stringIndex_4D2[] = {0};
char stringIndex_4D3[] = {0};
char stringIndex_4D4[] = {0};
char stringIndex_4D5[] = {0};
char stringIndex_4D6[] = {0};
char stringIndex_4D7[] = {0};
char stringIndex_4D8[] = {0};
char stringIndex_4D9[] = {0};
char stringIndex_4DA[] = {0};
char stringIndex_4DB[] = {0};
char stringIndex_4DC[] = {0};
char stringIndex_4DD[] = {0};
char stringIndex_4DE[] = {0};
char stringIndex_4DF[] = {0};
char stringIndex_4E0[] = {0};
char stringIndex_4E1[] = {0};
char stringIndex_4E2[] = {0};
char stringIndex_4E3[] = {0};
char stringIndex_4E4[] = {0};
char stringIndex_4E5[] = {0};
char stringIndex_4E6[] = {0};
char stringIndex_4E7[] = {0};
char stringIndex_4E8[] = "Lasciate che vi mostri dove trovare\nla prima Stella.\xFF";
char stringIndex_4E9[] = "\x0B Questo e' lo Spazio Stella.\n Otterrete la stella dando a Toad\n\x03 20 Gettoni\x02.\xFF";
char stringIndex_4EA[] = {0};
char stringIndex_4EB[] = {0};
char stringIndex_4EC[] = {0};
char stringIndex_4ED[] = {0};
char stringIndex_4EE[] = {0};
char stringIndex_4EF[] = {0};
char stringIndex_4F0[] = {0};
char stringIndex_4F1[] = {0};
char stringIndex_4F2[] = {0};
char stringIndex_4F3[] = {0};
char stringIndex_4F4[] = {0};
char stringIndex_4F5[] = {0};
char stringIndex_4F6[] = {0};
char stringIndex_4F7[] = {0};
char stringIndex_4F8[] = {0};
char stringIndex_4F9[] = {0};
char stringIndex_4FA[] = {0};
char stringIndex_4FB[] = {0};
char stringIndex_4FC[] = {0};
char stringIndex_4FD[] = {0};
char stringIndex_4FE[] = {0};
char stringIndex_4FF[] = {0};
char stringIndex_500[] = {0};
char stringIndex_501[] = {0};
char stringIndex_502[] = {0};
char stringIndex_503[] = {0};
char stringIndex_504[] = {0};
char stringIndex_505[] = {0};
char stringIndex_506[] = {0};
char stringIndex_507[] = {0};
char stringIndex_508[] = {0};
char stringIndex_509[] = {0};
char stringIndex_50A[] = {0};
char stringIndex_50B[] = {0};
char stringIndex_50C[] = {0};
char stringIndex_50D[] = {0};
char stringIndex_50E[] = {0};
char stringIndex_50F[] = {0};
char stringIndex_510[] = {0};
char stringIndex_511[] = {0};
char stringIndex_512[] = {0};
char stringIndex_513[] = {0};
char stringIndex_514[] = {0};
char stringIndex_515[] = {0};
char stringIndex_516[] = {0};
char stringIndex_517[] = {0};
char stringIndex_518[] = {0};
char stringIndex_519[] = {0};
char stringIndex_51A[] = {0};
char stringIndex_51B[] = {0};
char stringIndex_51C[] = {0};
char stringIndex_51D[] = {0};
char stringIndex_51E[] = {0};
char stringIndex_51F[] = {0};
char stringIndex_520[] = {0};
char stringIndex_521[] = {0};
char stringIndex_522[] = {0};
char stringIndex_523[] = {0};
char stringIndex_524[] = {0};
char stringIndex_525[] = {0};
char stringIndex_526[] = {0};
char stringIndex_527[] = {0};
char stringIndex_528[] = {0};
char stringIndex_529[] = {0};
char stringIndex_52A[] = {0};
char stringIndex_52B[] = {0};
char stringIndex_52C[] = {0};
char stringIndex_52D[] = {0};
char stringIndex_52E[] = {0};
char stringIndex_52F[] = {0};
char stringIndex_530[] = {0};
char stringIndex_531[] = {0};
char stringIndex_532[] = {0};
char stringIndex_533[] = {0};
char stringIndex_534[] = {0};
char stringIndex_535[] = {0};
char stringIndex_536[] = {0};
char stringIndex_537[] = {0};
char stringIndex_538[] = {0};
char stringIndex_539[] = {0};
char stringIndex_53A[] = {0};
char stringIndex_53B[] = {0};
char stringIndex_53C[] = {0};
char stringIndex_53D[] = {0};
char stringIndex_53E[] = {0};
char stringIndex_53F[] = {0};
char stringIndex_540[] = {0};
char stringIndex_541[] = {0};
char stringIndex_542[] = {0};
char stringIndex_543[] = {0};
char stringIndex_544[] = {0};
char stringIndex_545[] = {0};
char stringIndex_546[] = {0};
char stringIndex_547[] = {0};
char stringIndex_548[] = {0};
char stringIndex_549[] = {0};
char stringIndex_54A[] = {0};
char stringIndex_54B[] = {0};
char stringIndex_54C[] = {0};
char stringIndex_54D[] = {0};
char stringIndex_54E[] = {0};
char stringIndex_54F[] = {0};
char stringIndex_550[] = {0};
char stringIndex_551[] = {0};
char stringIndex_552[] = {0};
char stringIndex_553[] = {0};
char stringIndex_554[] = {0};
char stringIndex_555[] = {0};
char stringIndex_556[] = {0};
char stringIndex_557[] = {0};
char stringIndex_558[] = {0};
char stringIndex_559[] = {0};
char stringIndex_55A[] = {0};
char stringIndex_55B[] = {0};
char stringIndex_55C[] = {0};
char stringIndex_55D[] = {0};
char stringIndex_55E[] = {0};
char stringIndex_55F[] = {0};
char stringIndex_560[] = {0};
char stringIndex_561[] = {0};
char stringIndex_562[] = {0};
char stringIndex_563[] = {0};
char stringIndex_564[] = {0};
char stringIndex_565[] = {0};
char stringIndex_566[] = {0};
char stringIndex_567[] = {0};
char stringIndex_568[] = {0};
char stringIndex_569[] = {0};
char stringIndex_56A[] = {0};
char stringIndex_56B[] = {0};
char stringIndex_56C[] = {0};
char stringIndex_56D[] = {0};
char stringIndex_56E[] = {0};
char stringIndex_56F[] = {0};
char stringIndex_570[] = {0};
char stringIndex_571[] = {0};
char stringIndex_572[] = {0};
char stringIndex_573[] = {0};
char stringIndex_574[] = {0};
char stringIndex_575[] = {0};
char stringIndex_576[] = {0};
char stringIndex_577[] = {0};
char stringIndex_578[] = {0};
char stringIndex_579[] = {0};
char stringIndex_57A[] = {0};
char stringIndex_57B[] = {0};
char stringIndex_57C[] = {0};
char stringIndex_57D[] = {0};
char stringIndex_57E[] = {0};
char stringIndex_57F[] = {0};
char stringIndex_580[] = {0};
char stringIndex_581[] = {0};
char stringIndex_582[] = {0};
char stringIndex_583[] = {0};
char stringIndex_584[] = {0};
char stringIndex_585[] = {0};
char stringIndex_586[] = {0};
char stringIndex_587[] = {0};
char stringIndex_588[] = {0};
char stringIndex_589[] = {0};
char stringIndex_58A[] = {0};
char stringIndex_58B[] = {0};
char stringIndex_58C[] = {0};
char stringIndex_58D[] = {0};
char stringIndex_58E[] = {0};
char stringIndex_58F[] = {0};
char stringIndex_590[] = {0};
char stringIndex_591[] = {0};
char stringIndex_592[] = {0};
char stringIndex_593[] = {0};
char stringIndex_594[] = {0};
char stringIndex_595[] = {0};
char stringIndex_596[] = {0};
char stringIndex_597[] = {0};
char stringIndex_598[] = {0};
char stringIndex_599[] = {0};
char stringIndex_59A[] = {0};
char stringIndex_59B[] = {0};
char stringIndex_59C[] = {0};
char stringIndex_59D[] = {0};
char stringIndex_59E[] = {0};
char stringIndex_59F[] = {0};
char stringIndex_5A0[] = {0};
char stringIndex_5A1[] = {0};
char stringIndex_5A2[] = {0};
char stringIndex_5A3[] = {0};
char stringIndex_5A4[] = {0};
char stringIndex_5A5[] = {0};
char stringIndex_5A6[] = {0};
char stringIndex_5A7[] = {0};
char stringIndex_5A8[] = {0};
char stringIndex_5A9[] = {0};
char stringIndex_5AA[] = {0};
char stringIndex_5AB[] = {0};
char stringIndex_5AC[] = {0};
char stringIndex_5AD[] = {0};
char stringIndex_5AE[] = {0};
char stringIndex_5AF[] = {0};
char stringIndex_5B0[] = {0};
char stringIndex_5B1[] = {0};
char stringIndex_5B2[] = {0};
char stringIndex_5B3[] = {0};
char stringIndex_5B4[] = {0};
char stringIndex_5B5[] = {0};
char stringIndex_5B6[] = {0};
char stringIndex_5B7[] = {0};
char stringIndex_5B8[] = {0};
char stringIndex_5B9[] = {0};
char stringIndex_5BA[] = {0};
char stringIndex_5BB[] = {0};
char stringIndex_5BC[] = {0};
char stringIndex_5BD[] = {0};
char stringIndex_5BE[] = {0};
char stringIndex_5BF[] = {0};
char stringIndex_5C0[] = {0};
char stringIndex_5C1[] = {0};
char stringIndex_5C2[] = {0};
char stringIndex_5C3[] = {0};
char stringIndex_5C4[] = {0};
char stringIndex_5C5[] = {0};
char stringIndex_5C6[] = {0};
char stringIndex_5C7[] = {0};
char stringIndex_5C8[] = {0};
char stringIndex_5C9[] = {0};
char stringIndex_5CA[] = {0};
char stringIndex_5CB[] = {0};
char stringIndex_5CC[] = {0};
char stringIndex_5CD[] = {0};
char stringIndex_5CE[] = {0};
char stringIndex_5CF[] = {0};
char stringIndex_5D0[] = {0};
char stringIndex_5D1[] = {0};
char stringIndex_5D2[] = {0};
char stringIndex_5D3[] = {0};
char stringIndex_5D4[] = {0};
char stringIndex_5D5[] = {0};
char stringIndex_5D6[] = {0};
char stringIndex_5D7[] = {0};
char stringIndex_5D8[] = {0};
char stringIndex_5D9[] = {0};
char stringIndex_5DA[] = {0};
char stringIndex_5DB[] = {0};
char stringIndex_5DC[] = {0};
char stringIndex_5DD[] = {0};
char stringIndex_5DE[] = {0};
char stringIndex_5DF[] = {0};
char stringIndex_5E0[] = {0};
char stringIndex_5E1[] = {0};
char stringIndex_5E2[] = {0};
char stringIndex_5E3[] = {0};
char stringIndex_5E4[] = {0};
char stringIndex_5E5[] = {0};
char stringIndex_5E6[] = {0};
char stringIndex_5E7[] = {0};
char stringIndex_5E8[] = {0};
char stringIndex_5E9[] = {0};
char stringIndex_5EA[] = {0};
char stringIndex_5EB[] = {0};
char stringIndex_5EC[] = {0};
char stringIndex_5ED[] = {0};
char stringIndex_5EE[] = {0};
char stringIndex_5EF[] = {0};
char stringIndex_5F0[] = {0};
char stringIndex_5F1[] = {0};
char stringIndex_5F2[] = {0};
char stringIndex_5F3[] = {0};
char stringIndex_5F4[] = {0};
char stringIndex_5F5[] = {0};
char stringIndex_5F6[] = {0};
char stringIndex_5F7[] = {0};
char stringIndex_5F8[] = {0};
char stringIndex_5F9[] = {0};
char stringIndex_5FA[] = {0};
char stringIndex_5FB[] = {0};
char stringIndex_5FC[] = {0};
char stringIndex_5FD[] = {0};
char stringIndex_5FE[] = {0};
char stringIndex_5FF[] = {0};
char stringIndex_600[] = {0};
char stringIndex_601[] = {0};
char stringIndex_602[] = {0};
char stringIndex_603[] = {0};
char stringIndex_604[] = {0};
char stringIndex_605[] = {0};
char stringIndex_606[] = {0};
char stringIndex_607[] = {0};
char stringIndex_608[] = {0};
char stringIndex_609[] = {0};
char stringIndex_60A[] = {0};
char stringIndex_60B[] = {0};
char stringIndex_60C[] = {0};
char stringIndex_60D[] = {0};
char stringIndex_60E[] = {0};
char stringIndex_60F[] = {0};
char stringIndex_610[] = {0};
char stringIndex_611[] = {0};
char stringIndex_612[] = {0};
char stringIndex_613[] = {0};
char stringIndex_614[] = {0};
char stringIndex_615[] = {0};
char stringIndex_616[] = {0};
char stringIndex_617[] = {0};
char stringIndex_618[] = {0};
char stringIndex_619[] = {0};
char stringIndex_61A[] = {0};
char stringIndex_61B[] = {0};
char stringIndex_61C[] = {0};
char stringIndex_61D[] = {0};
char stringIndex_61E[] = {0};
char stringIndex_61F[] = {0};
char stringIndex_620[] = {0};
char stringIndex_621[] = {0};
char stringIndex_622[] = {0};
char stringIndex_623[] = {0};
char stringIndex_624[] = {0};
char stringIndex_625[] = {0};
char stringIndex_626[] = {0};
char stringIndex_627[] = {0};
char stringIndex_628[] = {0};
char stringIndex_629[] = {0};
char stringIndex_62A[] = {0};
char stringIndex_62B[] = {0};
char stringIndex_62C[] = {0};
char stringIndex_62D[] = {0};
char stringIndex_62E[] = {0};
char stringIndex_62F[] = {0};
char stringIndex_630[] = {0};
char stringIndex_631[] = {0};
char stringIndex_632[] = {0};
char stringIndex_633[] = {0};
char stringIndex_634[] = {0};
char stringIndex_635[] = {0};
char stringIndex_636[] = {0};
char stringIndex_637[] = {0};
char stringIndex_638[] = {0};
char stringIndex_639[] = {0};
char stringIndex_63A[] = {0};
char stringIndex_63B[] = {0};
char stringIndex_63C[] = {0};
char stringIndex_63D[] = {0};
char stringIndex_63E[] = {0};
char stringIndex_63F[] = {0};
char stringIndex_640[] = {0};
char stringIndex_641[] = {0};
char stringIndex_642[] = {0};
char stringIndex_643[] = {0};
char stringIndex_644[] = {0};
char stringIndex_645[] = {0};
char stringIndex_646[] = {0};
char stringIndex_647[] = {0};
char stringIndex_648[] = {0};
char stringIndex_649[] = {0};
char stringIndex_64A[] = {0};
char stringIndex_64B[] = {0};
char stringIndex_64C[] = {0};
char stringIndex_64D[] = {0};
char stringIndex_64E[] = {0};
char stringIndex_64F[] = {0};
char stringIndex_650[] = {0};
char stringIndex_651[] = {0};
char stringIndex_652[] = {0};
char stringIndex_653[] = {0};
char stringIndex_654[] = {0};
char stringIndex_655[] = {0};
char stringIndex_656[] = {0};
char stringIndex_657[] = {0};
char stringIndex_658[] = {0};
char stringIndex_659[] = {0};
char stringIndex_65A[] = {0};
char stringIndex_65B[] = {0};
char stringIndex_65C[] = {0};
char stringIndex_65D[] = {0};
char stringIndex_65E[] = {0};
char stringIndex_65F[] = {0};
char stringIndex_660[] = {0};
char stringIndex_661[] = {0};
char stringIndex_662[] = {0};
char stringIndex_663[] = {0};
char stringIndex_664[] = {0};
char stringIndex_665[] = {0};
char stringIndex_666[] = {0};
char stringIndex_667[] = {0};
char stringIndex_668[] = {0};
char stringIndex_669[] = {0};
char stringIndex_66A[] = {0};
char stringIndex_66B[] = {0};
char stringIndex_66C[] = {0};
char stringIndex_66D[] = {0};
char stringIndex_66E[] = {0};
char stringIndex_66F[] = {0};
char stringIndex_670[] = {0};
char stringIndex_671[] = {0};
char stringIndex_672[] = {0};
char stringIndex_673[] = {0};
char stringIndex_674[] = {0};
char stringIndex_675[] = {0};
char stringIndex_676[] = {0};
char stringIndex_677[] = {0};
char stringIndex_678[] = {0};
char stringIndex_679[] = {0};
char stringIndex_67A[] = {0};
char stringIndex_67B[] = {0};
char stringIndex_67C[] = {0};
char stringIndex_67D[] = {0};
char stringIndex_67E[] = {0};
char stringIndex_67F[] = {0};
char stringIndex_680[] = {0};
char stringIndex_681[] = {0};
char stringIndex_682[] = {0};
char stringIndex_683[] = {0};
char stringIndex_684[] = {0};
char stringIndex_685[] = {0};
char stringIndex_686[] = {0};
char stringIndex_687[] = {0};
char stringIndex_688[] = {0};
char stringIndex_689[] = {0};
char stringIndex_68A[] = {0};
char stringIndex_68B[] = {0};
char stringIndex_68C[] = {0};
char stringIndex_68D[] = {0};
char stringIndex_68E[] = {0};
char stringIndex_68F[] = {0};
char stringIndex_690[] = {0};
char stringIndex_691[] = {0};
char stringIndex_692[] = {0};
char stringIndex_693[] = {0};
char stringIndex_694[] = {0};
char stringIndex_695[] = {0};
char stringIndex_696[] = {0};
char stringIndex_697[] = {0};
char stringIndex_698[] = {0};
char stringIndex_699[] = {0};
char stringIndex_69A[] = {0};
char stringIndex_69B[] = {0};
char stringIndex_69C[] = {0};
char stringIndex_69D[] = {0};
char stringIndex_69E[] = {0};
char stringIndex_69F[] = {0};
char stringIndex_6A0[] = {0};
char stringIndex_6A1[] = {0};
char stringIndex_6A2[] = {0};
char stringIndex_6A3[] = {0};
char stringIndex_6A4[] = {0};
char stringIndex_6A5[] = {0};
char stringIndex_6A6[] = {0};
char stringIndex_6A7[] = {0};
char stringIndex_6A8[] = {0};
char stringIndex_6A9[] = {0};
char stringIndex_6AA[] = {0};
char stringIndex_6AB[] = {0};
char stringIndex_6AC[] = {0};
char stringIndex_6AD[] = {0};
char stringIndex_6AE[] = {0};
char stringIndex_6AF[] = {0};
char stringIndex_6B0[] = {0};
char stringIndex_6B1[] = {0};
char stringIndex_6B2[] = {0};
char stringIndex_6B3[] = {0};
char stringIndex_6B4[] = {0};
char stringIndex_6B5[] = {0};
char stringIndex_6B6[] = {0};
char stringIndex_6B7[] = {0};
char stringIndex_6B8[] = {0};
char stringIndex_6B9[] = {0};
char stringIndex_6BA[] = {0};
char stringIndex_6BB[] = {0};
char stringIndex_6BC[] = {0};
char stringIndex_6BD[] = {0};
char stringIndex_6BE[] = {0};
char stringIndex_6BF[] = {0};
char stringIndex_6C0[] = {0};
char stringIndex_6C1[] = {0};
char stringIndex_6C2[] = {0};
char stringIndex_6C3[] = {0};
char stringIndex_6C4[] = {0};
char stringIndex_6C5[] = {0};
char stringIndex_6C6[] = {0};
char stringIndex_6C7[] = {0};
char stringIndex_6C8[] = {0};
char stringIndex_6C9[] = {0};
char stringIndex_6CA[] = {0};
char stringIndex_6CB[] = {0};
char stringIndex_6CC[] = {0};
char stringIndex_6CD[] = {0};
char stringIndex_6CE[] = {0};
char stringIndex_6CF[] = {0};
char stringIndex_6D0[] = {0};
char stringIndex_6D1[] = {0};
char stringIndex_6D2[] = {0};
char stringIndex_6D3[] = {0};
char stringIndex_6D4[] = {0};
char stringIndex_6D5[] = {0};
char stringIndex_6D6[] = {0};
char stringIndex_6D7[] = {0};
char stringIndex_6D8[] = {0};
char stringIndex_6D9[] = {0};
char stringIndex_6DA[] = {0};
char stringIndex_6DB[] = {0};
char stringIndex_6DC[] = {0};
char stringIndex_6DD[] = {0};
char stringIndex_6DE[] = {0};
char stringIndex_6DF[] = {0};
char stringIndex_6E0[] = {0};
char stringIndex_6E1[] = {0};
char stringIndex_6E2[] = {0};
char stringIndex_6E3[] = {0};
char stringIndex_6E4[] = {0};
char stringIndex_6E5[] = {0};
char stringIndex_6E6[] = {0};
char stringIndex_6E7[] = {0};
char stringIndex_6E8[] = {0};
char stringIndex_6E9[] = {0};
char stringIndex_6EA[] = {0};
char stringIndex_6EB[] = {0};
char stringIndex_6EC[] = {0};
char stringIndex_6ED[] = {0};
char stringIndex_6EE[] = {0};
char stringIndex_6EF[] = {0};
char stringIndex_6F0[] = {0};
char stringIndex_6F1[] = {0};
char stringIndex_6F2[] = {0};
char stringIndex_6F3[] = {0};
char stringIndex_6F4[] = {0};
char stringIndex_6F5[] = {0};
char stringIndex_6F6[] = {0};
char stringIndex_6F7[] = {0};
char stringIndex_6F8[] = {0};
char stringIndex_6F9[] = {0};
char stringIndex_6FA[] = {0};
char stringIndex_6FB[] = {0};
char stringIndex_6FC[] = {0};
char stringIndex_6FD[] = {0};
char stringIndex_6FE[] = {0};
char stringIndex_6FF[] = {0};
char stringIndex_700[] = {0};
char stringIndex_701[] = {0};
char stringIndex_702[] = {0};
char stringIndex_703[] = {0};
char stringIndex_704[] = {0};
char stringIndex_705[] = {0};
char stringIndex_706[] = {0};
char stringIndex_707[] = {0};
char stringIndex_708[] = {0};
char stringIndex_709[] = {0};
char stringIndex_70A[] = {0};
char stringIndex_70B[] = {0};
char stringIndex_70C[] = {0};
char stringIndex_70D[] = {0};
char stringIndex_70E[] = {0};
char stringIndex_70F[] = {0};
char stringIndex_710[] = {0};
char stringIndex_711[] = {0};
char stringIndex_712[] = {0};
char stringIndex_713[] = {0};
char stringIndex_714[] = {0};
char stringIndex_715[] = {0};
char stringIndex_716[] = {0};
char stringIndex_717[] = {0};
char stringIndex_718[] = {0};
char stringIndex_719[] = {0};
char stringIndex_71A[] = {0};
char stringIndex_71B[] = {0};
char stringIndex_71C[] = {0};
char stringIndex_71D[] = {0};
char stringIndex_71E[] = {0};
char stringIndex_71F[] = {0};
char stringIndex_720[] = {0};
char stringIndex_721[] = {0};
char stringIndex_722[] = {0};
char stringIndex_723[] = {0};
char stringIndex_724[] = {0};
char stringIndex_725[] = {0};
char stringIndex_726[] = {0};
char stringIndex_727[] = {0};
char stringIndex_728[] = {0};
char stringIndex_729[] = {0};
char stringIndex_72A[] = {0};
char stringIndex_72B[] = {0};
char stringIndex_72C[] = {0};
char stringIndex_72D[] = {0};
char stringIndex_72E[] = {0};
char stringIndex_72F[] = {0};
char stringIndex_730[] = {0};
char stringIndex_731[] = {0};
char stringIndex_732[] = {0};
char stringIndex_733[] = {0};
char stringIndex_734[] = {0};
char stringIndex_735[] = {0};
char stringIndex_736[] = {0};
char stringIndex_737[] = {0};
char stringIndex_738[] = {0};
char stringIndex_739[] = {0};
char stringIndex_73A[] = {0};
char stringIndex_73B[] = {0};
char stringIndex_73C[] = {0};
char stringIndex_73D[] = {0};
char stringIndex_73E[] = {0};
char stringIndex_73F[] = {0};
char stringIndex_740[] = {0};
char stringIndex_741[] = {0};
char stringIndex_742[] = {0};
char stringIndex_743[] = {0};
char stringIndex_744[] = {0};
char stringIndex_745[] = {0};
char stringIndex_746[] = {0};
char stringIndex_747[] = {0};
char stringIndex_748[] = {0};
char stringIndex_749[] = {0};
char stringIndex_74A[] = {0};
char stringIndex_74B[] = {0};
char stringIndex_74C[] = {0};
char stringIndex_74D[] = {0};
char stringIndex_74E[] = {0};
char stringIndex_74F[] = {0};
char stringIndex_750[] = {0};
char stringIndex_751[] = {0};
char stringIndex_752[] = {0};
char stringIndex_753[] = {0};
char stringIndex_754[] = {0};
char stringIndex_755[] = {0};
char stringIndex_756[] = {0};
char stringIndex_757[] = {0};
char stringIndex_758[] = {0};
char stringIndex_759[] = {0};
char stringIndex_75A[] = {0};
char stringIndex_75B[] = {0};
char stringIndex_75C[] = {0};
char stringIndex_75D[] = {0};
char stringIndex_75E[] = {0};
char stringIndex_75F[] = {0};
char stringIndex_760[] = {0};
char stringIndex_761[] = {0};
char stringIndex_762[] = {0};
char stringIndex_763[] = {0};
char stringIndex_764[] = {0};
char stringIndex_765[] = {0};
char stringIndex_766[] = {0};
char stringIndex_767[] = {0};
char stringIndex_768[] = {0};
char stringIndex_769[] = {0};
char stringIndex_76A[] = {0};
char stringIndex_76B[] = {0};
char stringIndex_76C[] = {0};
char stringIndex_76D[] = {0};
char stringIndex_76E[] = {0};
char stringIndex_76F[] = {0};
char stringIndex_770[] = {0};
char stringIndex_771[] = {0};
char stringIndex_772[] = {0};
char stringIndex_773[] = {0};
char stringIndex_774[] = {0};
char stringIndex_775[] = {0};
char stringIndex_776[] = {0};
char stringIndex_777[] = {0};
char stringIndex_778[] = {0};
char stringIndex_779[] = {0};
char stringIndex_77A[] = {0};
char stringIndex_77B[] = {0};
char stringIndex_77C[] = {0};
char stringIndex_77D[] = {0};
char stringIndex_77E[] = {0};
char stringIndex_77F[] = {0};
char stringIndex_780[] = {0};
char stringIndex_781[] = {0};
char stringIndex_782[] = {0};
char stringIndex_783[] = {0};
char stringIndex_784[] = {0};
char stringIndex_785[] = {0};
char stringIndex_786[] = {0};
char stringIndex_787[] = {0};
char stringIndex_788[] = {0};
char stringIndex_789[] = {0};
char stringIndex_78A[] = {0};
char stringIndex_78B[] = {0};
char stringIndex_78C[] = {0};
char stringIndex_78D[] = {0};
char stringIndex_78E[] = {0};
char stringIndex_78F[] = {0};
char stringIndex_790[] = {0};
char stringIndex_791[] = {0};
char stringIndex_792[] = {0};
char stringIndex_793[] = {0};
char stringIndex_794[] = {0};
char stringIndex_795[] = {0};
char stringIndex_796[] = {0};
char stringIndex_797[] = {0};
char stringIndex_798[] = {0};
char stringIndex_799[] = {0};
char stringIndex_79A[] = {0};
char stringIndex_79B[] = {0};
char stringIndex_79C[] = {0};
char stringIndex_79D[] = {0};
char stringIndex_79E[] = {0};
char stringIndex_79F[] = {0};
char stringIndex_7A0[] = {0};
char stringIndex_7A1[] = {0};
char stringIndex_7A2[] = {0};
char stringIndex_7A3[] = {0};
char stringIndex_7A4[] = {0};
char stringIndex_7A5[] = {0};
char stringIndex_7A6[] = {0};
char stringIndex_7A7[] = {0};
char stringIndex_7A8[] = {0};
char stringIndex_7A9[] = {0};
char stringIndex_7AA[] = {0};
char stringIndex_7AB[] = {0};
char stringIndex_7AC[] = {0};
char stringIndex_7AD[] = {0};
char stringIndex_7AE[] = {0};
char stringIndex_7AF[] = {0};
char stringIndex_7B0[] = {0};
char stringIndex_7B1[] = {0};
char stringIndex_7B2[] = {0};
char stringIndex_7B3[] = {0};
char stringIndex_7B4[] = {0};
char stringIndex_7B5[] = {0};
char stringIndex_7B6[] = {0};
char stringIndex_7B7[] = {0};
char stringIndex_7B8[] = {0};
char stringIndex_7B9[] = {0};
char stringIndex_7BA[] = {0};
char stringIndex_7BB[] = {0};
char stringIndex_7BC[] = {0};
char stringIndex_7BD[] = {0};
char stringIndex_7BE[] = {0};
char stringIndex_7BF[] = {0};
char stringIndex_7C0[] = {0};
char stringIndex_7C1[] = {0};
char stringIndex_7C2[] = {0};
char stringIndex_7C3[] = {0};
char stringIndex_7C4[] = {0};
char stringIndex_7C5[] = {0};
char stringIndex_7C6[] = {0};
char stringIndex_7C7[] = {0};
char stringIndex_7C8[] = {0};
char stringIndex_7C9[] = {0};
char stringIndex_7CA[] = {0};
char stringIndex_7CB[] = {0};
char stringIndex_7CC[] = {0};
char stringIndex_7CD[] = {0};
char stringIndex_7CE[] = {0};
char stringIndex_7CF[] = {0};
char stringIndex_7D0[] = {0};
char stringIndex_7D1[] = {0};
char stringIndex_7D2[] = {0};
char stringIndex_7D3[] = {0};
char stringIndex_7D4[] = {0};
char stringIndex_7D5[] = {0};
char stringIndex_7D6[] = {0};
char stringIndex_7D7[] = {0};
char stringIndex_7D8[] = {0};
char stringIndex_7D9[] = {0};
char stringIndex_7DA[] = {0};
char stringIndex_7DB[] = {0};
char stringIndex_7DC[] = {0};
char stringIndex_7DD[] = {0};
char stringIndex_7DE[] = {0};
char stringIndex_7DF[] = {0};
char stringIndex_7E0[] = {0};
char stringIndex_7E1[] = {0};
char stringIndex_7E2[] = {0};
char stringIndex_7E3[] = {0};
char stringIndex_7E4[] = {0};
char stringIndex_7E5[] = {0};
char stringIndex_7E6[] = {0};
char stringIndex_7E7[] = {0};
char stringIndex_7E8[] = {0};
char stringIndex_7E9[] = {0};
char stringIndex_7EA[] = {0};
char stringIndex_7EB[] = {0};
char stringIndex_7EC[] = {0};
char stringIndex_7ED[] = {0};
char stringIndex_7EE[] = {0};
char stringIndex_7EF[] = {0};
char stringIndex_7F0[] = {0};
char stringIndex_7F1[] = {0};
char stringIndex_7F2[] = {0};
char stringIndex_7F3[] = {0};
char stringIndex_7F4[] = {0};
char stringIndex_7F5[] = {0};
char stringIndex_7F6[] = {0};
char stringIndex_7F7[] = {0};
char stringIndex_7F8[] = {0};
char stringIndex_7F9[] = {0};
char stringIndex_7FA[] = {0};
char stringIndex_7FB[] = {0};
char stringIndex_7FC[] = {0};
char stringIndex_7FD[] = {0};
char stringIndex_7FE[] = {0};
char stringIndex_7FF[] = {0};
char stringIndex_800[] = {0};
char stringIndex_801[] = {0};
char stringIndex_802[] = {0};
char stringIndex_803[] = {0};
char stringIndex_804[] = {0};
char stringIndex_805[] = {0};
char stringIndex_806[] = {0};
char stringIndex_807[] = {0};
char stringIndex_808[] = {0};
char stringIndex_809[] = {0};
char stringIndex_80A[] = {0};
char stringIndex_80B[] = {0};
char stringIndex_80C[] = {0};
char stringIndex_80D[] = {0};
char stringIndex_80E[] = {0};
char stringIndex_80F[] = {0};
char stringIndex_810[] = {0};
char stringIndex_811[] = {0};
char stringIndex_812[] = {0};
char stringIndex_813[] = {0};
char stringIndex_814[] = {0};
char stringIndex_815[] = {0};
char stringIndex_816[] = {0};
char stringIndex_817[] = {0};
char stringIndex_818[] = {0};
char stringIndex_819[] = {0};
char stringIndex_81A[] = {0};
char stringIndex_81B[] = {0};
char stringIndex_81C[] = {0};
char stringIndex_81D[] = {0};
char stringIndex_81E[] = {0};
char stringIndex_81F[] = {0};
char stringIndex_820[] = {0};
char stringIndex_821[] = {0};
char stringIndex_822[] = {0};
char stringIndex_823[] = {0};
char stringIndex_824[] = {0};
char stringIndex_825[] = {0};
char stringIndex_826[] = {0};
char stringIndex_827[] = {0};
char stringIndex_828[] = {0};
char stringIndex_829[] = {0};
char stringIndex_82A[] = {0};
char stringIndex_82B[] = {0};
char stringIndex_82C[] = {0};
char stringIndex_82D[] = {0};
char stringIndex_82E[] = {0};
char stringIndex_82F[] = {0};
char stringIndex_830[] = {0};
char stringIndex_831[] = {0};
char stringIndex_832[] = {0};
char stringIndex_833[] = {0};
char stringIndex_834[] = {0};
char stringIndex_835[] = {0};
char stringIndex_836[] = {0};
char stringIndex_837[] = {0};
char stringIndex_838[] = {0};
char stringIndex_839[] = {0};
char stringIndex_83A[] = {0};
char stringIndex_83B[] = {0};
char stringIndex_83C[] = {0};
char stringIndex_83D[] = {0};
char stringIndex_83E[] = {0};
char stringIndex_83F[] = {0};
char stringIndex_840[] = {0};
char stringIndex_841[] = {0};
char stringIndex_842[] = {0};
char stringIndex_843[] = {0};
char stringIndex_844[] = {0};
char stringIndex_845[] = {0};
char stringIndex_846[] = {0};
char stringIndex_847[] = {0};
char stringIndex_848[] = {0};
char stringIndex_849[] = {0};
char stringIndex_84A[] = {0};
char stringIndex_84B[] = {0};
char stringIndex_84C[] = {0};
char stringIndex_84D[] = {0};
char stringIndex_84E[] = {0};
char stringIndex_84F[] = {0};
char stringIndex_850[] = {0};
char stringIndex_851[] = {0};
char stringIndex_852[] = {0};
char stringIndex_853[] = {0};
char stringIndex_854[] = {0};
char stringIndex_855[] = {0};
char stringIndex_856[] = {0};
char stringIndex_857[] = {0};
char stringIndex_858[] = {0};
char stringIndex_859[] = {0};
char stringIndex_85A[] = {0};
char stringIndex_85B[] = {0};
char stringIndex_85C[] = {0};
char stringIndex_85D[] = {0};
char stringIndex_85E[] = {0};
char stringIndex_85F[] = {0};
char stringIndex_860[] = {0};
char stringIndex_861[] = {0};
char stringIndex_862[] = {0};
char stringIndex_863[] = {0};
char stringIndex_864[] = {0};
char stringIndex_865[] = {0};
char stringIndex_866[] = {0};
char stringIndex_867[] = {0};
char stringIndex_868[] = {0};
char stringIndex_869[] = {0};
char stringIndex_86A[] = {0};
char stringIndex_86B[] = {0};
char stringIndex_86C[] = {0};
char stringIndex_86D[] = {0};
char stringIndex_86E[] = {0};
char stringIndex_86F[] = {0};
char stringIndex_870[] = {0};
char stringIndex_871[] = {0};
char stringIndex_872[] = {0};
char stringIndex_873[] = {0};
char stringIndex_874[] = {0};
char stringIndex_875[] = {0};
char stringIndex_876[] = {0};
char stringIndex_877[] = {0};
char stringIndex_878[] = {0};
char stringIndex_879[] = {0};
char stringIndex_87A[] = {0};
char stringIndex_87B[] = {0};
char stringIndex_87C[] = {0};
char stringIndex_87D[] = {0};
char stringIndex_87E[] = {0};
char stringIndex_87F[] = {0};
char stringIndex_880[] = {0};
char stringIndex_881[] = {0};
char stringIndex_882[] = {0};
char stringIndex_883[] = {0};
char stringIndex_884[] = {0};
char stringIndex_885[] = {0};
char stringIndex_886[] = {0};
char stringIndex_887[] = {0};
char stringIndex_888[] = {0};
char stringIndex_889[] = {0};
char stringIndex_88A[] = {0};
char stringIndex_88B[] = {0};
char stringIndex_88C[] = {0};
char stringIndex_88D[] = {0};
char stringIndex_88E[] = {0};
char stringIndex_88F[] = {0};
char stringIndex_890[] = {0};
char stringIndex_891[] = {0};
char stringIndex_892[] = {0};
char stringIndex_893[] = {0};
char stringIndex_894[] = {0};
char stringIndex_895[] = {0};
char stringIndex_896[] = {0};
char stringIndex_897[] = {0};
char stringIndex_898[] = {0};
char stringIndex_899[] = {0};
char stringIndex_89A[] = {0};
char stringIndex_89B[] = {0};
char stringIndex_89C[] = {0};
char stringIndex_89D[] = {0};
char stringIndex_89E[] = {0};
char stringIndex_89F[] = {0};
char stringIndex_8A0[] = {0};
char stringIndex_8A1[] = {0};
char stringIndex_8A2[] = {0};
char stringIndex_8A3[] = {0};
char stringIndex_8A4[] = {0};
char stringIndex_8A5[] = {0};
char stringIndex_8A6[] = {0};
char stringIndex_8A7[] = {0};
char stringIndex_8A8[] = {0};
char stringIndex_8A9[] = {0};
char stringIndex_8AA[] = {0};
char stringIndex_8AB[] = {0};
char stringIndex_8AC[] = {0};
char stringIndex_8AD[] = {0};
char stringIndex_8AE[] = {0};
char stringIndex_8AF[] = {0};
char stringIndex_8B0[] = {0};
char stringIndex_8B1[] = {0};
char stringIndex_8B2[] = {0};
char stringIndex_8B3[] = {0};
char stringIndex_8B4[] = {0};
char stringIndex_8B5[] = {0};
char stringIndex_8B6[] = {0};
char stringIndex_8B7[] = {0};
char stringIndex_8B8[] = {0};
char stringIndex_8B9[] = {0};
char stringIndex_8BA[] = {0};
char stringIndex_8BB[] = {0};
char stringIndex_8BC[] = {0};
char stringIndex_8BD[] = {0};
char stringIndex_8BE[] = {0};
char stringIndex_8BF[] = {0};
char stringIndex_8C0[] = {0};
char stringIndex_8C1[] = {0};
char stringIndex_8C2[] = {0};
char stringIndex_8C3[] = {0};
char stringIndex_8C4[] = {0};
char stringIndex_8C5[] = {0};
char stringIndex_8C6[] = {0};
char stringIndex_8C7[] = {0};
char stringIndex_8C8[] = {0};
char stringIndex_8C9[] = {0};
char stringIndex_8CA[] = {0};
char stringIndex_8CB[] = {0};
char stringIndex_8CC[] = {0};
char stringIndex_8CD[] = {0};
char stringIndex_8CE[] = {0};
char stringIndex_8CF[] = {0};
char stringIndex_8D0[] = {0};
char stringIndex_8D1[] = {0};
char stringIndex_8D2[] = {0};
char stringIndex_8D3[] = {0};
char stringIndex_8D4[] = {0};
char stringIndex_8D5[] = {0};
char stringIndex_8D6[] = {0};
char stringIndex_8D7[] = {0};
char stringIndex_8D8[] = {0};
char stringIndex_8D9[] = {0};
char stringIndex_8DA[] = {0};
char stringIndex_8DB[] = {0};
char stringIndex_8DC[] = {0};
char stringIndex_8DD[] = {0};
char stringIndex_8DE[] = {0};
char stringIndex_8DF[] = {0};
char stringIndex_8E0[] = {0};
char stringIndex_8E1[] = {0};
char stringIndex_8E2[] = {0};
char stringIndex_8E3[] = {0};
char stringIndex_8E4[] = {0};
char stringIndex_8E5[] = {0};
char stringIndex_8E6[] = {0};
char stringIndex_8E7[] = {0};
char stringIndex_8E8[] = {0};
char stringIndex_8E9[] = {0};
char stringIndex_8EA[] = {0};
char stringIndex_8EB[] = {0};
char stringIndex_8EC[] = {0};
char stringIndex_8ED[] = {0};
char stringIndex_8EE[] = {0};
char stringIndex_8EF[] = {0};
char stringIndex_8F0[] = {0};
char stringIndex_8F1[] = {0};
char stringIndex_8F2[] = {0};
char stringIndex_8F3[] = {0};
char stringIndex_8F4[] = {0};
char stringIndex_8F5[] = {0};
char stringIndex_8F6[] = {0};
char stringIndex_8F7[] = {0};
char stringIndex_8F8[] = {0};
char stringIndex_8F9[] = {0};
char stringIndex_8FA[] = {0};
char stringIndex_8FB[] = {0};
char stringIndex_8FC[] = {0};
char stringIndex_8FD[] = {0};
char stringIndex_8FE[] = {0};
char stringIndex_8FF[] = {0};
char stringIndex_900[] = {0};
char stringIndex_901[] = {0};
char stringIndex_902[] = {0};
char stringIndex_903[] = {0};
char stringIndex_904[] = {0};
char stringIndex_905[] = {0};
char stringIndex_906[] = {0};
char stringIndex_907[] = {0};
char stringIndex_908[] = {0};
char stringIndex_909[] = {0};
char stringIndex_90A[] = {0};
char stringIndex_90B[] = {0};
char stringIndex_90C[] = {0};
char stringIndex_90D[] = {0};
char stringIndex_90E[] = {0};
char stringIndex_90F[] = {0};
char stringIndex_910[] = {0};
char stringIndex_911[] = {0};
char stringIndex_912[] = {0};
char stringIndex_913[] = {0};
char stringIndex_914[] = {0};
char stringIndex_915[] = {0};
char stringIndex_916[] = {0};
char stringIndex_917[] = {0};
char stringIndex_918[] = {0};
char stringIndex_919[] = {0};
char stringIndex_91A[] = {0};
char stringIndex_91B[] = {0};
char stringIndex_91C[] = {0};
char stringIndex_91D[] = {0};
char stringIndex_91E[] = {0};
char stringIndex_91F[] = {0};
char stringIndex_920[] = {0};
char stringIndex_921[] = {0};
char stringIndex_922[] = {0};
char stringIndex_923[] = {0};
char stringIndex_924[] = {0};
char stringIndex_925[] = {0};
char stringIndex_926[] = {0};
char stringIndex_927[] = {0};
char stringIndex_928[] = {0};
char stringIndex_929[] = {0};
char stringIndex_92A[] = {0};
char stringIndex_92B[] = {0};
char stringIndex_92C[] = {0};
char stringIndex_92D[] = {0};
char stringIndex_92E[] = {0};
char stringIndex_92F[] = {0};
char stringIndex_930[] = {0};
char stringIndex_931[] = {0};
char stringIndex_932[] = {0};
char stringIndex_933[] = {0};
char stringIndex_934[] = {0};
char stringIndex_935[] = {0};
char stringIndex_936[] = {0};
char stringIndex_937[] = {0};
char stringIndex_938[] = {0};
char stringIndex_939[] = {0};
char stringIndex_93A[] = {0};
char stringIndex_93B[] = {0};
char stringIndex_93C[] = {0};
char stringIndex_93D[] = {0};
char stringIndex_93E[] = {0};
char stringIndex_93F[] = {0};
char stringIndex_940[] = {0};
char stringIndex_941[] = {0};
char stringIndex_942[] = {0};
char stringIndex_943[] = {0};
char stringIndex_944[] = {0};
char stringIndex_945[] = {0};
char stringIndex_946[] = {0};
char stringIndex_947[] = {0};
char stringIndex_948[] = {0};
char stringIndex_949[] = {0};
char stringIndex_94A[] = {0};
char stringIndex_94B[] = {0};
char stringIndex_94C[] = {0};
char stringIndex_94D[] = {0};
char stringIndex_94E[] = {0};
char stringIndex_94F[] = {0};
char stringIndex_950[] = {0};
char stringIndex_951[] = {0};
char stringIndex_952[] = {0};
char stringIndex_953[] = {0};
char stringIndex_954[] = {0};
char stringIndex_955[] = {0};
char stringIndex_956[] = {0};
char stringIndex_957[] = {0};
char stringIndex_958[] = {0};
char stringIndex_959[] = {0};
char stringIndex_95A[] = {0};
char stringIndex_95B[] = {0};
char stringIndex_95C[] = {0};
char stringIndex_95D[] = {0};
char stringIndex_95E[] = {0};
char stringIndex_95F[] = {0};
char stringIndex_960[] = {0};
char stringIndex_961[] = {0};
char stringIndex_962[] = {0};
char stringIndex_963[] = {0};
char stringIndex_964[] = {0};
char stringIndex_965[] = {0};
char stringIndex_966[] = {0};
char stringIndex_967[] = {0};
char stringIndex_968[] = {0};
char stringIndex_969[] = {0};
char stringIndex_96A[] = {0};
char stringIndex_96B[] = {0};
char stringIndex_96C[] = {0};
char stringIndex_96D[] = {0};
char stringIndex_96E[] = {0};
char stringIndex_96F[] = {0};
char stringIndex_970[] = {0};
char stringIndex_971[] = {0};
char stringIndex_972[] = {0};
char stringIndex_973[] = {0};
char stringIndex_974[] = {0};
char stringIndex_975[] = {0};
char stringIndex_976[] = {0};
char stringIndex_977[] = {0};
char stringIndex_978[] = {0};
char stringIndex_979[] = {0};
char stringIndex_97A[] = {0};
char stringIndex_97B[] = {0};
char stringIndex_97C[] = {0};
char stringIndex_97D[] = {0};
char stringIndex_97E[] = {0};
char stringIndex_97F[] = {0};
char stringIndex_980[] = {0};
char stringIndex_981[] = {0};
char stringIndex_982[] = {0};
char stringIndex_983[] = {0};
char stringIndex_984[] = {0};
char stringIndex_985[] = {0};
char stringIndex_986[] = {0};
char stringIndex_987[] = {0};
char stringIndex_988[] = {0};
char stringIndex_989[] = {0};
char stringIndex_98A[] = {0};
char stringIndex_98B[] = {0};
char stringIndex_98C[] = {0};
char stringIndex_98D[] = {0};
char stringIndex_98E[] = {0};
char stringIndex_98F[] = {0};
char stringIndex_990[] = {0};
char stringIndex_991[] = {0};
char stringIndex_992[] = {0};
char stringIndex_993[] = {0};
char stringIndex_994[] = {0};
char stringIndex_995[] = {0};
char stringIndex_996[] = {0};
char stringIndex_997[] = {0};
char stringIndex_998[] = {0};
char stringIndex_999[] = {0};
char stringIndex_99A[] = {0};
char stringIndex_99B[] = {0};
char stringIndex_99C[] = {0};
char stringIndex_99D[] = {0};
char stringIndex_99E[] = {0};
char stringIndex_99F[] = {0};
char stringIndex_9A0[] = {0};
char stringIndex_9A1[] = {0};
char stringIndex_9A2[] = {0};
char stringIndex_9A3[] = {0};
char stringIndex_9A4[] = {0};
char stringIndex_9A5[] = {0};
char stringIndex_9A6[] = {0};
char stringIndex_9A7[] = {0};
char stringIndex_9A8[] = {0};
char stringIndex_9A9[] = {0};
char stringIndex_9AA[] = {0};
char stringIndex_9AB[] = {0};
char stringIndex_9AC[] = {0};
char stringIndex_9AD[] = {0};
char stringIndex_9AE[] = {0};
char stringIndex_9AF[] = {0};
char stringIndex_9B0[] = {0};
char stringIndex_9B1[] = {0};
char stringIndex_9B2[] = {0};
char stringIndex_9B3[] = {0};
char stringIndex_9B4[] = {0};
char stringIndex_9B5[] = {0};
char stringIndex_9B6[] = {0};
char stringIndex_9B7[] = {0};
char stringIndex_9B8[] = {0};
char stringIndex_9B9[] = {0};
char stringIndex_9BA[] = {0};
char stringIndex_9BB[] = {0};
char stringIndex_9BC[] = {0};
char stringIndex_9BD[] = {0};
char stringIndex_9BE[] = {0};
char stringIndex_9BF[] = {0};
char stringIndex_9C0[] = {0};
char stringIndex_9C1[] = {0};
char stringIndex_9C2[] = {0};
char stringIndex_9C3[] = {0};
char stringIndex_9C4[] = {0};
char stringIndex_9C5[] = {0};
char stringIndex_9C6[] = {0};
char stringIndex_9C7[] = {0};
char stringIndex_9C8[] = {0};
char stringIndex_9C9[] = {0};
char stringIndex_9CA[] = {0};
char stringIndex_9CB[] = {0};
char stringIndex_9CC[] = {0};
char stringIndex_9CD[] = {0};
char stringIndex_9CE[] = {0};
char stringIndex_9CF[] = {0};
char stringIndex_9D0[] = {0};
char stringIndex_9D1[] = {0};
char stringIndex_9D2[] = {0};
char stringIndex_9D3[] = {0};
char stringIndex_9D4[] = {0};
char stringIndex_9D5[] = {0};
char stringIndex_9D6[] = {0};
char stringIndex_9D7[] = {0};
char stringIndex_9D8[] = {0};
char stringIndex_9D9[] = {0};
char stringIndex_9DA[] = {0};
char stringIndex_9DB[] = {0};
char stringIndex_9DC[] = {0};
char stringIndex_9DD[] = {0};
char stringIndex_9DE[] = {0};
char stringIndex_9DF[] = {0};
char stringIndex_9E0[] = {0};
char stringIndex_9E1[] = {0};
char stringIndex_9E2[] = {0};
char stringIndex_9E3[] = {0};
char stringIndex_9E4[] = {0};
char stringIndex_9E5[] = {0};
char stringIndex_9E6[] = {0};
char stringIndex_9E7[] = {0};
char stringIndex_9E8[] = {0};
char stringIndex_9E9[] = {0};
char stringIndex_9EA[] = {0};
char stringIndex_9EB[] = {0};
char stringIndex_9EC[] = {0};
char stringIndex_9ED[] = {0};
char stringIndex_9EE[] = {0};
char stringIndex_9EF[] = {0};
char stringIndex_9F0[] = {0};
char stringIndex_9F1[] = {0};
char stringIndex_9F2[] = {0};
char stringIndex_9F3[] = {0};
char stringIndex_9F4[] = {0};
char stringIndex_9F5[] = {0};
char stringIndex_9F6[] = {0};
char stringIndex_9F7[] = {0};
char stringIndex_9F8[] = {0};
char stringIndex_9F9[] = {0};
char stringIndex_9FA[] = {0};
char stringIndex_9FB[] = {0};
char stringIndex_9FC[] = {0};
char stringIndex_9FD[] = {0};
char stringIndex_9FE[] = {0};
char stringIndex_9FF[] = {0};
char stringIndex_A00[] = {0};
char stringIndex_A01[] = {0};
char stringIndex_A02[] = {0};
char stringIndex_A03[] = {0};
char stringIndex_A04[] = {0};
char stringIndex_A05[] = {0};
char stringIndex_A06[] = {0};
char stringIndex_A07[] = {0};
char stringIndex_A08[] = {0};
char stringIndex_A09[] = {0};
char stringIndex_A0A[] = {0};
char stringIndex_A0B[] = {0};
char stringIndex_A0C[] = {0};
char stringIndex_A0D[] = {0};
char stringIndex_A0E[] = {0};
char stringIndex_A0F[] = {0};
char stringIndex_A10[] = {0};
char stringIndex_A11[] = {0};
char stringIndex_A12[] = {0};
char stringIndex_A13[] = {0};
char stringIndex_A14[] = {0};
char stringIndex_A15[] = {0};
char stringIndex_A16[] = {0};
char stringIndex_A17[] = {0};
char stringIndex_A18[] = {0};
char stringIndex_A19[] = {0};
char stringIndex_A1A[] = {0};
char stringIndex_A1B[] = {0};
char stringIndex_A1C[] = {0};
char stringIndex_A1D[] = {0};
char stringIndex_A1E[] = {0};
char stringIndex_A1F[] = {0};
char stringIndex_A20[] = {0};
char stringIndex_A21[] = {0};
char stringIndex_A22[] = {0};
char stringIndex_A23[] = {0};
char stringIndex_A24[] = {0};
char stringIndex_A25[] = {0};
char stringIndex_A26[] = {0};
char stringIndex_A27[] = {0};
char stringIndex_A28[] = {0};
char stringIndex_A29[] = {0};
char stringIndex_A2A[] = {0};
char stringIndex_A2B[] = {0};
char stringIndex_A2C[] = {0};
char stringIndex_A2D[] = {0};
char stringIndex_A2E[] = {0};
char stringIndex_A2F[] = {0};
char stringIndex_A30[] = {0};
char stringIndex_A31[] = {0};
char stringIndex_A32[] = {0};
char stringIndex_A33[] = {0};
char stringIndex_A34[] = {0};
char stringIndex_A35[] = {0};
char stringIndex_A36[] = {0};
char stringIndex_A37[] = {0};
char stringIndex_A38[] = {0};
char stringIndex_A39[] = {0};
char stringIndex_A3A[] = {0};
char stringIndex_A3B[] = {0};
char stringIndex_A3C[] = {0};
char stringIndex_A3D[] = {0};
char stringIndex_A3E[] = {0};
char stringIndex_A3F[] = {0};
char stringIndex_A40[] = {0};
char stringIndex_A41[] = {0};
char stringIndex_A42[] = {0};
char stringIndex_A43[] = {0};
char stringIndex_A44[] = {0};
char stringIndex_A45[] = {0};
char stringIndex_A46[] = {0};
char stringIndex_A47[] = {0};
char stringIndex_A48[] = {0};
char stringIndex_A49[] = {0};
char stringIndex_A4A[] = {0};
char stringIndex_A4B[] = {0};
char stringIndex_A4C[] = {0};
char stringIndex_A4D[] = {0};
char stringIndex_A4E[] = {0};
char stringIndex_A4F[] = {0};
char stringIndex_A50[] = {0};
char stringIndex_A51[] = {0};
char stringIndex_A52[] = {0};
char stringIndex_A53[] = {0};
char stringIndex_A54[] = {0};
char stringIndex_A55[] = {0};
char stringIndex_A56[] = {0};
char stringIndex_A57[] = {0};
char stringIndex_A58[] = {0};
char stringIndex_A59[] = {0};
char stringIndex_A5A[] = {0};
char stringIndex_A5B[] = {0};
char stringIndex_A5C[] = {0};
char stringIndex_A5D[] = {0};
char stringIndex_A5E[] = {0};
char stringIndex_A5F[] = {0};
char stringIndex_A60[] = {0};
char stringIndex_A61[] = {0};
char stringIndex_A62[] = {0};
char stringIndex_A63[] = {0};
char stringIndex_A64[] = {0};
char stringIndex_A65[] = {0};
char stringIndex_A66[] = {0};
char stringIndex_A67[] = {0};
char stringIndex_A68[] = {0};
char stringIndex_A69[] = {0};
char stringIndex_A6A[] = {0};
char stringIndex_A6B[] = {0};
char stringIndex_A6C[] = {0};
char stringIndex_A6D[] = {0};
char stringIndex_A6E[] = {0};
char stringIndex_A6F[] = {0};
char stringIndex_A70[] = {0};
char stringIndex_A71[] = {0};
char stringIndex_A72[] = {0};
char stringIndex_A73[] = {0};
char stringIndex_A74[] = {0};
char stringIndex_A75[] = {0};
char stringIndex_A76[] = {0};
char stringIndex_A77[] = {0};
char stringIndex_A78[] = {0};
char stringIndex_A79[] = {0};
char stringIndex_A7A[] = {0};
char stringIndex_A7B[] = {0};
char stringIndex_A7C[] = {0};
char stringIndex_A7D[] = {0};
char stringIndex_A7E[] = {0};
char stringIndex_A7F[] = {0};
char stringIndex_A80[] = {0};
char stringIndex_A81[] = {0};
char stringIndex_A82[] = {0};
char stringIndex_A83[] = {0};
char stringIndex_A84[] = {0};
char stringIndex_A85[] = {0};
char stringIndex_A86[] = {0};
char stringIndex_A87[] = {0};
char stringIndex_A88[] = {0};
char stringIndex_A89[] = {0};
char stringIndex_A8A[] = {0};
char stringIndex_A8B[] = {0};
char stringIndex_A8C[] = {0};
char stringIndex_A8D[] = {0};
char stringIndex_A8E[] = {0};
char stringIndex_A8F[] = {0};
char stringIndex_A90[] = {0};
char stringIndex_A91[] = {0};
char stringIndex_A92[] = {0};
char stringIndex_A93[] = {0};
char stringIndex_A94[] = {0};
char stringIndex_A95[] = {0};
char stringIndex_A96[] = {0};
char stringIndex_A97[] = {0};
char stringIndex_A98[] = {0};
char stringIndex_A99[] = {0};
char stringIndex_A9A[] = {0};
char stringIndex_A9B[] = {0};
char stringIndex_A9C[] = {0};
char stringIndex_A9D[] = {0};
char stringIndex_A9E[] = {0};
char stringIndex_A9F[] = {0};
char stringIndex_AA0[] = {0};
char stringIndex_AA1[] = {0};
char stringIndex_AA2[] = {0};
char stringIndex_AA3[] = {0};
char stringIndex_AA4[] = {0};
char stringIndex_AA5[] = {0};
char stringIndex_AA6[] = {0};
char stringIndex_AA7[] = {0};
char stringIndex_AA8[] = {0};
char stringIndex_AA9[] = {0};
char stringIndex_AAA[] = {0};
char stringIndex_AAB[] = {0};
char stringIndex_AAC[] = {0};
char stringIndex_AAD[] = {0};
char stringIndex_AAE[] = {0};
char stringIndex_AAF[] = {0};
char stringIndex_AB0[] = {0};
char stringIndex_AB1[] = {0};
char stringIndex_AB2[] = {0};
char stringIndex_AB3[] = {0};
char stringIndex_AB4[] = {0};
char stringIndex_AB5[] = {0};
char stringIndex_AB6[] = {0};
char stringIndex_AB7[] = {0};
char stringIndex_AB8[] = {0};
char stringIndex_AB9[] = {0};
char stringIndex_ABA[] = {0};
char stringIndex_ABB[] = {0};
char stringIndex_ABC[] = {0};
char stringIndex_ABD[] = {0};
char stringIndex_ABE[] = {0};
char stringIndex_ABF[] = {0};
char stringIndex_AC0[] = {0};
char stringIndex_AC1[] = {0};
char stringIndex_AC2[] = {0};
char stringIndex_AC3[] = {0};
char stringIndex_AC4[] = {0};
char stringIndex_AC5[] = {0};
char stringIndex_AC6[] = {0};
char stringIndex_AC7[] = {0};
char stringIndex_AC8[] = {0};
char stringIndex_AC9[] = {0};
char stringIndex_ACA[] = {0};
char stringIndex_ACB[] = {0};
char stringIndex_ACC[] = {0};
char stringIndex_ACD[] = {0};
char stringIndex_ACE[] = {0};
char stringIndex_ACF[] = {0};
char stringIndex_AD0[] = {0};
char stringIndex_AD1[] = {0};
char stringIndex_AD2[] = {0};
char stringIndex_AD3[] = {0};
char stringIndex_AD4[] = {0};
char stringIndex_AD5[] = {0};
char stringIndex_AD6[] = {0};
char stringIndex_AD7[] = {0};
char stringIndex_AD8[] = {0};
char stringIndex_AD9[] = {0};
char stringIndex_ADA[] = {0};
char stringIndex_ADB[] = {0};
char stringIndex_ADC[] = {0};
char stringIndex_ADD[] = {0};
char stringIndex_ADE[] = {0};
char stringIndex_ADF[] = {0};
char stringIndex_AE0[] = {0};
char stringIndex_AE1[] = {0};
char stringIndex_AE2[] = {0};
char stringIndex_AE3[] = {0};
char stringIndex_AE4[] = {0};
char stringIndex_AE5[] = {0};
char stringIndex_AE6[] = {0};
char stringIndex_AE7[] = {0};
char stringIndex_AE8[] = {0};
char stringIndex_AE9[] = {0};
char stringIndex_AEA[] = {0};
char stringIndex_AEB[] = {0};
char stringIndex_AEC[] = {0};
char stringIndex_AED[] = {0};
char stringIndex_AEE[] = {0};
char stringIndex_AEF[] = {0};
char stringIndex_AF0[] = {0};
char stringIndex_AF1[] = {0};
char stringIndex_AF2[] = {0};
char stringIndex_AF3[] = {0};
char stringIndex_AF4[] = {0};
char stringIndex_AF5[] = {0};
char stringIndex_AF6[] = {0};
char stringIndex_AF7[] = {0};
char stringIndex_AF8[] = {0};
char stringIndex_AF9[] = {0};
char stringIndex_AFA[] = {0};
char stringIndex_AFB[] = {0};
char stringIndex_AFC[] = {0};
char stringIndex_AFD[] = {0};
char stringIndex_AFE[] = {0};
char stringIndex_AFF[] = {0};
char stringIndex_B00[] = {0};
char stringIndex_B01[] = {0};
char stringIndex_B02[] = {0};
char stringIndex_B03[] = {0};
char stringIndex_B04[] = {0};
char stringIndex_B05[] = {0};
char stringIndex_B06[] = {0};
char stringIndex_B07[] = {0};
char stringIndex_B08[] = {0};
char stringIndex_B09[] = {0};
char stringIndex_B0A[] = {0};
char stringIndex_B0B[] = {0};
char stringIndex_B0C[] = {0};
char stringIndex_B0D[] = {0};
char stringIndex_B0E[] = {0};
char stringIndex_B0F[] = {0};
char stringIndex_B10[] = {0};
char stringIndex_B11[] = {0};
char stringIndex_B12[] = {0};
char stringIndex_B13[] = {0};
char stringIndex_B14[] = {0};
char stringIndex_B15[] = {0};
char stringIndex_B16[] = {0};
char stringIndex_B17[] = {0};
char stringIndex_B18[] = {0};
char stringIndex_B19[] = {0};
char stringIndex_B1A[] = {0};
char stringIndex_B1B[] = {0};
char stringIndex_B1C[] = {0};
char stringIndex_B1D[] = {0};
char stringIndex_B1E[] = {0};
char stringIndex_B1F[] = {0};
char stringIndex_B20[] = {0};
char stringIndex_B21[] = {0};
char stringIndex_B22[] = {0};
char stringIndex_B23[] = {0};
char stringIndex_B24[] = {0};
char stringIndex_B25[] = {0};
char stringIndex_B26[] = {0};
char stringIndex_B27[] = {0};
char stringIndex_B28[] = {0};
char stringIndex_B29[] = {0};
char stringIndex_B2A[] = {0};
char stringIndex_B2B[] = {0};
char stringIndex_B2C[] = {0};
char stringIndex_B2D[] = {0};
char stringIndex_B2E[] = {0};
char stringIndex_B2F[] = {0};
char stringIndex_B30[] = {0};
char stringIndex_B31[] = {0};
char stringIndex_B32[] = {0};
char stringIndex_B33[] = {0};
char stringIndex_B34[] = {0};
char stringIndex_B35[] = {0};
char stringIndex_B36[] = {0};
char stringIndex_B37[] = {0};
char stringIndex_B38[] = {0};
char stringIndex_B39[] = {0};
char stringIndex_B3A[] = {0};
char stringIndex_B3B[] = {0};
char stringIndex_B3C[] = {0};
char stringIndex_B3D[] = {0};
char stringIndex_B3E[] = {0};
char stringIndex_B3F[] = {0};
char stringIndex_B40[] = {0};
char stringIndex_B41[] = {0};
char stringIndex_B42[] = {0};
char stringIndex_B43[] = {0};
char stringIndex_B44[] = {0};
char stringIndex_B45[] = {0};
char stringIndex_B46[] = {0};
char stringIndex_B47[] = {0};
char stringIndex_B48[] = {0};
char stringIndex_B49[] = {0};
char stringIndex_B4A[] = {0};
char stringIndex_B4B[] = {0};
char stringIndex_B4C[] = {0};
char stringIndex_B4D[] = {0};
char stringIndex_B4E[] = {0};
char stringIndex_B4F[] = {0};
char stringIndex_B50[] = {0};
char stringIndex_B51[] = {0};
char stringIndex_B52[] = {0};
char stringIndex_B53[] = {0};
char stringIndex_B54[] = {0};
char stringIndex_B55[] = {0};
char stringIndex_B56[] = {0};
char stringIndex_B57[] = {0};
char stringIndex_B58[] = {0};
char stringIndex_B59[] = {0};
char stringIndex_B5A[] = {0};
char stringIndex_B5B[] = {0};
char stringIndex_B5C[] = {0};
char stringIndex_B5D[] = {0};
char stringIndex_B5E[] = {0};
char stringIndex_B5F[] = {0};
char stringIndex_B60[] = {0};
char stringIndex_B61[] = {0};
char stringIndex_B62[] = {0};
char stringIndex_B63[] = {0};
char stringIndex_B64[] = {0};
char stringIndex_B65[] = {0};
char stringIndex_B66[] = {0};
char stringIndex_B67[] = {0};
char stringIndex_B68[] = {0};
char stringIndex_B69[] = {0};
char stringIndex_B6A[] = {0};
char stringIndex_B6B[] = {0};
char stringIndex_B6C[] = {0};
char stringIndex_B6D[] = {0};
char stringIndex_B6E[] = {0};
char stringIndex_B6F[] = {0};
char stringIndex_B70[] = {0};
char stringIndex_B71[] = {0};
char stringIndex_B72[] = {0};
char stringIndex_B73[] = {0};
char stringIndex_B74[] = {0};
char stringIndex_B75[] = {0};
char stringIndex_B76[] = {0};
char stringIndex_B77[] = {0};
char stringIndex_B78[] = {0};
char stringIndex_B79[] = {0};
char stringIndex_B7A[] = {0};
char stringIndex_B7B[] = {0};
char stringIndex_B7C[] = {0};
char stringIndex_B7D[] = {0};
char stringIndex_B7E[] = {0};
char stringIndex_B7F[] = {0};
char stringIndex_B80[] = {0};
char stringIndex_B81[] = {0};
char stringIndex_B82[] = {0};
char stringIndex_B83[] = {0};
char stringIndex_B84[] = {0};
char stringIndex_B85[] = {0};
char stringIndex_B86[] = {0};
char stringIndex_B87[] = {0};
char stringIndex_B88[] = {0};
char stringIndex_B89[] = {0};
char stringIndex_B8A[] = {0};
char stringIndex_B8B[] = {0};
char stringIndex_B8C[] = {0};
char stringIndex_B8D[] = {0};
char stringIndex_B8E[] = {0};
char stringIndex_B8F[] = {0};
char stringIndex_B90[] = {0};
char stringIndex_B91[] = {0};
char stringIndex_B92[] = {0};
char stringIndex_B93[] = {0};
char stringIndex_B94[] = {0};
char stringIndex_B95[] = {0};
char stringIndex_B96[] = {0};
char stringIndex_B97[] = {0};
char stringIndex_B98[] = {0};
char stringIndex_B99[] = {0};
char stringIndex_B9A[] = {0};
char stringIndex_B9B[] = {0};
char stringIndex_B9C[] = {0};
char stringIndex_B9D[] = {0};
char stringIndex_B9E[] = {0};
char stringIndex_B9F[] = {0};
char stringIndex_BA0[] = {0};
char stringIndex_BA1[] = {0};
char stringIndex_BA2[] = {0};
char stringIndex_BA3[] = {0};
char stringIndex_BA4[] = {0};
char stringIndex_BA5[] = {0};
char stringIndex_BA6[] = {0};
char stringIndex_BA7[] = {0};
char stringIndex_BA8[] = {0};
char stringIndex_BA9[] = {0};
char stringIndex_BAA[] = {0};
char stringIndex_BAB[] = {0};
char stringIndex_BAC[] = {0};
char stringIndex_BAD[] = {0};
char stringIndex_BAE[] = {0};
char stringIndex_BAF[] = {0};
char stringIndex_BB0[] = {0};
char stringIndex_BB1[] = {0};
char stringIndex_BB2[] = {0};
char stringIndex_BB3[] = {0};
char stringIndex_BB4[] = {0};
char stringIndex_BB5[] = {0};
char stringIndex_BB6[] = {0};
char stringIndex_BB7[] = {0};

char* stringPointers[] = {
stringIndex_00,stringIndex_01,stringIndex_02,stringIndex_03,stringIndex_04,
stringIndex_05,stringIndex_06,stringIndex_07,stringIndex_08,stringIndex_09,
stringIndex_0A,stringIndex_0B,stringIndex_0C,stringIndex_0D,stringIndex_0E,
stringIndex_0F,stringIndex_10,stringIndex_11,stringIndex_12,stringIndex_13,
stringIndex_14,stringIndex_15,stringIndex_16,stringIndex_17,stringIndex_18,
stringIndex_19,stringIndex_1A,stringIndex_1B,stringIndex_1C,stringIndex_1D,
stringIndex_1E,stringIndex_1F,stringIndex_20,stringIndex_21,stringIndex_22,
stringIndex_23,stringIndex_24,stringIndex_25,stringIndex_26,stringIndex_27,
stringIndex_28,stringIndex_29,stringIndex_2A,stringIndex_2B,stringIndex_2C,
stringIndex_2D,stringIndex_2E,stringIndex_2F,stringIndex_30,stringIndex_31,
stringIndex_32,stringIndex_33,stringIndex_34,stringIndex_35,stringIndex_36,
stringIndex_37,stringIndex_38,stringIndex_39,stringIndex_3A,stringIndex_3B,
stringIndex_3C,stringIndex_3D,stringIndex_3E,stringIndex_3F,stringIndex_40,
stringIndex_41,stringIndex_42,stringIndex_43,stringIndex_44,stringIndex_45,
stringIndex_46,stringIndex_47,stringIndex_48,stringIndex_49,stringIndex_4A,
stringIndex_4B,stringIndex_4C,stringIndex_4D,stringIndex_4E,stringIndex_4F,
stringIndex_50,stringIndex_51,stringIndex_52,stringIndex_53,stringIndex_54,
stringIndex_55,stringIndex_56,stringIndex_57,stringIndex_58,stringIndex_59,
stringIndex_5A,stringIndex_5B,stringIndex_5C,stringIndex_5D,stringIndex_5E,
stringIndex_5F,stringIndex_60,stringIndex_61,stringIndex_62,stringIndex_63,
stringIndex_64,stringIndex_65,stringIndex_66,stringIndex_67,stringIndex_68,
stringIndex_69,stringIndex_6A,stringIndex_6B,stringIndex_6C,stringIndex_6D,
stringIndex_6E,stringIndex_6F,stringIndex_70,stringIndex_71,stringIndex_72,
stringIndex_73,stringIndex_74,stringIndex_75,stringIndex_76,stringIndex_77,
stringIndex_78,stringIndex_79,stringIndex_7A,stringIndex_7B,stringIndex_7C,
stringIndex_7D,stringIndex_7E,stringIndex_7F,stringIndex_80,stringIndex_81,
stringIndex_82,stringIndex_83,stringIndex_84,stringIndex_85,stringIndex_86,
stringIndex_87,stringIndex_88,stringIndex_89,stringIndex_8A,stringIndex_8B,
stringIndex_8C,stringIndex_8D,stringIndex_8E,stringIndex_8F,stringIndex_90,
stringIndex_91,stringIndex_92,stringIndex_93,stringIndex_94,stringIndex_95,
stringIndex_96,stringIndex_97,stringIndex_98,stringIndex_99,stringIndex_9A,
stringIndex_9B,stringIndex_9C,stringIndex_9D,stringIndex_9E,stringIndex_9F,
stringIndex_A0,stringIndex_A1,stringIndex_A2,stringIndex_A3,stringIndex_A4,
stringIndex_A5,stringIndex_A6,stringIndex_A7,stringIndex_A8,stringIndex_A9,
stringIndex_AA,stringIndex_AB,stringIndex_AC,stringIndex_AD,stringIndex_AE,
stringIndex_AF,stringIndex_B0,stringIndex_B1,stringIndex_B2,stringIndex_B3,
stringIndex_B4,stringIndex_B5,stringIndex_B6,stringIndex_B7,stringIndex_B8,
stringIndex_B9,stringIndex_BA,stringIndex_BB,stringIndex_BC,stringIndex_BD,
stringIndex_BE,stringIndex_BF,stringIndex_C0,stringIndex_C1,stringIndex_C2,
stringIndex_C3,stringIndex_C4,stringIndex_C5,stringIndex_C6,stringIndex_C7,
stringIndex_C8,stringIndex_C9,stringIndex_CA,stringIndex_CB,stringIndex_CC,
stringIndex_CD,stringIndex_CE,stringIndex_CF,stringIndex_D0,stringIndex_D1,
stringIndex_D2,stringIndex_D3,stringIndex_D4,stringIndex_D5,stringIndex_D6,
stringIndex_D7,stringIndex_D8,stringIndex_D9,stringIndex_DA,stringIndex_DB,
stringIndex_DC,stringIndex_DD,stringIndex_DE,stringIndex_DF,stringIndex_E0,
stringIndex_E1,stringIndex_E2,stringIndex_E3,stringIndex_E4,stringIndex_E5,
stringIndex_E6,stringIndex_E7,stringIndex_E8,stringIndex_E9,stringIndex_EA,
stringIndex_EB,stringIndex_EC,stringIndex_ED,stringIndex_EE,stringIndex_EF,
stringIndex_F0,stringIndex_F1,stringIndex_F2,stringIndex_F3,stringIndex_F4,
stringIndex_F5,stringIndex_F6,stringIndex_F7,stringIndex_F8,stringIndex_F9,
stringIndex_FA,stringIndex_FB,stringIndex_FC,stringIndex_FD,stringIndex_FE,
stringIndex_FF,stringIndex_100,stringIndex_101,stringIndex_102,stringIndex_103,
stringIndex_104,stringIndex_105,stringIndex_106,stringIndex_107,stringIndex_108,
stringIndex_109,stringIndex_10A,stringIndex_10B,stringIndex_10C,stringIndex_10D,
stringIndex_10E,stringIndex_10F,stringIndex_110,stringIndex_111,stringIndex_112,
stringIndex_113,stringIndex_114,stringIndex_115,stringIndex_116,stringIndex_117,
stringIndex_118,stringIndex_119,stringIndex_11A,stringIndex_11B,stringIndex_11C,
stringIndex_11D,stringIndex_11E,stringIndex_11F,stringIndex_120,stringIndex_121,
stringIndex_122,stringIndex_123,stringIndex_124,stringIndex_125,stringIndex_126,
stringIndex_127,stringIndex_128,stringIndex_129,stringIndex_12A,stringIndex_12B,
stringIndex_12C,stringIndex_12D,stringIndex_12E,stringIndex_12F,stringIndex_130,
stringIndex_131,stringIndex_132,stringIndex_133,stringIndex_134,stringIndex_135,
stringIndex_136,stringIndex_137,stringIndex_138,stringIndex_139,stringIndex_13A,
stringIndex_13B,stringIndex_13C,stringIndex_13D,stringIndex_13E,stringIndex_13F,
stringIndex_140,stringIndex_141,stringIndex_142,stringIndex_143,stringIndex_144,
stringIndex_145,stringIndex_146,stringIndex_147,stringIndex_148,stringIndex_149,
stringIndex_14A,stringIndex_14B,stringIndex_14C,stringIndex_14D,stringIndex_14E,
stringIndex_14F,stringIndex_150,stringIndex_151,stringIndex_152,stringIndex_153,
stringIndex_154,stringIndex_155,stringIndex_156,stringIndex_157,stringIndex_158,
stringIndex_159,stringIndex_15A,stringIndex_15B,stringIndex_15C,stringIndex_15D,
stringIndex_15E,stringIndex_15F,stringIndex_160,stringIndex_161,stringIndex_162,
stringIndex_163,stringIndex_164,stringIndex_165,stringIndex_166,stringIndex_167,
stringIndex_168,stringIndex_169,stringIndex_16A,stringIndex_16B,stringIndex_16C,
stringIndex_16D,stringIndex_16E,stringIndex_16F,stringIndex_170,stringIndex_171,
stringIndex_172,stringIndex_173,stringIndex_174,stringIndex_175,stringIndex_176,
stringIndex_177,stringIndex_178,stringIndex_179,stringIndex_17A,stringIndex_17B,
stringIndex_17C,stringIndex_17D,stringIndex_17E,stringIndex_17F,stringIndex_180,
stringIndex_181,stringIndex_182,stringIndex_183,stringIndex_184,stringIndex_185,
stringIndex_186,stringIndex_187,stringIndex_188,stringIndex_189,stringIndex_18A,
stringIndex_18B,stringIndex_18C,stringIndex_18D,stringIndex_18E,stringIndex_18F,
stringIndex_190,stringIndex_191,stringIndex_192,stringIndex_193,stringIndex_194,
stringIndex_195,stringIndex_196,stringIndex_197,stringIndex_198,stringIndex_199,
stringIndex_19A,stringIndex_19B,stringIndex_19C,stringIndex_19D,stringIndex_19E,
stringIndex_19F,stringIndex_1A0,stringIndex_1A1,stringIndex_1A2,stringIndex_1A3,
stringIndex_1A4,stringIndex_1A5,stringIndex_1A6,stringIndex_1A7,stringIndex_1A8,
stringIndex_1A9,stringIndex_1AA,stringIndex_1AB,stringIndex_1AC,stringIndex_1AD,
stringIndex_1AE,stringIndex_1AF,stringIndex_1B0,stringIndex_1B1,stringIndex_1B2,
stringIndex_1B3,stringIndex_1B4,stringIndex_1B5,stringIndex_1B6,stringIndex_1B7,
stringIndex_1B8,stringIndex_1B9,stringIndex_1BA,stringIndex_1BB,stringIndex_1BC,
stringIndex_1BD,stringIndex_1BE,stringIndex_1BF,stringIndex_1C0,stringIndex_1C1,
stringIndex_1C2,stringIndex_1C3,stringIndex_1C4,stringIndex_1C5,stringIndex_1C6,
stringIndex_1C7,stringIndex_1C8,stringIndex_1C9,stringIndex_1CA,stringIndex_1CB,
stringIndex_1CC,stringIndex_1CD,stringIndex_1CE,stringIndex_1CF,stringIndex_1D0,
stringIndex_1D1,stringIndex_1D2,stringIndex_1D3,stringIndex_1D4,stringIndex_1D5,
stringIndex_1D6,stringIndex_1D7,stringIndex_1D8,stringIndex_1D9,stringIndex_1DA,
stringIndex_1DB,stringIndex_1DC,stringIndex_1DD,stringIndex_1DE,stringIndex_1DF,
stringIndex_1E0,stringIndex_1E1,stringIndex_1E2,stringIndex_1E3,stringIndex_1E4,
stringIndex_1E5,stringIndex_1E6,stringIndex_1E7,stringIndex_1E8,stringIndex_1E9,
stringIndex_1EA,stringIndex_1EB,stringIndex_1EC,stringIndex_1ED,stringIndex_1EE,
stringIndex_1EF,stringIndex_1F0,stringIndex_1F1,stringIndex_1F2,stringIndex_1F3,
stringIndex_1F4,stringIndex_1F5,stringIndex_1F6,stringIndex_1F7,stringIndex_1F8,
stringIndex_1F9,stringIndex_1FA,stringIndex_1FB,stringIndex_1FC,stringIndex_1FD,
stringIndex_1FE,stringIndex_1FF,stringIndex_200,stringIndex_201,stringIndex_202,
stringIndex_203,stringIndex_204,stringIndex_205,stringIndex_206,stringIndex_207,
stringIndex_208,stringIndex_209,stringIndex_20A,stringIndex_20B,stringIndex_20C,
stringIndex_20D,stringIndex_20E,stringIndex_20F,stringIndex_210,stringIndex_211,
stringIndex_212,stringIndex_213,stringIndex_214,stringIndex_215,stringIndex_216,
stringIndex_217,stringIndex_218,stringIndex_219,stringIndex_21A,stringIndex_21B,
stringIndex_21C,stringIndex_21D,stringIndex_21E,stringIndex_21F,stringIndex_220,
stringIndex_221,stringIndex_222,stringIndex_223,stringIndex_224,stringIndex_225,
stringIndex_226,stringIndex_227,stringIndex_228,stringIndex_229,stringIndex_22A,
stringIndex_22B,stringIndex_22C,stringIndex_22D,stringIndex_22E,stringIndex_22F,
stringIndex_230,stringIndex_231,stringIndex_232,stringIndex_233,stringIndex_234,
stringIndex_235,stringIndex_236,stringIndex_237,stringIndex_238,stringIndex_239,
stringIndex_23A,stringIndex_23B,stringIndex_23C,stringIndex_23D,stringIndex_23E,
stringIndex_23F,stringIndex_240,stringIndex_241,stringIndex_242,stringIndex_243,
stringIndex_244,stringIndex_245,stringIndex_246,stringIndex_247,stringIndex_248,
stringIndex_249,stringIndex_24A,stringIndex_24B,stringIndex_24C,stringIndex_24D,
stringIndex_24E,stringIndex_24F,stringIndex_250,stringIndex_251,stringIndex_252,
stringIndex_253,stringIndex_254,stringIndex_255,stringIndex_256,stringIndex_257,
stringIndex_258,stringIndex_259,stringIndex_25A,stringIndex_25B,stringIndex_25C,
stringIndex_25D,stringIndex_25E,stringIndex_25F,stringIndex_260,stringIndex_261,
stringIndex_262,stringIndex_263,stringIndex_264,stringIndex_265,stringIndex_266,
stringIndex_267,stringIndex_268,stringIndex_269,stringIndex_26A,stringIndex_26B,
stringIndex_26C,stringIndex_26D,stringIndex_26E,stringIndex_26F,stringIndex_270,
stringIndex_271,stringIndex_272,stringIndex_273,stringIndex_274,stringIndex_275,
stringIndex_276,stringIndex_277,stringIndex_278,stringIndex_279,stringIndex_27A,
stringIndex_27B,stringIndex_27C,stringIndex_27D,stringIndex_27E,stringIndex_27F,
stringIndex_280,stringIndex_281,stringIndex_282,stringIndex_283,stringIndex_284,
stringIndex_285,stringIndex_286,stringIndex_287,stringIndex_288,stringIndex_289,
stringIndex_28A,stringIndex_28B,stringIndex_28C,stringIndex_28D,stringIndex_28E,
stringIndex_28F,stringIndex_290,stringIndex_291,stringIndex_292,stringIndex_293,
stringIndex_294,stringIndex_295,stringIndex_296,stringIndex_297,stringIndex_298,
stringIndex_299,stringIndex_29A,stringIndex_29B,stringIndex_29C,stringIndex_29D,
stringIndex_29E,stringIndex_29F,stringIndex_2A0,stringIndex_2A1,stringIndex_2A2,
stringIndex_2A3,stringIndex_2A4,stringIndex_2A5,stringIndex_2A6,stringIndex_2A7,
stringIndex_2A8,stringIndex_2A9,stringIndex_2AA,stringIndex_2AB,stringIndex_2AC,
stringIndex_2AD,stringIndex_2AE,stringIndex_2AF,stringIndex_2B0,stringIndex_2B1,
stringIndex_2B2,stringIndex_2B3,stringIndex_2B4,stringIndex_2B5,stringIndex_2B6,
stringIndex_2B7,stringIndex_2B8,stringIndex_2B9,stringIndex_2BA,stringIndex_2BB,
stringIndex_2BC,stringIndex_2BD,stringIndex_2BE,stringIndex_2BF,stringIndex_2C0,
stringIndex_2C1,stringIndex_2C2,stringIndex_2C3,stringIndex_2C4,stringIndex_2C5,
stringIndex_2C6,stringIndex_2C7,stringIndex_2C8,stringIndex_2C9,stringIndex_2CA,
stringIndex_2CB,stringIndex_2CC,stringIndex_2CD,stringIndex_2CE,stringIndex_2CF,
stringIndex_2D0,stringIndex_2D1,stringIndex_2D2,stringIndex_2D3,stringIndex_2D4,
stringIndex_2D5,stringIndex_2D6,stringIndex_2D7,stringIndex_2D8,stringIndex_2D9,
stringIndex_2DA,stringIndex_2DB,stringIndex_2DC,stringIndex_2DD,stringIndex_2DE,
stringIndex_2DF,stringIndex_2E0,stringIndex_2E1,stringIndex_2E2,stringIndex_2E3,
stringIndex_2E4,stringIndex_2E5,stringIndex_2E6,stringIndex_2E7,stringIndex_2E8,
stringIndex_2E9,stringIndex_2EA,stringIndex_2EB,stringIndex_2EC,stringIndex_2ED,
stringIndex_2EE,stringIndex_2EF,stringIndex_2F0,stringIndex_2F1,stringIndex_2F2,
stringIndex_2F3,stringIndex_2F4,stringIndex_2F5,stringIndex_2F6,stringIndex_2F7,
stringIndex_2F8,stringIndex_2F9,stringIndex_2FA,stringIndex_2FB,stringIndex_2FC,
stringIndex_2FD,stringIndex_2FE,stringIndex_2FF,stringIndex_300,stringIndex_301,
stringIndex_302,stringIndex_303,stringIndex_304,stringIndex_305,stringIndex_306,
stringIndex_307,stringIndex_308,stringIndex_309,stringIndex_30A,stringIndex_30B,
stringIndex_30C,stringIndex_30D,stringIndex_30E,stringIndex_30F,stringIndex_310,
stringIndex_311,stringIndex_312,stringIndex_313,stringIndex_314,stringIndex_315,
stringIndex_316,stringIndex_317,stringIndex_318,stringIndex_319,stringIndex_31A,
stringIndex_31B,stringIndex_31C,stringIndex_31D,stringIndex_31E,stringIndex_31F,
stringIndex_320,stringIndex_321,stringIndex_322,stringIndex_323,stringIndex_324,
stringIndex_325,stringIndex_326,stringIndex_327,stringIndex_328,stringIndex_329,
stringIndex_32A,stringIndex_32B,stringIndex_32C,stringIndex_32D,stringIndex_32E,
stringIndex_32F,stringIndex_330,stringIndex_331,stringIndex_332,stringIndex_333,
stringIndex_334,stringIndex_335,stringIndex_336,stringIndex_337,stringIndex_338,
stringIndex_339,stringIndex_33A,stringIndex_33B,stringIndex_33C,stringIndex_33D,
stringIndex_33E,stringIndex_33F,stringIndex_340,stringIndex_341,stringIndex_342,
stringIndex_343,stringIndex_344,stringIndex_345,stringIndex_346,stringIndex_347,
stringIndex_348,stringIndex_349,stringIndex_34A,stringIndex_34B,stringIndex_34C,
stringIndex_34D,stringIndex_34E,stringIndex_34F,stringIndex_350,stringIndex_351,
stringIndex_352,stringIndex_353,stringIndex_354,stringIndex_355,stringIndex_356,
stringIndex_357,stringIndex_358,stringIndex_359,stringIndex_35A,stringIndex_35B,
stringIndex_35C,stringIndex_35D,stringIndex_35E,stringIndex_35F,stringIndex_360,
stringIndex_361,stringIndex_362,stringIndex_363,stringIndex_364,stringIndex_365,
stringIndex_366,stringIndex_367,stringIndex_368,stringIndex_369,stringIndex_36A,
stringIndex_36B,stringIndex_36C,stringIndex_36D,stringIndex_36E,stringIndex_36F,
stringIndex_370,stringIndex_371,stringIndex_372,stringIndex_373,stringIndex_374,
stringIndex_375,stringIndex_376,stringIndex_377,stringIndex_378,stringIndex_379,
stringIndex_37A,stringIndex_37B,stringIndex_37C,stringIndex_37D,stringIndex_37E,
stringIndex_37F,stringIndex_380,stringIndex_381,stringIndex_382,stringIndex_383,
stringIndex_384,stringIndex_385,stringIndex_386,stringIndex_387,stringIndex_388,
stringIndex_389,stringIndex_38A,stringIndex_38B,stringIndex_38C,stringIndex_38D,
stringIndex_38E,stringIndex_38F,stringIndex_390,stringIndex_391,stringIndex_392,
stringIndex_393,stringIndex_394,stringIndex_395,stringIndex_396,stringIndex_397,
stringIndex_398,stringIndex_399,stringIndex_39A,stringIndex_39B,stringIndex_39C,
stringIndex_39D,stringIndex_39E,stringIndex_39F,stringIndex_3A0,stringIndex_3A1,
stringIndex_3A2,stringIndex_3A3,stringIndex_3A4,stringIndex_3A5,stringIndex_3A6,
stringIndex_3A7,stringIndex_3A8,stringIndex_3A9,stringIndex_3AA,stringIndex_3AB,
stringIndex_3AC,stringIndex_3AD,stringIndex_3AE,stringIndex_3AF,stringIndex_3B0,
stringIndex_3B1,stringIndex_3B2,stringIndex_3B3,stringIndex_3B4,stringIndex_3B5,
stringIndex_3B6,stringIndex_3B7,stringIndex_3B8,stringIndex_3B9,stringIndex_3BA,
stringIndex_3BB,stringIndex_3BC,stringIndex_3BD,stringIndex_3BE,stringIndex_3BF,
stringIndex_3C0,stringIndex_3C1,stringIndex_3C2,stringIndex_3C3,stringIndex_3C4,
stringIndex_3C5,stringIndex_3C6,stringIndex_3C7,stringIndex_3C8,stringIndex_3C9,
stringIndex_3CA,stringIndex_3CB,stringIndex_3CC,stringIndex_3CD,stringIndex_3CE,
stringIndex_3CF,stringIndex_3D0,stringIndex_3D1,stringIndex_3D2,stringIndex_3D3,
stringIndex_3D4,stringIndex_3D5,stringIndex_3D6,stringIndex_3D7,stringIndex_3D8,
stringIndex_3D9,stringIndex_3DA,stringIndex_3DB,stringIndex_3DC,stringIndex_3DD,
stringIndex_3DE,stringIndex_3DF,stringIndex_3E0,stringIndex_3E1,stringIndex_3E2,
stringIndex_3E3,stringIndex_3E4,stringIndex_3E5,stringIndex_3E6,stringIndex_3E7,
stringIndex_3E8,stringIndex_3E9,stringIndex_3EA,stringIndex_3EB,stringIndex_3EC,
stringIndex_3ED,stringIndex_3EE,stringIndex_3EF,stringIndex_3F0,stringIndex_3F1,
stringIndex_3F2,stringIndex_3F3,stringIndex_3F4,stringIndex_3F5,stringIndex_3F6,
stringIndex_3F7,stringIndex_3F8,stringIndex_3F9,stringIndex_3FA,stringIndex_3FB,
stringIndex_3FC,stringIndex_3FD,stringIndex_3FE,stringIndex_3FF,stringIndex_400,
stringIndex_401,stringIndex_402,stringIndex_403,stringIndex_404,stringIndex_405,
stringIndex_406,stringIndex_407,stringIndex_408,stringIndex_409,stringIndex_40A,
stringIndex_40B,stringIndex_40C,stringIndex_40D,stringIndex_40E,stringIndex_40F,
stringIndex_410,stringIndex_411,stringIndex_412,stringIndex_413,stringIndex_414,
stringIndex_415,stringIndex_416,stringIndex_417,stringIndex_418,stringIndex_419,
stringIndex_41A,stringIndex_41B,stringIndex_41C,stringIndex_41D,stringIndex_41E,
stringIndex_41F,stringIndex_420,stringIndex_421,stringIndex_422,stringIndex_423,
stringIndex_424,stringIndex_425,stringIndex_426,stringIndex_427,stringIndex_428,
stringIndex_429,stringIndex_42A,stringIndex_42B,stringIndex_42C,stringIndex_42D,
stringIndex_42E,stringIndex_42F,stringIndex_430,stringIndex_431,stringIndex_432,
stringIndex_433,stringIndex_434,stringIndex_435,stringIndex_436,stringIndex_437,
stringIndex_438,stringIndex_439,stringIndex_43A,stringIndex_43B,stringIndex_43C,
stringIndex_43D,stringIndex_43E,stringIndex_43F,stringIndex_440,stringIndex_441,
stringIndex_442,stringIndex_443,stringIndex_444,stringIndex_445,stringIndex_446,
stringIndex_447,stringIndex_448,stringIndex_449,stringIndex_44A,stringIndex_44B,
stringIndex_44C,stringIndex_44D,stringIndex_44E,stringIndex_44F,stringIndex_450,
stringIndex_451,stringIndex_452,stringIndex_453,stringIndex_454,stringIndex_455,
stringIndex_456,stringIndex_457,stringIndex_458,stringIndex_459,stringIndex_45A,
stringIndex_45B,stringIndex_45C,stringIndex_45D,stringIndex_45E,stringIndex_45F,
stringIndex_460,stringIndex_461,stringIndex_462,stringIndex_463,stringIndex_464,
stringIndex_465,stringIndex_466,stringIndex_467,stringIndex_468,stringIndex_469,
stringIndex_46A,stringIndex_46B,stringIndex_46C,stringIndex_46D,stringIndex_46E,
stringIndex_46F,stringIndex_470,stringIndex_471,stringIndex_472,stringIndex_473,
stringIndex_474,stringIndex_475,stringIndex_476,stringIndex_477,stringIndex_478,
stringIndex_479,stringIndex_47A,stringIndex_47B,stringIndex_47C,stringIndex_47D,
stringIndex_47E,stringIndex_47F,stringIndex_480,stringIndex_481,stringIndex_482,
stringIndex_483,stringIndex_484,stringIndex_485,stringIndex_486,stringIndex_487,
stringIndex_488,stringIndex_489,stringIndex_48A,stringIndex_48B,stringIndex_48C,
stringIndex_48D,stringIndex_48E,stringIndex_48F,stringIndex_490,stringIndex_491,
stringIndex_492,stringIndex_493,stringIndex_494,stringIndex_495,stringIndex_496,
stringIndex_497,stringIndex_498,stringIndex_499,stringIndex_49A,stringIndex_49B,
stringIndex_49C,stringIndex_49D,stringIndex_49E,stringIndex_49F,stringIndex_4A0,
stringIndex_4A1,stringIndex_4A2,stringIndex_4A3,stringIndex_4A4,stringIndex_4A5,
stringIndex_4A6,stringIndex_4A7,stringIndex_4A8,stringIndex_4A9,stringIndex_4AA,
stringIndex_4AB,stringIndex_4AC,stringIndex_4AD,stringIndex_4AE,stringIndex_4AF,
stringIndex_4B0,stringIndex_4B1,stringIndex_4B2,stringIndex_4B3,stringIndex_4B4,
stringIndex_4B5,stringIndex_4B6,stringIndex_4B7,stringIndex_4B8,stringIndex_4B9,
stringIndex_4BA,stringIndex_4BB,stringIndex_4BC,stringIndex_4BD,stringIndex_4BE,
stringIndex_4BF,stringIndex_4C0,stringIndex_4C1,stringIndex_4C2,stringIndex_4C3,
stringIndex_4C4,stringIndex_4C5,stringIndex_4C6,stringIndex_4C7,stringIndex_4C8,
stringIndex_4C9,stringIndex_4CA,stringIndex_4CB,stringIndex_4CC,stringIndex_4CD,
stringIndex_4CE,stringIndex_4CF,stringIndex_4D0,stringIndex_4D1,stringIndex_4D2,
stringIndex_4D3,stringIndex_4D4,stringIndex_4D5,stringIndex_4D6,stringIndex_4D7,
stringIndex_4D8,stringIndex_4D9,stringIndex_4DA,stringIndex_4DB,stringIndex_4DC,
stringIndex_4DD,stringIndex_4DE,stringIndex_4DF,stringIndex_4E0,stringIndex_4E1,
stringIndex_4E2,stringIndex_4E3,stringIndex_4E4,stringIndex_4E5,stringIndex_4E6,
stringIndex_4E7,stringIndex_4E8,stringIndex_4E9,stringIndex_4EA,stringIndex_4EB,
stringIndex_4EC,stringIndex_4ED,stringIndex_4EE,stringIndex_4EF,stringIndex_4F0,
stringIndex_4F1,stringIndex_4F2,stringIndex_4F3,stringIndex_4F4,stringIndex_4F5,
stringIndex_4F6,stringIndex_4F7,stringIndex_4F8,stringIndex_4F9,stringIndex_4FA,
stringIndex_4FB,stringIndex_4FC,stringIndex_4FD,stringIndex_4FE,stringIndex_4FF,
stringIndex_500,stringIndex_501,stringIndex_502,stringIndex_503,stringIndex_504,
stringIndex_505,stringIndex_506,stringIndex_507,stringIndex_508,stringIndex_509,
stringIndex_50A,stringIndex_50B,stringIndex_50C,stringIndex_50D,stringIndex_50E,
stringIndex_50F,stringIndex_510,stringIndex_511,stringIndex_512,stringIndex_513,
stringIndex_514,stringIndex_515,stringIndex_516,stringIndex_517,stringIndex_518,
stringIndex_519,stringIndex_51A,stringIndex_51B,stringIndex_51C,stringIndex_51D,
stringIndex_51E,stringIndex_51F,stringIndex_520,stringIndex_521,stringIndex_522,
stringIndex_523,stringIndex_524,stringIndex_525,stringIndex_526,stringIndex_527,
stringIndex_528,stringIndex_529,stringIndex_52A,stringIndex_52B,stringIndex_52C,
stringIndex_52D,stringIndex_52E,stringIndex_52F,stringIndex_530,stringIndex_531,
stringIndex_532,stringIndex_533,stringIndex_534,stringIndex_535,stringIndex_536,
stringIndex_537,stringIndex_538,stringIndex_539,stringIndex_53A,stringIndex_53B,
stringIndex_53C,stringIndex_53D,stringIndex_53E,stringIndex_53F,stringIndex_540,
stringIndex_541,stringIndex_542,stringIndex_543,stringIndex_544,stringIndex_545,
stringIndex_546,stringIndex_547,stringIndex_548,stringIndex_549,stringIndex_54A,
stringIndex_54B,stringIndex_54C,stringIndex_54D,stringIndex_54E,stringIndex_54F,
stringIndex_550,stringIndex_551,stringIndex_552,stringIndex_553,stringIndex_554,
stringIndex_555,stringIndex_556,stringIndex_557,stringIndex_558,stringIndex_559,
stringIndex_55A,stringIndex_55B,stringIndex_55C,stringIndex_55D,stringIndex_55E,
stringIndex_55F,stringIndex_560,stringIndex_561,stringIndex_562,stringIndex_563,
stringIndex_564,stringIndex_565,stringIndex_566,stringIndex_567,stringIndex_568,
stringIndex_569,stringIndex_56A,stringIndex_56B,stringIndex_56C,stringIndex_56D,
stringIndex_56E,stringIndex_56F,stringIndex_570,stringIndex_571,stringIndex_572,
stringIndex_573,stringIndex_574,stringIndex_575,stringIndex_576,stringIndex_577,
stringIndex_578,stringIndex_579,stringIndex_57A,stringIndex_57B,stringIndex_57C,
stringIndex_57D,stringIndex_57E,stringIndex_57F,stringIndex_580,stringIndex_581,
stringIndex_582,stringIndex_583,stringIndex_584,stringIndex_585,stringIndex_586,
stringIndex_587,stringIndex_588,stringIndex_589,stringIndex_58A,stringIndex_58B,
stringIndex_58C,stringIndex_58D,stringIndex_58E,stringIndex_58F,stringIndex_590,
stringIndex_591,stringIndex_592,stringIndex_593,stringIndex_594,stringIndex_595,
stringIndex_596,stringIndex_597,stringIndex_598,stringIndex_599,stringIndex_59A,
stringIndex_59B,stringIndex_59C,stringIndex_59D,stringIndex_59E,stringIndex_59F,
stringIndex_5A0,stringIndex_5A1,stringIndex_5A2,stringIndex_5A3,stringIndex_5A4,
stringIndex_5A5,stringIndex_5A6,stringIndex_5A7,stringIndex_5A8,stringIndex_5A9,
stringIndex_5AA,stringIndex_5AB,stringIndex_5AC,stringIndex_5AD,stringIndex_5AE,
stringIndex_5AF,stringIndex_5B0,stringIndex_5B1,stringIndex_5B2,stringIndex_5B3,
stringIndex_5B4,stringIndex_5B5,stringIndex_5B6,stringIndex_5B7,stringIndex_5B8,
stringIndex_5B9,stringIndex_5BA,stringIndex_5BB,stringIndex_5BC,stringIndex_5BD,
stringIndex_5BE,stringIndex_5BF,stringIndex_5C0,stringIndex_5C1,stringIndex_5C2,
stringIndex_5C3,stringIndex_5C4,stringIndex_5C5,stringIndex_5C6,stringIndex_5C7,
stringIndex_5C8,stringIndex_5C9,stringIndex_5CA,stringIndex_5CB,stringIndex_5CC,
stringIndex_5CD,stringIndex_5CE,stringIndex_5CF,stringIndex_5D0,stringIndex_5D1,
stringIndex_5D2,stringIndex_5D3,stringIndex_5D4,stringIndex_5D5,stringIndex_5D6,
stringIndex_5D7,stringIndex_5D8,stringIndex_5D9,stringIndex_5DA,stringIndex_5DB,
stringIndex_5DC,stringIndex_5DD,stringIndex_5DE,stringIndex_5DF,stringIndex_5E0,
stringIndex_5E1,stringIndex_5E2,stringIndex_5E3,stringIndex_5E4,stringIndex_5E5,
stringIndex_5E6,stringIndex_5E7,stringIndex_5E8,stringIndex_5E9,stringIndex_5EA,
stringIndex_5EB,stringIndex_5EC,stringIndex_5ED,stringIndex_5EE,stringIndex_5EF,
stringIndex_5F0,stringIndex_5F1,stringIndex_5F2,stringIndex_5F3,stringIndex_5F4,
stringIndex_5F5,stringIndex_5F6,stringIndex_5F7,stringIndex_5F8,stringIndex_5F9,
stringIndex_5FA,stringIndex_5FB,stringIndex_5FC,stringIndex_5FD,stringIndex_5FE,
stringIndex_5FF,stringIndex_600,stringIndex_601,stringIndex_602,stringIndex_603,
stringIndex_604,stringIndex_605,stringIndex_606,stringIndex_607,stringIndex_608,
stringIndex_609,stringIndex_60A,stringIndex_60B,stringIndex_60C,stringIndex_60D,
stringIndex_60E,stringIndex_60F,stringIndex_610,stringIndex_611,stringIndex_612,
stringIndex_613,stringIndex_614,stringIndex_615,stringIndex_616,stringIndex_617,
stringIndex_618,stringIndex_619,stringIndex_61A,stringIndex_61B,stringIndex_61C,
stringIndex_61D,stringIndex_61E,stringIndex_61F,stringIndex_620,stringIndex_621,
stringIndex_622,stringIndex_623,stringIndex_624,stringIndex_625,stringIndex_626,
stringIndex_627,stringIndex_628,stringIndex_629,stringIndex_62A,stringIndex_62B,
stringIndex_62C,stringIndex_62D,stringIndex_62E,stringIndex_62F,stringIndex_630,
stringIndex_631,stringIndex_632,stringIndex_633,stringIndex_634,stringIndex_635,
stringIndex_636,stringIndex_637,stringIndex_638,stringIndex_639,stringIndex_63A,
stringIndex_63B,stringIndex_63C,stringIndex_63D,stringIndex_63E,stringIndex_63F,
stringIndex_640,stringIndex_641,stringIndex_642,stringIndex_643,stringIndex_644,
stringIndex_645,stringIndex_646,stringIndex_647,stringIndex_648,stringIndex_649,
stringIndex_64A,stringIndex_64B,stringIndex_64C,stringIndex_64D,stringIndex_64E,
stringIndex_64F,stringIndex_650,stringIndex_651,stringIndex_652,stringIndex_653,
stringIndex_654,stringIndex_655,stringIndex_656,stringIndex_657,stringIndex_658,
stringIndex_659,stringIndex_65A,stringIndex_65B,stringIndex_65C,stringIndex_65D,
stringIndex_65E,stringIndex_65F,stringIndex_660,stringIndex_661,stringIndex_662,
stringIndex_663,stringIndex_664,stringIndex_665,stringIndex_666,stringIndex_667,
stringIndex_668,stringIndex_669,stringIndex_66A,stringIndex_66B,stringIndex_66C,
stringIndex_66D,stringIndex_66E,stringIndex_66F,stringIndex_670,stringIndex_671,
stringIndex_672,stringIndex_673,stringIndex_674,stringIndex_675,stringIndex_676,
stringIndex_677,stringIndex_678,stringIndex_679,stringIndex_67A,stringIndex_67B,
stringIndex_67C,stringIndex_67D,stringIndex_67E,stringIndex_67F,stringIndex_680,
stringIndex_681,stringIndex_682,stringIndex_683,stringIndex_684,stringIndex_685,
stringIndex_686,stringIndex_687,stringIndex_688,stringIndex_689,stringIndex_68A,
stringIndex_68B,stringIndex_68C,stringIndex_68D,stringIndex_68E,stringIndex_68F,
stringIndex_690,stringIndex_691,stringIndex_692,stringIndex_693,stringIndex_694,
stringIndex_695,stringIndex_696,stringIndex_697,stringIndex_698,stringIndex_699,
stringIndex_69A,stringIndex_69B,stringIndex_69C,stringIndex_69D,stringIndex_69E,
stringIndex_69F,stringIndex_6A0,stringIndex_6A1,stringIndex_6A2,stringIndex_6A3,
stringIndex_6A4,stringIndex_6A5,stringIndex_6A6,stringIndex_6A7,stringIndex_6A8,
stringIndex_6A9,stringIndex_6AA,stringIndex_6AB,stringIndex_6AC,stringIndex_6AD,
stringIndex_6AE,stringIndex_6AF,stringIndex_6B0,stringIndex_6B1,stringIndex_6B2,
stringIndex_6B3,stringIndex_6B4,stringIndex_6B5,stringIndex_6B6,stringIndex_6B7,
stringIndex_6B8,stringIndex_6B9,stringIndex_6BA,stringIndex_6BB,stringIndex_6BC,
stringIndex_6BD,stringIndex_6BE,stringIndex_6BF,stringIndex_6C0,stringIndex_6C1,
stringIndex_6C2,stringIndex_6C3,stringIndex_6C4,stringIndex_6C5,stringIndex_6C6,
stringIndex_6C7,stringIndex_6C8,stringIndex_6C9,stringIndex_6CA,stringIndex_6CB,
stringIndex_6CC,stringIndex_6CD,stringIndex_6CE,stringIndex_6CF,stringIndex_6D0,
stringIndex_6D1,stringIndex_6D2,stringIndex_6D3,stringIndex_6D4,stringIndex_6D5,
stringIndex_6D6,stringIndex_6D7,stringIndex_6D8,stringIndex_6D9,stringIndex_6DA,
stringIndex_6DB,stringIndex_6DC,stringIndex_6DD,stringIndex_6DE,stringIndex_6DF,
stringIndex_6E0,stringIndex_6E1,stringIndex_6E2,stringIndex_6E3,stringIndex_6E4,
stringIndex_6E5,stringIndex_6E6,stringIndex_6E7,stringIndex_6E8,stringIndex_6E9,
stringIndex_6EA,stringIndex_6EB,stringIndex_6EC,stringIndex_6ED,stringIndex_6EE,
stringIndex_6EF,stringIndex_6F0,stringIndex_6F1,stringIndex_6F2,stringIndex_6F3,
stringIndex_6F4,stringIndex_6F5,stringIndex_6F6,stringIndex_6F7,stringIndex_6F8,
stringIndex_6F9,stringIndex_6FA,stringIndex_6FB,stringIndex_6FC,stringIndex_6FD,
stringIndex_6FE,stringIndex_6FF,stringIndex_700,stringIndex_701,stringIndex_702,
stringIndex_703,stringIndex_704,stringIndex_705,stringIndex_706,stringIndex_707,
stringIndex_708,stringIndex_709,stringIndex_70A,stringIndex_70B,stringIndex_70C,
stringIndex_70D,stringIndex_70E,stringIndex_70F,stringIndex_710,stringIndex_711,
stringIndex_712,stringIndex_713,stringIndex_714,stringIndex_715,stringIndex_716,
stringIndex_717,stringIndex_718,stringIndex_719,stringIndex_71A,stringIndex_71B,
stringIndex_71C,stringIndex_71D,stringIndex_71E,stringIndex_71F,stringIndex_720,
stringIndex_721,stringIndex_722,stringIndex_723,stringIndex_724,stringIndex_725,
stringIndex_726,stringIndex_727,stringIndex_728,stringIndex_729,stringIndex_72A,
stringIndex_72B,stringIndex_72C,stringIndex_72D,stringIndex_72E,stringIndex_72F,
stringIndex_730,stringIndex_731,stringIndex_732,stringIndex_733,stringIndex_734,
stringIndex_735,stringIndex_736,stringIndex_737,stringIndex_738,stringIndex_739,
stringIndex_73A,stringIndex_73B,stringIndex_73C,stringIndex_73D,stringIndex_73E,
stringIndex_73F,stringIndex_740,stringIndex_741,stringIndex_742,stringIndex_743,
stringIndex_744,stringIndex_745,stringIndex_746,stringIndex_747,stringIndex_748,
stringIndex_749,stringIndex_74A,stringIndex_74B,stringIndex_74C,stringIndex_74D,
stringIndex_74E,stringIndex_74F,stringIndex_750,stringIndex_751,stringIndex_752,
stringIndex_753,stringIndex_754,stringIndex_755,stringIndex_756,stringIndex_757,
stringIndex_758,stringIndex_759,stringIndex_75A,stringIndex_75B,stringIndex_75C,
stringIndex_75D,stringIndex_75E,stringIndex_75F,stringIndex_760,stringIndex_761,
stringIndex_762,stringIndex_763,stringIndex_764,stringIndex_765,stringIndex_766,
stringIndex_767,stringIndex_768,stringIndex_769,stringIndex_76A,stringIndex_76B,
stringIndex_76C,stringIndex_76D,stringIndex_76E,stringIndex_76F,stringIndex_770,
stringIndex_771,stringIndex_772,stringIndex_773,stringIndex_774,stringIndex_775,
stringIndex_776,stringIndex_777,stringIndex_778,stringIndex_779,stringIndex_77A,
stringIndex_77B,stringIndex_77C,stringIndex_77D,stringIndex_77E,stringIndex_77F,
stringIndex_780,stringIndex_781,stringIndex_782,stringIndex_783,stringIndex_784,
stringIndex_785,stringIndex_786,stringIndex_787,stringIndex_788,stringIndex_789,
stringIndex_78A,stringIndex_78B,stringIndex_78C,stringIndex_78D,stringIndex_78E,
stringIndex_78F,stringIndex_790,stringIndex_791,stringIndex_792,stringIndex_793,
stringIndex_794,stringIndex_795,stringIndex_796,stringIndex_797,stringIndex_798,
stringIndex_799,stringIndex_79A,stringIndex_79B,stringIndex_79C,stringIndex_79D,
stringIndex_79E,stringIndex_79F,stringIndex_7A0,stringIndex_7A1,stringIndex_7A2,
stringIndex_7A3,stringIndex_7A4,stringIndex_7A5,stringIndex_7A6,stringIndex_7A7,
stringIndex_7A8,stringIndex_7A9,stringIndex_7AA,stringIndex_7AB,stringIndex_7AC,
stringIndex_7AD,stringIndex_7AE,stringIndex_7AF,stringIndex_7B0,stringIndex_7B1,
stringIndex_7B2,stringIndex_7B3,stringIndex_7B4,stringIndex_7B5,stringIndex_7B6,
stringIndex_7B7,stringIndex_7B8,stringIndex_7B9,stringIndex_7BA,stringIndex_7BB,
stringIndex_7BC,stringIndex_7BD,stringIndex_7BE,stringIndex_7BF,stringIndex_7C0,
stringIndex_7C1,stringIndex_7C2,stringIndex_7C3,stringIndex_7C4,stringIndex_7C5,
stringIndex_7C6,stringIndex_7C7,stringIndex_7C8,stringIndex_7C9,stringIndex_7CA,
stringIndex_7CB,stringIndex_7CC,stringIndex_7CD,stringIndex_7CE,stringIndex_7CF,
stringIndex_7D0,stringIndex_7D1,stringIndex_7D2,stringIndex_7D3,stringIndex_7D4,
stringIndex_7D5,stringIndex_7D6,stringIndex_7D7,stringIndex_7D8,stringIndex_7D9,
stringIndex_7DA,stringIndex_7DB,stringIndex_7DC,stringIndex_7DD,stringIndex_7DE,
stringIndex_7DF,stringIndex_7E0,stringIndex_7E1,stringIndex_7E2,stringIndex_7E3,
stringIndex_7E4,stringIndex_7E5,stringIndex_7E6,stringIndex_7E7,stringIndex_7E8,
stringIndex_7E9,stringIndex_7EA,stringIndex_7EB,stringIndex_7EC,stringIndex_7ED,
stringIndex_7EE,stringIndex_7EF,stringIndex_7F0,stringIndex_7F1,stringIndex_7F2,
stringIndex_7F3,stringIndex_7F4,stringIndex_7F5,stringIndex_7F6,stringIndex_7F7,
stringIndex_7F8,stringIndex_7F9,stringIndex_7FA,stringIndex_7FB,stringIndex_7FC,
stringIndex_7FD,stringIndex_7FE,stringIndex_7FF,stringIndex_800,stringIndex_801,
stringIndex_802,stringIndex_803,stringIndex_804,stringIndex_805,stringIndex_806,
stringIndex_807,stringIndex_808,stringIndex_809,stringIndex_80A,stringIndex_80B,
stringIndex_80C,stringIndex_80D,stringIndex_80E,stringIndex_80F,stringIndex_810,
stringIndex_811,stringIndex_812,stringIndex_813,stringIndex_814,stringIndex_815,
stringIndex_816,stringIndex_817,stringIndex_818,stringIndex_819,stringIndex_81A,
stringIndex_81B,stringIndex_81C,stringIndex_81D,stringIndex_81E,stringIndex_81F,
stringIndex_820,stringIndex_821,stringIndex_822,stringIndex_823,stringIndex_824,
stringIndex_825,stringIndex_826,stringIndex_827,stringIndex_828,stringIndex_829,
stringIndex_82A,stringIndex_82B,stringIndex_82C,stringIndex_82D,stringIndex_82E,
stringIndex_82F,stringIndex_830,stringIndex_831,stringIndex_832,stringIndex_833,
stringIndex_834,stringIndex_835,stringIndex_836,stringIndex_837,stringIndex_838,
stringIndex_839,stringIndex_83A,stringIndex_83B,stringIndex_83C,stringIndex_83D,
stringIndex_83E,stringIndex_83F,stringIndex_840,stringIndex_841,stringIndex_842,
stringIndex_843,stringIndex_844,stringIndex_845,stringIndex_846,stringIndex_847,
stringIndex_848,stringIndex_849,stringIndex_84A,stringIndex_84B,stringIndex_84C,
stringIndex_84D,stringIndex_84E,stringIndex_84F,stringIndex_850,stringIndex_851,
stringIndex_852,stringIndex_853,stringIndex_854,stringIndex_855,stringIndex_856,
stringIndex_857,stringIndex_858,stringIndex_859,stringIndex_85A,stringIndex_85B,
stringIndex_85C,stringIndex_85D,stringIndex_85E,stringIndex_85F,stringIndex_860,
stringIndex_861,stringIndex_862,stringIndex_863,stringIndex_864,stringIndex_865,
stringIndex_866,stringIndex_867,stringIndex_868,stringIndex_869,stringIndex_86A,
stringIndex_86B,stringIndex_86C,stringIndex_86D,stringIndex_86E,stringIndex_86F,
stringIndex_870,stringIndex_871,stringIndex_872,stringIndex_873,stringIndex_874,
stringIndex_875,stringIndex_876,stringIndex_877,stringIndex_878,stringIndex_879,
stringIndex_87A,stringIndex_87B,stringIndex_87C,stringIndex_87D,stringIndex_87E,
stringIndex_87F,stringIndex_880,stringIndex_881,stringIndex_882,stringIndex_883,
stringIndex_884,stringIndex_885,stringIndex_886,stringIndex_887,stringIndex_888,
stringIndex_889,stringIndex_88A,stringIndex_88B,stringIndex_88C,stringIndex_88D,
stringIndex_88E,stringIndex_88F,stringIndex_890,stringIndex_891,stringIndex_892,
stringIndex_893,stringIndex_894,stringIndex_895,stringIndex_896,stringIndex_897,
stringIndex_898,stringIndex_899,stringIndex_89A,stringIndex_89B,stringIndex_89C,
stringIndex_89D,stringIndex_89E,stringIndex_89F,stringIndex_8A0,stringIndex_8A1,
stringIndex_8A2,stringIndex_8A3,stringIndex_8A4,stringIndex_8A5,stringIndex_8A6,
stringIndex_8A7,stringIndex_8A8,stringIndex_8A9,stringIndex_8AA,stringIndex_8AB,
stringIndex_8AC,stringIndex_8AD,stringIndex_8AE,stringIndex_8AF,stringIndex_8B0,
stringIndex_8B1,stringIndex_8B2,stringIndex_8B3,stringIndex_8B4,stringIndex_8B5,
stringIndex_8B6,stringIndex_8B7,stringIndex_8B8,stringIndex_8B9,stringIndex_8BA,
stringIndex_8BB,stringIndex_8BC,stringIndex_8BD,stringIndex_8BE,stringIndex_8BF,
stringIndex_8C0,stringIndex_8C1,stringIndex_8C2,stringIndex_8C3,stringIndex_8C4,
stringIndex_8C5,stringIndex_8C6,stringIndex_8C7,stringIndex_8C8,stringIndex_8C9,
stringIndex_8CA,stringIndex_8CB,stringIndex_8CC,stringIndex_8CD,stringIndex_8CE,
stringIndex_8CF,stringIndex_8D0,stringIndex_8D1,stringIndex_8D2,stringIndex_8D3,
stringIndex_8D4,stringIndex_8D5,stringIndex_8D6,stringIndex_8D7,stringIndex_8D8,
stringIndex_8D9,stringIndex_8DA,stringIndex_8DB,stringIndex_8DC,stringIndex_8DD,
stringIndex_8DE,stringIndex_8DF,stringIndex_8E0,stringIndex_8E1,stringIndex_8E2,
stringIndex_8E3,stringIndex_8E4,stringIndex_8E5,stringIndex_8E6,stringIndex_8E7,
stringIndex_8E8,stringIndex_8E9,stringIndex_8EA,stringIndex_8EB,stringIndex_8EC,
stringIndex_8ED,stringIndex_8EE,stringIndex_8EF,stringIndex_8F0,stringIndex_8F1,
stringIndex_8F2,stringIndex_8F3,stringIndex_8F4,stringIndex_8F5,stringIndex_8F6,
stringIndex_8F7,stringIndex_8F8,stringIndex_8F9,stringIndex_8FA,stringIndex_8FB,
stringIndex_8FC,stringIndex_8FD,stringIndex_8FE,stringIndex_8FF,stringIndex_900,
stringIndex_901,stringIndex_902,stringIndex_903,stringIndex_904,stringIndex_905,
stringIndex_906,stringIndex_907,stringIndex_908,stringIndex_909,stringIndex_90A,
stringIndex_90B,stringIndex_90C,stringIndex_90D,stringIndex_90E,stringIndex_90F,
stringIndex_910,stringIndex_911,stringIndex_912,stringIndex_913,stringIndex_914,
stringIndex_915,stringIndex_916,stringIndex_917,stringIndex_918,stringIndex_919,
stringIndex_91A,stringIndex_91B,stringIndex_91C,stringIndex_91D,stringIndex_91E,
stringIndex_91F,stringIndex_920,stringIndex_921,stringIndex_922,stringIndex_923,
stringIndex_924,stringIndex_925,stringIndex_926,stringIndex_927,stringIndex_928,
stringIndex_929,stringIndex_92A,stringIndex_92B,stringIndex_92C,stringIndex_92D,
stringIndex_92E,stringIndex_92F,stringIndex_930,stringIndex_931,stringIndex_932,
stringIndex_933,stringIndex_934,stringIndex_935,stringIndex_936,stringIndex_937,
stringIndex_938,stringIndex_939,stringIndex_93A,stringIndex_93B,stringIndex_93C,
stringIndex_93D,stringIndex_93E,stringIndex_93F,stringIndex_940,stringIndex_941,
stringIndex_942,stringIndex_943,stringIndex_944,stringIndex_945,stringIndex_946,
stringIndex_947,stringIndex_948,stringIndex_949,stringIndex_94A,stringIndex_94B,
stringIndex_94C,stringIndex_94D,stringIndex_94E,stringIndex_94F,stringIndex_950,
stringIndex_951,stringIndex_952,stringIndex_953,stringIndex_954,stringIndex_955,
stringIndex_956,stringIndex_957,stringIndex_958,stringIndex_959,stringIndex_95A,
stringIndex_95B,stringIndex_95C,stringIndex_95D,stringIndex_95E,stringIndex_95F,
stringIndex_960,stringIndex_961,stringIndex_962,stringIndex_963,stringIndex_964,
stringIndex_965,stringIndex_966,stringIndex_967,stringIndex_968,stringIndex_969,
stringIndex_96A,stringIndex_96B,stringIndex_96C,stringIndex_96D,stringIndex_96E,
stringIndex_96F,stringIndex_970,stringIndex_971,stringIndex_972,stringIndex_973,
stringIndex_974,stringIndex_975,stringIndex_976,stringIndex_977,stringIndex_978,
stringIndex_979,stringIndex_97A,stringIndex_97B,stringIndex_97C,stringIndex_97D,
stringIndex_97E,stringIndex_97F,stringIndex_980,stringIndex_981,stringIndex_982,
stringIndex_983,stringIndex_984,stringIndex_985,stringIndex_986,stringIndex_987,
stringIndex_988,stringIndex_989,stringIndex_98A,stringIndex_98B,stringIndex_98C,
stringIndex_98D,stringIndex_98E,stringIndex_98F,stringIndex_990,stringIndex_991,
stringIndex_992,stringIndex_993,stringIndex_994,stringIndex_995,stringIndex_996,
stringIndex_997,stringIndex_998,stringIndex_999,stringIndex_99A,stringIndex_99B,
stringIndex_99C,stringIndex_99D,stringIndex_99E,stringIndex_99F,stringIndex_9A0,
stringIndex_9A1,stringIndex_9A2,stringIndex_9A3,stringIndex_9A4,stringIndex_9A5,
stringIndex_9A6,stringIndex_9A7,stringIndex_9A8,stringIndex_9A9,stringIndex_9AA,
stringIndex_9AB,stringIndex_9AC,stringIndex_9AD,stringIndex_9AE,stringIndex_9AF,
stringIndex_9B0,stringIndex_9B1,stringIndex_9B2,stringIndex_9B3,stringIndex_9B4,
stringIndex_9B5,stringIndex_9B6,stringIndex_9B7,stringIndex_9B8,stringIndex_9B9,
stringIndex_9BA,stringIndex_9BB,stringIndex_9BC,stringIndex_9BD,stringIndex_9BE,
stringIndex_9BF,stringIndex_9C0,stringIndex_9C1,stringIndex_9C2,stringIndex_9C3,
stringIndex_9C4,stringIndex_9C5,stringIndex_9C6,stringIndex_9C7,stringIndex_9C8,
stringIndex_9C9,stringIndex_9CA,stringIndex_9CB,stringIndex_9CC,stringIndex_9CD,
stringIndex_9CE,stringIndex_9CF,stringIndex_9D0,stringIndex_9D1,stringIndex_9D2,
stringIndex_9D3,stringIndex_9D4,stringIndex_9D5,stringIndex_9D6,stringIndex_9D7,
stringIndex_9D8,stringIndex_9D9,stringIndex_9DA,stringIndex_9DB,stringIndex_9DC,
stringIndex_9DD,stringIndex_9DE,stringIndex_9DF,stringIndex_9E0,stringIndex_9E1,
stringIndex_9E2,stringIndex_9E3,stringIndex_9E4,stringIndex_9E5,stringIndex_9E6,
stringIndex_9E7,stringIndex_9E8,stringIndex_9E9,stringIndex_9EA,stringIndex_9EB,
stringIndex_9EC,stringIndex_9ED,stringIndex_9EE,stringIndex_9EF,stringIndex_9F0,
stringIndex_9F1,stringIndex_9F2,stringIndex_9F3,stringIndex_9F4,stringIndex_9F5,
stringIndex_9F6,stringIndex_9F7,stringIndex_9F8,stringIndex_9F9,stringIndex_9FA,
stringIndex_9FB,stringIndex_9FC,stringIndex_9FD,stringIndex_9FE,stringIndex_9FF,
stringIndex_A00,stringIndex_A01,stringIndex_A02,stringIndex_A03,stringIndex_A04,
stringIndex_A05,stringIndex_A06,stringIndex_A07,stringIndex_A08,stringIndex_A09,
stringIndex_A0A,stringIndex_A0B,stringIndex_A0C,stringIndex_A0D,stringIndex_A0E,
stringIndex_A0F,stringIndex_A10,stringIndex_A11,stringIndex_A12,stringIndex_A13,
stringIndex_A14,stringIndex_A15,stringIndex_A16,stringIndex_A17,stringIndex_A18,
stringIndex_A19,stringIndex_A1A,stringIndex_A1B,stringIndex_A1C,stringIndex_A1D,
stringIndex_A1E,stringIndex_A1F,stringIndex_A20,stringIndex_A21,stringIndex_A22,
stringIndex_A23,stringIndex_A24,stringIndex_A25,stringIndex_A26,stringIndex_A27,
stringIndex_A28,stringIndex_A29,stringIndex_A2A,stringIndex_A2B,stringIndex_A2C,
stringIndex_A2D,stringIndex_A2E,stringIndex_A2F,stringIndex_A30,stringIndex_A31,
stringIndex_A32,stringIndex_A33,stringIndex_A34,stringIndex_A35,stringIndex_A36,
stringIndex_A37,stringIndex_A38,stringIndex_A39,stringIndex_A3A,stringIndex_A3B,
stringIndex_A3C,stringIndex_A3D,stringIndex_A3E,stringIndex_A3F,stringIndex_A40,
stringIndex_A41,stringIndex_A42,stringIndex_A43,stringIndex_A44,stringIndex_A45,
stringIndex_A46,stringIndex_A47,stringIndex_A48,stringIndex_A49,stringIndex_A4A,
stringIndex_A4B,stringIndex_A4C,stringIndex_A4D,stringIndex_A4E,stringIndex_A4F,
stringIndex_A50,stringIndex_A51,stringIndex_A52,stringIndex_A53,stringIndex_A54,
stringIndex_A55,stringIndex_A56,stringIndex_A57,stringIndex_A58,stringIndex_A59,
stringIndex_A5A,stringIndex_A5B,stringIndex_A5C,stringIndex_A5D,stringIndex_A5E,
stringIndex_A5F,stringIndex_A60,stringIndex_A61,stringIndex_A62,stringIndex_A63,
stringIndex_A64,stringIndex_A65,stringIndex_A66,stringIndex_A67,stringIndex_A68,
stringIndex_A69,stringIndex_A6A,stringIndex_A6B,stringIndex_A6C,stringIndex_A6D,
stringIndex_A6E,stringIndex_A6F,stringIndex_A70,stringIndex_A71,stringIndex_A72,
stringIndex_A73,stringIndex_A74,stringIndex_A75,stringIndex_A76,stringIndex_A77,
stringIndex_A78,stringIndex_A79,stringIndex_A7A,stringIndex_A7B,stringIndex_A7C,
stringIndex_A7D,stringIndex_A7E,stringIndex_A7F,stringIndex_A80,stringIndex_A81,
stringIndex_A82,stringIndex_A83,stringIndex_A84,stringIndex_A85,stringIndex_A86,
stringIndex_A87,stringIndex_A88,stringIndex_A89,stringIndex_A8A,stringIndex_A8B,
stringIndex_A8C,stringIndex_A8D,stringIndex_A8E,stringIndex_A8F,stringIndex_A90,
stringIndex_A91,stringIndex_A92,stringIndex_A93,stringIndex_A94,stringIndex_A95,
stringIndex_A96,stringIndex_A97,stringIndex_A98,stringIndex_A99,stringIndex_A9A,
stringIndex_A9B,stringIndex_A9C,stringIndex_A9D,stringIndex_A9E,stringIndex_A9F,
stringIndex_AA0,stringIndex_AA1,stringIndex_AA2,stringIndex_AA3,stringIndex_AA4,
stringIndex_AA5,stringIndex_AA6,stringIndex_AA7,stringIndex_AA8,stringIndex_AA9,
stringIndex_AAA,stringIndex_AAB,stringIndex_AAC,stringIndex_AAD,stringIndex_AAE,
stringIndex_AAF,stringIndex_AB0,stringIndex_AB1,stringIndex_AB2,stringIndex_AB3,
stringIndex_AB4,stringIndex_AB5,stringIndex_AB6,stringIndex_AB7,stringIndex_AB8,
stringIndex_AB9,stringIndex_ABA,stringIndex_ABB,stringIndex_ABC,stringIndex_ABD,
stringIndex_ABE,stringIndex_ABF,stringIndex_AC0,stringIndex_AC1,stringIndex_AC2,
stringIndex_AC3,stringIndex_AC4,stringIndex_AC5,stringIndex_AC6,stringIndex_AC7,
stringIndex_AC8,stringIndex_AC9,stringIndex_ACA,stringIndex_ACB,stringIndex_ACC,
stringIndex_ACD,stringIndex_ACE,stringIndex_ACF,stringIndex_AD0,stringIndex_AD1,
stringIndex_AD2,stringIndex_AD3,stringIndex_AD4,stringIndex_AD5,stringIndex_AD6,
stringIndex_AD7,stringIndex_AD8,stringIndex_AD9,stringIndex_ADA,stringIndex_ADB,
stringIndex_ADC,stringIndex_ADD,stringIndex_ADE,stringIndex_ADF,stringIndex_AE0,
stringIndex_AE1,stringIndex_AE2,stringIndex_AE3,stringIndex_AE4,stringIndex_AE5,
stringIndex_AE6,stringIndex_AE7,stringIndex_AE8,stringIndex_AE9,stringIndex_AEA,
stringIndex_AEB,stringIndex_AEC,stringIndex_AED,stringIndex_AEE,stringIndex_AEF,
stringIndex_AF0,stringIndex_AF1,stringIndex_AF2,stringIndex_AF3,stringIndex_AF4,
stringIndex_AF5,stringIndex_AF6,stringIndex_AF7,stringIndex_AF8,stringIndex_AF9,
stringIndex_AFA,stringIndex_AFB,stringIndex_AFC,stringIndex_AFD,stringIndex_AFE,
stringIndex_AFF,stringIndex_B00,stringIndex_B01,stringIndex_B02,stringIndex_B03,
stringIndex_B04,stringIndex_B05,stringIndex_B06,stringIndex_B07,stringIndex_B08,
stringIndex_B09,stringIndex_B0A,stringIndex_B0B,stringIndex_B0C,stringIndex_B0D,
stringIndex_B0E,stringIndex_B0F,stringIndex_B10,stringIndex_B11,stringIndex_B12,
stringIndex_B13,stringIndex_B14,stringIndex_B15,stringIndex_B16,stringIndex_B17,
stringIndex_B18,stringIndex_B19,stringIndex_B1A,stringIndex_B1B,stringIndex_B1C,
stringIndex_B1D,stringIndex_B1E,stringIndex_B1F,stringIndex_B20,stringIndex_B21,
stringIndex_B22,stringIndex_B23,stringIndex_B24,stringIndex_B25,stringIndex_B26,
stringIndex_B27,stringIndex_B28,stringIndex_B29,stringIndex_B2A,stringIndex_B2B,
stringIndex_B2C,stringIndex_B2D,stringIndex_B2E,stringIndex_B2F,stringIndex_B30,
stringIndex_B31,stringIndex_B32,stringIndex_B33,stringIndex_B34,stringIndex_B35,
stringIndex_B36,stringIndex_B37,stringIndex_B38,stringIndex_B39,stringIndex_B3A,
stringIndex_B3B,stringIndex_B3C,stringIndex_B3D,stringIndex_B3E,stringIndex_B3F,
stringIndex_B40,stringIndex_B41,stringIndex_B42,stringIndex_B43,stringIndex_B44,
stringIndex_B45,stringIndex_B46,stringIndex_B47,stringIndex_B48,stringIndex_B49,
stringIndex_B4A,stringIndex_B4B,stringIndex_B4C,stringIndex_B4D,stringIndex_B4E,
stringIndex_B4F,stringIndex_B50,stringIndex_B51,stringIndex_B52,stringIndex_B53,
stringIndex_B54,stringIndex_B55,stringIndex_B56,stringIndex_B57,stringIndex_B58,
stringIndex_B59,stringIndex_B5A,stringIndex_B5B,stringIndex_B5C,stringIndex_B5D,
stringIndex_B5E,stringIndex_B5F,stringIndex_B60,stringIndex_B61,stringIndex_B62,
stringIndex_B63,stringIndex_B64,stringIndex_B65,stringIndex_B66,stringIndex_B67,
stringIndex_B68,stringIndex_B69,stringIndex_B6A,stringIndex_B6B,stringIndex_B6C,
stringIndex_B6D,stringIndex_B6E,stringIndex_B6F,stringIndex_B70,stringIndex_B71,
stringIndex_B72,stringIndex_B73,stringIndex_B74,stringIndex_B75,stringIndex_B76,
stringIndex_B77,stringIndex_B78,stringIndex_B79,stringIndex_B7A,stringIndex_B7B,
stringIndex_B7C,stringIndex_B7D,stringIndex_B7E,stringIndex_B7F,stringIndex_B80,
stringIndex_B81,stringIndex_B82,stringIndex_B83,stringIndex_B84,stringIndex_B85,
stringIndex_B86,stringIndex_B87,stringIndex_B88,stringIndex_B89,stringIndex_B8A,
stringIndex_B8B,stringIndex_B8C,stringIndex_B8D,stringIndex_B8E,stringIndex_B8F,
stringIndex_B90,stringIndex_B91,stringIndex_B92,stringIndex_B93,stringIndex_B94,
stringIndex_B95,stringIndex_B96,stringIndex_B97,stringIndex_B98,stringIndex_B99,
stringIndex_B9A,stringIndex_B9B,stringIndex_B9C,stringIndex_B9D,stringIndex_B9E,
stringIndex_B9F,stringIndex_BA0,stringIndex_BA1,stringIndex_BA2,stringIndex_BA3,
stringIndex_BA4,stringIndex_BA5,stringIndex_BA6,stringIndex_BA7,stringIndex_BA8,
stringIndex_BA9,stringIndex_BAA,stringIndex_BAB,stringIndex_BAC,stringIndex_BAD,
stringIndex_BAE,stringIndex_BAF,stringIndex_BB0,stringIndex_BB1,stringIndex_BB2,
stringIndex_BB3,stringIndex_BB4,stringIndex_BB5,stringIndex_BB6,stringIndex_BB7,
};
