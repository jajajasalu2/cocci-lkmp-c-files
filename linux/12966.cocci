@ initialize:python @
@@
from collections import defaultdict
rule_matches = defaultdict(dict)

@ r1 @
symbol cocci_id;
position p;
@@
 unsigned long cocci_id@p ;

@ script:python depends on r1 @
p << r1.p;
@@

if 1 not in rule_matches:
    rule_matches[1] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['63']:
    rule_matches[1]['correct_lines'].append(p[0].line)
else:
    rule_matches[1]['other_lines'].append(p[0].line)

@ r2 @
symbol cocci_id;
position p;
@@
 enum pwrap_regs cocci_id@p ;

@ script:python depends on r2 @
p << r2.p;
@@

if 2 not in rule_matches:
    rule_matches[2] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['65']:
    rule_matches[2]['correct_lines'].append(p[0].line)
else:
    rule_matches[2]['other_lines'].append(p[0].line)

@ r3 @
symbol cocci_id;
position p;
typedef u32;
@@
 struct pmic_wrapper_type {  int * regs ;  enum pwrap_type type ;  u32 arb_en_all ;  u32 int_en_all ;  u32 int1_en_all ;  u32 spi_w ;  u32 wdt_src ;  u32 caps ;  int ( * init_reg_clock ) ( struct pmic_wrapper * wrp ) ;  int ( * init_soc_specific ) ( struct pmic_wrapper * wrp ) ; } cocci_id@p ;

@ script:python depends on r3 @
p << r3.p;
@@

if 3 not in rule_matches:
    rule_matches[3] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['2', '13']:
    rule_matches[3]['correct_lines'].append(p[0].line)
else:
    rule_matches[3]['other_lines'].append(p[0].line)

@ r4 @
symbol cocci_id;
position p;
@@
 struct platform_driver cocci_id@p ;

@ script:python depends on r4 @
p << r4.p;
@@

if 4 not in rule_matches:
    rule_matches[4] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['42']:
    rule_matches[4]['correct_lines'].append(p[0].line)
else:
    rule_matches[4]['other_lines'].append(p[0].line)

@ r5 @
symbol cocci_id;
position p;
@@
 struct pmic_wrapper * cocci_id@p ;

@ script:python depends on r5 @
p << r5.p;
@@

if 5 not in rule_matches:
    rule_matches[5] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['56']:
    rule_matches[5]['correct_lines'].append(p[0].line)
else:
    rule_matches[5]['other_lines'].append(p[0].line)

@ r6 @
symbol cocci_id;
position p;
typedef u32;
@@
 u32 * cocci_id@p ;

@ script:python depends on r6 @
p << r6.p;
@@

if 6 not in rule_matches:
    rule_matches[6] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['62']:
    rule_matches[6]['correct_lines'].append(p[0].line)
else:
    rule_matches[6]['other_lines'].append(p[0].line)

@ r7 @
symbol cocci_id;
position p;
@@
 enum dew_regs { PWRAP_DEW_BASE , PWRAP_DEW_DIO_EN , PWRAP_DEW_READ_TEST , PWRAP_DEW_WRITE_TEST , PWRAP_DEW_CRC_EN , PWRAP_DEW_CRC_VAL , PWRAP_DEW_MON_GRP_SEL , PWRAP_DEW_CIPHER_KEY_SEL , PWRAP_DEW_CIPHER_IV_SEL , PWRAP_DEW_CIPHER_RDY , PWRAP_DEW_CIPHER_MODE , PWRAP_DEW_CIPHER_SWRST , PWRAP_DEW_CIPHER_EN , PWRAP_DEW_RDDMY_NO , PWRAP_SMT_CON1 , PWRAP_DRV_CON1 , PWRAP_FILTER_CON0 , PWRAP_GPIO_PULLEN0_CLR , PWRAP_RG_SPI_CON0 , PWRAP_RG_SPI_RECORD0 , PWRAP_RG_SPI_CON2 , PWRAP_RG_SPI_CON3 , PWRAP_RG_SPI_CON4 , PWRAP_RG_SPI_CON5 , PWRAP_RG_SPI_CON6 , PWRAP_RG_SPI_CON7 , PWRAP_RG_SPI_CON8 , PWRAP_RG_SPI_CON13 , PWRAP_SPISLV_KEY , PWRAP_DEW_EVENT_OUT_EN , PWRAP_DEW_EVENT_SRC_EN , PWRAP_DEW_EVENT_SRC , PWRAP_DEW_EVENT_FLAG , PWRAP_DEW_MON_FLAG_SEL , PWRAP_DEW_EVENT_TEST , PWRAP_DEW_CIPHER_LOAD , PWRAP_DEW_CIPHER_START , } cocci_id@p ;

