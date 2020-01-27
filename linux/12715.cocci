@ initialize:python @
@@
from collections import defaultdict
rule_matches = defaultdict(dict)

@ r1 @
symbol cocci_id;
position p;
@@
 struct icc_provider * cocci_id@p ;

@ script:python depends on r1 @
p << r1.p;
@@

if 1 not in rule_matches:
    rule_matches[1] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['5']:
    rule_matches[1]['correct_lines'].append(p[0].line)
else:
    rule_matches[1]['other_lines'].append(p[0].line)

@ r2 @
symbol cocci_id;
position p;
@@
 char * cocci_id@p ;

@ script:python depends on r2 @
p << r2.p;
@@

if 2 not in rule_matches:
    rule_matches[2] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['14']:
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
if p[0].line in ['2']:
    rule_matches[3]['correct_lines'].append(p[0].line)
else:
    rule_matches[3]['other_lines'].append(p[0].line)

@ r4 @
symbol cocci_id;
position p;
@@
 struct icc_node * cocci_id@p ;

@ script:python depends on r4 @
p << r4.p;
@@

if 4 not in rule_matches:
    rule_matches[4] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['18']:
    rule_matches[4]['correct_lines'].append(p[0].line)
else:
    rule_matches[4]['other_lines'].append(p[0].line)

@ r5 @
symbol cocci_id;
position p;
typedef u32;
@@
 u32 * cocci_id@p ;

@ script:python depends on r5 @
p << r5.p;
@@

if 5 not in rule_matches:
    rule_matches[5] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['16']:
    rule_matches[5]['correct_lines'].append(p[0].line)
else:
    rule_matches[5]['other_lines'].append(p[0].line)

@ r6 @
symbol cocci_id;
position p;
@@
 struct msm8974_icc_node * * cocci_id@p ;

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
 struct msm8974_icc_provider {  struct icc_provider provider ;  struct clk_bulk_data * bus_clks ;  int num_clks ; } cocci_id@p ;

@ script:python depends on r7 @
p << r7.p;
@@

if 7 not in rule_matches:
    rule_matches[7] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['37', '41']:
    rule_matches[7]['correct_lines'].append(p[0].line)
else:
    rule_matches[7]['other_lines'].append(p[0].line)

@ r8 @
symbol cocci_id;
position p;
@@
 struct msm8974_icc_node * cocci_id@p ;

@ script:python depends on r8 @
p << r8.p;
@@

if 8 not in rule_matches:
    rule_matches[8] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['12']:
    rule_matches[8]['correct_lines'].append(p[0].line)
else:
    rule_matches[8]['other_lines'].append(p[0].line)

