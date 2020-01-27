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
if p[0].line in ['105']:
    rule_matches[1]['correct_lines'].append(p[0].line)
else:
    rule_matches[1]['other_lines'].append(p[0].line)

@ r2 @
symbol cocci_id;
position p;
@@
 const struct dmi_device * cocci_id@p ;

@ script:python depends on r2 @
p << r2.p;
@@

if 2 not in rule_matches:
    rule_matches[2] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['86']:
    rule_matches[2]['correct_lines'].append(p[0].line)
else:
    rule_matches[2]['other_lines'].append(p[0].line)

@ r3 @
symbol cocci_id;
position p;
@@
 enum { ALC660VD_FIX_ASUS_GPIO1 , ALC861VD_FIX_DALLAS , } cocci_id@p ;

@ script:python depends on r3 @
p << r3.p;
@@

if 3 not in rule_matches:
    rule_matches[3] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['21']:
    rule_matches[3]['correct_lines'].append(p[0].line)
else:
    rule_matches[3]['other_lines'].append(p[0].line)

@ r4 @
symbol cocci_id;
position p;
@@
 enum { ALC262_FIXUP_FSC_H270 , ALC262_FIXUP_FSC_S7110 , ALC262_FIXUP_HP_Z200 , ALC262_FIXUP_TYAN , ALC262_FIXUP_LENOVO_3000 , ALC262_FIXUP_BENQ , ALC262_FIXUP_BENQ_T31 , ALC262_FIXUP_INV_DMIC , ALC262_FIXUP_INTEL_BAYLEYBAY , } cocci_id@p ;

@ script:python depends on r4 @
p << r4.p;
@@

if 4 not in rule_matches:
    rule_matches[4] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['108']:
    rule_matches[4]['correct_lines'].append(p[0].line)
else:
    rule_matches[4]['other_lines'].append(p[0].line)

@ r5 @
symbol cocci_id;
position p;
@@
 const struct snd_hda_pin_quirk cocci_id@p [ ] ;

@ script:python depends on r5 @
p << r5.p;
@@

if 5 not in rule_matches:
    rule_matches[5] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['23']:
    rule_matches[5]['correct_lines'].append(p[0].line)
else:
    rule_matches[5]['other_lines'].append(p[0].line)

@ r6 @
symbol cocci_id;
position p;
@@
 enum { ALC880_FIXUP_GPIO1 , ALC880_FIXUP_GPIO2 , ALC880_FIXUP_MEDION_RIM , ALC880_FIXUP_LG , ALC880_FIXUP_LG_LW25 , ALC880_FIXUP_W810 , ALC880_FIXUP_EAPD_COEF , ALC880_FIXUP_TCL_S700 , ALC880_FIXUP_VOL_KNOB , ALC880_FIXUP_FUJITSU , ALC880_FIXUP_F1734 , ALC880_FIXUP_UNIWILL , ALC880_FIXUP_UNIWILL_DIG , ALC880_FIXUP_Z71V , ALC880_FIXUP_ASUS_W5A , ALC880_FIXUP_3ST_BASE , ALC880_FIXUP_3ST , ALC880_FIXUP_3ST_DIG , ALC880_FIXUP_5ST_BASE , ALC880_FIXUP_5ST , ALC880_FIXUP_5ST_DIG , ALC880_FIXUP_6ST_BASE , ALC880_FIXUP_6ST , ALC880_FIXUP_6ST_DIG , ALC880_FIXUP_6ST_AUTOMUTE , } cocci_id@p ;

@ script:python depends on r6 @
p << r6.p;
@@

if 6 not in rule_matches:
    rule_matches[6] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['136']:
    rule_matches[6]['correct_lines'].append(p[0].line)
else:
    rule_matches[6]['other_lines'].append(p[0].line)

@ r7 @
symbol cocci_id;
position p;
@@
 const struct hda_codec_ops cocci_id@p ;

@ script:python depends on r7 @
p << r7.p;
@@

if 7 not in rule_matches:
    rule_matches[7] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['18']:
    rule_matches[7]['correct_lines'].append(p[0].line)
else:
    rule_matches[7]['other_lines'].append(p[0].line)

@ r8 @
symbol cocci_id;
position p;
@@
 enum { ALC662_FIXUP_ASPIRE , ALC662_FIXUP_LED_GPIO1 , ALC662_FIXUP_IDEAPAD , ALC272_FIXUP_MARIO , ALC662_FIXUP_CZC_P10T , ALC662_FIXUP_SKU_IGNORE , ALC662_FIXUP_HP_RP5800 , ALC662_FIXUP_ASUS_MODE1 , ALC662_FIXUP_ASUS_MODE2 , ALC662_FIXUP_ASUS_MODE3 , ALC662_FIXUP_ASUS_MODE4 , ALC662_FIXUP_ASUS_MODE5 , ALC662_FIXUP_ASUS_MODE6 , ALC662_FIXUP_ASUS_MODE7 , ALC662_FIXUP_ASUS_MODE8 , ALC662_FIXUP_NO_JACK_DETECT , ALC662_FIXUP_ZOTAC_Z68 , ALC662_FIXUP_INV_DMIC , ALC662_FIXUP_DELL_MIC_NO_PRESENCE , ALC668_FIXUP_DELL_MIC_NO_PRESENCE , ALC662_FIXUP_HEADSET_MODE , ALC668_FIXUP_HEADSET_MODE , ALC662_FIXUP_BASS_MODE4_CHMAP , ALC662_FIXUP_BASS_16 , ALC662_FIXUP_BASS_1A , ALC662_FIXUP_BASS_CHMAP , ALC668_FIXUP_AUTO_MUTE , ALC668_FIXUP_DELL_DISABLE_AAMIX , ALC668_FIXUP_DELL_XPS13 , ALC662_FIXUP_ASUS_Nx50 , ALC668_FIXUP_ASUS_Nx51_HEADSET_MODE , ALC668_FIXUP_ASUS_Nx51 , ALC668_FIXUP_MIC_COEF , ALC668_FIXUP_ASUS_G751 , ALC891_FIXUP_HEADSET_MODE , ALC891_FIXUP_DELL_MIC_NO_PRESENCE , ALC662_FIXUP_ACER_VERITON , ALC892_FIXUP_ASROCK_MOBO , ALC662_FIXUP_USI_FUNC , ALC662_FIXUP_USI_HEADSET_MODE , ALC662_FIXUP_LENOVO_MULTI_CODECS , ALC669_FIXUP_ACER_ASPIRE_ETHOS , ALC669_FIXUP_ACER_ASPIRE_ETHOS_HEADSET , } cocci_id@p ;

