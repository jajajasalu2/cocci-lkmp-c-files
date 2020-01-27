@ initialize:python @
@@
from collections import defaultdict
rule_matches = defaultdict(dict)

@ r1 @
symbol cocci_id;
position p;
@@
 struct phy * cocci_id@p ;

@ script:python depends on r1 @
p << r1.p;
@@

if 1 not in rule_matches:
    rule_matches[1] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['29']:
    rule_matches[1]['correct_lines'].append(p[0].line)
else:
    rule_matches[1]['other_lines'].append(p[0].line)

@ r2 @
symbol cocci_id;
position p;
@@
 struct device * cocci_id@p ;

@ script:python depends on r2 @
p << r2.p;
@@

if 2 not in rule_matches:
    rule_matches[2] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['33']:
    rule_matches[2]['correct_lines'].append(p[0].line)
else:
    rule_matches[2]['other_lines'].append(p[0].line)

@ r3 @
symbol cocci_id;
position p;
@@
 struct platform_driver cocci_id@p ;

@ script:python depends on r3 @
p << r3.p;
@@

if 3 not in rule_matches:
    rule_matches[3] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['3']:
    rule_matches[3]['correct_lines'].append(p[0].line)
else:
    rule_matches[3]['other_lines'].append(p[0].line)

@ r4 @
symbol cocci_id;
position p;
@@
 enum brcm_sata_phy_rxaeq_mode { RXAEQ_MODE_OFF = 0 , RXAEQ_MODE_AUTO , RXAEQ_MODE_MANUAL , } cocci_id@p ;

@ script:python depends on r4 @
p << r4.p;
@@

if 4 not in rule_matches:
    rule_matches[4] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['37']:
    rule_matches[4]['correct_lines'].append(p[0].line)
else:
    rule_matches[4]['other_lines'].append(p[0].line)

@ r5 @
symbol cocci_id;
position p;
@@
 void cocci_id@p ;

@ script:python depends on r5 @
p << r5.p;
@@

if 5 not in rule_matches:
    rule_matches[5] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['40']:
    rule_matches[5]['correct_lines'].append(p[0].line)
else:
    rule_matches[5]['other_lines'].append(p[0].line)

@ r6 @
symbol cocci_id;
position p;
@@
 struct brcm_sata_phy * cocci_id@p ;

@ script:python depends on r6 @
p << r6.p;
@@

if 6 not in rule_matches:
    rule_matches[6] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['38']:
    rule_matches[6]['correct_lines'].append(p[0].line)
else:
    rule_matches[6]['other_lines'].append(p[0].line)

@ r7 @
symbol cocci_id;
position p;
@@
 enum sata_phy_ctrl_regs { PHY_CTRL_1 = 0x0 , PHY_CTRL_1_RESET = BIT ( 0 ) , } cocci_id@p ;

@ script:python depends on r7 @
p << r7.p;
@@

if 7 not in rule_matches:
    rule_matches[7] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['41']:
    rule_matches[7]['correct_lines'].append(p[0].line)
else:
    rule_matches[7]['other_lines'].append(p[0].line)

@ r8 @
symbol cocci_id;
position p;
@@
 void * cocci_id@p ;

@ script:python depends on r8 @
p << r8.p;
@@

if 8 not in rule_matches:
    rule_matches[8] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['18']:
    rule_matches[8]['correct_lines'].append(p[0].line)
else:
    rule_matches[8]['other_lines'].append(p[0].line)

@ r9 @
symbol cocci_id;
position p;
@@
 enum brcm_sata_phy_version cocci_id@p ;

@ script:python depends on r9 @
p << r9.p;
@@

if 9 not in rule_matches:
    rule_matches[9] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['11']:
    rule_matches[9]['correct_lines'].append(p[0].line)
else:
    rule_matches[9]['other_lines'].append(p[0].line)

@ r10 @
symbol cocci_id;
position p;
typedef u32;
@@
 u32 cocci_id@p ;