@ r9 @
symbol cocci_id;
position p;
@@
 enum { MSM8974_BIMC_MAS_AMPSS_M0 = 1 , MSM8974_BIMC_MAS_AMPSS_M1 , MSM8974_BIMC_MAS_MSS_PROC , MSM8974_BIMC_TO_MNOC , MSM8974_BIMC_TO_SNOC , MSM8974_BIMC_SLV_EBI_CH0 , MSM8974_BIMC_SLV_AMPSS_L2 , MSM8974_CNOC_MAS_RPM_INST , MSM8974_CNOC_MAS_RPM_DATA , MSM8974_CNOC_MAS_RPM_SYS , MSM8974_CNOC_MAS_DEHR , MSM8974_CNOC_MAS_QDSS_DAP , MSM8974_CNOC_MAS_SPDM , MSM8974_CNOC_MAS_TIC , MSM8974_CNOC_SLV_CLK_CTL , MSM8974_CNOC_SLV_CNOC_MSS , MSM8974_CNOC_SLV_SECURITY , MSM8974_CNOC_SLV_TCSR , MSM8974_CNOC_SLV_TLMM , MSM8974_CNOC_SLV_CRYPTO_0_CFG , MSM8974_CNOC_SLV_CRYPTO_1_CFG , MSM8974_CNOC_SLV_IMEM_CFG , MSM8974_CNOC_SLV_MESSAGE_RAM , MSM8974_CNOC_SLV_BIMC_CFG , MSM8974_CNOC_SLV_BOOT_ROM , MSM8974_CNOC_SLV_PMIC_ARB , MSM8974_CNOC_SLV_SPDM_WRAPPER , MSM8974_CNOC_SLV_DEHR_CFG , MSM8974_CNOC_SLV_MPM , MSM8974_CNOC_SLV_QDSS_CFG , MSM8974_CNOC_SLV_RBCPR_CFG , MSM8974_CNOC_SLV_RBCPR_QDSS_APU_CFG , MSM8974_CNOC_TO_SNOC , MSM8974_CNOC_SLV_CNOC_ONOC_CFG , MSM8974_CNOC_SLV_CNOC_MNOC_MMSS_CFG , MSM8974_CNOC_SLV_CNOC_MNOC_CFG , MSM8974_CNOC_SLV_PNOC_CFG , MSM8974_CNOC_SLV_SNOC_MPU_CFG , MSM8974_CNOC_SLV_SNOC_CFG , MSM8974_CNOC_SLV_EBI1_DLL_CFG , MSM8974_CNOC_SLV_PHY_APU_CFG , MSM8974_CNOC_SLV_EBI1_PHY_CFG , MSM8974_CNOC_SLV_RPM , MSM8974_CNOC_SLV_SERVICE_CNOC , MSM8974_MNOC_MAS_GRAPHICS_3D , MSM8974_MNOC_MAS_JPEG , MSM8974_MNOC_MAS_MDP_PORT0 , MSM8974_MNOC_MAS_VIDEO_P0 , MSM8974_MNOC_MAS_VIDEO_P1 , MSM8974_MNOC_MAS_VFE , MSM8974_MNOC_TO_CNOC , MSM8974_MNOC_TO_BIMC , MSM8974_MNOC_SLV_CAMERA_CFG , MSM8974_MNOC_SLV_DISPLAY_CFG , MSM8974_MNOC_SLV_OCMEM_CFG , MSM8974_MNOC_SLV_CPR_CFG , MSM8974_MNOC_SLV_CPR_XPU_CFG , MSM8974_MNOC_SLV_MISC_CFG , MSM8974_MNOC_SLV_MISC_XPU_CFG , MSM8974_MNOC_SLV_VENUS_CFG , MSM8974_MNOC_SLV_GRAPHICS_3D_CFG , MSM8974_MNOC_SLV_MMSS_CLK_CFG , MSM8974_MNOC_SLV_MMSS_CLK_XPU_CFG , MSM8974_MNOC_SLV_MNOC_MPU_CFG , MSM8974_MNOC_SLV_ONOC_MPU_CFG , MSM8974_MNOC_SLV_SERVICE_MNOC , MSM8974_OCMEM_NOC_TO_OCMEM_VNOC , MSM8974_OCMEM_MAS_JPEG_OCMEM , MSM8974_OCMEM_MAS_MDP_OCMEM , MSM8974_OCMEM_MAS_VIDEO_P0_OCMEM , MSM8974_OCMEM_MAS_VIDEO_P1_OCMEM , MSM8974_OCMEM_MAS_VFE_OCMEM , MSM8974_OCMEM_MAS_CNOC_ONOC_CFG , MSM8974_OCMEM_SLV_SERVICE_ONOC , MSM8974_OCMEM_VNOC_TO_SNOC , MSM8974_OCMEM_VNOC_TO_OCMEM_NOC , MSM8974_OCMEM_VNOC_MAS_GFX3D , MSM8974_OCMEM_SLV_OCMEM , MSM8974_PNOC_MAS_PNOC_CFG , MSM8974_PNOC_MAS_SDCC_1 , MSM8974_PNOC_MAS_SDCC_3 , MSM8974_PNOC_MAS_SDCC_4 , MSM8974_PNOC_MAS_SDCC_2 , MSM8974_PNOC_MAS_TSIF , MSM8974_PNOC_MAS_BAM_DMA , MSM8974_PNOC_MAS_BLSP_2 , MSM8974_PNOC_MAS_USB_HSIC , MSM8974_PNOC_MAS_BLSP_1 , MSM8974_PNOC_MAS_USB_HS , MSM8974_PNOC_TO_SNOC , MSM8974_PNOC_SLV_SDCC_1 , MSM8974_PNOC_SLV_SDCC_3 , MSM8974_PNOC_SLV_SDCC_2 , MSM8974_PNOC_SLV_SDCC_4 , MSM8974_PNOC_SLV_TSIF , MSM8974_PNOC_SLV_BAM_DMA , MSM8974_PNOC_SLV_BLSP_2 , MSM8974_PNOC_SLV_USB_HSIC , MSM8974_PNOC_SLV_BLSP_1 , MSM8974_PNOC_SLV_USB_HS , MSM8974_PNOC_SLV_PDM , MSM8974_PNOC_SLV_PERIPH_APU_CFG , MSM8974_PNOC_SLV_PNOC_MPU_CFG , MSM8974_PNOC_SLV_PRNG , MSM8974_PNOC_SLV_SERVICE_PNOC , MSM8974_SNOC_MAS_LPASS_AHB , MSM8974_SNOC_MAS_QDSS_BAM , MSM8974_SNOC_MAS_SNOC_CFG , MSM8974_SNOC_TO_BIMC , MSM8974_SNOC_TO_CNOC , MSM8974_SNOC_TO_PNOC , MSM8974_SNOC_TO_OCMEM_VNOC , MSM8974_SNOC_MAS_CRYPTO_CORE0 , MSM8974_SNOC_MAS_CRYPTO_CORE1 , MSM8974_SNOC_MAS_LPASS_PROC , MSM8974_SNOC_MAS_MSS , MSM8974_SNOC_MAS_MSS_NAV , MSM8974_SNOC_MAS_OCMEM_DMA , MSM8974_SNOC_MAS_WCSS , MSM8974_SNOC_MAS_QDSS_ETR , MSM8974_SNOC_MAS_USB3 , MSM8974_SNOC_SLV_AMPSS , MSM8974_SNOC_SLV_LPASS , MSM8974_SNOC_SLV_USB3 , MSM8974_SNOC_SLV_WCSS , MSM8974_SNOC_SLV_OCIMEM , MSM8974_SNOC_SLV_SNOC_OCMEM , MSM8974_SNOC_SLV_SERVICE_SNOC , MSM8974_SNOC_SLV_QDSS_STM , } cocci_id@p ;