@ script:python depends on r8 @
p << r8.p;
@@

if 8 not in rule_matches:
    rule_matches[8] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['19']:
    rule_matches[8]['correct_lines'].append(p[0].line)
else:
    rule_matches[8]['other_lines'].append(p[0].line)

@ r9 @
symbol cocci_id;
position p;
@@
 struct hda_jack_callback * cocci_id@p ;

@ script:python depends on r9 @
p << r9.p;
@@

if 9 not in rule_matches:
    rule_matches[9] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['95']:
    rule_matches[9]['correct_lines'].append(p[0].line)
else:
    rule_matches[9]['other_lines'].append(p[0].line)

@ r10 @
symbol cocci_id;
position p;
@@
 const struct snd_pcm_chmap_elem cocci_id@p [ ] ;

@ script:python depends on r10 @
p << r10.p;
@@

if 10 not in rule_matches:
    rule_matches[10] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['20']:
    rule_matches[10]['correct_lines'].append(p[0].line)
else:
    rule_matches[10]['other_lines'].append(p[0].line)

@ r11 @
symbol cocci_id;
position p;
@@
 struct snd_ctl_elem_value * cocci_id@p ;

@ script:python depends on r11 @
p << r11.p;
@@

if 11 not in rule_matches:
    rule_matches[11] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['106']:
    rule_matches[11]['correct_lines'].append(p[0].line)
else:
    rule_matches[11]['other_lines'].append(p[0].line)

@ r12 @
symbol cocci_id;
position p;
@@
 const struct hda_model_fixup cocci_id@p [ ] ;

@ script:python depends on r12 @
p << r12.p;
@@

if 12 not in rule_matches:
    rule_matches[12] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['123']:
    rule_matches[12]['correct_lines'].append(p[0].line)
else:
    rule_matches[12]['other_lines'].append(p[0].line)

@ r13 @
symbol cocci_id;
position p;
@@
 enum { ALC_INIT_UNDEFINED , ALC_INIT_NONE , ALC_INIT_DEFAULT , } cocci_id@p ;

@ script:python depends on r13 @
p << r13.p;
@@

if 13 not in rule_matches:
    rule_matches[13] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['99']:
    rule_matches[13]['correct_lines'].append(p[0].line)
else:
    rule_matches[13]['other_lines'].append(p[0].line)

@ r14 @
symbol cocci_id;
position p;
@@
 struct hda_codec_driver cocci_id@p ;

@ script:python depends on r14 @
p << r14.p;
@@

if 14 not in rule_matches:
    rule_matches[14] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['16']:
    rule_matches[14]['correct_lines'].append(p[0].line)
else:
    rule_matches[14]['other_lines'].append(p[0].line)

@ r15 @
symbol cocci_id;
position p;
@@
 struct alc_codec_rename_pci_table {  unsigned int codec_vendor_id ;  unsigned short pci_subvendor ;  unsigned short pci_subdevice ;  const char * name ; } cocci_id@p ;

@ script:python depends on r15 @
p << r15.p;
@@

if 15 not in rule_matches:
    rule_matches[15] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['4', '9']:
    rule_matches[15]['correct_lines'].append(p[0].line)
else:
    rule_matches[15]['other_lines'].append(p[0].line)

@ r16 @
symbol cocci_id;
position p;
@@
 enum { ALC861_FIXUP_FSC_AMILO_PI1505 , ALC861_FIXUP_AMP_VREF_0F , ALC861_FIXUP_NO_JACK_DETECT , ALC861_FIXUP_ASUS_A6RP , ALC660_FIXUP_ASUS_W7J , } cocci_id@p ;

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
 void * cocci_id@p ;

@ script:python depends on r17 @
p << r17.p;
@@

if 17 not in rule_matches:
    rule_matches[17] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['87']:
    rule_matches[17]['correct_lines'].append(p[0].line)
else:
    rule_matches[17]['other_lines'].append(p[0].line)

@ r18 @
symbol cocci_id;
position p;
@@
 const struct hda_alc298_mbxinit cocci_id@p [ ] ;

@ script:python depends on r18 @
p << r18.p;
@@

if 18 not in rule_matches:
    rule_matches[18] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['89']:
    rule_matches[18]['correct_lines'].append(p[0].line)
else:
    rule_matches[18]['other_lines'].append(p[0].line)

@ r19 @
symbol cocci_id;
position p;
@@
 const struct coef_fw * cocci_id@p ;

@ script:python depends on r19 @
p << r19.p;
@@

if 19 not in rule_matches:
    rule_matches[19] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['122']:
    rule_matches[19]['correct_lines'].append(p[0].line)
else:
    rule_matches[19]['other_lines'].append(p[0].line)

@ r20 @
symbol cocci_id;
position p;
typedef hda_nid_t;
@@
 const hda_nid_t cocci_id@p [ ] ;