@ script:python depends on r7 @
p << r7.p;
@@

if 7 not in rule_matches:
    rule_matches[7] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['39']:
    rule_matches[7]['correct_lines'].append(p[0].line)
else:
    rule_matches[7]['other_lines'].append(p[0].line)

@ r8 @
symbol cocci_id;
position p;
@@
 signed char cocci_id@p [ 16 ] ;

@ script:python depends on r8 @
p << r8.p;
@@

if 8 not in rule_matches:
    rule_matches[8] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['61']:
    rule_matches[8]['correct_lines'].append(p[0].line)
else:
    rule_matches[8]['other_lines'].append(p[0].line)

@ r9 @
symbol cocci_id;
position p;
@@
 void cocci_id@p ;

@ script:python depends on r9 @
p << r9.p;
@@

if 9 not in rule_matches:
    rule_matches[9] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['59']:
    rule_matches[9]['correct_lines'].append(p[0].line)
else:
    rule_matches[9]['other_lines'].append(p[0].line)

@ r10 @
symbol cocci_id;
position p;
@@
 enum pwrap_regs { PWRAP_MUX_SEL , PWRAP_WRAP_EN , PWRAP_DIO_EN , PWRAP_SIDLY , PWRAP_CSHEXT_WRITE , PWRAP_CSHEXT_READ , PWRAP_CSLEXT_START , PWRAP_CSLEXT_END , PWRAP_STAUPD_PRD , PWRAP_STAUPD_GRPEN , PWRAP_STAUPD_MAN_TRIG , PWRAP_STAUPD_STA , PWRAP_WRAP_STA , PWRAP_HARB_INIT , PWRAP_HARB_HPRIO , PWRAP_HIPRIO_ARB_EN , PWRAP_HARB_STA0 , PWRAP_HARB_STA1 , PWRAP_MAN_EN , PWRAP_MAN_CMD , PWRAP_MAN_RDATA , PWRAP_MAN_VLDCLR , PWRAP_WACS0_EN , PWRAP_INIT_DONE0 , PWRAP_WACS0_CMD , PWRAP_WACS0_RDATA , PWRAP_WACS0_VLDCLR , PWRAP_WACS1_EN , PWRAP_INIT_DONE1 , PWRAP_WACS1_CMD , PWRAP_WACS1_RDATA , PWRAP_WACS1_VLDCLR , PWRAP_WACS2_EN , PWRAP_INIT_DONE2 , PWRAP_WACS2_CMD , PWRAP_WACS2_RDATA , PWRAP_WACS2_VLDCLR , PWRAP_INT_EN , PWRAP_INT_FLG_RAW , PWRAP_INT_FLG , PWRAP_INT_CLR , PWRAP_SIG_ADR , PWRAP_SIG_MODE , PWRAP_SIG_VALUE , PWRAP_SIG_ERRVAL , PWRAP_CRC_EN , PWRAP_TIMER_EN , PWRAP_TIMER_STA , PWRAP_WDT_UNIT , PWRAP_WDT_SRC_EN , PWRAP_WDT_FLG , PWRAP_DEBUG_INT_SEL , PWRAP_CIPHER_KEY_SEL , PWRAP_CIPHER_IV_SEL , PWRAP_CIPHER_RDY , PWRAP_CIPHER_MODE , PWRAP_CIPHER_SWRST , PWRAP_DCM_EN , PWRAP_DCM_DBC_PRD , PWRAP_EINT_STA0_ADR , PWRAP_EINT_STA1_ADR , PWRAP_ADC_CMD_ADDR , PWRAP_PWRAP_ADC_CMD , PWRAP_ADC_RDY_ADDR , PWRAP_ADC_RDATA_ADDR1 , PWRAP_ADC_RDATA_ADDR2 , PWRAP_STA , PWRAP_CLR , PWRAP_DVFS_ADR8 , PWRAP_DVFS_WDATA8 , PWRAP_DVFS_ADR9 , PWRAP_DVFS_WDATA9 , PWRAP_DVFS_ADR10 , PWRAP_DVFS_WDATA10 , PWRAP_DVFS_ADR11 , PWRAP_DVFS_WDATA11 , PWRAP_DVFS_ADR12 , PWRAP_DVFS_WDATA12 , PWRAP_DVFS_ADR13 , PWRAP_DVFS_WDATA13 , PWRAP_DVFS_ADR14 , PWRAP_DVFS_WDATA14 , PWRAP_DVFS_ADR15 , PWRAP_DVFS_WDATA15 , PWRAP_EXT_CK , PWRAP_ADC_RDATA_ADDR , PWRAP_GPS_STA , PWRAP_SW_RST , PWRAP_DVFS_STEP_CTRL0 , PWRAP_DVFS_STEP_CTRL1 , PWRAP_DVFS_STEP_CTRL2 , PWRAP_SPI2_CTRL , PWRAP_CSHEXT , PWRAP_EVENT_IN_EN , PWRAP_EVENT_DST_EN , PWRAP_RRARB_INIT , PWRAP_RRARB_EN , PWRAP_RRARB_STA0 , PWRAP_RRARB_STA1 , PWRAP_EVENT_STA , PWRAP_EVENT_STACLR , PWRAP_CIPHER_LOAD , PWRAP_CIPHER_START , PWRAP_RDDMY , PWRAP_SI_CK_CON , PWRAP_DVFS_ADR0 , PWRAP_DVFS_WDATA0 , PWRAP_DVFS_ADR1 , PWRAP_DVFS_WDATA1 , PWRAP_DVFS_ADR2 , PWRAP_DVFS_WDATA2 , PWRAP_DVFS_ADR3 , PWRAP_DVFS_WDATA3 , PWRAP_DVFS_ADR4 , PWRAP_DVFS_WDATA4 , PWRAP_DVFS_ADR5 , PWRAP_DVFS_WDATA5 , PWRAP_DVFS_ADR6 , PWRAP_DVFS_WDATA6 , PWRAP_DVFS_ADR7 , PWRAP_DVFS_WDATA7 , PWRAP_SPMINF_STA , PWRAP_CIPHER_EN , PWRAP_SI_SAMPLE_CTRL , PWRAP_CSLEXT_WRITE , PWRAP_CSLEXT_READ , PWRAP_EXT_CK_WRITE , PWRAP_STAUPD_CTRL , PWRAP_WACS_P2P_EN , PWRAP_INIT_DONE_P2P , PWRAP_WACS_MD32_EN , PWRAP_INIT_DONE_MD32 , PWRAP_INT1_EN , PWRAP_INT1_FLG , PWRAP_INT1_CLR , PWRAP_WDT_SRC_EN_1 , PWRAP_INT_GPS_AUXADC_CMD_ADDR , PWRAP_INT_GPS_AUXADC_CMD , PWRAP_INT_GPS_AUXADC_RDATA_ADDR , PWRAP_EXT_GPS_AUXADC_RDATA_ADDR , PWRAP_GPSINF_0_STA , PWRAP_GPSINF_1_STA , PWRAP_OP_TYPE , PWRAP_MSB_FIRST , } cocci_id@p ;