@ script:python depends on r9 @
p << r9.p;
@@

if 9 not in rule_matches:
    rule_matches[9] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['20']:
    rule_matches[9]['correct_lines'].append(p[0].line)
else:
    rule_matches[9]['other_lines'].append(p[0].line)

@ r10 @
symbol cocci_id;
position p;
@@
 void cocci_id@p ;

@ script:python depends on r10 @
p << r10.p;
@@

if 10 not in rule_matches:
    rule_matches[10] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['15']:
    rule_matches[10]['correct_lines'].append(p[0].line)
else:
    rule_matches[10]['other_lines'].append(p[0].line)

@ r11 @
symbol cocci_id;
position p;
@@
 struct icc_onecell_data * cocci_id@p ;

@ script:python depends on r11 @
p << r11.p;
@@

if 11 not in rule_matches:
    rule_matches[11] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['6']:
    rule_matches[11]['correct_lines'].append(p[0].line)
else:
    rule_matches[11]['other_lines'].append(p[0].line)

@ r12 @
symbol cocci_id;
position p;
@@
 struct msm8974_icc_provider cocci_id@p ;

@ script:python depends on r12 @
p << r12.p;
@@

if 12 not in rule_matches:
    rule_matches[12] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['43']:
    rule_matches[12]['correct_lines'].append(p[0].line)
else:
    rule_matches[12]['other_lines'].append(p[0].line)

@ r13 @
symbol cocci_id;
position p;
typedef u32;
@@
 u32 cocci_id@p ;

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
typedef u64,u16;
@@
 struct msm8974_icc_node {  unsigned char * name ;  u16 id ;  u16 links [ MSM8974_ICC_MAX_LINKS ] ;  u16 num_links ;  u16 buswidth ;  int mas_rpm_id ;  int slv_rpm_id ;  u64 rate ; } cocci_id@p ;

@ script:python depends on r14 @
p << r14.p;
@@

if 14 not in rule_matches:
    rule_matches[14] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['27', '36']:
    rule_matches[14]['correct_lines'].append(p[0].line)
