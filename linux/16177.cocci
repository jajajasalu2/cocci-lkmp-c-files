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
if p[0].line in ['82']:
    rule_matches[1]['correct_lines'].append(p[0].line)
else:
    rule_matches[1]['other_lines'].append(p[0].line)

@ r2 @
symbol cocci_id;
position p;
@@
 struct pci_dev * cocci_id@p ;

@ script:python depends on r2 @
p << r2.p;
@@

if 2 not in rule_matches:
    rule_matches[2] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['81']:
    rule_matches[2]['correct_lines'].append(p[0].line)
else:
    rule_matches[2]['other_lines'].append(p[0].line)

@ r3 @
symbol cocci_id;
position p;
@@
 enum register_layout { LAYOUT_60XX , LAYOUT_64XX , LAYOUT_4020 , } cocci_id@p ;

@ script:python depends on r3 @
p << r3.p;
@@

if 3 not in rule_matches:
    rule_matches[3] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['28']:
    rule_matches[3]['correct_lines'].append(p[0].line)
else:
    rule_matches[3]['other_lines'].append(p[0].line)

@ r4 @
symbol cocci_id;
position p;
@@
 enum dac_control0_contents { DAC_ENABLE_BIT = 0x8000 , DAC_CYCLIC_STOP_BIT = 0x4000 , DAC_WAVEFORM_MODE_BIT = 0x100 , DAC_EXT_UPDATE_FALLING_BIT = 0x80 , DAC_EXT_UPDATE_ENABLE_BIT = 0x40 , WAVEFORM_TRIG_MASK = 0x30 , WAVEFORM_TRIG_DISABLED_BITS = 0x0 , WAVEFORM_TRIG_SOFT_BITS = 0x10 , WAVEFORM_TRIG_EXT_BITS = 0x20 , WAVEFORM_TRIG_ADC1_BITS = 0x30 , WAVEFORM_TRIG_FALLING_BIT = 0x8 , WAVEFORM_GATE_LEVEL_BIT = 0x4 , WAVEFORM_GATE_ENABLE_BIT = 0x2 , WAVEFORM_GATE_SELECT_BIT = 0x1 , } cocci_id@p ;

@ script:python depends on r4 @
p << r4.p;
@@

if 4 not in rule_matches:
    rule_matches[4] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['50']:
    rule_matches[4]['correct_lines'].append(p[0].line)
else:
    rule_matches[4]['other_lines'].append(p[0].line)

@ r5 @
symbol cocci_id;
position p;
@@
 struct pci_driver cocci_id@p ;

@ script:python depends on r5 @
p << r5.p;
@@

if 5 not in rule_matches:
    rule_matches[5] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['37']:
    rule_matches[5]['correct_lines'].append(p[0].line)
else:
    rule_matches[5]['other_lines'].append(p[0].line)

@ r6 @
symbol cocci_id;
position p;
@@
 struct pcidas64_private * cocci_id@p ;

@ script:python depends on r6 @
p << r6.p;
@@

if 6 not in rule_matches:
    rule_matches[6] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['83']:
    rule_matches[6]['correct_lines'].append(p[0].line)
else:
    rule_matches[6]['other_lines'].append(p[0].line)

@ r7 @
symbol cocci_id;
position p;
@@
 enum read_only_registers { HW_STATUS_REG = 0x0 , PIPE1_READ_REG = 0x4 , ADC_READ_PNTR_REG = 0x8 , LOWER_XFER_REG = 0x10 , ADC_WRITE_PNTR_REG = 0xc , PREPOST_REG = 0x14 , } cocci_id@p ;

@ script:python depends on r7 @
p << r7.p;
@@

if 7 not in rule_matches:
    rule_matches[7] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['80']:
    rule_matches[7]['correct_lines'].append(p[0].line)
else:
    rule_matches[7]['other_lines'].append(p[0].line)

@ r8 @
symbol cocci_id;
position p;
@@
 const struct pci_device_id cocci_id@p [ ] ;

@ script:python depends on r8 @
p << r8.p;
@@

if 8 not in rule_matches:
    rule_matches[8] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['38']:
    rule_matches[8]['correct_lines'].append(p[0].line)
else:
    rule_matches[8]['other_lines'].append(p[0].line)

@ r9 @
symbol cocci_id;
position p;
@@
 enum calibration_contents { SELECT_8800_BIT = 0x1 , SELECT_8402_64XX_BIT = 0x2 , SELECT_1590_60XX_BIT = 0x2 , CAL_EN_64XX_BIT = 0x40 , SERIAL_DATA_IN_BIT = 0x80 , SERIAL_CLOCK_BIT = 0x100 , CAL_EN_60XX_BIT = 0x200 , CAL_GAIN_BIT = 0x800 , } cocci_id@p ;

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
 const struct pci_device_id * cocci_id@p ;