@ script:python depends on r10 @
p << r10.p;
@@

if 10 not in rule_matches:
    rule_matches[10] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['41']:
    rule_matches[10]['correct_lines'].append(p[0].line)
else:
    rule_matches[10]['other_lines'].append(p[0].line)

@ r11 @
symbol cocci_id;
position p;
@@
 int cocci_id@p [ ] ;

@ script:python depends on r11 @
p << r11.p;
@@

if 11 not in rule_matches:
    rule_matches[11] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['40']:
    rule_matches[11]['correct_lines'].append(p[0].line)
else:
    rule_matches[11]['other_lines'].append(p[0].line)

@ r12 @
symbol cocci_id;
position p;
@@
 void * cocci_id@p ;

@ script:python depends on r12 @
p << r12.p;
@@

if 12 not in rule_matches:
    rule_matches[12] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['53']:
    rule_matches[12]['correct_lines'].append(p[0].line)
else:
    rule_matches[12]['other_lines'].append(p[0].line)

@ r13 @
symbol cocci_id;
position p;
@@
 const struct pmic_wrapper_type cocci_id@p ;

@ script:python depends on r13 @
p << r13.p;
@@

if 13 not in rule_matches:
    rule_matches[13] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['49']:
    rule_matches[13]['correct_lines'].append(p[0].line)