else:
    rule_matches[14]['other_lines'].append(p[0].line)

@ r15 @
symbol cocci_id;
position p;
typedef u64;
@@
 u64 cocci_id@p ;

@ script:python depends on r15 @
p << r15.p;
@@

if 15 not in rule_matches:
    rule_matches[15] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['13']:
    rule_matches[15]['correct_lines'].append(p[0].line)
else:
    rule_matches[15]['other_lines'].append(p[0].line)

@ r16 @
symbol cocci_id;
position p;
@@
 struct msm8974_icc_node * cocci_id@p [ ] ;

@ script:python depends on r16 @
p << r16.p;
@@

if 16 not in rule_matches:
    rule_matches[16] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['22']:
    rule_matches[16]['correct_lines'].append(p[0].line)
else:
    rule_matches[16]['other_lines'].append(p[0].line)

@ r17 @
symbol cocci_id;
position p;
@@
 struct platform_device * cocci_id@p ;

@ script:python depends on r17 @
p << r17.p;
@@

if 17 not in rule_matches:
    rule_matches[17] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['11']:
    rule_matches[17]['correct_lines'].append(p[0].line)
else:
    rule_matches[17]['other_lines'].append(p[0].line)

@ r18 @
symbol cocci_id;
position p;
@@
 struct device * cocci_id@p ;

@ script:python depends on r18 @
p << r18.p;
@@

if 18 not in rule_matches:
    rule_matches[18] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['7']:
    rule_matches[18]['correct_lines'].append(p[0].line)
else:
    rule_matches[18]['other_lines'].append(p[0].line)

@ r19 @
symbol cocci_id;
position p;
@@
 struct msm8974_icc_provider * cocci_id@p ;

@ script:python depends on r19 @
p << r19.p;
@@

if 19 not in rule_matches:
    rule_matches[19] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['8']:
    rule_matches[19]['correct_lines'].append(p[0].line)
else:
    rule_matches[19]['other_lines'].append(p[0].line)

@ r20 @
symbol cocci_id;
position p;
@@
 size_t cocci_id@p ;

@ script:python depends on r20 @
p << r20.p;
@@

if 20 not in rule_matches:
    rule_matches[20] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['4']:
    rule_matches[20]['correct_lines'].append(p[0].line)
else:
    rule_matches[20]['other_lines'].append(p[0].line)

@ r21 @
symbol cocci_id;
position p;
@@
 int cocci_id@p ;

@ script:python depends on r21 @
p << r21.p;
@@

if 21 not in rule_matches:
    rule_matches[21] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['19']:
    rule_matches[21]['correct_lines'].append(p[0].line)
else:
    rule_matches[21]['other_lines'].append(p[0].line)

@ r22 @
symbol cocci_id;
position p;
@@
 struct msm8974_icc_desc cocci_id@p ;

@ script:python depends on r22 @
p << r22.p;
@@

if 22 not in rule_matches:
    rule_matches[22] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['21']:
    rule_matches[22]['correct_lines'].append(p[0].line)
else:
    rule_matches[22]['other_lines'].append(p[0].line)

@ r23 @
symbol cocci_id;
position p;
@@
 const struct msm8974_icc_desc * cocci_id@p ;

@ script:python depends on r23 @
p << r23.p;
@@

if 23 not in rule_matches:
    rule_matches[23] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['10']:
    rule_matches[23]['correct_lines'].append(p[0].line)
else:
    rule_matches[23]['other_lines'].append(p[0].line)

@ r24 @
symbol cocci_id;
position p;
@@
 struct msm8974_icc_desc {  struct msm8974_icc_node * * nodes ;  size_t num_nodes ; } cocci_id@p ;

@ script:python depends on r24 @
p << r24.p;
@@

if 24 not in rule_matches:
    rule_matches[24] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['23', '26']:
    rule_matches[24]['correct_lines'].append(p[0].line)
else:
    rule_matches[24]['other_lines'].append(p[0].line)

@ r25 @
symbol cocci_id;
position p;
@@
 const struct clk_bulk_data cocci_id@p [ ] ;

@ script:python depends on r25 @
p << r25.p;
@@

if 25 not in rule_matches:
    rule_matches[25] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['42']:
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
if p[0].line in ['3']:
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