@ script:python depends on r10 @
p << r10.p;
@@

if 10 not in rule_matches:
    rule_matches[10] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['39']:
    rule_matches[10]['correct_lines'].append(p[0].line)
else:
    rule_matches[10]['other_lines'].append(p[0].line)

@ r11 @
symbol cocci_id;
position p;
@@
 enum pointer_bits { OFFSET_0_2 = 0x1 , GAIN_0_2 = 0x2 , OFFSET_1_3 = 0x4 , GAIN_1_3 = 0x8 , } cocci_id@p ;

@ script:python depends on r11 @
p << r11.p;
@@

if 11 not in rule_matches:
    rule_matches[11] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['47']:
    rule_matches[11]['correct_lines'].append(p[0].line)
else:
    rule_matches[11]['other_lines'].append(p[0].line)

@ r12 @
symbol cocci_id;
position p;
@@
 struct comedi_insn * cocci_id@p ;

@ script:python depends on r12 @
p << r12.p;
@@

if 12 not in rule_matches:
    rule_matches[12] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['72']:
    rule_matches[12]['correct_lines'].append(p[0].line)
else:
    rule_matches[12]['other_lines'].append(p[0].line)

@ r13 @
symbol cocci_id;
position p;
@@
 const struct comedi_cmd * cocci_id@p ;

@ script:python depends on r13 @
p << r13.p;
@@

if 13 not in rule_matches:
    rule_matches[13] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['67']:
    rule_matches[13]['correct_lines'].append(p[0].line)
else:
    rule_matches[13]['other_lines'].append(p[0].line)

@ r14 @
symbol cocci_id;
position p;
typedef u8;
@@
 u8 cocci_id@p [ 3 ] ;

@ script:python depends on r14 @
p << r14.p;
@@

if 14 not in rule_matches:
    rule_matches[14] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['48']:
    rule_matches[14]['correct_lines'].append(p[0].line)
else:
    rule_matches[14]['other_lines'].append(p[0].line)

@ r15 @
symbol cocci_id;
position p;
@@
 unsigned long long cocci_id@p ;

@ script:python depends on r15 @
p << r15.p;
@@

if 15 not in rule_matches:
    rule_matches[15] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['71']:
    rule_matches[15]['correct_lines'].append(p[0].line)
else:
    rule_matches[15]['other_lines'].append(p[0].line)

@ r16 @
symbol cocci_id;
position p;
typedef u16;
@@
 u16 * cocci_id@p ;

@ script:python depends on r16 @
p << r16.p;
@@

if 16 not in rule_matches:
    rule_matches[16] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['87']:
    rule_matches[16]['correct_lines'].append(p[0].line)
else:
    rule_matches[16]['other_lines'].append(p[0].line)

@ r17 @
symbol cocci_id;
position p;
typedef u8;
@@
 struct pcidas64_board {  const char * name ;  int ai_se_chans ;  int ai_bits ;  int ai_speed ;  const struct comedi_lrange * ai_range_table ;  const u8 * ai_range_code ;  int ao_nchan ;  int ao_bits ;  int ao_scan_speed ;  const struct comedi_lrange * ao_range_table ;  const int * ao_range_code ;  const struct hw_fifo_info * const ai_fifo ;  enum register_layout layout ;  unsigned has_8255 : 1 ; } cocci_id@p ;

@ script:python depends on r17 @
p << r17.p;
@@

if 17 not in rule_matches:
    rule_matches[17] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['5', '20']:
    rule_matches[17]['correct_lines'].append(p[0].line)
else:
    rule_matches[17]['other_lines'].append(p[0].line)

@ r18 @
symbol cocci_id;
position p;
@@
 enum pcidas64_boardid { BOARD_PCIDAS6402_16 , BOARD_PCIDAS6402_12 , BOARD_PCIDAS64_M1_16 , BOARD_PCIDAS64_M2_16 , BOARD_PCIDAS64_M3_16 , BOARD_PCIDAS6013 , BOARD_PCIDAS6014 , BOARD_PCIDAS6023 , BOARD_PCIDAS6025 , BOARD_PCIDAS6030 , BOARD_PCIDAS6031 , BOARD_PCIDAS6032 , BOARD_PCIDAS6033 , BOARD_PCIDAS6034 , BOARD_PCIDAS6035 , BOARD_PCIDAS6036 , BOARD_PCIDAS6040 , BOARD_PCIDAS6052 , BOARD_PCIDAS6070 , BOARD_PCIDAS6071 , BOARD_PCIDAS4020_12 , BOARD_PCIDAS6402_16_JR , BOARD_PCIDAS64_M1_16_JR , BOARD_PCIDAS64_M2_16_JR , BOARD_PCIDAS64_M3_16_JR , BOARD_PCIDAS64_M1_14 , BOARD_PCIDAS64_M2_14 , BOARD_PCIDAS64_M3_14 , } cocci_id@p ;