else:
    rule_matches[13]['other_lines'].append(p[0].line)

@ r14 @
symbol cocci_id;
position p;
@@
 enum pwrap_type { PWRAP_MT2701 , PWRAP_MT6765 , PWRAP_MT6797 , PWRAP_MT7622 , PWRAP_MT8135 , PWRAP_MT8173 , PWRAP_MT8183 , PWRAP_MT8516 , } cocci_id@p ;

@ script:python depends on r14 @
p << r14.p;
@@

if 14 not in rule_matches:
    rule_matches[14] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['37']:
    rule_matches[14]['correct_lines'].append(p[0].line)
else:
    rule_matches[14]['other_lines'].append(p[0].line)

@ r15 @
symbol cocci_id;
position p;
typedef bool;
@@
 bool ( * cocci_id@p ) ( struct pmic_wrapper * ) ;

@ script:python depends on r15 @
p << r15.p;
@@

if 15 not in rule_matches:
    rule_matches[15] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['64']:
    rule_matches[15]['correct_lines'].append(p[0].line)
else:
    rule_matches[15]['other_lines'].append(p[0].line)

@ r16 @
symbol cocci_id;
position p;
typedef irqreturn_t;
@@
 irqreturn_t cocci_id@p ;

@ script:python depends on r16 @
p << r16.p;
@@

if 16 not in rule_matches:
    rule_matches[16] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['52']:
    rule_matches[16]['correct_lines'].append(p[0].line)
else:
    rule_matches[16]['other_lines'].append(p[0].line)

@ r17 @
symbol cocci_id;
position p;
typedef u32;
@@
 u32 cocci_id@p ;

@ script:python depends on r17 @
p << r17.p;
@@

if 17 not in rule_matches:
    rule_matches[17] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['54']:
    rule_matches[17]['correct_lines'].append(p[0].line)
else:
    rule_matches[17]['other_lines'].append(p[0].line)

@ r18 @
symbol cocci_id;
position p;
typedef bool;
@@
 bool cocci_id@p ;

@ script:python depends on r18 @
p << r18.p;
@@

if 18 not in rule_matches:
    rule_matches[18] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['55']:
    rule_matches[18]['correct_lines'].append(p[0].line)
else:
    rule_matches[18]['other_lines'].append(p[0].line)

@ r19 @
symbol cocci_id;
position p;
@@
 struct pmic_wrapper_type cocci_id@p ;

@ script:python depends on r19 @
p << r19.p;
@@

if 19 not in rule_matches:
    rule_matches[19] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['48']:
    rule_matches[19]['correct_lines'].append(p[0].line)
else:
    rule_matches[19]['other_lines'].append(p[0].line)

@ r20 @
symbol cocci_id;
position p;
typedef u8;
@@
 u8 cocci_id@p ;

@ script:python depends on r20 @
p << r20.p;
@@

if 20 not in rule_matches:
    rule_matches[20] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['58']:
    rule_matches[20]['correct_lines'].append(p[0].line)
else:
    rule_matches[20]['other_lines'].append(p[0].line)

@ r21 @
symbol cocci_id;
position p;
@@
 const struct pwrap_slv_type cocci_id@p ;

@ script:python depends on r21 @
p << r21.p;
@@

if 21 not in rule_matches:
    rule_matches[21] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['50']:
    rule_matches[21]['correct_lines'].append(p[0].line)
else:
    rule_matches[21]['other_lines'].append(p[0].line)

@ r22 @
symbol cocci_id;
position p;
@@
 struct device_node * cocci_id@p ;

@ script:python depends on r22 @
p << r22.p;
@@

if 22 not in rule_matches:
    rule_matches[22] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['45']:
    rule_matches[22]['correct_lines'].append(p[0].line)
else:
    rule_matches[22]['other_lines'].append(p[0].line)