@ script:python depends on r20 @
p << r20.p;
@@

if 20 not in rule_matches:
    rule_matches[20] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['135']:
    rule_matches[20]['correct_lines'].append(p[0].line)
else:
    rule_matches[20]['other_lines'].append(p[0].line)

@ r21 @
symbol cocci_id;
position p;
@@
 enum { ALC882_FIXUP_ABIT_AW9D_MAX , ALC882_FIXUP_LENOVO_Y530 , ALC882_FIXUP_PB_M5210 , ALC882_FIXUP_ACER_ASPIRE_7736 , ALC882_FIXUP_ASUS_W90V , ALC889_FIXUP_CD , ALC889_FIXUP_FRONT_HP_NO_PRESENCE , ALC889_FIXUP_VAIO_TT , ALC888_FIXUP_EEE1601 , ALC882_FIXUP_EAPD , ALC883_FIXUP_EAPD , ALC883_FIXUP_ACER_EAPD , ALC882_FIXUP_GPIO1 , ALC882_FIXUP_GPIO2 , ALC882_FIXUP_GPIO3 , ALC889_FIXUP_COEF , ALC882_FIXUP_ASUS_W2JC , ALC882_FIXUP_ACER_ASPIRE_4930G , ALC882_FIXUP_ACER_ASPIRE_8930G , ALC882_FIXUP_ASPIRE_8930G_VERBS , ALC885_FIXUP_MACPRO_GPIO , ALC889_FIXUP_DAC_ROUTE , ALC889_FIXUP_MBP_VREF , ALC889_FIXUP_IMAC91_VREF , ALC889_FIXUP_MBA11_VREF , ALC889_FIXUP_MBA21_VREF , ALC889_FIXUP_MP11_VREF , ALC889_FIXUP_MP41_VREF , ALC882_FIXUP_INV_DMIC , ALC882_FIXUP_NO_PRIMARY_HP , ALC887_FIXUP_ASUS_BASS , ALC887_FIXUP_BASS_CHMAP , ALC1220_FIXUP_GB_DUAL_CODECS , ALC1220_FIXUP_CLEVO_P950 , ALC1220_FIXUP_CLEVO_PB51ED , ALC1220_FIXUP_CLEVO_PB51ED_PINS , } cocci_id@p ;

@ script:python depends on r21 @
p << r21.p;
@@

if 21 not in rule_matches:
    rule_matches[21] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['121']:
    rule_matches[21]['correct_lines'].append(p[0].line)
else:
    rule_matches[21]['other_lines'].append(p[0].line)

@ r22 @
symbol cocci_id;
position p;
@@
 struct alc_codec_rename_pci_table cocci_id@p [ ] ;

@ script:python depends on r22 @
p << r22.p;
@@

if 22 not in rule_matches:
    rule_matches[22] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['2']:
    rule_matches[22]['correct_lines'].append(p[0].line)
else:
    rule_matches[22]['other_lines'].append(p[0].line)

@ r23 @
symbol cocci_id;
position p;
@@
 const struct hda_device_id cocci_id@p [ ] ;

@ script:python depends on r23 @
p << r23.p;
@@

if 23 not in rule_matches:
    rule_matches[23] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['17']:
    rule_matches[23]['correct_lines'].append(p[0].line)
else:
    rule_matches[23]['other_lines'].append(p[0].line)

@ r24 @
symbol cocci_id;
position p;
@@
 struct hda_input_mux * cocci_id@p ;

@ script:python depends on r24 @
p << r24.p;
@@

if 24 not in rule_matches:
    rule_matches[24] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['79']:
    rule_matches[24]['correct_lines'].append(p[0].line)
else:
    rule_matches[24]['other_lines'].append(p[0].line)

@ r25 @
symbol cocci_id;
position p;
@@
 void cocci_id@p ;

@ script:python depends on r25 @
p << r25.p;
@@

if 25 not in rule_matches:
    rule_matches[25] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['113']:
    rule_matches[25]['correct_lines'].append(p[0].line)
else:
    rule_matches[25]['other_lines'].append(p[0].line)

@ r26 @
symbol cocci_id;
position p;
@@
 const struct hda_pincfg * cocci_id@p ;

@ script:python depends on r26 @
p << r26.p;
@@

if 26 not in rule_matches:
    rule_matches[26] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['81']:
    rule_matches[26]['correct_lines'].append(p[0].line)
else:
    rule_matches[26]['other_lines'].append(p[0].line)

@ r27 @
symbol cocci_id;
position p;
typedef hda_nid_t;
@@
 hda_nid_t * cocci_id@p ;

@ script:python depends on r27 @
p << r27.p;
@@

if 27 not in rule_matches:
    rule_matches[27] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['83']:
    rule_matches[27]['correct_lines'].append(p[0].line)
else:
    rule_matches[27]['other_lines'].append(p[0].line)

@ r28 @
symbol cocci_id;
position p;
@@
 const struct hda_fixup cocci_id@p [ ] ;

@ script:python depends on r28 @
p << r28.p;
@@

if 28 not in rule_matches:
    rule_matches[28] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['132']:
    rule_matches[28]['correct_lines'].append(p[0].line)
else:
    rule_matches[28]['other_lines'].append(p[0].line)

@ r29 @
symbol cocci_id;
position p;
@@
 enum { ALC268_FIXUP_INV_DMIC , ALC268_FIXUP_HP_EAPD , ALC268_FIXUP_SPDIF , } cocci_id@p ;

@ script:python depends on r29 @
p << r29.p;
@@

if 29 not in rule_matches:
    rule_matches[29] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['103']:
    rule_matches[29]['correct_lines'].append(p[0].line)
else:
    rule_matches[29]['other_lines'].append(p[0].line)