@ script:python depends on r10 @
p << r10.p;
@@

if 10 not in rule_matches:
    rule_matches[10] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['31']:
    rule_matches[10]['correct_lines'].append(p[0].line)
else:
    rule_matches[10]['other_lines'].append(p[0].line)

@ r11 @
symbol cocci_id;
position p;
@@
 struct brcm_sata_phy {  struct device * dev ;  void __iomem * phy_base ;  void __iomem * ctrl_base ;  enum brcm_sata_phy_version version ;  struct brcm_sata_port phys [ MAX_PORTS ] ; } cocci_id@p ;

@ script:python depends on r11 @
p << r11.p;
@@

if 11 not in rule_matches:
    rule_matches[11] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['4', '10']:
    rule_matches[11]['correct_lines'].append(p[0].line)
else:
    rule_matches[11]['other_lines'].append(p[0].line)

@ r12 @
symbol cocci_id;
position p;
@@
 struct device_node * cocci_id@p ;

@ script:python depends on r12 @
p << r12.p;
@@

if 12 not in rule_matches:
    rule_matches[12] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['15']:
    rule_matches[12]['correct_lines'].append(p[0].line)
else:
    rule_matches[12]['other_lines'].append(p[0].line)

@ r13 @
symbol cocci_id;
position p;
@@
 struct platform_device * cocci_id@p ;

@ script:python depends on r13 @
p << r13.p;
@@

if 13 not in rule_matches:
    rule_matches[13] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['17']:
    rule_matches[13]['correct_lines'].append(p[0].line)
else:
    rule_matches[13]['other_lines'].append(p[0].line)

@ r14 @
symbol cocci_id;
position p;
@@
 const struct phy_ops cocci_id@p ;

@ script:python depends on r14 @
p << r14.p;
@@

if 14 not in rule_matches:
    rule_matches[14] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['28']:
    rule_matches[14]['correct_lines'].append(p[0].line)
else:
    rule_matches[14]['other_lines'].append(p[0].line)

@ r15 @
symbol cocci_id;
position p;
@@
 enum brcm_sata_phy_rxaeq_mode cocci_id@p ;

@ script:python depends on r15 @
p << r15.p;
@@

if 15 not in rule_matches:
    rule_matches[15] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['30']:
    rule_matches[15]['correct_lines'].append(p[0].line)
else:
    rule_matches[15]['other_lines'].append(p[0].line)

@ r16 @
symbol cocci_id;
position p;
@@
 struct brcm_sata_port * cocci_id@p ;

@ script:python depends on r16 @
p << r16.p;
@@

if 16 not in rule_matches:
    rule_matches[16] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['35']:
    rule_matches[16]['correct_lines'].append(p[0].line)
else:
    rule_matches[16]['other_lines'].append(p[0].line)

@ r17 @
symbol cocci_id;
position p;
@@
 enum brcm_sata_phy_version { BRCM_SATA_PHY_STB_28NM , BRCM_SATA_PHY_STB_40NM , BRCM_SATA_PHY_IPROC_NS2 , BRCM_SATA_PHY_IPROC_NSP , BRCM_SATA_PHY_IPROC_SR , BRCM_SATA_PHY_DSL_28NM , } cocci_id@p ;

@ script:python depends on r17 @
p << r17.p;
@@

if 17 not in rule_matches:
    rule_matches[17] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['39']:
    rule_matches[17]['correct_lines'].append(p[0].line)
else:
    rule_matches[17]['other_lines'].append(p[0].line)

@ r18 @
symbol cocci_id;
position p;
@@
 const char * cocci_id@p ;

@ script:python depends on r18 @
p << r18.p;
@@

if 18 not in rule_matches:
    rule_matches[18] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['16']:
    rule_matches[18]['correct_lines'].append(p[0].line)
else:
    rule_matches[18]['other_lines'].append(p[0].line)

@ r19 @
symbol cocci_id;
position p;
@@
 int cocci_id@p ;