@ r23 @
symbol cocci_id;
position p;
@@
 enum pmic_type { PMIC_MT6323 , PMIC_MT6351 , PMIC_MT6357 , PMIC_MT6358 , PMIC_MT6380 , PMIC_MT6397 , } cocci_id@p ;

@ script:python depends on r23 @
p << r23.p;
@@

if 23 not in rule_matches:
    rule_matches[23] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['38']:
    rule_matches[23]['correct_lines'].append(p[0].line)
else:
    rule_matches[23]['other_lines'].append(p[0].line)

@ r24 @
symbol cocci_id;
position p;
@@
 struct pmic_wrapper cocci_id@p ;

@ script:python depends on r24 @
p << r24.p;
@@

if 24 not in rule_matches:
    rule_matches[24] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['36']:
    rule_matches[24]['correct_lines'].append(p[0].line)
else:
    rule_matches[24]['other_lines'].append(p[0].line)

@ r25 @
symbol cocci_id;
position p;
@@
 struct platform_device * cocci_id@p ;

@ script:python depends on r25 @
p << r25.p;
@@

if 25 not in rule_matches:
    rule_matches[25] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['46']:
    rule_matches[25]['correct_lines'].append(p[0].line)
else:
    rule_matches[25]['other_lines'].append(p[0].line)

@ r26 @
symbol cocci_id;
position p;
@@
 struct pmic_wrapper {  struct device * dev ;  void __iomem * base ;  struct regmap * regmap ;  const struct pmic_wrapper_type * master ;  const struct pwrap_slv_type * slave ;  struct clk * clk_spi ;  struct clk * clk_wrap ;  struct reset_control * rstc ;  struct reset_control * rstc_bridge ;  void __iomem * bridge_base ; } cocci_id@p ;

@ script:python depends on r26 @
p << r26.p;
@@

if 26 not in rule_matches:
    rule_matches[26] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['14', '25']:
    rule_matches[26]['correct_lines'].append(p[0].line)
else:
    rule_matches[26]['other_lines'].append(p[0].line)

@ r27 @
symbol cocci_id;
position p;
@@
 const struct regmap_config cocci_id@p ;

@ script:python depends on r27 @
p << r27.p;
@@

if 27 not in rule_matches:
    rule_matches[27] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['51']:
    rule_matches[27]['correct_lines'].append(p[0].line)
else:
    rule_matches[27]['other_lines'].append(p[0].line)

@ r28 @
symbol cocci_id;
position p;
typedef u32;
@@
 const u32 cocci_id@p [ ] ;

@ script:python depends on r28 @
p << r28.p;
@@

if 28 not in rule_matches:
    rule_matches[28] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['60']:
    rule_matches[28]['correct_lines'].append(p[0].line)
else:
    rule_matches[28]['other_lines'].append(p[0].line)

@ r29 @
symbol cocci_id;
position p;
@@
 int cocci_id@p ;

@ script:python depends on r29 @
p << r29.p;
@@

if 29 not in rule_matches:
    rule_matches[29] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['57']:
    rule_matches[29]['correct_lines'].append(p[0].line)
else:
    rule_matches[29]['other_lines'].append(p[0].line)

@ r30 @
symbol cocci_id;
position p;
@@
 const struct of_device_id * cocci_id@p ;

@ script:python depends on r30 @
p << r30.p;
@@

if 30 not in rule_matches:
    rule_matches[30] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['44']:
    rule_matches[30]['correct_lines'].append(p[0].line)
else:
    rule_matches[30]['other_lines'].append(p[0].line)

@ r31 @
symbol cocci_id;
position p;
@@
 struct resource * cocci_id@p ;

@ script:python depends on r31 @
p << r31.p;
@@

if 31 not in rule_matches:
    rule_matches[31] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['43']:
    rule_matches[31]['correct_lines'].append(p[0].line)
else:
    rule_matches[31]['other_lines'].append(p[0].line)

@ r32 @
symbol cocci_id;
position p;
@@
 const struct of_device_id cocci_id@p [ ] ;

@ script:python depends on r32 @
p << r32.p;
@@

if 32 not in rule_matches:
    rule_matches[32] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['47']:
    rule_matches[32]['correct_lines'].append(p[0].line)
else:
    rule_matches[32]['other_lines'].append(p[0].line)

@ finalize:python @
@@
rules = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32]
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