@ script:python depends on r18 @
p << r18.p;
@@

if 18 not in rule_matches:
    rule_matches[18] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['21']:
    rule_matches[18]['correct_lines'].append(p[0].line)
else:
    rule_matches[18]['other_lines'].append(p[0].line)

@ r19 @
symbol cocci_id;
position p;
@@
 struct comedi_cmd * cocci_id@p ;

@ script:python depends on r19 @
p << r19.p;
@@

if 19 not in rule_matches:
    rule_matches[19] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['63']:
    rule_matches[19]['correct_lines'].append(p[0].line)
else:
    rule_matches[19]['other_lines'].append(p[0].line)

@ r20 @
symbol cocci_id;
position p;
@@
 enum i2c_addresses { RANGE_CAL_I2C_ADDR = 0x20 , CALDAC0_I2C_ADDR = 0xc , CALDAC1_I2C_ADDR = 0xd , } cocci_id@p ;

@ script:python depends on r20 @
p << r20.p;
@@

if 20 not in rule_matches:
    rule_matches[20] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['42']:
    rule_matches[20]['correct_lines'].append(p[0].line)
else:
    rule_matches[20]['other_lines'].append(p[0].line)

@ r21 @
symbol cocci_id;
position p;
@@
 enum range_cal_i2c_contents { ADC_SRC_4020_MASK = 0x70 , BNC_TRIG_THRESHOLD_0V_BIT = 0x80 , } cocci_id@p ;

@ script:python depends on r21 @
p << r21.p;
@@

if 21 not in rule_matches:
    rule_matches[21] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['41']:
    rule_matches[21]['correct_lines'].append(p[0].line)
else:
    rule_matches[21]['other_lines'].append(p[0].line)

@ r22 @
symbol cocci_id;
position p;
@@
 struct plx_dma_desc cocci_id@p ;

@ script:python depends on r22 @
p << r22.p;
@@

if 22 not in rule_matches:
    rule_matches[22] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['79']:
    rule_matches[22]['correct_lines'].append(p[0].line)
else:
    rule_matches[22]['other_lines'].append(p[0].line)

@ r23 @
symbol cocci_id;
position p;
@@
 const struct comedi_lrange cocci_id@p ;

@ script:python depends on r23 @
p << r23.p;
@@

if 23 not in rule_matches:
    rule_matches[23] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['30']:
    rule_matches[23]['correct_lines'].append(p[0].line)
else:
    rule_matches[23]['other_lines'].append(p[0].line)

@ r24 @
symbol cocci_id;
position p;
@@
 void * cocci_id@p ;

@ script:python depends on r24 @
p << r24.p;
@@

if 24 not in rule_matches:
    rule_matches[24] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['56']:
    rule_matches[24]['correct_lines'].append(p[0].line)
else:
    rule_matches[24]['other_lines'].append(p[0].line)

@ r25 @
symbol cocci_id;
position p;
typedef u8;
@@
 const u8 cocci_id@p [ 15 ] ;

@ script:python depends on r25 @
p << r25.p;
@@

if 25 not in rule_matches:
    rule_matches[25] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['31']:
    rule_matches[25]['correct_lines'].append(p[0].line)
else:
    rule_matches[25]['other_lines'].append(p[0].line)

@ r26 @
symbol cocci_id;
position p;
@@
 const struct comedi_device * cocci_id@p ;

@ script:python depends on r26 @
p << r26.p;
@@

if 26 not in rule_matches:
    rule_matches[26] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['68']:
    rule_matches[26]['correct_lines'].append(p[0].line)
else:
    rule_matches[26]['other_lines'].append(p[0].line)

@ r27 @
symbol cocci_id;
position p;
@@
 struct comedi_subdevice * cocci_id@p ;

@ script:python depends on r27 @
p << r27.p;
@@

if 27 not in rule_matches:
    rule_matches[27] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['53']:
    rule_matches[27]['correct_lines'].append(p[0].line)
else:
    rule_matches[27]['other_lines'].append(p[0].line)