@ r30 @
symbol cocci_id;
position p;
@@
 enum { ALC_HEADSET_TYPE_UNKNOWN , ALC_HEADSET_TYPE_CTIA , ALC_HEADSET_TYPE_OMTP , } cocci_id@p ;

@ script:python depends on r30 @
p << r30.p;
@@

if 30 not in rule_matches:
    rule_matches[30] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['84']:
    rule_matches[30]['correct_lines'].append(p[0].line)
else:
    rule_matches[30]['other_lines'].append(p[0].line)

@ r31 @
symbol cocci_id;
position p;
@@
 const struct hda_verb cocci_id@p [ ] ;

@ script:python depends on r31 @
p << r31.p;
@@

if 31 not in rule_matches:
    rule_matches[31] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['125']:
    rule_matches[31]['correct_lines'].append(p[0].line)
else:
    rule_matches[31]['other_lines'].append(p[0].line)

@ r32 @
symbol cocci_id;
position p;
typedef hda_nid_t;
@@
 hda_nid_t cocci_id@p [ ] ;

@ script:python depends on r32 @
p << r32.p;
@@

if 32 not in rule_matches:
    rule_matches[32] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['63']:
    rule_matches[32]['correct_lines'].append(p[0].line)
else:
    rule_matches[32]['other_lines'].append(p[0].line)

@ r33 @
symbol cocci_id;
position p;
typedef hda_nid_t;
@@
 hda_nid_t cocci_id@p [ 5 ] ;

@ script:python depends on r33 @
p << r33.p;
@@

if 33 not in rule_matches:
    rule_matches[33] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['119']:
    rule_matches[33]['correct_lines'].append(p[0].line)
else:
    rule_matches[33]['other_lines'].append(p[0].line)

@ r34 @
symbol cocci_id;
position p;
@@
 enum { ALC_KEY_MICMUTE_INDEX , } cocci_id@p ;

@ script:python depends on r34 @
p << r34.p;
@@

if 34 not in rule_matches:
    rule_matches[34] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['80']:
    rule_matches[34]['correct_lines'].append(p[0].line)
else:
    rule_matches[34]['other_lines'].append(p[0].line)

@ r35 @
symbol cocci_id;
position p;
@@
 const struct hda_jack_keymap cocci_id@p [ ] ;

@ script:python depends on r35 @
p << r35.p;
@@

if 35 not in rule_matches:
    rule_matches[35] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['62']:
    rule_matches[35]['correct_lines'].append(p[0].line)
else:
    rule_matches[35]['other_lines'].append(p[0].line)

@ r36 @
symbol cocci_id;
position p;
typedef bool;
@@
 bool cocci_id@p ;

@ script:python depends on r36 @
p << r36.p;
@@

if 36 not in rule_matches:
    rule_matches[36] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['96']:
    rule_matches[36]['correct_lines'].append(p[0].line)
else:
    rule_matches[36]['other_lines'].append(p[0].line)

@ r37 @
symbol cocci_id;
position p;
@@
 void cocci_id@p ( struct hda_codec * codec , const struct hda_fixup * fix , int action ) ;

@ script:python depends on r37 @
p << r37.p;
@@

if 37 not in rule_matches:
    rule_matches[37] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['115', '117']:
    rule_matches[37]['correct_lines'].append(p[0].line)
else:
    rule_matches[37]['other_lines'].append(p[0].line)

@ r38 @
symbol cocci_id;
position p;
@@
 const struct hda_pcm_stream cocci_id@p ;

@ script:python depends on r38 @
p << r38.p;
@@

if 38 not in rule_matches:
    rule_matches[38] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['102']:
    rule_matches[38]['correct_lines'].append(p[0].line)
else:
    rule_matches[38]['other_lines'].append(p[0].line)

@ r39 @
symbol cocci_id;
position p;
@@
 struct hda_codec * cocci_id@p ;

@ script:python depends on r39 @
p << r39.p;
@@

if 39 not in rule_matches:
    rule_matches[39] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['112']:
    rule_matches[39]['correct_lines'].append(p[0].line)
else:
    rule_matches[39]['other_lines'].append(p[0].line)

@ r40 @
symbol cocci_id;
position p;
typedef hda_nid_t;
@@
 const hda_nid_t * cocci_id@p ;

@ script:python depends on r40 @
p << r40.p;
@@

if 40 not in rule_matches:
    rule_matches[40] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['100']:
    rule_matches[40]['correct_lines'].append(p[0].line)
else:
    rule_matches[40]['other_lines'].append(p[0].line)

@ r41 @
symbol cocci_id;
position p;
@@
 const char * cocci_id@p ;

@ script:python depends on r41 @
p << r41.p;
@@

if 41 not in rule_matches:
    rule_matches[41] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['114']:
    rule_matches[41]['correct_lines'].append(p[0].line)
else:
    rule_matches[41]['other_lines'].append(p[0].line)

@ r42 @
symbol cocci_id;
position p;
@@
 const struct alc_codec_rename_pci_table * cocci_id@p ;

@ script:python depends on r42 @
p << r42.p;
@@

if 42 not in rule_matches:
    rule_matches[42] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['139']:
    rule_matches[42]['correct_lines'].append(p[0].line)
else:
    rule_matches[42]['other_lines'].append(p[0].line)

@ r43 @
symbol cocci_id;
position p;
@@
 struct auto_pin_cfg * cocci_id@p ;

@ script:python depends on r43 @
p << r43.p;
@@

if 43 not in rule_matches:
    rule_matches[43] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['78']:
    rule_matches[43]['correct_lines'].append(p[0].line)
else:
    rule_matches[43]['other_lines'].append(p[0].line)

