@ initialize:python @
@@
from collections import defaultdict
rule_matches = defaultdict(dict)

@ r1 @
symbol cocci_id;
position p;
@@
 enum imx35_pads { MX35_PAD_RESERVE0 = 0 , MX35_PAD_CAPTURE = 1 , MX35_PAD_COMPARE = 2 , MX35_PAD_WDOG_RST = 3 , MX35_PAD_GPIO1_0 = 4 , MX35_PAD_GPIO1_1 = 5 , MX35_PAD_GPIO2_0 = 6 , MX35_PAD_GPIO3_0 = 7 , MX35_PAD_CLKO = 8 , MX35_PAD_VSTBY = 9 , MX35_PAD_A0 = 10 , MX35_PAD_A1 = 11 , MX35_PAD_A2 = 12 , MX35_PAD_A3 = 13 , MX35_PAD_A4 = 14 , MX35_PAD_A5 = 15 , MX35_PAD_A6 = 16 , MX35_PAD_A7 = 17 , MX35_PAD_A8 = 18 , MX35_PAD_A9 = 19 , MX35_PAD_A10 = 20 , MX35_PAD_MA10 = 21 , MX35_PAD_A11 = 22 , MX35_PAD_A12 = 23 , MX35_PAD_A13 = 24 , MX35_PAD_A14 = 25 , MX35_PAD_A15 = 26 , MX35_PAD_A16 = 27 , MX35_PAD_A17 = 28 , MX35_PAD_A18 = 29 , MX35_PAD_A19 = 30 , MX35_PAD_A20 = 31 , MX35_PAD_A21 = 32 , MX35_PAD_A22 = 33 , MX35_PAD_A23 = 34 , MX35_PAD_A24 = 35 , MX35_PAD_A25 = 36 , MX35_PAD_EB0 = 37 , MX35_PAD_EB1 = 38 , MX35_PAD_OE = 39 , MX35_PAD_CS0 = 40 , MX35_PAD_CS1 = 41 , MX35_PAD_CS2 = 42 , MX35_PAD_CS3 = 43 , MX35_PAD_CS4 = 44 , MX35_PAD_CS5 = 45 , MX35_PAD_NF_CE0 = 46 , MX35_PAD_LBA = 47 , MX35_PAD_BCLK = 48 , MX35_PAD_RW = 49 , MX35_PAD_NFWE_B = 50 , MX35_PAD_NFRE_B = 51 , MX35_PAD_NFALE = 52 , MX35_PAD_NFCLE = 53 , MX35_PAD_NFWP_B = 54 , MX35_PAD_NFRB = 55 , MX35_PAD_CSI_D8 = 56 , MX35_PAD_CSI_D9 = 57 , MX35_PAD_CSI_D10 = 58 , MX35_PAD_CSI_D11 = 59 , MX35_PAD_CSI_D12 = 60 , MX35_PAD_CSI_D13 = 61 , MX35_PAD_CSI_D14 = 62 , MX35_PAD_CSI_D15 = 63 , MX35_PAD_CSI_MCLK = 64 , MX35_PAD_CSI_VSYNC = 65 , MX35_PAD_CSI_HSYNC = 66 , MX35_PAD_CSI_PIXCLK = 67 , MX35_PAD_I2C1_CLK = 68 , MX35_PAD_I2C1_DAT = 69 , MX35_PAD_I2C2_CLK = 70 , MX35_PAD_I2C2_DAT = 71 , MX35_PAD_STXD4 = 72 , MX35_PAD_SRXD4 = 73 , MX35_PAD_SCK4 = 74 , MX35_PAD_STXFS4 = 75 , MX35_PAD_STXD5 = 76 , MX35_PAD_SRXD5 = 77 , MX35_PAD_SCK5 = 78 , MX35_PAD_STXFS5 = 79 , MX35_PAD_SCKR = 80 , MX35_PAD_FSR = 81 , MX35_PAD_HCKR = 82 , MX35_PAD_SCKT = 83 , MX35_PAD_FST = 84 , MX35_PAD_HCKT = 85 , MX35_PAD_TX5_RX0 = 86 , MX35_PAD_TX4_RX1 = 87 , MX35_PAD_TX3_RX2 = 88 , MX35_PAD_TX2_RX3 = 89 , MX35_PAD_TX1 = 90 , MX35_PAD_TX0 = 91 , MX35_PAD_CSPI1_MOSI = 92 , MX35_PAD_CSPI1_MISO = 93 , MX35_PAD_CSPI1_SS0 = 94 , MX35_PAD_CSPI1_SS1 = 95 , MX35_PAD_CSPI1_SCLK = 96 , MX35_PAD_CSPI1_SPI_RDY = 97 , MX35_PAD_RXD1 = 98 , MX35_PAD_TXD1 = 99 , MX35_PAD_RTS1 = 100 , MX35_PAD_CTS1 = 101 , MX35_PAD_RXD2 = 102 , MX35_PAD_TXD2 = 103 , MX35_PAD_RTS2 = 104 , MX35_PAD_CTS2 = 105 , MX35_PAD_USBOTG_PWR = 106 , MX35_PAD_USBOTG_OC = 107 , MX35_PAD_LD0 = 108 , MX35_PAD_LD1 = 109 , MX35_PAD_LD2 = 110 , MX35_PAD_LD3 = 111 , MX35_PAD_LD4 = 112 , MX35_PAD_LD5 = 113 , MX35_PAD_LD6 = 114 , MX35_PAD_LD7 = 115 , MX35_PAD_LD8 = 116 , MX35_PAD_LD9 = 117 , MX35_PAD_LD10 = 118 , MX35_PAD_LD11 = 119 , MX35_PAD_LD12 = 120 , MX35_PAD_LD13 = 121 , MX35_PAD_LD14 = 122 , MX35_PAD_LD15 = 123 , MX35_PAD_LD16 = 124 , MX35_PAD_LD17 = 125 , MX35_PAD_LD18 = 126 , MX35_PAD_LD19 = 127 , MX35_PAD_LD20 = 128 , MX35_PAD_LD21 = 129 , MX35_PAD_LD22 = 130 , MX35_PAD_LD23 = 131 , MX35_PAD_D3_HSYNC = 132 , MX35_PAD_D3_FPSHIFT = 133 , MX35_PAD_D3_DRDY = 134 , MX35_PAD_CONTRAST = 135 , MX35_PAD_D3_VSYNC = 136 , MX35_PAD_D3_REV = 137 , MX35_PAD_D3_CLS = 138 , MX35_PAD_D3_SPL = 139 , MX35_PAD_SD1_CMD = 140 , MX35_PAD_SD1_CLK = 141 , MX35_PAD_SD1_DATA0 = 142 , MX35_PAD_SD1_DATA1 = 143 , MX35_PAD_SD1_DATA2 = 144 , MX35_PAD_SD1_DATA3 = 145 , MX35_PAD_SD2_CMD = 146 , MX35_PAD_SD2_CLK = 147 , MX35_PAD_SD2_DATA0 = 148 , MX35_PAD_SD2_DATA1 = 149 , MX35_PAD_SD2_DATA2 = 150 , MX35_PAD_SD2_DATA3 = 151 , MX35_PAD_ATA_CS0 = 152 , MX35_PAD_ATA_CS1 = 153 , MX35_PAD_ATA_DIOR = 154 , MX35_PAD_ATA_DIOW = 155 , MX35_PAD_ATA_DMACK = 156 , MX35_PAD_ATA_RESET_B = 157 , MX35_PAD_ATA_IORDY = 158 , MX35_PAD_ATA_DATA0 = 159 , MX35_PAD_ATA_DATA1 = 160 , MX35_PAD_ATA_DATA2 = 161 , MX35_PAD_ATA_DATA3 = 162 , MX35_PAD_ATA_DATA4 = 163 , MX35_PAD_ATA_DATA5 = 164 , MX35_PAD_ATA_DATA6 = 165 , MX35_PAD_ATA_DATA7 = 166 , MX35_PAD_ATA_DATA8 = 167 , MX35_PAD_ATA_DATA9 = 168 , MX35_PAD_ATA_DATA10 = 169 , MX35_PAD_ATA_DATA11 = 170 , MX35_PAD_ATA_DATA12 = 171 , MX35_PAD_ATA_DATA13 = 172 , MX35_PAD_ATA_DATA14 = 173 , MX35_PAD_ATA_DATA15 = 174 , MX35_PAD_ATA_INTRQ = 175 , MX35_PAD_ATA_BUFF_EN = 176 , MX35_PAD_ATA_DMARQ = 177 , MX35_PAD_ATA_DA0 = 178 , MX35_PAD_ATA_DA1 = 179 , MX35_PAD_ATA_DA2 = 180 , MX35_PAD_MLB_CLK = 181 , MX35_PAD_MLB_DAT = 182 , MX35_PAD_MLB_SIG = 183 , MX35_PAD_FEC_TX_CLK = 184 , MX35_PAD_FEC_RX_CLK = 185 , MX35_PAD_FEC_RX_DV = 186 , MX35_PAD_FEC_COL = 187 , MX35_PAD_FEC_RDATA0 = 188 , MX35_PAD_FEC_TDATA0 = 189 , MX35_PAD_FEC_TX_EN = 190 , MX35_PAD_FEC_MDC = 191 , MX35_PAD_FEC_MDIO = 192 , MX35_PAD_FEC_TX_ERR = 193 , MX35_PAD_FEC_RX_ERR = 194 , MX35_PAD_FEC_CRS = 195 , MX35_PAD_FEC_RDATA1 = 196 , MX35_PAD_FEC_TDATA1 = 197 , MX35_PAD_FEC_RDATA2 = 198 , MX35_PAD_FEC_TDATA2 = 199 , MX35_PAD_FEC_RDATA3 = 200 , MX35_PAD_FEC_TDATA3 = 201 , MX35_PAD_RESERVE1 = 202 , MX35_PAD_RESERVE2 = 203 , MX35_PAD_RESERVE3 = 204 , MX35_PAD_RESERVE4 = 205 , MX35_PAD_RESERVE5 = 206 , MX35_PAD_RESERVE6 = 207 , MX35_PAD_RESERVE7 = 208 , MX35_PAD_RESET_IN_B = 209 , MX35_PAD_POR_B = 210 , MX35_PAD_RESERVE8 = 211 , MX35_PAD_BOOT_MODE0 = 212 , MX35_PAD_BOOT_MODE1 = 213 , MX35_PAD_CLK_MODE0 = 214 , MX35_PAD_CLK_MODE1 = 215 , MX35_PAD_POWER_FAIL = 216 , MX35_PAD_RESERVE9 = 217 , MX35_PAD_RESERVE10 = 218 , MX35_PAD_RESERVE11 = 219 , MX35_PAD_RESERVE12 = 220 , MX35_PAD_RESERVE13 = 221 , MX35_PAD_RESERVE14 = 222 , MX35_PAD_RESERVE15 = 223 , MX35_PAD_RESERVE16 = 224 , MX35_PAD_RESERVE17 = 225 , MX35_PAD_RESERVE18 = 226 , MX35_PAD_RESERVE19 = 227 , MX35_PAD_RESERVE20 = 228 , MX35_PAD_RESERVE21 = 229 , MX35_PAD_RESERVE22 = 230 , MX35_PAD_RESERVE23 = 231 , MX35_PAD_RESERVE24 = 232 , MX35_PAD_RESERVE25 = 233 , MX35_PAD_RESERVE26 = 234 , MX35_PAD_RESERVE27 = 235 , MX35_PAD_RESERVE28 = 236 , MX35_PAD_RESERVE29 = 237 , MX35_PAD_RESERVE30 = 238 , MX35_PAD_RESERVE31 = 239 , MX35_PAD_RESERVE32 = 240 , MX35_PAD_RESERVE33 = 241 , MX35_PAD_RESERVE34 = 242 , MX35_PAD_RESERVE35 = 243 , MX35_PAD_RESERVE36 = 244 , MX35_PAD_SDBA1 = 245 , MX35_PAD_SDBA0 = 246 , MX35_PAD_SD0 = 247 , MX35_PAD_SD1 = 248 , MX35_PAD_SD2 = 249 , MX35_PAD_SD3 = 250 , MX35_PAD_SD4 = 251 , MX35_PAD_SD5 = 252 , MX35_PAD_SD6 = 253 , MX35_PAD_SD7 = 254 , MX35_PAD_SD8 = 255 , MX35_PAD_SD9 = 256 , MX35_PAD_SD10 = 257 , MX35_PAD_SD11 = 258 , MX35_PAD_SD12 = 259 , MX35_PAD_SD13 = 260 , MX35_PAD_SD14 = 261 , MX35_PAD_SD15 = 262 , MX35_PAD_SD16 = 263 , MX35_PAD_SD17 = 264 , MX35_PAD_SD18 = 265 , MX35_PAD_SD19 = 266 , MX35_PAD_SD20 = 267 , MX35_PAD_SD21 = 268 , MX35_PAD_SD22 = 269 , MX35_PAD_SD23 = 270 , MX35_PAD_SD24 = 271 , MX35_PAD_SD25 = 272 , MX35_PAD_SD26 = 273 , MX35_PAD_SD27 = 274 , MX35_PAD_SD28 = 275 , MX35_PAD_SD29 = 276 , MX35_PAD_SD30 = 277 , MX35_PAD_SD31 = 278 , MX35_PAD_DQM0 = 279 , MX35_PAD_DQM1 = 280 , MX35_PAD_DQM2 = 281 , MX35_PAD_DQM3 = 282 , MX35_PAD_RESERVE37 = 283 , MX35_PAD_RESERVE38 = 284 , MX35_PAD_RESERVE39 = 285 , MX35_PAD_RESERVE40 = 286 , MX35_PAD_RESERVE41 = 287 , MX35_PAD_RESERVE42 = 288 , MX35_PAD_RESERVE43 = 289 , MX35_PAD_RESERVE44 = 290 , MX35_PAD_RESERVE45 = 291 , MX35_PAD_RESERVE46 = 292 , MX35_PAD_ECB = 293 , MX35_PAD_RESERVE47 = 294 , MX35_PAD_RESERVE48 = 295 , MX35_PAD_RESERVE49 = 296 , MX35_PAD_RAS = 297 , MX35_PAD_CAS = 298 , MX35_PAD_SDWE = 299 , MX35_PAD_SDCKE0 = 300 , MX35_PAD_SDCKE1 = 301 , MX35_PAD_SDCLK = 302 , MX35_PAD_SDQS0 = 303 , MX35_PAD_SDQS1 = 304 , MX35_PAD_SDQS2 = 305 , MX35_PAD_SDQS3 = 306 , MX35_PAD_RESERVE50 = 307 , MX35_PAD_RESERVE51 = 308 , MX35_PAD_RESERVE52 = 309 , MX35_PAD_RESERVE53 = 310 , MX35_PAD_RESERVE54 = 311 , MX35_PAD_RESERVE55 = 312 , MX35_PAD_D15 = 313 , MX35_PAD_D14 = 314 , MX35_PAD_D13 = 315 , MX35_PAD_D12 = 316 , MX35_PAD_D11 = 317 , MX35_PAD_D10 = 318 , MX35_PAD_D9 = 319 , MX35_PAD_D8 = 320 , MX35_PAD_D7 = 321 , MX35_PAD_D6 = 322 , MX35_PAD_D5 = 323 , MX35_PAD_D4 = 324 , MX35_PAD_D3 = 325 , MX35_PAD_D2 = 326 , MX35_PAD_D1 = 327 , MX35_PAD_D0 = 328 , MX35_PAD_RESERVE56 = 329 , MX35_PAD_RESERVE57 = 330 , MX35_PAD_RESERVE58 = 331 , MX35_PAD_RESERVE59 = 332 , MX35_PAD_RESERVE60 = 333 , MX35_PAD_RESERVE61 = 334 , MX35_PAD_RESERVE62 = 335 , MX35_PAD_RESERVE63 = 336 , MX35_PAD_RESERVE64 = 337 , MX35_PAD_RESERVE65 = 338 , MX35_PAD_RESERVE66 = 339 , MX35_PAD_RESERVE67 = 340 , MX35_PAD_RESERVE68 = 341 , MX35_PAD_RESERVE69 = 342 , MX35_PAD_RESERVE70 = 343 , MX35_PAD_RESERVE71 = 344 , MX35_PAD_RESERVE72 = 345 , MX35_PAD_RESERVE73 = 346 , MX35_PAD_RESERVE74 = 347 , MX35_PAD_RESERVE75 = 348 , MX35_PAD_RESERVE76 = 349 , MX35_PAD_RESERVE77 = 350 , MX35_PAD_RESERVE78 = 351 , MX35_PAD_RESERVE79 = 352 , MX35_PAD_RESERVE80 = 353 , MX35_PAD_RESERVE81 = 354 , MX35_PAD_RESERVE82 = 355 , MX35_PAD_RESERVE83 = 356 , MX35_PAD_RESERVE84 = 357 , MX35_PAD_RESERVE85 = 358 , MX35_PAD_RESERVE86 = 359 , MX35_PAD_RESERVE87 = 360 , MX35_PAD_RESERVE88 = 361 , MX35_PAD_RESERVE89 = 362 , MX35_PAD_RESERVE90 = 363 , MX35_PAD_RESERVE91 = 364 , MX35_PAD_RESERVE92 = 365 , MX35_PAD_RESERVE93 = 366 , MX35_PAD_RESERVE94 = 367 , MX35_PAD_RESERVE95 = 368 , MX35_PAD_RESERVE96 = 369 , MX35_PAD_RESERVE97 = 370 , MX35_PAD_RESERVE98 = 371 , MX35_PAD_RESERVE99 = 372 , MX35_PAD_RESERVE100 = 373 , MX35_PAD_RESERVE101 = 374 , MX35_PAD_RESERVE102 = 375 , MX35_PAD_RESERVE103 = 376 , MX35_PAD_RESERVE104 = 377 , MX35_PAD_RESERVE105 = 378 , MX35_PAD_RTCK = 379 , MX35_PAD_TCK = 380 , MX35_PAD_TMS = 381 , MX35_PAD_TDI = 382 , MX35_PAD_TDO = 383 , MX35_PAD_TRSTB = 384 , MX35_PAD_DE_B = 385 , MX35_PAD_SJC_MOD = 386 , MX35_PAD_RESERVE106 = 387 , MX35_PAD_RESERVE107 = 388 , MX35_PAD_RESERVE108 = 389 , MX35_PAD_RESERVE109 = 390 , MX35_PAD_RESERVE110 = 391 , MX35_PAD_RESERVE111 = 392 , MX35_PAD_RESERVE112 = 393 , MX35_PAD_RESERVE113 = 394 , MX35_PAD_RESERVE114 = 395 , MX35_PAD_RESERVE115 = 396 , MX35_PAD_RESERVE116 = 397 , MX35_PAD_RESERVE117 = 398 , MX35_PAD_RESERVE118 = 399 , MX35_PAD_RESERVE119 = 400 , MX35_PAD_RESERVE120 = 401 , MX35_PAD_RESERVE121 = 402 , MX35_PAD_RESERVE122 = 403 , MX35_PAD_RESERVE123 = 404 , MX35_PAD_RESERVE124 = 405 , MX35_PAD_RESERVE125 = 406 , MX35_PAD_RESERVE126 = 407 , MX35_PAD_RESERVE127 = 408 , MX35_PAD_RESERVE128 = 409 , MX35_PAD_RESERVE129 = 410 , MX35_PAD_RESERVE130 = 411 , MX35_PAD_RESERVE131 = 412 , MX35_PAD_RESERVE132 = 413 , MX35_PAD_RESERVE133 = 414 , MX35_PAD_RESERVE134 = 415 , MX35_PAD_RESERVE135 = 416 , MX35_PAD_RESERVE136 = 417 , MX35_PAD_RESERVE137 = 418 , MX35_PAD_RESERVE138 = 419 , MX35_PAD_RESERVE139 = 420 , MX35_PAD_RESERVE140 = 421 , MX35_PAD_RESERVE141 = 422 , MX35_PAD_RESERVE142 = 423 , MX35_PAD_RESERVE143 = 424 , MX35_PAD_RESERVE144 = 425 , MX35_PAD_RESERVE145 = 426 , MX35_PAD_RESERVE146 = 427 , MX35_PAD_RESERVE147 = 428 , MX35_PAD_RESERVE148 = 429 , MX35_PAD_RESERVE149 = 430 , MX35_PAD_RESERVE150 = 431 , MX35_PAD_RESERVE151 = 432 , MX35_PAD_RESERVE152 = 433 , MX35_PAD_RESERVE153 = 434 , MX35_PAD_RESERVE154 = 435 , MX35_PAD_RESERVE155 = 436 , MX35_PAD_RESERVE156 = 437 , MX35_PAD_RESERVE157 = 438 , MX35_PAD_RESERVE158 = 439 , MX35_PAD_RESERVE159 = 440 , MX35_PAD_RESERVE160 = 441 , MX35_PAD_RESERVE161 = 442 , MX35_PAD_RESERVE162 = 443 , MX35_PAD_RESERVE163 = 444 , MX35_PAD_RESERVE164 = 445 , MX35_PAD_RESERVE165 = 446 , MX35_PAD_RESERVE166 = 447 , MX35_PAD_RESERVE167 = 448 , MX35_PAD_RESERVE168 = 449 , MX35_PAD_RESERVE169 = 450 , MX35_PAD_RESERVE170 = 451 , MX35_PAD_RESERVE171 = 452 , MX35_PAD_RESERVE172 = 453 , MX35_PAD_RESERVE173 = 454 , MX35_PAD_RESERVE174 = 455 , MX35_PAD_RESERVE175 = 456 , MX35_PAD_RESERVE176 = 457 , MX35_PAD_RESERVE177 = 458 , MX35_PAD_RESERVE178 = 459 , MX35_PAD_RESERVE179 = 460 , MX35_PAD_RESERVE180 = 461 , MX35_PAD_RESERVE181 = 462 , MX35_PAD_RESERVE182 = 463 , MX35_PAD_RESERVE183 = 464 , MX35_PAD_RESERVE184 = 465 , MX35_PAD_RESERVE185 = 466 , MX35_PAD_RESERVE186 = 467 , MX35_PAD_RESERVE187 = 468 , MX35_PAD_RESERVE188 = 469 , MX35_PAD_RESERVE189 = 470 , MX35_PAD_RESERVE190 = 471 , MX35_PAD_RESERVE191 = 472 , MX35_PAD_RESERVE192 = 473 , MX35_PAD_RESERVE193 = 474 , MX35_PAD_RESERVE194 = 475 , MX35_PAD_RESERVE195 = 476 , MX35_PAD_RESERVE196 = 477 , MX35_PAD_RESERVE197 = 478 , MX35_PAD_RESERVE198 = 479 , MX35_PAD_RESERVE199 = 480 , MX35_PAD_RESERVE200 = 481 , MX35_PAD_RESERVE201 = 482 , MX35_PAD_EXT_ARMCLK = 483 , MX35_PAD_TEST_MODE = 484 , } cocci_id@p ;