@ r28 @
symbol cocci_id;
position p;
@@
 enum adc_control0_contents { ADC_GATE_SRC_MASK = 0x3 , ADC_SOFT_GATE_BITS = 0x1 , ADC_EXT_GATE_BITS = 0x2 , ADC_ANALOG_GATE_BITS = 0x3 , ADC_GATE_LEVEL_BIT = 0x4 , ADC_GATE_POLARITY_BIT = 0x8 , ADC_START_TRIG_SOFT_BITS = 0x10 , ADC_START_TRIG_EXT_BITS = 0x20 , ADC_START_TRIG_ANALOG_BITS = 0x30 , ADC_START_TRIG_MASK = 0x30 , ADC_START_TRIG_FALLING_BIT = 0x40 , ADC_EXT_CONV_FALLING_BIT = 0x800 , ADC_SAMPLE_COUNTER_EN_BIT = 0x1000 , ADC_DMA_DISABLE_BIT = 0x4000 , ADC_ENABLE_BIT = 0x8000 , } cocci_id@p ;

@ script:python depends on r28 @
p << r28.p;
@@

if 28 not in rule_matches:
    rule_matches[28] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['66']:
    rule_matches[28]['correct_lines'].append(p[0].line)
else:
    rule_matches[28]['other_lines'].append(p[0].line)

@ r29 @
symbol cocci_id;
position p;
@@
 enum daq_atrig_low_4020_contents { EXT_AGATE_BNC_BIT = 0x8000 , EXT_STOP_TRIG_BNC_BIT = 0x4000 , EXT_START_TRIG_BNC_BIT = 0x2000 , } cocci_id@p ;

@ script:python depends on r29 @
p << r29.p;
@@

if 29 not in rule_matches:
    rule_matches[29] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['69']:
    rule_matches[29]['correct_lines'].append(p[0].line)
else:
    rule_matches[29]['other_lines'].append(p[0].line)

@ r30 @
symbol cocci_id;
position p;
typedef irqreturn_t;
@@
 irqreturn_t cocci_id@p ;

@ script:python depends on r30 @
p << r30.p;
@@

if 30 not in rule_matches:
    rule_matches[30] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['55']:
    rule_matches[30]['correct_lines'].append(p[0].line)
else:
    rule_matches[30]['other_lines'].append(p[0].line)

@ r31 @
symbol cocci_id;
position p;
typedef u32;
@@
 u32 cocci_id@p ;

@ script:python depends on r31 @
p << r31.p;
@@

if 31 not in rule_matches:
    rule_matches[31] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['62']:
    rule_matches[31]['correct_lines'].append(p[0].line)
else:
    rule_matches[31]['other_lines'].append(p[0].line)

@ r32 @
symbol cocci_id;
position p;
typedef u16;
@@
 u16 cocci_id@p ;

@ script:python depends on r32 @
p << r32.p;
@@

if 32 not in rule_matches:
    rule_matches[32] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['51']:
    rule_matches[32]['correct_lines'].append(p[0].line)
else:
    rule_matches[32]['other_lines'].append(p[0].line)

@ r33 @
symbol cocci_id;
position p;
@@
 const struct pcidas64_board cocci_id@p [ ] ;

@ script:python depends on r33 @
p << r33.p;
@@

if 33 not in rule_matches:
    rule_matches[33] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['3']:
    rule_matches[33]['correct_lines'].append(p[0].line)
else:
    rule_matches[33]['other_lines'].append(p[0].line)

@ r34 @
symbol cocci_id;
position p;
@@
 enum hw_status_contents { DAC_UNDERRUN_BIT = 0x1 , ADC_OVERRUN_BIT = 0x2 , DAC_ACTIVE_BIT = 0x4 , ADC_ACTIVE_BIT = 0x8 , DAC_INTR_PENDING_BIT = 0x10 , ADC_INTR_PENDING_BIT = 0x20 , DAC_DONE_BIT = 0x40 , ADC_DONE_BIT = 0x80 , EXT_INTR_PENDING_BIT = 0x100 , ADC_STOP_BIT = 0x200 , } cocci_id@p ;

@ script:python depends on r34 @
p << r34.p;
@@

if 34 not in rule_matches:
    rule_matches[34] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['45']:
    rule_matches[34]['correct_lines'].append(p[0].line)
else:
    rule_matches[34]['other_lines'].append(p[0].line)