@ script:python depends on r19 @
p << r19.p;
@@

if 19 not in rule_matches:
    rule_matches[19] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['36']:
    rule_matches[19]['correct_lines'].append(p[0].line)
else:
    rule_matches[19]['other_lines'].append(p[0].line)

@ r20 @
symbol cocci_id;
position p;
typedef bool,u32;
@@
 struct brcm_sata_port {  int portnum ;  struct phy * phy ;  struct brcm_sata_phy * phy_priv ;  bool ssc_en ;  enum brcm_sata_phy_rxaeq_mode rxaeq_mode ;  u32 rxaeq_val ; } cocci_id@p ;

@ script:python depends on r20 @
p << r20.p;
@@

if 20 not in rule_matches:
    rule_matches[20] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['20', '27']:
    rule_matches[20]['correct_lines'].append(p[0].line)
else:
    rule_matches[20]['other_lines'].append(p[0].line)

@ r21 @
symbol cocci_id;
position p;
@@
 const struct of_device_id * cocci_id@p ;

@ script:python depends on r21 @
p << r21.p;
@@

if 21 not in rule_matches:
    rule_matches[21] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['14']:
    rule_matches[21]['correct_lines'].append(p[0].line)
else:
    rule_matches[21]['other_lines'].append(p[0].line)

@ r22 @
symbol cocci_id;
position p;
@@
 struct resource * cocci_id@p ;

@ script:python depends on r22 @
p << r22.p;
@@

if 22 not in rule_matches:
    rule_matches[22] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['13']:
    rule_matches[22]['correct_lines'].append(p[0].line)
else:
    rule_matches[22]['other_lines'].append(p[0].line)