@ script:python depends on r1 @
p << r1.p;
@@

if 1 not in rule_matches:
    rule_matches[1] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['4']:
    rule_matches[1]['correct_lines'].append(p[0].line)
else:
    rule_matches[1]['other_lines'].append(p[0].line)

@ r2 @
symbol cocci_id;
position p;
@@
 struct platform_driver cocci_id@p ;

@ script:python depends on r2 @
p << r2.p;
@@

if 2 not in rule_matches:
    rule_matches[2] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['7']:
    rule_matches[2]['correct_lines'].append(p[0].line)
else:
    rule_matches[2]['other_lines'].append(p[0].line)

@ r3 @
symbol cocci_id;
position p;
@@
 int cocci_id@p ;

@ script:python depends on r3 @
p << r3.p;
@@

if 3 not in rule_matches:
    rule_matches[3] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['9']:
    rule_matches[3]['correct_lines'].append(p[0].line)
else:
    rule_matches[3]['other_lines'].append(p[0].line)

@ r4 @
symbol cocci_id;
position p;
@@
 void cocci_id@p ;

@ script:python depends on r4 @
p << r4.p;
@@

if 4 not in rule_matches:
    rule_matches[4] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['6']:
    rule_matches[4]['correct_lines'].append(p[0].line)
else:
    rule_matches[4]['other_lines'].append(p[0].line)