@ r35 @
symbol cocci_id;
position p;
typedef u8,u32,u16,resource_size_t,dma_addr_t;
@@
 struct pcidas64_private {  resource_size_t main_phys_iobase ;  resource_size_t dio_counter_phys_iobase ;  void __iomem * plx9080_iobase ;  void __iomem * main_iobase ;  u32 local0_iobase ;  u32 local1_iobase ;  u16 * ai_buffer [ MAX_AI_DMA_RING_COUNT ] ;  dma_addr_t ai_buffer_bus_addr [ MAX_AI_DMA_RING_COUNT ] ;  struct plx_dma_desc * ai_dma_desc ;  dma_addr_t ai_dma_desc_bus_addr ;  unsigned int ai_dma_index ;  u16 * ao_buffer [ AO_DMA_RING_COUNT ] ;  dma_addr_t ao_buffer_bus_addr [ AO_DMA_RING_COUNT ] ;  struct plx_dma_desc * ao_dma_desc ;  dma_addr_t ao_dma_desc_bus_addr ;  unsigned int ao_dma_index ;  unsigned int hw_revision ;  unsigned int intr_enable_bits ;  u16 adc_control1_bits ;  u16 fifo_size_bits ;  u16 hw_config_bits ;  u16 dac_control1_bits ;  u32 plx_control_bits ;  u32 plx_intcsr_bits ;  int calibration_source ;  u8 i2c_cal_range_bits ;  unsigned int ext_trig_falling ;  short ai_cmd_running ;  unsigned int ai_fifo_segment_length ;  struct ext_clock_info ext_clock ;  unsigned short ao_bounce_buffer [ DAC_FIFO_SIZE ] ; } cocci_id@p ;

@ script:python depends on r35 @
p << r35.p;
@@

if 35 not in rule_matches:
    rule_matches[35] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['88', '120']:
    rule_matches[35]['correct_lines'].append(p[0].line)
else:
    rule_matches[35]['other_lines'].append(p[0].line)

@ r36 @
symbol cocci_id;
position p;
typedef u8;
@@
 const u8 * cocci_id@p ;

@ script:python depends on r36 @
p << r36.p;
@@

if 36 not in rule_matches:
    rule_matches[36] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['77']:
    rule_matches[36]['correct_lines'].append(p[0].line)
else:
    rule_matches[36]['other_lines'].append(p[0].line)

@ r37 @
symbol cocci_id;
position p;
@@
 enum read_write_registers { I8255_4020_REG = 0x48 , ADC_QUEUE_FIFO_REG = 0x100 , ADC_FIFO_REG = 0x200 , DAC_FIFO_REG = 0x300 , } cocci_id@p ;

@ script:python depends on r37 @
p << r37.p;
@@

if 37 not in rule_matches:
    rule_matches[37] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['78']:
    rule_matches[37]['correct_lines'].append(p[0].line)
else:
    rule_matches[37]['other_lines'].append(p[0].line)

@ r38 @
symbol cocci_id;
position p;
typedef u8;
@@
 u8 cocci_id@p ;

@ script:python depends on r38 @
p << r38.p;
@@

if 38 not in rule_matches:
    rule_matches[38] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['36']:
    rule_matches[38]['correct_lines'].append(p[0].line)
else:
    rule_matches[38]['other_lines'].append(p[0].line)

@ r39 @
symbol cocci_id;
position p;
typedef u8;
@@
 const u8 cocci_id@p [ 8 ] ;

@ script:python depends on r39 @
p << r39.p;
@@

if 39 not in rule_matches:
    rule_matches[39] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['35']:
    rule_matches[39]['correct_lines'].append(p[0].line)
else:
    rule_matches[39]['other_lines'].append(p[0].line)

@ r40 @
symbol cocci_id;
position p;
@@
 enum intr_enable_contents { ADC_INTR_SRC_MASK = 0x3 , ADC_INTR_QFULL_BITS = 0x0 , ADC_INTR_EOC_BITS = 0x1 , ADC_INTR_EOSCAN_BITS = 0x2 , ADC_INTR_EOSEQ_BITS = 0x3 , EN_ADC_INTR_SRC_BIT = 0x4 , EN_ADC_DONE_INTR_BIT = 0x8 , DAC_INTR_SRC_MASK = 0x30 , DAC_INTR_QEMPTY_BITS = 0x0 , DAC_INTR_HIGH_CHAN_BITS = 0x10 , EN_DAC_INTR_SRC_BIT = 0x40 , EN_DAC_DONE_INTR_BIT = 0x80 , EN_ADC_ACTIVE_INTR_BIT = 0x200 , EN_ADC_STOP_INTR_BIT = 0x400 , EN_DAC_ACTIVE_INTR_BIT = 0x800 , EN_DAC_UNDERRUN_BIT = 0x4000 , EN_ADC_OVERRUN_BIT = 0x8000 , } cocci_id@p ;

@ script:python depends on r40 @
p << r40.p;
@@

if 40 not in rule_matches:
    rule_matches[40] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['75']:
    rule_matches[40]['correct_lines'].append(p[0].line)
else:
    rule_matches[40]['other_lines'].append(p[0].line)

@ r41 @
symbol cocci_id;
position p;
@@
 enum adc_queue_load_contents { UNIP_BIT = 0x800 , ADC_SE_DIFF_BIT = 0x1000 , ADC_COMMON_BIT = 0x2000 , QUEUE_EOSEQ_BIT = 0x4000 , QUEUE_EOSCAN_BIT = 0x8000 , } cocci_id@p ;

