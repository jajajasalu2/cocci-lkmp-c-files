@ initialize:python @
@@
from collections import defaultdict
rule_matches = defaultdict(dict)

@ r1 @
symbol cocci_id;
position p;
@@
 struct device_node * cocci_id@p ;

@ script:python depends on r1 @
p << r1.p;
@@

if 1 not in rule_matches:
    rule_matches[1] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['9']:
    rule_matches[1]['correct_lines'].append(p[0].line)
else:
    rule_matches[1]['other_lines'].append(p[0].line)

@ r2 @
symbol cocci_id;
position p;
@@
 const char * cocci_id@p [ ] ;

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
 struct clk * cocci_id@p [ clk_max ] ;

@ script:python depends on r3 @
p << r3.p;
@@

if 3 not in rule_matches:
    rule_matches[3] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['5']:
    rule_matches[3]['correct_lines'].append(p[0].line)
else:
    rule_matches[3]['other_lines'].append(p[0].line)

@ r4 @
symbol cocci_id;
position p;
@@
 enum mx25_clks { dummy , osc , mpll , upll , mpll_cpu_3_4 , cpu_sel , cpu , ahb , usb_div , ipg , per0_sel , per1_sel , per2_sel , per3_sel , per4_sel , per5_sel , per6_sel , per7_sel , per8_sel , per9_sel , per10_sel , per11_sel , per12_sel , per13_sel , per14_sel , per15_sel , per0 , per1 , per2 , per3 , per4 , per5 , per6 , per7 , per8 , per9 , per10 , per11 , per12 , per13 , per14 , per15 , csi_ipg_per , epit_ipg_per , esai_ipg_per , esdhc1_ipg_per , esdhc2_ipg_per , gpt_ipg_per , i2c_ipg_per , lcdc_ipg_per , nfc_ipg_per , owire_ipg_per , pwm_ipg_per , sim1_ipg_per , sim2_ipg_per , ssi1_ipg_per , ssi2_ipg_per , uart_ipg_per , ata_ahb , reserved1 , csi_ahb , emi_ahb , esai_ahb , esdhc1_ahb , esdhc2_ahb , fec_ahb , lcdc_ahb , rtic_ahb , sdma_ahb , slcdc_ahb , usbotg_ahb , reserved2 , reserved3 , reserved4 , reserved5 , can1_ipg , can2_ipg , csi_ipg , cspi1_ipg , cspi2_ipg , cspi3_ipg , dryice_ipg , ect_ipg , epit1_ipg , epit2_ipg , reserved6 , esdhc1_ipg , esdhc2_ipg , fec_ipg , reserved7 , reserved8 , reserved9 , gpt1_ipg , gpt2_ipg , gpt3_ipg , gpt4_ipg , reserved10 , reserved11 , reserved12 , iim_ipg , reserved13 , reserved14 , kpp_ipg , lcdc_ipg , reserved15 , pwm1_ipg , pwm2_ipg , pwm3_ipg , pwm4_ipg , rngb_ipg , reserved16 , scc_ipg , sdma_ipg , sim1_ipg , sim2_ipg , slcdc_ipg , spba_ipg , ssi1_ipg , ssi2_ipg , tsc_ipg , uart1_ipg , uart2_ipg , uart3_ipg , uart4_ipg , uart5_ipg , reserved17 , wdt_ipg , cko_div , cko_sel , cko , clk_max , } cocci_id@p ;

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
 struct clk_onecell_data cocci_id@p ;

@ script:python depends on r5 @
p << r5.p;
@@

if 5 not in rule_matches:
    rule_matches[5] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['8']:
    rule_matches[5]['correct_lines'].append(p[0].line)
else:
    rule_matches[5]['other_lines'].append(p[0].line)

@ finalize:python @
@@
rules = [1, 2, 3, 4, 5]
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