@ r44 @
symbol cocci_id;
position p;
typedef hda_nid_t;
@@
 hda_nid_t cocci_id@p [ 2 ] ;

@ script:python depends on r44 @
p << r44.p;
@@

if 44 not in rule_matches:
    rule_matches[44] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['76']:
    rule_matches[44]['correct_lines'].append(p[0].line)
else:
    rule_matches[44]['other_lines'].append(p[0].line)

@ r45 @
symbol cocci_id;
position p;
@@
 const struct snd_pci_quirk cocci_id@p [ ] ;

@ script:python depends on r45 @
p << r45.p;
@@

if 45 not in rule_matches:
    rule_matches[45] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['124']:
    rule_matches[45]['correct_lines'].append(p[0].line)
else:
    rule_matches[45]['other_lines'].append(p[0].line)

@ r46 @
symbol cocci_id;
position p;
@@
 unsigned short cocci_id@p ;

@ script:python depends on r46 @
p << r46.p;
@@

if 46 not in rule_matches:
    rule_matches[46] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['120']:
    rule_matches[46]['correct_lines'].append(p[0].line)
else:
    rule_matches[46]['other_lines'].append(p[0].line)

@ r47 @
symbol cocci_id;
position p;
@@
 struct alc_customize_define {  unsigned int sku_cfg ;  unsigned char port_connectivity ;  unsigned char check_sum ;  unsigned char customization ;  unsigned char external_amp ;  unsigned int enable_pcbeep : 1 ;  unsigned int platform_type : 1 ;  unsigned int swap : 1 ;  unsigned int override : 1 ;  unsigned int fixup : 1 ; } cocci_id@p ;

@ script:python depends on r47 @
p << r47.p;
@@

if 47 not in rule_matches:
    rule_matches[47] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['64', '75']:
    rule_matches[47]['correct_lines'].append(p[0].line)
else:
    rule_matches[47]['other_lines'].append(p[0].line)

@ r48 @
symbol cocci_id;
position p;
@@
 struct alc_codec_rename_table cocci_id@p [ ] ;

@ script:python depends on r48 @
p << r48.p;
@@

if 48 not in rule_matches:
    rule_matches[48] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['3']:
    rule_matches[48]['correct_lines'].append(p[0].line)
else:
    rule_matches[48]['other_lines'].append(p[0].line)

@ r49 @
symbol cocci_id;
position p;
@@
 struct alc_codec_rename_table {  unsigned int vendor_id ;  unsigned short coef_mask ;  unsigned short coef_bits ;  const char * name ; } cocci_id@p ;

@ script:python depends on r49 @
p << r49.p;
@@

if 49 not in rule_matches:
    rule_matches[49] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['10', '15']:
    rule_matches[49]['correct_lines'].append(p[0].line)
else:
    rule_matches[49]['other_lines'].append(p[0].line)

@ r50 @
symbol cocci_id;
position p;
@@
 struct snd_kcontrol_new * cocci_id@p ;

@ script:python depends on r50 @
p << r50.p;
@@

if 50 not in rule_matches:
    rule_matches[50] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['138']:
    rule_matches[50]['correct_lines'].append(p[0].line)
else:
    rule_matches[50]['other_lines'].append(p[0].line)

@ r51 @
symbol cocci_id;
position p;
typedef hda_nid_t;
@@
 hda_nid_t cocci_id@p ;

@ script:python depends on r51 @
p << r51.p;
@@

if 51 not in rule_matches:
    rule_matches[51] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['97']:
    rule_matches[51]['correct_lines'].append(p[0].line)
else:
    rule_matches[51]['other_lines'].append(p[0].line)

@ r52 @
symbol cocci_id;
position p;
@@
 enum { ALC269_TYPE_ALC269VA , ALC269_TYPE_ALC269VB , ALC269_TYPE_ALC269VC , ALC269_TYPE_ALC269VD , ALC269_TYPE_ALC280 , ALC269_TYPE_ALC282 , ALC269_TYPE_ALC283 , ALC269_TYPE_ALC284 , ALC269_TYPE_ALC293 , ALC269_TYPE_ALC286 , ALC269_TYPE_ALC298 , ALC269_TYPE_ALC255 , ALC269_TYPE_ALC256 , ALC269_TYPE_ALC257 , ALC269_TYPE_ALC215 , ALC269_TYPE_ALC225 , ALC269_TYPE_ALC294 , ALC269_TYPE_ALC300 , ALC269_TYPE_ALC623 , ALC269_TYPE_ALC700 , } cocci_id@p ;

@ script:python depends on r52 @
p << r52.p;
@@

if 52 not in rule_matches:
    rule_matches[52] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['101']:
    rule_matches[52]['correct_lines'].append(p[0].line)
else:
    rule_matches[52]['other_lines'].append(p[0].line)

@ r53 @
symbol cocci_id;
position p;
@@
 const struct hda_alc298_mbxinit * cocci_id@p ;

@ script:python depends on r53 @
p << r53.p;
@@

if 53 not in rule_matches:
    rule_matches[53] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['88']:
    rule_matches[53]['correct_lines'].append(p[0].line)
else:
    rule_matches[53]['other_lines'].append(p[0].line)

@ r54 @
symbol cocci_id;
position p;
@@
 unsigned cocci_id@p ;

@ script:python depends on r54 @
p << r54.p;
@@

if 54 not in rule_matches:
    rule_matches[54] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['60']:
    rule_matches[54]['correct_lines'].append(p[0].line)
else:
    rule_matches[54]['other_lines'].append(p[0].line)

@ r55 @
symbol cocci_id;
position p;
@@
 const struct hda_fixup * cocci_id@p ;

@ script:python depends on r55 @
p << r55.p;
@@

if 55 not in rule_matches:
    rule_matches[55] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['111']:
    rule_matches[55]['correct_lines'].append(p[0].line)