@ script:python depends on r41 @
p << r41.p;
@@

if 41 not in rule_matches:
    rule_matches[41] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['52']:
    rule_matches[41]['correct_lines'].append(p[0].line)
else:
    rule_matches[41]['other_lines'].append(p[0].line)

@ r42 @
symbol cocci_id;
position p;
@@
 void __iomem * constcocci_id ;

@ script:python depends on r42 @
p << r42.p;
@@

if 42 not in rule_matches:
    rule_matches[42] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['43']:
    rule_matches[42]['correct_lines'].append(p[0].line)
else:
    rule_matches[42]['other_lines'].append(p[0].line)

@ r43 @
symbol cocci_id;
position p;
@@
 enum dac_control1_contents { DAC_WRITE_POLARITY_BIT = 0x800 , DAC1_EXT_REF_BIT = 0x200 , DAC0_EXT_REF_BIT = 0x100 , DAC_OUTPUT_ENABLE_BIT = 0x80 , DAC_UPDATE_POLARITY_BIT = 0x40 , DAC_SW_GATE_BIT = 0x20 , DAC1_UNIPOLAR_BIT = 0x8 , DAC0_UNIPOLAR_BIT = 0x2 , } cocci_id@p ;

@ script:python depends on r43 @
p << r43.p;
@@

if 43 not in rule_matches:
    rule_matches[43] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['49']:
    rule_matches[43]['correct_lines'].append(p[0].line)
else:
    rule_matches[43]['other_lines'].append(p[0].line)

@ r44 @
symbol cocci_id;
position p;
@@
 enum data_bits { NOT_CLEAR_REGISTERS = 0x20 , } cocci_id@p ;

@ script:python depends on r44 @
p << r44.p;
@@

if 44 not in rule_matches:
    rule_matches[44] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['46']:
    rule_matches[44]['correct_lines'].append(p[0].line)
else:
    rule_matches[44]['other_lines'].append(p[0].line)

@ r45 @
symbol cocci_id;
position p;
@@
 unsigned short cocci_id@p ;

@ script:python depends on r45 @
p << r45.p;
@@

if 45 not in rule_matches:
    rule_matches[45] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['58']:
    rule_matches[45]['correct_lines'].append(p[0].line)
else:
    rule_matches[45]['other_lines'].append(p[0].line)

@ r46 @
symbol cocci_id;
position p;
@@
 const int cocci_id@p [ ] ;

@ script:python depends on r46 @
p << r46.p;
@@

if 46 not in rule_matches:
    rule_matches[46] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['29']:
    rule_matches[46]['correct_lines'].append(p[0].line)
else:
    rule_matches[46]['other_lines'].append(p[0].line)

@ r47 @
symbol cocci_id;
position p;
@@
 const struct hw_fifo_info * constcocci_id ;

@ script:python depends on r47 @
p << r47.p;
@@

if 47 not in rule_matches:
    rule_matches[47] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['73']:
    rule_matches[47]['correct_lines'].append(p[0].line)
else:
    rule_matches[47]['other_lines'].append(p[0].line)

@ r48 @
symbol cocci_id;
position p;
@@
 enum dio_counter_registers { DIO_8255_OFFSET = 0x0 , DO_REG = 0x20 , DI_REG = 0x28 , DIO_DIRECTION_60XX_REG = 0x40 , DIO_DATA_60XX_REG = 0x48 , } cocci_id@p ;

@ script:python depends on r48 @
p << r48.p;
@@

if 48 not in rule_matches:
    rule_matches[48] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['76']:
    rule_matches[48]['correct_lines'].append(p[0].line)
else:
    rule_matches[48]['other_lines'].append(p[0].line)

@ r49 @
symbol cocci_id;
position p;
@@
 struct comedi_device * cocci_id@p ;

@ script:python depends on r49 @
p << r49.p;
@@

if 49 not in rule_matches:
    rule_matches[49] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['84']:
    rule_matches[49]['correct_lines'].append(p[0].line)
else:
    rule_matches[49]['other_lines'].append(p[0].line)

@ r50 @
symbol cocci_id;
position p;
@@
 struct comedi_async * cocci_id@p ;

@ script:python depends on r50 @
p << r50.p;
@@

if 50 not in rule_matches:
    rule_matches[50] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['64']:
    rule_matches[50]['correct_lines'].append(p[0].line)
else:
    rule_matches[50]['other_lines'].append(p[0].line)

@ r51 @
symbol cocci_id;
position p;
typedef u8;
@@
 const u8 cocci_id@p [ 14 ] ;