@ r23 @
symbol cocci_id;
position p;
@@
 enum sata_phy_regs { BLOCK0_REG_BANK = 0x000 , BLOCK0_XGXSSTATUS = 0x81 , BLOCK0_XGXSSTATUS_PLL_LOCK = BIT ( 12 ) , BLOCK0_SPARE = 0x8d , BLOCK0_SPARE_OOB_CLK_SEL_MASK = 0x3 , BLOCK0_SPARE_OOB_CLK_SEL_REFBY2 = 0x1 , PLL_REG_BANK_0 = 0x050 , PLL_REG_BANK_0_PLLCONTROL_0 = 0x81 , PLLCONTROL_0_FREQ_DET_RESTART = BIT ( 13 ) , PLLCONTROL_0_FREQ_MONITOR = BIT ( 12 ) , PLLCONTROL_0_SEQ_START = BIT ( 15 ) , PLL_CAP_CHARGE_TIME = 0x83 , PLL_VCO_CAL_THRESH = 0x84 , PLL_CAP_CONTROL = 0x85 , PLL_FREQ_DET_TIME = 0x86 , PLL_ACTRL2 = 0x8b , PLL_ACTRL2_SELDIV_MASK = 0x1f , PLL_ACTRL2_SELDIV_SHIFT = 9 , PLL_ACTRL6 = 0x86 , PLL1_REG_BANK = 0x060 , PLL1_ACTRL2 = 0x82 , PLL1_ACTRL3 = 0x83 , PLL1_ACTRL4 = 0x84 , PLL1_ACTRL5 = 0x85 , PLL1_ACTRL6 = 0x86 , PLL1_ACTRL7 = 0x87 , TX_REG_BANK = 0x070 , TX_ACTRL0 = 0x80 , TX_ACTRL0_TXPOL_FLIP = BIT ( 6 ) , AEQRX_REG_BANK_0 = 0xd0 , AEQ_CONTROL1 = 0x81 , AEQ_CONTROL1_ENABLE = BIT ( 2 ) , AEQ_CONTROL1_FREEZE = BIT ( 3 ) , AEQ_FRC_EQ = 0x83 , AEQ_FRC_EQ_FORCE = BIT ( 0 ) , AEQ_FRC_EQ_FORCE_VAL = BIT ( 1 ) , AEQRX_REG_BANK_1 = 0xe0 , AEQRX_SLCAL0_CTRL0 = 0x82 , AEQRX_SLCAL1_CTRL0 = 0x86 , OOB_REG_BANK = 0x150 , OOB1_REG_BANK = 0x160 , OOB_CTRL1 = 0x80 , OOB_CTRL1_BURST_MAX_MASK = 0xf , OOB_CTRL1_BURST_MAX_SHIFT = 12 , OOB_CTRL1_BURST_MIN_MASK = 0xf , OOB_CTRL1_BURST_MIN_SHIFT = 8 , OOB_CTRL1_WAKE_IDLE_MAX_MASK = 0xf , OOB_CTRL1_WAKE_IDLE_MAX_SHIFT = 4 , OOB_CTRL1_WAKE_IDLE_MIN_MASK = 0xf , OOB_CTRL1_WAKE_IDLE_MIN_SHIFT = 0 , OOB_CTRL2 = 0x81 , OOB_CTRL2_SEL_ENA_SHIFT = 15 , OOB_CTRL2_SEL_ENA_RC_SHIFT = 14 , OOB_CTRL2_RESET_IDLE_MAX_MASK = 0x3f , OOB_CTRL2_RESET_IDLE_MAX_SHIFT = 8 , OOB_CTRL2_BURST_CNT_MASK = 0x3 , OOB_CTRL2_BURST_CNT_SHIFT = 6 , OOB_CTRL2_RESET_IDLE_MIN_MASK = 0x3f , OOB_CTRL2_RESET_IDLE_MIN_SHIFT = 0 , TXPMD_REG_BANK = 0x1a0 , TXPMD_CONTROL1 = 0x81 , TXPMD_CONTROL1_TX_SSC_EN_FRC = BIT ( 0 ) , TXPMD_CONTROL1_TX_SSC_EN_FRC_VAL = BIT ( 1 ) , TXPMD_TX_FREQ_CTRL_CONTROL1 = 0x82 , TXPMD_TX_FREQ_CTRL_CONTROL2 = 0x83 , TXPMD_TX_FREQ_CTRL_CONTROL2_FMIN_MASK = 0x3ff , TXPMD_TX_FREQ_CTRL_CONTROL3 = 0x84 , TXPMD_TX_FREQ_CTRL_CONTROL3_FMAX_MASK = 0x3ff , RXPMD_REG_BANK = 0x1c0 , RXPMD_RX_FREQ_MON_CONTROL1 = 0x87 , } cocci_id@p ;

@ script:python depends on r23 @
p << r23.p;
@@

if 23 not in rule_matches:
    rule_matches[23] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['2']:
    rule_matches[23]['correct_lines'].append(p[0].line)
else:
    rule_matches[23]['other_lines'].append(p[0].line)

@ r24 @
symbol cocci_id;
position p;
@@
 struct phy_provider * cocci_id@p ;

@ script:python depends on r24 @
p << r24.p;
@@

if 24 not in rule_matches:
    rule_matches[24] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['12']:
    rule_matches[24]['correct_lines'].append(p[0].line)
else:
    rule_matches[24]['other_lines'].append(p[0].line)

@ r25 @
symbol cocci_id;
position p;
@@
 unsigned int cocci_id@p ;

@ script:python depends on r25 @
p << r25.p;
@@

if 25 not in rule_matches:
    rule_matches[25] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['32']:
    rule_matches[25]['correct_lines'].append(p[0].line)
else:
    rule_matches[25]['other_lines'].append(p[0].line)

@ r26 @
symbol cocci_id;
position p;
@@
 const struct of_device_id cocci_id@p [ ] ;

@ script:python depends on r26 @
p << r26.p;
@@

if 26 not in rule_matches:
    rule_matches[26] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['19']:
    rule_matches[26]['correct_lines'].append(p[0].line)
else:
    rule_matches[26]['other_lines'].append(p[0].line)

@ finalize:python @
@@
rules = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26]
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