else:
    rule_matches[55]['other_lines'].append(p[0].line)

@ r56 @
symbol cocci_id;
position p;
@@
 int cocci_id@p ( struct hda_codec * codec ) ;

@ script:python depends on r56 @
p << r56.p;
@@

if 56 not in rule_matches:
    rule_matches[56] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['82']:
    rule_matches[56]['correct_lines'].append(p[0].line)
else:
    rule_matches[56]['other_lines'].append(p[0].line)

@ r57 @
symbol cocci_id;
position p;
@@
 const struct alc_codec_rename_table * cocci_id@p ;

@ script:python depends on r57 @
p << r57.p;
@@

if 57 not in rule_matches:
    rule_matches[57] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['140']:
    rule_matches[57]['correct_lines'].append(p[0].line)
else:
    rule_matches[57]['other_lines'].append(p[0].line)

@ r58 @
symbol cocci_id;
position p;
@@
 const struct snd_kcontrol_new cocci_id@p [ ] ;

@ script:python depends on r58 @
p << r58.p;
@@

if 58 not in rule_matches:
    rule_matches[58] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['104']:
    rule_matches[58]['correct_lines'].append(p[0].line)
else:
    rule_matches[58]['other_lines'].append(p[0].line)

@ r59 @
symbol cocci_id;
position p;
@@
 enum { ALC269_FIXUP_SONY_VAIO , ALC275_FIXUP_SONY_VAIO_GPIO2 , ALC269_FIXUP_DELL_M101Z , ALC269_FIXUP_SKU_IGNORE , ALC269_FIXUP_ASUS_G73JW , ALC269_FIXUP_LENOVO_EAPD , ALC275_FIXUP_SONY_HWEQ , ALC275_FIXUP_SONY_DISABLE_AAMIX , ALC271_FIXUP_DMIC , ALC269_FIXUP_PCM_44K , ALC269_FIXUP_STEREO_DMIC , ALC269_FIXUP_HEADSET_MIC , ALC269_FIXUP_QUANTA_MUTE , ALC269_FIXUP_LIFEBOOK , ALC269_FIXUP_LIFEBOOK_EXTMIC , ALC269_FIXUP_LIFEBOOK_HP_PIN , ALC269_FIXUP_LIFEBOOK_NO_HP_TO_LINEOUT , ALC255_FIXUP_LIFEBOOK_U7x7_HEADSET_MIC , ALC269_FIXUP_AMIC , ALC269_FIXUP_DMIC , ALC269VB_FIXUP_AMIC , ALC269VB_FIXUP_DMIC , ALC269_FIXUP_HP_MUTE_LED , ALC269_FIXUP_HP_MUTE_LED_MIC1 , ALC269_FIXUP_HP_MUTE_LED_MIC2 , ALC269_FIXUP_HP_MUTE_LED_MIC3 , ALC269_FIXUP_HP_GPIO_LED , ALC269_FIXUP_HP_GPIO_MIC1_LED , ALC269_FIXUP_HP_LINE1_MIC1_LED , ALC269_FIXUP_INV_DMIC , ALC269_FIXUP_LENOVO_DOCK , ALC269_FIXUP_NO_SHUTUP , ALC286_FIXUP_SONY_MIC_NO_PRESENCE , ALC269_FIXUP_PINCFG_NO_HP_TO_LINEOUT , ALC269_FIXUP_DELL1_MIC_NO_PRESENCE , ALC269_FIXUP_DELL2_MIC_NO_PRESENCE , ALC269_FIXUP_DELL3_MIC_NO_PRESENCE , ALC269_FIXUP_DELL4_MIC_NO_PRESENCE , ALC269_FIXUP_HEADSET_MODE , ALC269_FIXUP_HEADSET_MODE_NO_HP_MIC , ALC269_FIXUP_ASPIRE_HEADSET_MIC , ALC269_FIXUP_ASUS_X101_FUNC , ALC269_FIXUP_ASUS_X101_VERB , ALC269_FIXUP_ASUS_X101 , ALC271_FIXUP_AMIC_MIC2 , ALC271_FIXUP_HP_GATE_MIC_JACK , ALC271_FIXUP_HP_GATE_MIC_JACK_E1_572 , ALC269_FIXUP_ACER_AC700 , ALC269_FIXUP_LIMIT_INT_MIC_BOOST , ALC269VB_FIXUP_ASUS_ZENBOOK , ALC269VB_FIXUP_ASUS_ZENBOOK_UX31A , ALC269_FIXUP_LIMIT_INT_MIC_BOOST_MUTE_LED , ALC269VB_FIXUP_ORDISSIMO_EVE2 , ALC283_FIXUP_CHROME_BOOK , ALC283_FIXUP_SENSE_COMBO_JACK , ALC282_FIXUP_ASUS_TX300 , ALC283_FIXUP_INT_MIC , ALC290_FIXUP_MONO_SPEAKERS , ALC290_FIXUP_MONO_SPEAKERS_HSJACK , ALC290_FIXUP_SUBWOOFER , ALC290_FIXUP_SUBWOOFER_HSJACK , ALC269_FIXUP_THINKPAD_ACPI , ALC269_FIXUP_DMIC_THINKPAD_ACPI , ALC255_FIXUP_ACER_MIC_NO_PRESENCE , ALC255_FIXUP_ASUS_MIC_NO_PRESENCE , ALC255_FIXUP_DELL1_MIC_NO_PRESENCE , ALC255_FIXUP_DELL2_MIC_NO_PRESENCE , ALC255_FIXUP_HEADSET_MODE , ALC255_FIXUP_HEADSET_MODE_NO_HP_MIC , ALC293_FIXUP_DELL1_MIC_NO_PRESENCE , ALC292_FIXUP_TPT440_DOCK , ALC292_FIXUP_TPT440 , ALC283_FIXUP_HEADSET_MIC , ALC255_FIXUP_MIC_MUTE_LED , ALC282_FIXUP_ASPIRE_V5_PINS , ALC280_FIXUP_HP_GPIO4 , ALC286_FIXUP_HP_GPIO_LED , ALC280_FIXUP_HP_GPIO2_MIC_HOTKEY , ALC280_FIXUP_HP_DOCK_PINS , ALC269_FIXUP_HP_DOCK_GPIO_MIC1_LED , ALC280_FIXUP_HP_9480M , ALC288_FIXUP_DELL_HEADSET_MODE , ALC288_FIXUP_DELL1_MIC_NO_PRESENCE , ALC288_FIXUP_DELL_XPS_13 , ALC288_FIXUP_DISABLE_AAMIX , ALC292_FIXUP_DELL_E7X , ALC292_FIXUP_DISABLE_AAMIX , ALC293_FIXUP_DISABLE_AAMIX_MULTIJACK , ALC298_FIXUP_ALIENWARE_MIC_NO_PRESENCE , ALC298_FIXUP_DELL1_MIC_NO_PRESENCE , ALC298_FIXUP_DELL_AIO_MIC_NO_PRESENCE , ALC275_FIXUP_DELL_XPS , ALC256_FIXUP_DELL_XPS_13_HEADPHONE_NOISE , ALC256_FIXUP_DELL_XPS_13_HEADPHONE_NOISE2 , ALC293_FIXUP_LENOVO_SPK_NOISE , ALC233_FIXUP_LENOVO_LINE2_MIC_HOTKEY , ALC255_FIXUP_DELL_SPK_NOISE , ALC225_FIXUP_DISABLE_MIC_VREF , ALC225_FIXUP_DELL1_MIC_NO_PRESENCE , ALC295_FIXUP_DISABLE_DAC3 , ALC285_FIXUP_SPEAKER2_TO_DAC1 , ALC280_FIXUP_HP_HEADSET_MIC , ALC221_FIXUP_HP_FRONT_MIC , ALC292_FIXUP_TPT460 , ALC298_FIXUP_SPK_VOLUME , ALC256_FIXUP_DELL_INSPIRON_7559_SUBWOOFER , ALC269_FIXUP_ATIV_BOOK_8 , ALC221_FIXUP_HP_MIC_NO_PRESENCE , ALC256_FIXUP_ASUS_HEADSET_MODE , ALC256_FIXUP_ASUS_MIC , ALC256_FIXUP_ASUS_AIO_GPIO2 , ALC233_FIXUP_ASUS_MIC_NO_PRESENCE , ALC233_FIXUP_EAPD_COEF_AND_MIC_NO_PRESENCE , ALC233_FIXUP_LENOVO_MULTI_CODECS , ALC233_FIXUP_ACER_HEADSET_MIC , ALC294_FIXUP_LENOVO_MIC_LOCATION , ALC225_FIXUP_DELL_WYSE_MIC_NO_PRESENCE , ALC700_FIXUP_INTEL_REFERENCE , ALC274_FIXUP_DELL_BIND_DACS , ALC274_FIXUP_DELL_AIO_LINEOUT_VERB , ALC298_FIXUP_TPT470_DOCK , ALC255_FIXUP_DUMMY_LINEOUT_VERB , ALC255_FIXUP_DELL_HEADSET_MIC , ALC256_FIXUP_HUAWEI_MACH_WX9_PINS , ALC298_FIXUP_HUAWEI_MBX_STEREO , ALC295_FIXUP_HP_X360 , ALC221_FIXUP_HP_HEADSET_MIC , ALC285_FIXUP_LENOVO_HEADPHONE_NOISE , ALC295_FIXUP_HP_AUTO_MUTE , ALC286_FIXUP_ACER_AIO_MIC_NO_PRESENCE , ALC294_FIXUP_ASUS_MIC , ALC294_FIXUP_ASUS_HEADSET_MIC , ALC294_FIXUP_ASUS_SPK , ALC293_FIXUP_SYSTEM76_MIC_NO_PRESENCE , ALC285_FIXUP_LENOVO_PC_BEEP_IN_NOISE , ALC255_FIXUP_ACER_HEADSET_MIC , ALC295_FIXUP_CHROME_BOOK , ALC225_FIXUP_HEADSET_JACK , ALC225_FIXUP_DELL_WYSE_AIO_MIC_NO_PRESENCE , ALC225_FIXUP_WYSE_AUTO_MUTE , ALC225_FIXUP_WYSE_DISABLE_MIC_VREF , ALC286_FIXUP_ACER_AIO_HEADSET_MIC , ALC256_FIXUP_ASUS_HEADSET_MIC , ALC256_FIXUP_ASUS_MIC_NO_PRESENCE , ALC299_FIXUP_PREDATOR_SPK , ALC294_FIXUP_ASUS_INTSPK_HEADSET_MIC , ALC256_FIXUP_MEDION_HEADSET_NO_PRESENCE , ALC294_FIXUP_ASUS_INTSPK_GPIO , } cocci_id@p ;