@ script:python depends on r51 @
p << r51.p;
@@

if 51 not in rule_matches:
    rule_matches[51] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['32']:
    rule_matches[51]['correct_lines'].append(p[0].line)
else:
    rule_matches[51]['other_lines'].append(p[0].line)

@ r52 @
symbol cocci_id;
position p;
typedef u16;
@@
 struct hw_fifo_info {  unsigned int num_segments ;  unsigned int max_segment_length ;  unsigned int sample_packing_ratio ;  u16 fifo_size_reg_mask ; } cocci_id@p ;

@ script:python depends on r52 @
p << r52.p;
@@

if 52 not in rule_matches:
    rule_matches[52] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['22', '27']:
    rule_matches[52]['correct_lines'].append(p[0].line)
else:
    rule_matches[52]['other_lines'].append(p[0].line)

@ r53 @
symbol cocci_id;
position p;
@@
 const struct pcidas64_board * cocci_id@p ;

@ script:python depends on r53 @
p << r53.p;
@@

if 53 not in rule_matches:
    rule_matches[53] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['65']:
    rule_matches[53]['correct_lines'].append(p[0].line)
else:
    rule_matches[53]['other_lines'].append(p[0].line)

@ r54 @
symbol cocci_id;
position p;
@@
 const int cocci_id@p ;

@ script:python depends on r54 @
p << r54.p;
@@

if 54 not in rule_matches:
    rule_matches[54] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['44']:
    rule_matches[54]['correct_lines'].append(p[0].line)
else:
    rule_matches[54]['other_lines'].append(p[0].line)

@ r55 @
symbol cocci_id;
position p;
@@
 enum hw_config_contents { MASTER_CLOCK_4020_MASK = 0x3 , INTERNAL_CLOCK_4020_BITS = 0x1 , BNC_CLOCK_4020_BITS = 0x2 , EXT_CLOCK_4020_BITS = 0x3 , EXT_QUEUE_BIT = 0x200 , SLOW_DAC_BIT = 0x400 , HW_CONFIG_DUMMY_BITS = 0x2000 , DMA_CH_SELECT_BIT = 0x8000 , FIFO_SIZE_REG = 0x4 , DAC_FIFO_SIZE_MASK = 0xff00 , DAC_FIFO_BITS = 0xf800 , } cocci_id@p ;

@ script:python depends on r55 @
p << r55.p;
@@

if 55 not in rule_matches:
    rule_matches[55] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['70']:
    rule_matches[55]['correct_lines'].append(p[0].line)
else:
    rule_matches[55]['other_lines'].append(p[0].line)

@ r56 @
symbol cocci_id;
position p;
@@
 int cocci_id@p ;

@ script:python depends on r56 @
p << r56.p;
@@

if 56 not in rule_matches:
    rule_matches[56] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['54']:
    rule_matches[56]['correct_lines'].append(p[0].line)
else:
    rule_matches[56]['other_lines'].append(p[0].line)

@ r57 @
symbol cocci_id;
position p;
@@
 struct ext_clock_info {  unsigned int divisor ;  unsigned int chanspec ; } cocci_id@p ;

@ script:python depends on r57 @
p << r57.p;
@@

if 57 not in rule_matches:
    rule_matches[57] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['121', '124']:
    rule_matches[57]['correct_lines'].append(p[0].line)
else:
    rule_matches[57]['other_lines'].append(p[0].line)

@ r58 @
symbol cocci_id;
position p;
@@
 unsigned short * cocci_id@p ;

@ script:python depends on r58 @
p << r58.p;
@@

if 58 not in rule_matches:
    rule_matches[58] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['57']:
    rule_matches[58]['correct_lines'].append(p[0].line)
else:
    rule_matches[58]['other_lines'].append(p[0].line)

@ r59 @
symbol cocci_id;
position p;
@@
 unsigned int * cocci_id@p ;

@ script:python depends on r59 @
p << r59.p;
@@

if 59 not in rule_matches:
    rule_matches[59] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['74']:
    rule_matches[59]['correct_lines'].append(p[0].line)
else:
    rule_matches[59]['other_lines'].append(p[0].line)

@ r60 @
symbol cocci_id;
position p;
@@
 enum adc_control1_contents { ADC_QUEUE_CONFIG_BIT = 0x1 , CONVERT_POLARITY_BIT = 0x10 , EOC_POLARITY_BIT = 0x20 , ADC_SW_GATE_BIT = 0x40 , ADC_DITHER_BIT = 0x200 , RETRIGGER_BIT = 0x800 , ADC_LO_CHANNEL_4020_MASK = 0x300 , ADC_HI_CHANNEL_4020_MASK = 0xc00 , TWO_CHANNEL_4020_BITS = 0x1000 , FOUR_CHANNEL_4020_BITS = 0x2000 , CHANNEL_MODE_4020_MASK = 0x3000 , ADC_MODE_MASK = 0xf000 , } cocci_id@p ;