@ r5 @
symbol cocci_id;
position p;
@@
 struct platform_device * cocci_id@p ;

@ script:python depends on r5 @
p << r5.p;
@@

if 5 not in rule_matches:
    rule_matches[5] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['8']:
    rule_matches[5]['correct_lines'].append(p[0].line)
else:
    rule_matches[5]['other_lines'].append(p[0].line)

@ r6 @
symbol cocci_id;
position p;
@@
 const struct pinctrl_pin_desc cocci_id@p [ ] ;

@ script:python depends on r6 @
p << r6.p;
@@

if 6 not in rule_matches:
    rule_matches[6] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['3']:
    rule_matches[6]['correct_lines'].append(p[0].line)
else:
    rule_matches[6]['other_lines'].append(p[0].line)

@ r7 @
symbol cocci_id;
position p;
@@
 const struct of_device_id cocci_id@p [ ] ;

@ script:python depends on r7 @
p << r7.p;
@@

if 7 not in rule_matches:
    rule_matches[7] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['10']:
    rule_matches[7]['correct_lines'].append(p[0].line)
else:
    rule_matches[7]['other_lines'].append(p[0].line)

@ r8 @
symbol cocci_id;
position p;
@@
 const struct imx_pinctrl_soc_info cocci_id@p ;

@ script:python depends on r8 @
p << r8.p;
@@

if 8 not in rule_matches:
    rule_matches[8] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['2']:
    rule_matches[8]['correct_lines'].append(p[0].line)
else:
    rule_matches[8]['other_lines'].append(p[0].line)

@ finalize:python @
@@
rules = [1, 2, 3, 4, 5, 6, 7, 8]
for i in rules:
    if i not in rule_matches:
        print("FAILED %s: NO MATCHES" % (str(i)))
        continue
    elif rule_matches[i]['correct_lines']:
        if rule_matches[i]['other_lines']:
            print("PASSED %s: CORRECT MATCHES: %s INCORRECT MATCHES: %s" % (str(i), str(rule_matches[i]['correct_lines']), str(rule_matches[i]['other_lines'])))
        else:
            print("PASSED %s: CORRECT MATCHES: %s" % (str(i), str(rule_matches[i]['correct_lines'])))
    elif rule_matches[i]['other_lines']:
        print("FAILED %s: INCORRECT MATCHES: %s" % (str(i), str(rule_matches[i]['other_lines'])))
    else:
        print("UNDEFINED %s" % str(i))

print("Total Number of cases: %s" % str(len(rules)))