@ script:python depends on r59 @
p << r59.p;
@@

if 59 not in rule_matches:
    rule_matches[59] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['61']:
    rule_matches[59]['correct_lines'].append(p[0].line)
else:
    rule_matches[59]['other_lines'].append(p[0].line)

@ r60 @
symbol cocci_id;
position p;
@@
 int cocci_id@p ;

@ script:python depends on r60 @
p << r60.p;
@@

if 60 not in rule_matches:
    rule_matches[60] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['110']:
    rule_matches[60]['correct_lines'].append(p[0].line)
else:
    rule_matches[60]['other_lines'].append(p[0].line)

@ r61 @
symbol cocci_id;
position p;
typedef hda_nid_t;
@@
 hda_nid_t cocci_id@p [ 3 ] ;

@ script:python depends on r61 @
p << r61.p;
@@

if 61 not in rule_matches:
    rule_matches[61] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['118']:
    rule_matches[61]['correct_lines'].append(p[0].line)
else:
    rule_matches[61]['other_lines'].append(p[0].line)

@ r62 @
symbol cocci_id;
position p;
@@
 struct coef_fw cocci_id@p [ ] ;

@ script:python depends on r62 @
p << r62.p;
@@

if 62 not in rule_matches:
    rule_matches[62] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['85']:
    rule_matches[62]['correct_lines'].append(p[0].line)
