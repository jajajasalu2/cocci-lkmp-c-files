@ initialize:python @
@@
from collections import defaultdict
rule_matches = defaultdict(dict)

@ r1 @
symbol cocci_id;
position p;
@@
 enum imx51_pads { MX51_PAD_RESERVE0 = 0 , MX51_PAD_RESERVE1 = 1 , MX51_PAD_RESERVE2 = 2 , MX51_PAD_RESERVE3 = 3 , MX51_PAD_RESERVE4 = 4 , MX51_PAD_RESERVE5 = 5 , MX51_PAD_RESERVE6 = 6 , MX51_PAD_EIM_DA0 = 7 , MX51_PAD_EIM_DA1 = 8 , MX51_PAD_EIM_DA2 = 9 , MX51_PAD_EIM_DA3 = 10 , MX51_PAD_EIM_DA4 = 11 , MX51_PAD_EIM_DA5 = 12 , MX51_PAD_EIM_DA6 = 13 , MX51_PAD_EIM_DA7 = 14 , MX51_PAD_EIM_DA8 = 15 , MX51_PAD_EIM_DA9 = 16 , MX51_PAD_EIM_DA10 = 17 , MX51_PAD_EIM_DA11 = 18 , MX51_PAD_EIM_DA12 = 19 , MX51_PAD_EIM_DA13 = 20 , MX51_PAD_EIM_DA14 = 21 , MX51_PAD_EIM_DA15 = 22 , MX51_PAD_EIM_D16 = 23 , MX51_PAD_EIM_D17 = 24 , MX51_PAD_EIM_D18 = 25 , MX51_PAD_EIM_D19 = 26 , MX51_PAD_EIM_D20 = 27 , MX51_PAD_EIM_D21 = 28 , MX51_PAD_EIM_D22 = 29 , MX51_PAD_EIM_D23 = 30 , MX51_PAD_EIM_D24 = 31 , MX51_PAD_EIM_D25 = 32 , MX51_PAD_EIM_D26 = 33 , MX51_PAD_EIM_D27 = 34 , MX51_PAD_EIM_D28 = 35 , MX51_PAD_EIM_D29 = 36 , MX51_PAD_EIM_D30 = 37 , MX51_PAD_EIM_D31 = 38 , MX51_PAD_EIM_A16 = 39 , MX51_PAD_EIM_A17 = 40 , MX51_PAD_EIM_A18 = 41 , MX51_PAD_EIM_A19 = 42 , MX51_PAD_EIM_A20 = 43 , MX51_PAD_EIM_A21 = 44 , MX51_PAD_EIM_A22 = 45 , MX51_PAD_EIM_A23 = 46 , MX51_PAD_EIM_A24 = 47 , MX51_PAD_EIM_A25 = 48 , MX51_PAD_EIM_A26 = 49 , MX51_PAD_EIM_A27 = 50 , MX51_PAD_EIM_EB0 = 51 , MX51_PAD_EIM_EB1 = 52 , MX51_PAD_EIM_EB2 = 53 , MX51_PAD_EIM_EB3 = 54 , MX51_PAD_EIM_OE = 55 , MX51_PAD_EIM_CS0 = 56 , MX51_PAD_EIM_CS1 = 57 , MX51_PAD_EIM_CS2 = 58 , MX51_PAD_EIM_CS3 = 59 , MX51_PAD_EIM_CS4 = 60 , MX51_PAD_EIM_CS5 = 61 , MX51_PAD_EIM_DTACK = 62 , MX51_PAD_EIM_LBA = 63 , MX51_PAD_EIM_CRE = 64 , MX51_PAD_DRAM_CS1 = 65 , MX51_PAD_NANDF_WE_B = 66 , MX51_PAD_NANDF_RE_B = 67 , MX51_PAD_NANDF_ALE = 68 , MX51_PAD_NANDF_CLE = 69 , MX51_PAD_NANDF_WP_B = 70 , MX51_PAD_NANDF_RB0 = 71 , MX51_PAD_NANDF_RB1 = 72 , MX51_PAD_NANDF_RB2 = 73 , MX51_PAD_NANDF_RB3 = 74 , MX51_PAD_GPIO_NAND = 75 , MX51_PAD_NANDF_CS0 = 76 , MX51_PAD_NANDF_CS1 = 77 , MX51_PAD_NANDF_CS2 = 78 , MX51_PAD_NANDF_CS3 = 79 , MX51_PAD_NANDF_CS4 = 80 , MX51_PAD_NANDF_CS5 = 81 , MX51_PAD_NANDF_CS6 = 82 , MX51_PAD_NANDF_CS7 = 83 , MX51_PAD_NANDF_RDY_INT = 84 , MX51_PAD_NANDF_D15 = 85 , MX51_PAD_NANDF_D14 = 86 , MX51_PAD_NANDF_D13 = 87 , MX51_PAD_NANDF_D12 = 88 , MX51_PAD_NANDF_D11 = 89 , MX51_PAD_NANDF_D10 = 90 , MX51_PAD_NANDF_D9 = 91 , MX51_PAD_NANDF_D8 = 92 , MX51_PAD_NANDF_D7 = 93 , MX51_PAD_NANDF_D6 = 94 , MX51_PAD_NANDF_D5 = 95 , MX51_PAD_NANDF_D4 = 96 , MX51_PAD_NANDF_D3 = 97 , MX51_PAD_NANDF_D2 = 98 , MX51_PAD_NANDF_D1 = 99 , MX51_PAD_NANDF_D0 = 100 , MX51_PAD_CSI1_D8 = 101 , MX51_PAD_CSI1_D9 = 102 , MX51_PAD_CSI1_D10 = 103 , MX51_PAD_CSI1_D11 = 104 , MX51_PAD_CSI1_D12 = 105 , MX51_PAD_CSI1_D13 = 106 , MX51_PAD_CSI1_D14 = 107 , MX51_PAD_CSI1_D15 = 108 , MX51_PAD_CSI1_D16 = 109 , MX51_PAD_CSI1_D17 = 110 , MX51_PAD_CSI1_D18 = 111 , MX51_PAD_CSI1_D19 = 112 , MX51_PAD_CSI1_VSYNC = 113 , MX51_PAD_CSI1_HSYNC = 114 , MX51_PAD_CSI2_D12 = 115 , MX51_PAD_CSI2_D13 = 116 , MX51_PAD_CSI2_D14 = 117 , MX51_PAD_CSI2_D15 = 118 , MX51_PAD_CSI2_D16 = 119 , MX51_PAD_CSI2_D17 = 120 , MX51_PAD_CSI2_D18 = 121 , MX51_PAD_CSI2_D19 = 122 , MX51_PAD_CSI2_VSYNC = 123 , MX51_PAD_CSI2_HSYNC = 124 , MX51_PAD_CSI2_PIXCLK = 125 , MX51_PAD_I2C1_CLK = 126 , MX51_PAD_I2C1_DAT = 127 , MX51_PAD_AUD3_BB_TXD = 128 , MX51_PAD_AUD3_BB_RXD = 129 , MX51_PAD_AUD3_BB_CK = 130 , MX51_PAD_AUD3_BB_FS = 131 , MX51_PAD_CSPI1_MOSI = 132 , MX51_PAD_CSPI1_MISO = 133 , MX51_PAD_CSPI1_SS0 = 134 , MX51_PAD_CSPI1_SS1 = 135 , MX51_PAD_CSPI1_RDY = 136 , MX51_PAD_CSPI1_SCLK = 137 , MX51_PAD_UART1_RXD = 138 , MX51_PAD_UART1_TXD = 139 , MX51_PAD_UART1_RTS = 140 , MX51_PAD_UART1_CTS = 141 , MX51_PAD_UART2_RXD = 142 , MX51_PAD_UART2_TXD = 143 , MX51_PAD_UART3_RXD = 144 , MX51_PAD_UART3_TXD = 145 , MX51_PAD_OWIRE_LINE = 146 , MX51_PAD_KEY_ROW0 = 147 , MX51_PAD_KEY_ROW1 = 148 , MX51_PAD_KEY_ROW2 = 149 , MX51_PAD_KEY_ROW3 = 150 , MX51_PAD_KEY_COL0 = 151 , MX51_PAD_KEY_COL1 = 152 , MX51_PAD_KEY_COL2 = 153 , MX51_PAD_KEY_COL3 = 154 , MX51_PAD_KEY_COL4 = 155 , MX51_PAD_KEY_COL5 = 156 , MX51_PAD_RESERVE7 = 157 , MX51_PAD_USBH1_CLK = 158 , MX51_PAD_USBH1_DIR = 159 , MX51_PAD_USBH1_STP = 160 , MX51_PAD_USBH1_NXT = 161 , MX51_PAD_USBH1_DATA0 = 162 , MX51_PAD_USBH1_DATA1 = 163 , MX51_PAD_USBH1_DATA2 = 164 , MX51_PAD_USBH1_DATA3 = 165 , MX51_PAD_USBH1_DATA4 = 166 , MX51_PAD_USBH1_DATA5 = 167 , MX51_PAD_USBH1_DATA6 = 168 , MX51_PAD_USBH1_DATA7 = 169 , MX51_PAD_DI1_PIN11 = 170 , MX51_PAD_DI1_PIN12 = 171 , MX51_PAD_DI1_PIN13 = 172 , MX51_PAD_DI1_D0_CS = 173 , MX51_PAD_DI1_D1_CS = 174 , MX51_PAD_DISPB2_SER_DIN = 175 , MX51_PAD_DISPB2_SER_DIO = 176 , MX51_PAD_DISPB2_SER_CLK = 177 , MX51_PAD_DISPB2_SER_RS = 178 , MX51_PAD_DISP1_DAT0 = 179 , MX51_PAD_DISP1_DAT1 = 180 , MX51_PAD_DISP1_DAT2 = 181 , MX51_PAD_DISP1_DAT3 = 182 , MX51_PAD_DISP1_DAT4 = 183 , MX51_PAD_DISP1_DAT5 = 184 , MX51_PAD_DISP1_DAT6 = 185 , MX51_PAD_DISP1_DAT7 = 186 , MX51_PAD_DISP1_DAT8 = 187 , MX51_PAD_DISP1_DAT9 = 188 , MX51_PAD_DISP1_DAT10 = 189 , MX51_PAD_DISP1_DAT11 = 190 , MX51_PAD_DISP1_DAT12 = 191 , MX51_PAD_DISP1_DAT13 = 192 , MX51_PAD_DISP1_DAT14 = 193 , MX51_PAD_DISP1_DAT15 = 194 , MX51_PAD_DISP1_DAT16 = 195 , MX51_PAD_DISP1_DAT17 = 196 , MX51_PAD_DISP1_DAT18 = 197 , MX51_PAD_DISP1_DAT19 = 198 , MX51_PAD_DISP1_DAT20 = 199 , MX51_PAD_DISP1_DAT21 = 200 , MX51_PAD_DISP1_DAT22 = 201 , MX51_PAD_DISP1_DAT23 = 202 , MX51_PAD_DI1_PIN3 = 203 , MX51_PAD_DI1_PIN2 = 204 , MX51_PAD_RESERVE8 = 205 , MX51_PAD_DI_GP2 = 206 , MX51_PAD_DI_GP3 = 207 , MX51_PAD_DI2_PIN4 = 208 , MX51_PAD_DI2_PIN2 = 209 , MX51_PAD_DI2_PIN3 = 210 , MX51_PAD_DI2_DISP_CLK = 211 , MX51_PAD_DI_GP4 = 212 , MX51_PAD_DISP2_DAT0 = 213 , MX51_PAD_DISP2_DAT1 = 214 , MX51_PAD_DISP2_DAT2 = 215 , MX51_PAD_DISP2_DAT3 = 216 , MX51_PAD_DISP2_DAT4 = 217 , MX51_PAD_DISP2_DAT5 = 218 , MX51_PAD_DISP2_DAT6 = 219 , MX51_PAD_DISP2_DAT7 = 220 , MX51_PAD_DISP2_DAT8 = 221 , MX51_PAD_DISP2_DAT9 = 222 , MX51_PAD_DISP2_DAT10 = 223 , MX51_PAD_DISP2_DAT11 = 224 , MX51_PAD_DISP2_DAT12 = 225 , MX51_PAD_DISP2_DAT13 = 226 , MX51_PAD_DISP2_DAT14 = 227 , MX51_PAD_DISP2_DAT15 = 228 , MX51_PAD_SD1_CMD = 229 , MX51_PAD_SD1_CLK = 230 , MX51_PAD_SD1_DATA0 = 231 , MX51_PAD_SD1_DATA1 = 232 , MX51_PAD_SD1_DATA2 = 233 , MX51_PAD_SD1_DATA3 = 234 , MX51_PAD_GPIO1_0 = 235 , MX51_PAD_GPIO1_1 = 236 , MX51_PAD_SD2_CMD = 237 , MX51_PAD_SD2_CLK = 238 , MX51_PAD_SD2_DATA0 = 239 , MX51_PAD_SD2_DATA1 = 240 , MX51_PAD_SD2_DATA2 = 241 , MX51_PAD_SD2_DATA3 = 242 , MX51_PAD_GPIO1_2 = 243 , MX51_PAD_GPIO1_3 = 244 , MX51_PAD_PMIC_INT_REQ = 245 , MX51_PAD_GPIO1_4 = 246 , MX51_PAD_GPIO1_5 = 247 , MX51_PAD_GPIO1_6 = 248 , MX51_PAD_GPIO1_7 = 249 , MX51_PAD_GPIO1_8 = 250 , MX51_PAD_GPIO1_9 = 251 , MX51_PAD_RESERVE9 = 252 , MX51_PAD_RESERVE10 = 253 , MX51_PAD_RESERVE11 = 254 , MX51_PAD_RESERVE12 = 255 , MX51_PAD_RESERVE13 = 256 , MX51_PAD_RESERVE14 = 257 , MX51_PAD_RESERVE15 = 258 , MX51_PAD_RESERVE16 = 259 , MX51_PAD_RESERVE17 = 260 , MX51_PAD_RESERVE18 = 261 , MX51_PAD_RESERVE19 = 262 , MX51_PAD_RESERVE20 = 263 , MX51_PAD_RESERVE21 = 264 , MX51_PAD_RESERVE22 = 265 , MX51_PAD_RESERVE23 = 266 , MX51_PAD_RESERVE24 = 267 , MX51_PAD_RESERVE25 = 268 , MX51_PAD_RESERVE26 = 269 , MX51_PAD_RESERVE27 = 270 , MX51_PAD_RESERVE28 = 271 , MX51_PAD_RESERVE29 = 272 , MX51_PAD_RESERVE30 = 273 , MX51_PAD_RESERVE31 = 274 , MX51_PAD_RESERVE32 = 275 , MX51_PAD_RESERVE33 = 276 , MX51_PAD_RESERVE34 = 277 , MX51_PAD_RESERVE35 = 278 , MX51_PAD_RESERVE36 = 279 , MX51_PAD_RESERVE37 = 280 , MX51_PAD_RESERVE38 = 281 , MX51_PAD_RESERVE39 = 282 , MX51_PAD_RESERVE40 = 283 , MX51_PAD_RESERVE41 = 284 , MX51_PAD_RESERVE42 = 285 , MX51_PAD_RESERVE43 = 286 , MX51_PAD_RESERVE44 = 287 , MX51_PAD_RESERVE45 = 288 , MX51_PAD_RESERVE46 = 289 , MX51_PAD_RESERVE47 = 290 , MX51_PAD_RESERVE48 = 291 , MX51_PAD_RESERVE49 = 292 , MX51_PAD_RESERVE50 = 293 , MX51_PAD_RESERVE51 = 294 , MX51_PAD_RESERVE52 = 295 , MX51_PAD_RESERVE53 = 296 , MX51_PAD_RESERVE54 = 297 , MX51_PAD_RESERVE55 = 298 , MX51_PAD_RESERVE56 = 299 , MX51_PAD_RESERVE57 = 300 , MX51_PAD_RESERVE58 = 301 , MX51_PAD_RESERVE59 = 302 , MX51_PAD_RESERVE60 = 303 , MX51_PAD_RESERVE61 = 304 , MX51_PAD_RESERVE62 = 305 , MX51_PAD_RESERVE63 = 306 , MX51_PAD_RESERVE64 = 307 , MX51_PAD_RESERVE65 = 308 , MX51_PAD_RESERVE66 = 309 , MX51_PAD_RESERVE67 = 310 , MX51_PAD_RESERVE68 = 311 , MX51_PAD_RESERVE69 = 312 , MX51_PAD_RESERVE70 = 313 , MX51_PAD_RESERVE71 = 314 , MX51_PAD_RESERVE72 = 315 , MX51_PAD_RESERVE73 = 316 , MX51_PAD_RESERVE74 = 317 , MX51_PAD_RESERVE75 = 318 , MX51_PAD_RESERVE76 = 319 , MX51_PAD_RESERVE77 = 320 , MX51_PAD_RESERVE78 = 321 , MX51_PAD_RESERVE79 = 322 , MX51_PAD_RESERVE80 = 323 , MX51_PAD_RESERVE81 = 324 , MX51_PAD_RESERVE82 = 325 , MX51_PAD_RESERVE83 = 326 , MX51_PAD_RESERVE84 = 327 , MX51_PAD_RESERVE85 = 328 , MX51_PAD_RESERVE86 = 329 , MX51_PAD_RESERVE87 = 330 , MX51_PAD_RESERVE88 = 331 , MX51_PAD_RESERVE89 = 332 , MX51_PAD_RESERVE90 = 333 , MX51_PAD_RESERVE91 = 334 , MX51_PAD_RESERVE92 = 335 , MX51_PAD_RESERVE93 = 336 , MX51_PAD_RESERVE94 = 337 , MX51_PAD_RESERVE95 = 338 , MX51_PAD_RESERVE96 = 339 , MX51_PAD_RESERVE97 = 340 , MX51_PAD_RESERVE98 = 341 , MX51_PAD_RESERVE99 = 342 , MX51_PAD_RESERVE100 = 343 , MX51_PAD_RESERVE101 = 344 , MX51_PAD_RESERVE102 = 345 , MX51_PAD_RESERVE103 = 346 , MX51_PAD_RESERVE104 = 347 , MX51_PAD_RESERVE105 = 348 , MX51_PAD_RESERVE106 = 349 , MX51_PAD_RESERVE107 = 350 , MX51_PAD_RESERVE108 = 351 , MX51_PAD_RESERVE109 = 352 , MX51_PAD_RESERVE110 = 353 , MX51_PAD_RESERVE111 = 354 , MX51_PAD_RESERVE112 = 355 , MX51_PAD_RESERVE113 = 356 , MX51_PAD_RESERVE114 = 357 , MX51_PAD_RESERVE115 = 358 , MX51_PAD_RESERVE116 = 359 , MX51_PAD_RESERVE117 = 360 , MX51_PAD_RESERVE118 = 361 , MX51_PAD_RESERVE119 = 362 , MX51_PAD_RESERVE120 = 363 , MX51_PAD_RESERVE121 = 364 , MX51_PAD_CSI1_PIXCLK = 365 , MX51_PAD_CSI1_MCLK = 366 , } cocci_id@p ;

@ script:python depends on r1 @
p << r1.p;
@@

if 1 not in rule_matches:
    rule_matches[1] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['10']:
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
if p[0].line in ['4']:
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
if p[0].line in ['6']:
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
if p[0].line in ['3']:
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
if p[0].line in ['5']:
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
if p[0].line in ['9']:
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
if p[0].line in ['7']:
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
if p[0].line in ['8']:
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