@ script:python depends on r60 @
p << r60.p;
@@

if 60 not in rule_matches:
    rule_matches[60] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['61']:
    rule_matches[60]['correct_lines'].append(p[0].line)
else:
    rule_matches[60]['other_lines'].append(p[0].line)

@ r61 @
symbol cocci_id;
position p;
typedef u8;
@@
 const u8 cocci_id@p [ 7 ] ;

@ script:python depends on r61 @
p << r61.p;
@@

if 61 not in rule_matches:
    rule_matches[61] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['34']:
    rule_matches[61]['correct_lines'].append(p[0].line)
else:
    rule_matches[61]['other_lines'].append(p[0].line)

@ r62 @
symbol cocci_id;
position p;
typedef u8;
@@
 const u8 cocci_id@p [ 4 ] ;

@ script:python depends on r62 @
p << r62.p;
@@

if 62 not in rule_matches:
    rule_matches[62] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['33']:
    rule_matches[62]['correct_lines'].append(p[0].line)
else:
    rule_matches[62]['other_lines'].append(p[0].line)

@ r63 @
symbol cocci_id;
position p;
@@
 enum write_only_registers { INTR_ENABLE_REG = 0x0 , HW_CONFIG_REG = 0x2 , DAQ_SYNC_REG = 0xc , DAQ_ATRIG_LOW_4020_REG = 0xc , ADC_CONTROL0_REG = 0x10 , ADC_CONTROL1_REG = 0x12 , CALIBRATION_REG = 0x14 , ADC_SAMPLE_INTERVAL_LOWER_REG = 0x16 , ADC_SAMPLE_INTERVAL_UPPER_REG = 0x18 , ADC_DELAY_INTERVAL_LOWER_REG = 0x1a , ADC_DELAY_INTERVAL_UPPER_REG = 0x1c , ADC_COUNT_LOWER_REG = 0x1e , ADC_COUNT_UPPER_REG = 0x20 , ADC_START_REG = 0x22 , ADC_CONVERT_REG = 0x24 , ADC_QUEUE_CLEAR_REG = 0x26 , ADC_QUEUE_LOAD_REG = 0x28 , ADC_BUFFER_CLEAR_REG = 0x2a , ADC_QUEUE_HIGH_REG = 0x2c , DAC_CONTROL0_REG = 0x50 , DAC_CONTROL1_REG = 0x52 , DAC_SAMPLE_INTERVAL_LOWER_REG = 0x54 , DAC_SAMPLE_INTERVAL_UPPER_REG = 0x56 , DAC_SELECT_REG = 0x60 , DAC_START_REG = 0x64 , DAC_BUFFER_CLEAR_REG = 0x66 , } cocci_id@p ;

@ script:python depends on r63 @
p << r63.p;
@@

if 63 not in rule_matches:
    rule_matches[63] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['2']:
    rule_matches[63]['correct_lines'].append(p[0].line)
else:
    rule_matches[63]['other_lines'].append(p[0].line)

@ r64 @
symbol cocci_id;
position p;
@@
 unsigned int cocci_id@p ;

@ script:python depends on r64 @
p << r64.p;
@@

if 64 not in rule_matches:
    rule_matches[64] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['85']:
    rule_matches[64]['correct_lines'].append(p[0].line)
else:
    rule_matches[64]['other_lines'].append(p[0].line)

@ r65 @
symbol cocci_id;
position p;
@@
 struct comedi_driver cocci_id@p ;

@ script:python depends on r65 @
p << r65.p;
@@

if 65 not in rule_matches:
    rule_matches[65] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['40']:
    rule_matches[65]['correct_lines'].append(p[0].line)
else:
    rule_matches[65]['other_lines'].append(p[0].line)

@ r66 @
symbol cocci_id;
position p;
@@
 const struct hw_fifo_info cocci_id@p ;

@ script:python depends on r66 @
p << r66.p;
@@

if 66 not in rule_matches:
    rule_matches[66] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['4']:
    rule_matches[66]['correct_lines'].append(p[0].line)
else:
    rule_matches[66]['other_lines'].append(p[0].line)

@ r67 @
symbol cocci_id;
position p;
@@
 void cocci_id@p ;

@ script:python depends on r67 @
p << r67.p;
@@

if 67 not in rule_matches:
    rule_matches[67] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['86']:
    rule_matches[67]['correct_lines'].append(p[0].line)
else:
    rule_matches[67]['other_lines'].append(p[0].line)

@ finalize:python @
@@
rules = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67]
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