else:
    rule_matches[62]['other_lines'].append(p[0].line)

@ r63 @
symbol cocci_id;
position p;
@@
 enum { ALC260_FIXUP_HP_DC5750 , ALC260_FIXUP_HP_PIN_0F , ALC260_FIXUP_COEF , ALC260_FIXUP_GPIO1 , ALC260_FIXUP_GPIO1_TOGGLE , ALC260_FIXUP_REPLACER , ALC260_FIXUP_HP_B1900 , ALC260_FIXUP_KN1 , ALC260_FIXUP_FSC_S7020 , ALC260_FIXUP_FSC_S7020_JWSE , ALC260_FIXUP_VAIO_PINS , } cocci_id@p ;

@ script:python depends on r63 @
p << r63.p;
@@

if 63 not in rule_matches:
    rule_matches[63] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['134']:
    rule_matches[63]['correct_lines'].append(p[0].line)
else:
    rule_matches[63]['other_lines'].append(p[0].line)

@ r64 @
symbol cocci_id;
position p;
@@
 enum { ALC_HEADSET_MODE_UNKNOWN , ALC_HEADSET_MODE_UNPLUGGED , ALC_HEADSET_MODE_HEADSET , ALC_HEADSET_MODE_MIC , ALC_HEADSET_MODE_HEADPHONE , } cocci_id@p ;

@ script:python depends on r64 @
p << r64.p;
@@

if 64 not in rule_matches:
    rule_matches[64] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['90']:
    rule_matches[64]['correct_lines'].append(p[0].line)
else:
    rule_matches[64]['other_lines'].append(p[0].line)

@ r65 @
symbol cocci_id;
position p;
@@
 struct snd_kcontrol * cocci_id@p ;

@ script:python depends on r65 @
p << r65.p;
@@

if 65 not in rule_matches:
    rule_matches[65] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['107']:
    rule_matches[65]['correct_lines'].append(p[0].line)
else:
    rule_matches[65]['other_lines'].append(p[0].line)

@ r66 @
symbol cocci_id;
position p;
@@
 struct coef_fw {  unsigned char nid ;  unsigned char idx ;  unsigned short mask ;  unsigned short val ; } cocci_id@p ;

@ script:python depends on r66 @
p << r66.p;
@@

if 66 not in rule_matches:
    rule_matches[66] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['126', '131']:
    rule_matches[66]['correct_lines'].append(p[0].line)
else:
    rule_matches[66]['other_lines'].append(p[0].line)

@ r67 @
symbol cocci_id;
position p;
@@
 const struct snd_pci_quirk * cocci_id@p ;

@ script:python depends on r67 @
p << r67.p;
@@

if 67 not in rule_matches:
    rule_matches[67] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['137']:
    rule_matches[67]['correct_lines'].append(p[0].line)
else:
    rule_matches[67]['other_lines'].append(p[0].line)

@ r68 @
symbol cocci_id;
position p;
@@
 struct alc_spec * cocci_id@p ;

@ script:python depends on r68 @
p << r68.p;
@@

if 68 not in rule_matches:
    rule_matches[68] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['98']:
    rule_matches[68]['correct_lines'].append(p[0].line)
else:
    rule_matches[68]['other_lines'].append(p[0].line)

@ r69 @
symbol cocci_id;
position p;
@@
 const struct hda_pintbl cocci_id@p [ ] ;

@ script:python depends on r69 @
p << r69.p;
@@

if 69 not in rule_matches:
    rule_matches[69] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['133']:
    rule_matches[69]['correct_lines'].append(p[0].line)
else:
    rule_matches[69]['other_lines'].append(p[0].line)

@ r70 @
symbol cocci_id;
position p;
@@
 unsigned int cocci_id@p ;

@ script:python depends on r70 @
p << r70.p;
@@

if 70 not in rule_matches:
    rule_matches[70] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['77']:
    rule_matches[70]['correct_lines'].append(p[0].line)
else:
    rule_matches[70]['other_lines'].append(p[0].line)

@ r71 @
symbol cocci_id;
position p;
@@
 struct hda_alc298_mbxinit {  unsigned char value_0x23 ;  unsigned char value_0x25 ; } cocci_id@p ;

@ script:python depends on r71 @
p << r71.p;
@@

if 71 not in rule_matches:
    rule_matches[71] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['91', '94']:
    rule_matches[71]['correct_lines'].append(p[0].line)
else:
    rule_matches[71]['other_lines'].append(p[0].line)

@ r72 @
symbol cocci_id;
position p;
typedef hda_nid_t;
@@
 hda_nid_t cocci_id@p [ 1 ] ;

@ script:python depends on r72 @
p << r72.p;
@@

if 72 not in rule_matches:
    rule_matches[72] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['109']:
    rule_matches[72]['correct_lines'].append(p[0].line)
else:
    rule_matches[72]['other_lines'].append(p[0].line)

@ finalize:python @
@@
rules = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72]
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
