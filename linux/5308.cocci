@ initialize:python @
@@
from collections import defaultdict
rule_matches = defaultdict(dict)

@ r1 @
symbol cocci_id;
position p;
typedef u32;
@@
 struct mv_cached_regs {  u32 fiscfg ;  u32 ltmode ;  u32 haltcond ;  u32 unknown_rsvd ; } cocci_id@p ;

@ script:python depends on r1 @
p << r1.p;
@@

if 1 not in rule_matches:
    rule_matches[1] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['102', '107']:
    rule_matches[1]['correct_lines'].append(p[0].line)
else:
    rule_matches[1]['other_lines'].append(p[0].line)

@ r2 @
symbol cocci_id;
position p;
@@
 void cocci_id@p ( struct ata_port * ap ) ;

@ script:python depends on r2 @
p << r2.p;
@@

if 2 not in rule_matches:
    rule_matches[2] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['39']:
    rule_matches[2]['correct_lines'].append(p[0].line)
else:
    rule_matches[2]['other_lines'].append(p[0].line)

@ r3 @
symbol cocci_id;
position p;
@@
 struct pci_driver cocci_id@p ;

@ script:python depends on r3 @
p << r3.p;
@@

if 3 not in rule_matches:
    rule_matches[3] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['139']:
    rule_matches[3]['correct_lines'].append(p[0].line)
else:
    rule_matches[3]['other_lines'].append(p[0].line)

@ r4 @
symbol cocci_id;
position p;
@@
 void cocci_id@p ( struct ata_host * host , void __iomem * mmio ) ;

@ script:python depends on r4 @
p << r4.p;
@@

if 4 not in rule_matches:
    rule_matches[4] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['25', '26']:
    rule_matches[4]['correct_lines'].append(p[0].line)
else:
    rule_matches[4]['other_lines'].append(p[0].line)

@ r5 @
symbol cocci_id;
position p;
@@
 const struct pci_device_id * cocci_id@p ;

@ script:python depends on r5 @
p << r5.p;
@@

if 5 not in rule_matches:
    rule_matches[5] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['137']:
    rule_matches[5]['correct_lines'].append(p[0].line)
else:
    rule_matches[5]['other_lines'].append(p[0].line)

@ r6 @
symbol cocci_id;
position p;
@@
 enum { MV_DMA_BOUNDARY = 0xffffU , EDMA_REQ_Q_BASE_LO_MASK = 0xfffffc00U , EDMA_RSP_Q_BASE_LO_MASK = 0xffffff00U , } cocci_id@p ;

@ script:python depends on r6 @
p << r6.p;
@@

if 6 not in rule_matches:
    rule_matches[6] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['134']:
    rule_matches[6]['correct_lines'].append(p[0].line)
else:
    rule_matches[6]['other_lines'].append(p[0].line)

@ r7 @
symbol cocci_id;
position p;
@@
 const struct mbus_dram_target_info * cocci_id@p ;

@ script:python depends on r7 @
p << r7.p;
@@

if 7 not in rule_matches:
    rule_matches[7] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['153']:
    rule_matches[7]['correct_lines'].append(p[0].line)
else:
    rule_matches[7]['other_lines'].append(p[0].line)

@ r8 @
symbol cocci_id;
position p;
typedef __le32;
@@
 struct mv_crqb_iie {  __le32 addr ;  __le32 addr_hi ;  __le32 flags ;  __le32 len ;  __le32 ata_cmd [ 4 ] ; } cocci_id@p ;

@ script:python depends on r8 @
p << r8.p;
@@

if 8 not in rule_matches:
    rule_matches[8] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['119', '125']:
    rule_matches[8]['correct_lines'].append(p[0].line)
else:
    rule_matches[8]['other_lines'].append(p[0].line)

@ r9 @
symbol cocci_id;
position p;
@@
 int cocci_id@p ( struct pci_dev * pdev , const struct pci_device_id * ent ) ;

@ script:python depends on r9 @
p << r9.p;
@@

if 9 not in rule_matches:
    rule_matches[9] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['141', '142']:
    rule_matches[9]['correct_lines'].append(p[0].line)
else:
    rule_matches[9]['other_lines'].append(p[0].line)

@ r10 @
symbol cocci_id;
position p;
@@
 struct platform_driver cocci_id@p ;

@ script:python depends on r10 @
p << r10.p;
@@

if 10 not in rule_matches:
    rule_matches[10] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['143']:
    rule_matches[10]['correct_lines'].append(p[0].line)
else:
    rule_matches[10]['other_lines'].append(p[0].line)

@ r11 @
symbol cocci_id;
position p;
typedef pm_message_t;
@@
 pm_message_t cocci_id@p ;

@ script:python depends on r11 @
p << r11.p;
@@

if 11 not in rule_matches:
    rule_matches[11] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['145']:
    rule_matches[11]['correct_lines'].append(p[0].line)
else:
    rule_matches[11]['other_lines'].append(p[0].line)

@ r12 @
symbol cocci_id;
position p;
@@
 void cocci_id@p ( struct mv_host_priv * hpriv , void __iomem * mmio , unsigned int port ) ;

@ script:python depends on r12 @
p << r12.p;
@@

if 12 not in rule_matches:
    rule_matches[12] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['35', '37']:
    rule_matches[12]['correct_lines'].append(p[0].line)
else:
    rule_matches[12]['other_lines'].append(p[0].line)

@ r13 @
symbol cocci_id;
position p;
typedef u8;
@@
 u8 cocci_id@p ( struct ata_port * ap ) ;

@ script:python depends on r13 @
p << r13.p;
@@

if 13 not in rule_matches:
    rule_matches[13] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['11']:
    rule_matches[13]['correct_lines'].append(p[0].line)
else:
    rule_matches[13]['other_lines'].append(p[0].line)

@ r14 @
symbol cocci_id;
position p;
typedef irqreturn_t;
@@
 irqreturn_t cocci_id@p ;

@ script:python depends on r14 @
p << r14.p;
@@

if 14 not in rule_matches:
    rule_matches[14] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['168']:
    rule_matches[14]['correct_lines'].append(p[0].line)
else:
    rule_matches[14]['other_lines'].append(p[0].line)

@ r15 @
symbol cocci_id;
position p;
@@
 struct ata_link * cocci_id@p ;

@ script:python depends on r15 @
p << r15.p;
@@

if 15 not in rule_matches:
    rule_matches[15] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['167']:
    rule_matches[15]['correct_lines'].append(p[0].line)
else:
    rule_matches[15]['other_lines'].append(p[0].line)

@ r16 @
symbol cocci_id;
position p;
@@
 struct clk * cocci_id@p ;

@ script:python depends on r16 @
p << r16.p;
@@

if 16 not in rule_matches:
    rule_matches[16] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['148']:
    rule_matches[16]['correct_lines'].append(p[0].line)
else:
    rule_matches[16]['other_lines'].append(p[0].line)

@ r17 @
symbol cocci_id;
position p;
@@
 int cocci_id@p ( struct ata_port * ap ) ;

@ script:python depends on r17 @
p << r17.p;
@@

if 17 not in rule_matches:
    rule_matches[17] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['45']:
    rule_matches[17]['correct_lines'].append(p[0].line)
else:
    rule_matches[17]['other_lines'].append(p[0].line)

@ r18 @
symbol cocci_id;
position p;
@@
 int cocci_id@p ( struct ata_queued_cmd * qc ) ;

@ script:python depends on r18 @
p << r18.p;
@@

if 18 not in rule_matches:
    rule_matches[18] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['13']:
    rule_matches[18]['correct_lines'].append(p[0].line)
else:
    rule_matches[18]['other_lines'].append(p[0].line)

@ r19 @
symbol cocci_id;
position p;
@@
 unsigned cocci_id@p ;

@ script:python depends on r19 @
p << r19.p;
@@

if 19 not in rule_matches:
    rule_matches[19] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['182']:
    rule_matches[19]['correct_lines'].append(p[0].line)
else:
    rule_matches[19]['other_lines'].append(p[0].line)

@ r20 @
symbol cocci_id;
position p;
@@
 const int cocci_id@p ;

@ script:python depends on r20 @
p << r20.p;
@@

if 20 not in rule_matches:
    rule_matches[20] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['189']:
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
if p[0].line in ['7']:
    rule_matches[21]['correct_lines'].append(p[0].line)
else:
    rule_matches[21]['other_lines'].append(p[0].line)

@ r22 @
symbol cocci_id;
position p;
@@
 struct mv_crqb_iie * cocci_id@p ;

@ script:python depends on r22 @
p << r22.p;
@@

if 22 not in rule_matches:
    rule_matches[22] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['174']:
    rule_matches[22]['correct_lines'].append(p[0].line)
else:
    rule_matches[22]['other_lines'].append(p[0].line)

@ r23 @
symbol cocci_id;
position p;
@@
 const struct ata_port_info cocci_id@p [ ] ;

@ script:python depends on r23 @
p << r23.p;
@@

if 23 not in rule_matches:
    rule_matches[23] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['8']:
    rule_matches[23]['correct_lines'].append(p[0].line)
else:
    rule_matches[23]['other_lines'].append(p[0].line)

@ r24 @
symbol cocci_id;
position p;
@@
 void cocci_id@p ( struct mv_host_priv * hpriv , int idx , void __iomem * mmio ) ;

@ script:python depends on r24 @
p << r24.p;
@@

if 24 not in rule_matches:
    rule_matches[24] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['30', '32']:
    rule_matches[24]['correct_lines'].append(p[0].line)
else:
    rule_matches[24]['other_lines'].append(p[0].line)

@ r25 @
symbol cocci_id;
position p;
typedef __le32;
@@
 struct mv_sg {  __le32 addr ;  __le32 flags_size ;  __le32 addr_hi ;  __le32 reserved ; } cocci_id@p ;

@ script:python depends on r25 @
p << r25.p;
@@

if 25 not in rule_matches:
    rule_matches[25] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['108', '113']:
    rule_matches[25]['correct_lines'].append(p[0].line)
else:
    rule_matches[25]['other_lines'].append(p[0].line)

@ r26 @
symbol cocci_id;
position p;
@@
 const struct mbus_dram_window * cocci_id@p ;

@ script:python depends on r26 @
p << r26.p;
@@

if 26 not in rule_matches:
    rule_matches[26] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['152']:
    rule_matches[26]['correct_lines'].append(p[0].line)
else:
    rule_matches[26]['other_lines'].append(p[0].line)

@ r27 @
symbol cocci_id;
position p;
@@
 unsigned int cocci_id@p ;

@ script:python depends on r27 @
p << r27.p;
@@

if 27 not in rule_matches:
    rule_matches[27] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['3']:
    rule_matches[27]['correct_lines'].append(p[0].line)
else:
    rule_matches[27]['other_lines'].append(p[0].line)

@ r28 @
symbol cocci_id;
position p;
@@
 struct scatterlist * cocci_id@p ;

@ script:python depends on r28 @
p << r28.p;
@@

if 28 not in rule_matches:
    rule_matches[28] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['185']:
    rule_matches[28]['correct_lines'].append(p[0].line)
else:
    rule_matches[28]['other_lines'].append(p[0].line)

@ r29 @
symbol cocci_id;
position p;
@@
 struct mv_host_priv * cocci_id@p ;

@ script:python depends on r29 @
p << r29.p;
@@

if 29 not in rule_matches:
    rule_matches[29] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['161']:
    rule_matches[29]['correct_lines'].append(p[0].line)
else:
    rule_matches[29]['other_lines'].append(p[0].line)

@ r30 @
symbol cocci_id;
position p;
@@
 void cocci_id@p ( struct ata_device * dev ) ;

@ script:python depends on r30 @
p << r30.p;
@@

if 30 not in rule_matches:
    rule_matches[30] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['38']:
    rule_matches[30]['correct_lines'].append(p[0].line)
else:
    rule_matches[30]['other_lines'].append(p[0].line)

@ r31 @
symbol cocci_id;
position p;
@@
 int cocci_id@p ( struct mv_host_priv * hpriv , void __iomem * mmio , unsigned int n_hc ) ;

@ script:python depends on r31 @
p << r31.p;
@@

if 31 not in rule_matches:
    rule_matches[31] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['27', '29']:
    rule_matches[31]['correct_lines'].append(p[0].line)
else:
    rule_matches[31]['other_lines'].append(p[0].line)

@ r32 @
symbol cocci_id;
position p;
typedef u32;
@@
 struct mv_host_priv {  u32 hp_flags ;  unsigned int board_idx ;  u32 main_irq_mask ;  struct mv_port_signal signal [ 8 ] ;  const struct mv_hw_ops * ops ;  int n_ports ;  void __iomem * base ;  void __iomem * main_irq_cause_addr ;  void __iomem * main_irq_mask_addr ;  u32 irq_cause_offset ;  u32 irq_mask_offset ;  u32 unmask_all_irqs ;  struct clk * clk ;  struct clk * * port_clks ;  struct phy * * port_phys ;  struct dma_pool * crqb_pool ;  struct dma_pool * crpb_pool ;  struct dma_pool * sg_tbl_pool ; } cocci_id@p ;

@ script:python depends on r32 @
p << r32.p;
@@

if 32 not in rule_matches:
    rule_matches[32] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['65', '84']:
    rule_matches[32]['correct_lines'].append(p[0].line)
else:
    rule_matches[32]['other_lines'].append(p[0].line)

@ r33 @
symbol cocci_id;
position p;
@@
 const struct ata_port_info * cocci_id@p [ ] ;

@ script:python depends on r33 @
p << r33.p;
@@

if 33 not in rule_matches:
    rule_matches[33] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['136']:
    rule_matches[33]['correct_lines'].append(p[0].line)
else:
    rule_matches[33]['other_lines'].append(p[0].line)

@ r34 @
symbol cocci_id;
position p;
typedef bool;
@@
 bool cocci_id@p ;

@ script:python depends on r34 @
p << r34.p;
@@

if 34 not in rule_matches:
    rule_matches[34] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['157']:
    rule_matches[34]['correct_lines'].append(p[0].line)
else:
    rule_matches[34]['other_lines'].append(p[0].line)

@ r35 @
symbol cocci_id;
position p;
typedef u8;
@@
 u8 cocci_id@p ;

@ script:python depends on r35 @
p << r35.p;
@@

if 35 not in rule_matches:
    rule_matches[35] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['177']:
    rule_matches[35]['correct_lines'].append(p[0].line)
else:
    rule_matches[35]['other_lines'].append(p[0].line)

@ r36 @
symbol cocci_id;
position p;
@@
 void cocci_id@p ( struct ata_port * ap , int want_ncq , int want_edma ) ;

@ script:python depends on r36 @
p << r36.p;
@@

if 36 not in rule_matches:
    rule_matches[36] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['18', '20']:
    rule_matches[36]['correct_lines'].append(p[0].line)
else:
    rule_matches[36]['other_lines'].append(p[0].line)

@ r37 @
symbol cocci_id;
position p;
@@
 struct platform_device * cocci_id@p ;

@ script:python depends on r37 @
p << r37.p;
@@

if 37 not in rule_matches:
    rule_matches[37] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['151']:
    rule_matches[37]['correct_lines'].append(p[0].line)
else:
    rule_matches[37]['other_lines'].append(p[0].line)

@ r38 @
symbol cocci_id;
position p;
@@
 struct ata_taskfile * cocci_id@p ;

@ script:python depends on r38 @
p << r38.p;
@@

if 38 not in rule_matches:
    rule_matches[38] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['175']:
    rule_matches[38]['correct_lines'].append(p[0].line)
else:
    rule_matches[38]['other_lines'].append(p[0].line)

@ r39 @
symbol cocci_id;
position p;
@@
 struct ata_ioports * cocci_id@p ;

@ script:python depends on r39 @
p << r39.p;
@@

if 39 not in rule_matches:
    rule_matches[39] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['155']:
    rule_matches[39]['correct_lines'].append(p[0].line)
else:
    rule_matches[39]['other_lines'].append(p[0].line)

@ r40 @
symbol cocci_id;
position p;
@@
 const char * cocci_id@p ;

@ script:python depends on r40 @
p << r40.p;
@@

if 40 not in rule_matches:
    rule_matches[40] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['138']:
    rule_matches[40]['correct_lines'].append(p[0].line)
else:
    rule_matches[40]['other_lines'].append(p[0].line)

@ r41 @
symbol cocci_id;
position p;
@@
 unsigned int cocci_id@p ( struct ata_queued_cmd * qc ) ;

@ script:python depends on r41 @
p << r41.p;
@@

if 41 not in rule_matches:
    rule_matches[41] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['43']:
    rule_matches[41]['correct_lines'].append(p[0].line)
else:
    rule_matches[41]['other_lines'].append(p[0].line)

@ r42 @
symbol cocci_id;
position p;
typedef dma_addr_t;
@@
 dma_addr_t cocci_id@p ;

@ script:python depends on r42 @
p << r42.p;
@@

if 42 not in rule_matches:
    rule_matches[42] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['183']:
    rule_matches[42]['correct_lines'].append(p[0].line)
else:
    rule_matches[42]['other_lines'].append(p[0].line)

@ r43 @
symbol cocci_id;
position p;
@@
 enum { MV_PRIMARY_BAR = 0 , MV_IO_BAR = 2 , MV_MISC_BAR = 3 , MV_MAJOR_REG_AREA_SZ = 0x10000 , MV_MINOR_REG_AREA_SZ = 0x2000 , COAL_CLOCKS_PER_USEC = 150 , MAX_COAL_TIME_THRESHOLD = ( ( 1 << 24 ) - 1 ) , MAX_COAL_IO_COUNT = 255 , MV_PCI_REG_BASE = 0 , COAL_REG_BASE = 0x18000 , IRQ_COAL_CAUSE = ( COAL_REG_BASE + 0x08 ) , ALL_PORTS_COAL_IRQ = ( 1 << 4 ) , IRQ_COAL_IO_THRESHOLD = ( COAL_REG_BASE + 0xcc ) , IRQ_COAL_TIME_THRESHOLD = ( COAL_REG_BASE + 0xd0 ) , TRAN_COAL_CAUSE_LO = ( COAL_REG_BASE + 0x88 ) , TRAN_COAL_CAUSE_HI = ( COAL_REG_BASE + 0x8c ) , SATAHC0_REG_BASE = 0x20000 , FLASH_CTL = 0x1046c , GPIO_PORT_CTL = 0x104f0 , RESET_CFG = 0x180d8 , MV_PCI_REG_SZ = MV_MAJOR_REG_AREA_SZ , MV_SATAHC_REG_SZ = MV_MAJOR_REG_AREA_SZ , MV_SATAHC_ARBTR_REG_SZ = MV_MINOR_REG_AREA_SZ , MV_PORT_REG_SZ = MV_MINOR_REG_AREA_SZ , MV_MAX_Q_DEPTH = 32 , MV_MAX_Q_DEPTH_MASK = MV_MAX_Q_DEPTH - 1 , MV_CRQB_Q_SZ = ( 32 * MV_MAX_Q_DEPTH ) , MV_CRPB_Q_SZ = ( 8 * MV_MAX_Q_DEPTH ) , MV_MAX_SG_CT = 256 , MV_SG_TBL_SZ = ( 16 * MV_MAX_SG_CT ) , MV_PORT_HC_SHIFT = 2 , MV_PORTS_PER_HC = ( 1 << MV_PORT_HC_SHIFT ) , MV_PORT_MASK = ( MV_PORTS_PER_HC - 1 ) , MV_FLAG_DUAL_HC = ( 1 << 30 ) , MV_COMMON_FLAGS = ATA_FLAG_SATA | ATA_FLAG_PIO_POLLING , MV_GEN_I_FLAGS = MV_COMMON_FLAGS | ATA_FLAG_NO_ATAPI , MV_GEN_II_FLAGS = MV_COMMON_FLAGS | ATA_FLAG_NCQ | ATA_FLAG_PMP | ATA_FLAG_ACPI_SATA , MV_GEN_IIE_FLAGS = MV_GEN_II_FLAGS | ATA_FLAG_AN , CRQB_FLAG_READ = ( 1 << 0 ) , CRQB_TAG_SHIFT = 1 , CRQB_IOID_SHIFT = 6 , CRQB_PMP_SHIFT = 12 , CRQB_HOSTQ_SHIFT = 17 , CRQB_CMD_ADDR_SHIFT = 8 , CRQB_CMD_CS = ( 0x2 << 11 ) , CRQB_CMD_LAST = ( 1 << 15 ) , CRPB_FLAG_STATUS_SHIFT = 8 , CRPB_IOID_SHIFT_6 = 5 , CRPB_IOID_SHIFT_7 = 7 , EPRD_FLAG_END_OF_TBL = ( 1 << 31 ) , MV_PCI_COMMAND = 0xc00 , MV_PCI_COMMAND_MWRCOM = ( 1 << 4 ) , MV_PCI_COMMAND_MRDTRIG = ( 1 << 7 ) , PCI_MAIN_CMD_STS = 0xd30 , STOP_PCI_MASTER = ( 1 << 2 ) , PCI_MASTER_EMPTY = ( 1 << 3 ) , GLOB_SFT_RST = ( 1 << 4 ) , MV_PCI_MODE = 0xd00 , MV_PCI_MODE_MASK = 0x30 , MV_PCI_EXP_ROM_BAR_CTL = 0xd2c , MV_PCI_DISC_TIMER = 0xd04 , MV_PCI_MSI_TRIGGER = 0xc38 , MV_PCI_SERR_MASK = 0xc28 , MV_PCI_XBAR_TMOUT = 0x1d04 , MV_PCI_ERR_LOW_ADDRESS = 0x1d40 , MV_PCI_ERR_HIGH_ADDRESS = 0x1d44 , MV_PCI_ERR_ATTRIBUTE = 0x1d48 , MV_PCI_ERR_COMMAND = 0x1d50 , PCI_IRQ_CAUSE = 0x1d58 , PCI_IRQ_MASK = 0x1d5c , PCI_UNMASK_ALL_IRQS = 0x7fffff , PCIE_IRQ_CAUSE = 0x1900 , PCIE_IRQ_MASK = 0x1910 , PCIE_UNMASK_ALL_IRQS = 0x40a , PCI_HC_MAIN_IRQ_CAUSE = 0x1d60 , PCI_HC_MAIN_IRQ_MASK = 0x1d64 , SOC_HC_MAIN_IRQ_CAUSE = 0x20020 , SOC_HC_MAIN_IRQ_MASK = 0x20024 , ERR_IRQ = ( 1 << 0 ) , DONE_IRQ = ( 1 << 1 ) , HC0_IRQ_PEND = 0x1ff , HC_SHIFT = 9 , DONE_IRQ_0_3 = 0x000000aa , DONE_IRQ_4_7 = ( DONE_IRQ_0_3 << HC_SHIFT ) , PCI_ERR = ( 1 << 18 ) , TRAN_COAL_LO_DONE = ( 1 << 19 ) , TRAN_COAL_HI_DONE = ( 1 << 20 ) , PORTS_0_3_COAL_DONE = ( 1 << 8 ) , PORTS_4_7_COAL_DONE = ( 1 << 17 ) , ALL_PORTS_COAL_DONE = ( 1 << 21 ) , GPIO_INT = ( 1 << 22 ) , SELF_INT = ( 1 << 23 ) , TWSI_INT = ( 1 << 24 ) , HC_MAIN_RSVD = ( 0x7f << 25 ) , HC_MAIN_RSVD_5 = ( 0x1fff << 19 ) , HC_MAIN_RSVD_SOC = ( 0x3fffffb << 6 ) , HC_CFG = 0x00 , HC_IRQ_CAUSE = 0x14 , DMA_IRQ = ( 1 << 0 ) , HC_COAL_IRQ = ( 1 << 4 ) , DEV_IRQ = ( 1 << 8 ) , HC_IRQ_COAL_IO_THRESHOLD = 0x000c , HC_IRQ_COAL_TIME_THRESHOLD = 0x0010 , SOC_LED_CTRL = 0x2c , SOC_LED_CTRL_BLINK = ( 1 << 0 ) , SOC_LED_CTRL_ACT_PRESENCE = ( 1 << 2 ) , SHD_BLK = 0x100 , SHD_CTL_AST = 0x20 , SATA_STATUS = 0x300 , SATA_ACTIVE = 0x350 , FIS_IRQ_CAUSE = 0x364 , FIS_IRQ_CAUSE_AN = ( 1 << 9 ) , LTMODE = 0x30c , LTMODE_BIT8 = ( 1 << 8 ) , PHY_MODE2 = 0x330 , PHY_MODE3 = 0x310 , PHY_MODE4 = 0x314 , PHY_MODE4_CFG_MASK = 0x00000003 , PHY_MODE4_CFG_VALUE = 0x00000001 , PHY_MODE4_RSVD_ZEROS = 0x5de3fffa , PHY_MODE4_RSVD_ONES = 0x00000005 , SATA_IFCTL = 0x344 , SATA_TESTCTL = 0x348 , SATA_IFSTAT = 0x34c , VENDOR_UNIQUE_FIS = 0x35c , FISCFG = 0x360 , FISCFG_WAIT_DEV_ERR = ( 1 << 8 ) , FISCFG_SINGLE_SYNC = ( 1 << 16 ) , PHY_MODE9_GEN2 = 0x398 , PHY_MODE9_GEN1 = 0x39c , PHYCFG_OFS = 0x3a0 , MV5_PHY_MODE = 0x74 , MV5_LTMODE = 0x30 , MV5_PHY_CTL = 0x0C , SATA_IFCFG = 0x050 , LP_PHY_CTL = 0x058 , LP_PHY_CTL_PIN_PU_PLL = ( 1 << 0 ) , LP_PHY_CTL_PIN_PU_RX = ( 1 << 1 ) , LP_PHY_CTL_PIN_PU_TX = ( 1 << 2 ) , LP_PHY_CTL_GEN_TX_3G = ( 1 << 5 ) , LP_PHY_CTL_GEN_RX_3G = ( 1 << 9 ) , MV_M2_PREAMP_MASK = 0x7e0 , EDMA_CFG = 0 , EDMA_CFG_Q_DEPTH = 0x1f , EDMA_CFG_NCQ = ( 1 << 5 ) , EDMA_CFG_NCQ_GO_ON_ERR = ( 1 << 14 ) , EDMA_CFG_RD_BRST_EXT = ( 1 << 11 ) , EDMA_CFG_WR_BUFF_LEN = ( 1 << 13 ) , EDMA_CFG_EDMA_FBS = ( 1 << 16 ) , EDMA_CFG_FBS = ( 1 << 26 ) , EDMA_ERR_IRQ_CAUSE = 0x8 , EDMA_ERR_IRQ_MASK = 0xc , EDMA_ERR_D_PAR = ( 1 << 0 ) , EDMA_ERR_PRD_PAR = ( 1 << 1 ) , EDMA_ERR_DEV = ( 1 << 2 ) , EDMA_ERR_DEV_DCON = ( 1 << 3 ) , EDMA_ERR_DEV_CON = ( 1 << 4 ) , EDMA_ERR_SERR = ( 1 << 5 ) , EDMA_ERR_SELF_DIS = ( 1 << 7 ) , EDMA_ERR_SELF_DIS_5 = ( 1 << 8 ) , EDMA_ERR_BIST_ASYNC = ( 1 << 8 ) , EDMA_ERR_TRANS_IRQ_7 = ( 1 << 8 ) , EDMA_ERR_CRQB_PAR = ( 1 << 9 ) , EDMA_ERR_CRPB_PAR = ( 1 << 10 ) , EDMA_ERR_INTRL_PAR = ( 1 << 11 ) , EDMA_ERR_IORDY = ( 1 << 12 ) , EDMA_ERR_LNK_CTRL_RX = ( 0xf << 13 ) , EDMA_ERR_LNK_CTRL_RX_0 = ( 1 << 13 ) , EDMA_ERR_LNK_CTRL_RX_1 = ( 1 << 14 ) , EDMA_ERR_LNK_CTRL_RX_2 = ( 1 << 15 ) , EDMA_ERR_LNK_CTRL_RX_3 = ( 1 << 16 ) , EDMA_ERR_LNK_DATA_RX = ( 0xf << 17 ) , EDMA_ERR_LNK_CTRL_TX = ( 0x1f << 21 ) , EDMA_ERR_LNK_CTRL_TX_0 = ( 1 << 21 ) , EDMA_ERR_LNK_CTRL_TX_1 = ( 1 << 22 ) , EDMA_ERR_LNK_CTRL_TX_2 = ( 1 << 23 ) , EDMA_ERR_LNK_CTRL_TX_3 = ( 1 << 24 ) , EDMA_ERR_LNK_CTRL_TX_4 = ( 1 << 25 ) , EDMA_ERR_LNK_DATA_TX = ( 0x1f << 26 ) , EDMA_ERR_TRANS_PROTO = ( 1 << 31 ) , EDMA_ERR_OVERRUN_5 = ( 1 << 5 ) , EDMA_ERR_UNDERRUN_5 = ( 1 << 6 ) , EDMA_ERR_IRQ_TRANSIENT = EDMA_ERR_LNK_CTRL_RX_0 | EDMA_ERR_LNK_CTRL_RX_1 | EDMA_ERR_LNK_CTRL_RX_3 | EDMA_ERR_LNK_CTRL_TX , EDMA_EH_FREEZE = EDMA_ERR_D_PAR | EDMA_ERR_PRD_PAR | EDMA_ERR_DEV_DCON | EDMA_ERR_DEV_CON | EDMA_ERR_SERR | EDMA_ERR_SELF_DIS | EDMA_ERR_CRQB_PAR | EDMA_ERR_CRPB_PAR | EDMA_ERR_INTRL_PAR | EDMA_ERR_IORDY | EDMA_ERR_LNK_CTRL_RX_2 | EDMA_ERR_LNK_DATA_RX | EDMA_ERR_LNK_DATA_TX | EDMA_ERR_TRANS_PROTO , EDMA_EH_FREEZE_5 = EDMA_ERR_D_PAR | EDMA_ERR_PRD_PAR | EDMA_ERR_DEV_DCON | EDMA_ERR_DEV_CON | EDMA_ERR_OVERRUN_5 | EDMA_ERR_UNDERRUN_5 | EDMA_ERR_SELF_DIS_5 | EDMA_ERR_CRQB_PAR | EDMA_ERR_CRPB_PAR | EDMA_ERR_INTRL_PAR | EDMA_ERR_IORDY , EDMA_REQ_Q_BASE_HI = 0x10 , EDMA_REQ_Q_IN_PTR = 0x14 , EDMA_REQ_Q_OUT_PTR = 0x18 , EDMA_REQ_Q_PTR_SHIFT = 5 , EDMA_RSP_Q_BASE_HI = 0x1c , EDMA_RSP_Q_IN_PTR = 0x20 , EDMA_RSP_Q_OUT_PTR = 0x24 , EDMA_RSP_Q_PTR_SHIFT = 3 , EDMA_CMD = 0x28 , EDMA_EN = ( 1 << 0 ) , EDMA_DS = ( 1 << 1 ) , EDMA_RESET = ( 1 << 2 ) , EDMA_STATUS = 0x30 , EDMA_STATUS_CACHE_EMPTY = ( 1 << 6 ) , EDMA_STATUS_IDLE = ( 1 << 7 ) , EDMA_IORDY_TMOUT = 0x34 , EDMA_ARB_CFG = 0x38 , EDMA_HALTCOND = 0x60 , EDMA_UNKNOWN_RSVD = 0x6C , BMDMA_CMD = 0x224 , BMDMA_STATUS = 0x228 , BMDMA_PRD_LOW = 0x22c , BMDMA_PRD_HIGH = 0x230 , MV_HP_FLAG_MSI = ( 1 << 0 ) , MV_HP_ERRATA_50XXB0 = ( 1 << 1 ) , MV_HP_ERRATA_50XXB2 = ( 1 << 2 ) , MV_HP_ERRATA_60X1B2 = ( 1 << 3 ) , MV_HP_ERRATA_60X1C0 = ( 1 << 4 ) , MV_HP_GEN_I = ( 1 << 6 ) , MV_HP_GEN_II = ( 1 << 7 ) , MV_HP_GEN_IIE = ( 1 << 8 ) , MV_HP_PCIE = ( 1 << 9 ) , MV_HP_CUT_THROUGH = ( 1 << 10 ) , MV_HP_FLAG_SOC = ( 1 << 11 ) , MV_HP_QUIRK_LED_BLINK_EN = ( 1 << 12 ) , MV_HP_FIX_LP_PHY_CTL = ( 1 << 13 ) , MV_PP_FLAG_EDMA_EN = ( 1 << 0 ) , MV_PP_FLAG_NCQ_EN = ( 1 << 1 ) , MV_PP_FLAG_FBS_EN = ( 1 << 2 ) , MV_PP_FLAG_DELAYED_EH = ( 1 << 3 ) , MV_PP_FLAG_FAKE_ATA_BUSY = ( 1 << 4 ) , } cocci_id@p ;

@ script:python depends on r43 @
p << r43.p;
@@

if 43 not in rule_matches:
    rule_matches[43] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['4']:
    rule_matches[43]['correct_lines'].append(p[0].line)
else:
    rule_matches[43]['other_lines'].append(p[0].line)

@ r44 @
symbol cocci_id;
position p;
@@
 enum chip_type { chip_504x , chip_508x , chip_5080 , chip_604x , chip_608x , chip_6042 , chip_7042 , chip_soc , } cocci_id@p ;

@ script:python depends on r44 @
p << r44.p;
@@

if 44 not in rule_matches:
    rule_matches[44] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['132']:
    rule_matches[44]['correct_lines'].append(p[0].line)
else:
    rule_matches[44]['other_lines'].append(p[0].line)

@ r45 @
symbol cocci_id;
position p;
@@
 unsigned int * cocci_id@p ;

@ script:python depends on r45 @
p << r45.p;
@@

if 45 not in rule_matches:
    rule_matches[45] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['158']:
    rule_matches[45]['correct_lines'].append(p[0].line)
else:
    rule_matches[45]['other_lines'].append(p[0].line)

@ r46 @
symbol cocci_id;
position p;
@@
 const struct mv_hw_ops cocci_id@p ;

@ script:python depends on r46 @
p << r46.p;
@@

if 46 not in rule_matches:
    rule_matches[46] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['5']:
    rule_matches[46]['correct_lines'].append(p[0].line)
else:
    rule_matches[46]['other_lines'].append(p[0].line)

@ r47 @
symbol cocci_id;
position p;
@@
 unsigned long cocci_id@p ;

@ script:python depends on r47 @
p << r47.p;
@@

if 47 not in rule_matches:
    rule_matches[47] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['2']:
    rule_matches[47]['correct_lines'].append(p[0].line)
else:
    rule_matches[47]['other_lines'].append(p[0].line)

@ r48 @
symbol cocci_id;
position p;
@@
 struct pci_dev * cocci_id@p ;

@ script:python depends on r48 @
p << r48.p;
@@

if 48 not in rule_matches:
    rule_matches[48] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['164']:
    rule_matches[48]['correct_lines'].append(p[0].line)
else:
    rule_matches[48]['other_lines'].append(p[0].line)

@ r49 @
symbol cocci_id;
position p;
typedef u32;
@@
 const u32 cocci_id@p ;

@ script:python depends on r49 @
p << r49.p;
@@

if 49 not in rule_matches:
    rule_matches[49] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['159']:
    rule_matches[49]['correct_lines'].append(p[0].line)
else:
    rule_matches[49]['other_lines'].append(p[0].line)

@ r50 @
symbol cocci_id;
position p;
@@
 void cocci_id@p ( struct ata_queued_cmd * qc ) ;

@ script:python depends on r50 @
p << r50.p;
@@

if 50 not in rule_matches:
    rule_matches[50] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['12']:
    rule_matches[50]['correct_lines'].append(p[0].line)
else:
    rule_matches[50]['other_lines'].append(p[0].line)

@ r51 @
symbol cocci_id;
position p;
typedef u32;
@@
 u32 * cocci_id@p ;

@ script:python depends on r51 @
p << r51.p;
@@

if 51 not in rule_matches:
    rule_matches[51] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['166']:
    rule_matches[51]['correct_lines'].append(p[0].line)
else:
    rule_matches[51]['other_lines'].append(p[0].line)

@ r52 @
symbol cocci_id;
position p;
@@
 struct ata_host * cocci_id@p ;

@ script:python depends on r52 @
p << r52.p;
@@

if 52 not in rule_matches:
    rule_matches[52] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['165']:
    rule_matches[52]['correct_lines'].append(p[0].line)
else:
    rule_matches[52]['other_lines'].append(p[0].line)

@ r53 @
symbol cocci_id;
position p;
@@
 struct ata_port_operations cocci_id@p ;

@ script:python depends on r53 @
p << r53.p;
@@

if 53 not in rule_matches:
    rule_matches[53] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['9']:
    rule_matches[53]['correct_lines'].append(p[0].line)
else:
    rule_matches[53]['other_lines'].append(p[0].line)

@ r54 @
symbol cocci_id;
position p;
@@
 struct ata_device * cocci_id@p ;

@ script:python depends on r54 @
p << r54.p;
@@

if 54 not in rule_matches:
    rule_matches[54] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['188']:
    rule_matches[54]['correct_lines'].append(p[0].line)
else:
    rule_matches[54]['other_lines'].append(p[0].line)

@ r55 @
symbol cocci_id;
position p;
@@
 void cocci_id@p ( struct mv_host_priv * hpriv , void __iomem * mmio ) ;

@ script:python depends on r55 @
p << r55.p;
@@

if 55 not in rule_matches:
    rule_matches[55] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['33', '34']:
    rule_matches[55]['correct_lines'].append(p[0].line)
else:
    rule_matches[55]['other_lines'].append(p[0].line)

@ r56 @
symbol cocci_id;
position p;
@@
 void cocci_id@p ;

@ script:python depends on r56 @
p << r56.p;
@@

if 56 not in rule_matches:
    rule_matches[56] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['163']:
    rule_matches[56]['correct_lines'].append(p[0].line)
else:
    rule_matches[56]['other_lines'].append(p[0].line)

@ r57 @
symbol cocci_id;
position p;
@@
 struct ata_eh_info * cocci_id@p ;

@ script:python depends on r57 @
p << r57.p;
@@

if 57 not in rule_matches:
    rule_matches[57] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['171']:
    rule_matches[57]['correct_lines'].append(p[0].line)
else:
    rule_matches[57]['other_lines'].append(p[0].line)

@ r58 @
symbol cocci_id;
position p;
typedef u32;
@@
 u32 cocci_id@p [ 5 ] ;

@ script:python depends on r58 @
p << r58.p;
@@

if 58 not in rule_matches:
    rule_matches[58] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['173']:
    rule_matches[58]['correct_lines'].append(p[0].line)
else:
    rule_matches[58]['other_lines'].append(p[0].line)

@ r59 @
symbol cocci_id;
position p;
@@
 void cocci_id@p ( struct ata_port * ap , struct mv_port_priv * pp ) ;

@ script:python depends on r59 @
p << r59.p;
@@

if 59 not in rule_matches:
    rule_matches[59] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['14', '15']:
    rule_matches[59]['correct_lines'].append(p[0].line)
else:
    rule_matches[59]['other_lines'].append(p[0].line)

@ r60 @
symbol cocci_id;
position p;
@@
 void * cocci_id@p ;

@ script:python depends on r60 @
p << r60.p;
@@

if 60 not in rule_matches:
    rule_matches[60] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['169']:
    rule_matches[60]['correct_lines'].append(p[0].line)
else:
    rule_matches[60]['other_lines'].append(p[0].line)

@ r61 @
symbol cocci_id;
position p;
typedef u32;
@@
 struct mv_port_signal {  u32 amps ;  u32 pre ; } cocci_id@p ;

@ script:python depends on r61 @
p << r61.p;
@@

if 61 not in rule_matches:
    rule_matches[61] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['85', '88']:
    rule_matches[61]['correct_lines'].append(p[0].line)
else:
    rule_matches[61]['other_lines'].append(p[0].line)

@ r62 @
symbol cocci_id;
position p;
@@
 struct mv_port_priv * cocci_id@p ;

@ script:python depends on r62 @
p << r62.p;
@@

if 62 not in rule_matches:
    rule_matches[62] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['186']:
    rule_matches[62]['correct_lines'].append(p[0].line)
else:
    rule_matches[62]['other_lines'].append(p[0].line)

@ r63 @
symbol cocci_id;
position p;
typedef u32;
@@
 int cocci_id@p ( struct ata_link * link , unsigned int sc_reg_in , u32 * val ) ;

@ script:python depends on r63 @
p << r63.p;
@@

if 63 not in rule_matches:
    rule_matches[63] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['49', '51']:
    rule_matches[63]['correct_lines'].append(p[0].line)
else:
    rule_matches[63]['other_lines'].append(p[0].line)

@ r64 @
symbol cocci_id;
position p;
typedef u32;
@@
 u32 cocci_id@p ;

@ script:python depends on r64 @
p << r64.p;
@@

if 64 not in rule_matches:
    rule_matches[64] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['160']:
    rule_matches[64]['correct_lines'].append(p[0].line)
else:
    rule_matches[64]['other_lines'].append(p[0].line)

@ r65 @
symbol cocci_id;
position p;
@@
 struct ata_port * cocci_id@p ;

@ script:python depends on r65 @
p << r65.p;
@@

if 65 not in rule_matches:
    rule_matches[65] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['187']:
    rule_matches[65]['correct_lines'].append(p[0].line)
else:
    rule_matches[65]['other_lines'].append(p[0].line)

@ r66 @
symbol cocci_id;
position p;
@@
 enum ata_completion_errors cocci_id@p ;

@ script:python depends on r66 @
p << r66.p;
@@

if 66 not in rule_matches:
    rule_matches[66] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['176']:
    rule_matches[66]['correct_lines'].append(p[0].line)
else:
    rule_matches[66]['other_lines'].append(p[0].line)

@ r67 @
symbol cocci_id;
position p;
@@
 const struct pci_device_id cocci_id@p [ ] ;

@ script:python depends on r67 @
p << r67.p;
@@

if 67 not in rule_matches:
    rule_matches[67] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['6']:
    rule_matches[67]['correct_lines'].append(p[0].line)
else:
    rule_matches[67]['other_lines'].append(p[0].line)

@ r68 @
symbol cocci_id;
position p;
@@
 void cocci_id@p ( struct ata_port * ap , int pmp ) ;

@ script:python depends on r68 @
p << r68.p;
@@

if 68 not in rule_matches:
    rule_matches[68] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['16', '17']:
    rule_matches[68]['correct_lines'].append(p[0].line)
else:
    rule_matches[68]['other_lines'].append(p[0].line)

@ r69 @
symbol cocci_id;
position p;
@@
 struct scsi_cmnd * cocci_id@p ;

@ script:python depends on r69 @
p << r69.p;
@@

if 69 not in rule_matches:
    rule_matches[69] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['179']:
    rule_matches[69]['correct_lines'].append(p[0].line)
else:
    rule_matches[69]['other_lines'].append(p[0].line)

@ r70 @
symbol cocci_id;
position p;
@@
 void cocci_id@p ( struct mv_host_priv * hpriv , void __iomem * mmio , unsigned int port_no ) ;

@ script:python depends on r70 @
p << r70.p;
@@

if 70 not in rule_matches:
    rule_matches[70] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['22', '24']:
    rule_matches[70]['correct_lines'].append(p[0].line)
else:
    rule_matches[70]['other_lines'].append(p[0].line)

@ r71 @
symbol cocci_id;
position p;
typedef u32;
@@
 int cocci_id@p ( struct ata_link * link , unsigned int sc_reg_in , u32 val ) ;

@ script:python depends on r71 @
p << r71.p;
@@

if 71 not in rule_matches:
    rule_matches[71] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['46', '48']:
    rule_matches[71]['correct_lines'].append(p[0].line)
else:
    rule_matches[71]['other_lines'].append(p[0].line)

@ r72 @
symbol cocci_id;
position p;
@@
 const struct of_device_id cocci_id@p [ ] ;

@ script:python depends on r72 @
p << r72.p;
@@

if 72 not in rule_matches:
    rule_matches[72] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['144']:
    rule_matches[72]['correct_lines'].append(p[0].line)
else:
    rule_matches[72]['other_lines'].append(p[0].line)

@ r73 @
symbol cocci_id;
position p;
@@
 struct phy * cocci_id@p ;

@ script:python depends on r73 @
p << r73.p;
@@

if 73 not in rule_matches:
    rule_matches[73] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['147']:
    rule_matches[73]['correct_lines'].append(p[0].line)
else:
    rule_matches[73]['other_lines'].append(p[0].line)

@ r74 @
symbol cocci_id;
position p;
@@
 char * cocci_id@p ;

@ script:python depends on r74 @
p << r74.p;
@@

if 74 not in rule_matches:
    rule_matches[74] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['172']:
    rule_matches[74]['correct_lines'].append(p[0].line)
else:
    rule_matches[74]['other_lines'].append(p[0].line)

@ r75 @
symbol cocci_id;
position p;
@@
 char cocci_id@p [ 16 ] ;

@ script:python depends on r75 @
p << r75.p;
@@

if 75 not in rule_matches:
    rule_matches[75] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['146']:
    rule_matches[75]['correct_lines'].append(p[0].line)
else:
    rule_matches[75]['other_lines'].append(p[0].line)

@ r76 @
symbol cocci_id;
position p;
@@
 int cocci_id@p ( struct pci_dev * pdev ) ;

@ script:python depends on r76 @
p << r76.p;
@@

if 76 not in rule_matches:
    rule_matches[76] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['140']:
    rule_matches[76]['correct_lines'].append(p[0].line)
else:
    rule_matches[76]['other_lines'].append(p[0].line)

@ r77 @
symbol cocci_id;
position p;
@@
 enum ata_completion_errors cocci_id@p ( struct ata_queued_cmd * qc ) ;

@ script:python depends on r77 @
p << r77.p;
@@

if 77 not in rule_matches:
    rule_matches[77] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['44']:
    rule_matches[77]['correct_lines'].append(p[0].line)
else:
    rule_matches[77]['other_lines'].append(p[0].line)

@ r78 @
symbol cocci_id;
position p;
@@
 struct scsi_host_template cocci_id@p ;

@ script:python depends on r78 @
p << r78.p;
@@

if 78 not in rule_matches:
    rule_matches[78] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['10']:
    rule_matches[78]['correct_lines'].append(p[0].line)
else:
    rule_matches[78]['other_lines'].append(p[0].line)

@ r79 @
symbol cocci_id;
position p;
typedef __le32;
@@
 struct mv_crpb {  __le16 id ;  __le16 flags ;  __le32 tmstmp ; } cocci_id@p ;

@ script:python depends on r79 @
p << r79.p;
@@

if 79 not in rule_matches:
    rule_matches[79] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['114', '118']:
    rule_matches[79]['correct_lines'].append(p[0].line)
else:
    rule_matches[79]['other_lines'].append(p[0].line)

@ r80 @
symbol cocci_id;
position p;
typedef u16;
@@
 u16 cocci_id@p ;

@ script:python depends on r80 @
p << r80.p;
@@

if 80 not in rule_matches:
    rule_matches[80] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['180']:
    rule_matches[80]['correct_lines'].append(p[0].line)
else:
    rule_matches[80]['other_lines'].append(p[0].line)

@ r81 @
symbol cocci_id;
position p;
@@
 struct mv_sg * cocci_id@p ;

@ script:python depends on r81 @
p << r81.p;
@@

if 81 not in rule_matches:
    rule_matches[81] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['184']:
    rule_matches[81]['correct_lines'].append(p[0].line)
else:
    rule_matches[81]['other_lines'].append(p[0].line)

@ r82 @
symbol cocci_id;
position p;
@@
 struct ata_queued_cmd * cocci_id@p ;

@ script:python depends on r82 @
p << r82.p;
@@

if 82 not in rule_matches:
    rule_matches[82] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['178']:
    rule_matches[82]['correct_lines'].append(p[0].line)
else:
    rule_matches[82]['other_lines'].append(p[0].line)

@ r83 @
symbol cocci_id;
position p;
@@
 struct mv_crpb * cocci_id@p ;

@ script:python depends on r83 @
p << r83.p;
@@

if 83 not in rule_matches:
    rule_matches[83] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['170']:
    rule_matches[83]['correct_lines'].append(p[0].line)
else:
    rule_matches[83]['other_lines'].append(p[0].line)

@ r84 @
symbol cocci_id;
position p;
@@
 const struct mv_sata_platform_data * cocci_id@p ;

@ script:python depends on r84 @
p << r84.p;
@@

if 84 not in rule_matches:
    rule_matches[84] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['150']:
    rule_matches[84]['correct_lines'].append(p[0].line)
else:
    rule_matches[84]['other_lines'].append(p[0].line)

@ r85 @
symbol cocci_id;
position p;
typedef __le32;
@@
 struct mv_crqb {  __le32 sg_addr ;  __le32 sg_addr_hi ;  __le16 ctrl_flags ;  __le16 ata_cmd [ 11 ] ; } cocci_id@p ;

@ script:python depends on r85 @
p << r85.p;
@@

if 85 not in rule_matches:
    rule_matches[85] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['126', '131']:
    rule_matches[85]['correct_lines'].append(p[0].line)
else:
    rule_matches[85]['other_lines'].append(p[0].line)

@ r86 @
symbol cocci_id;
position p;
@@
 struct device * cocci_id@p ;

@ script:python depends on r86 @
p << r86.p;
@@

if 86 not in rule_matches:
    rule_matches[86] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['154']:
    rule_matches[86]['correct_lines'].append(p[0].line)
else:
    rule_matches[86]['other_lines'].append(p[0].line)

@ r87 @
symbol cocci_id;
position p;
@@
 int cocci_id@p ( struct ata_link * link , unsigned int * class , unsigned long deadline ) ;

@ script:python depends on r87 @
p << r87.p;
@@

if 87 not in rule_matches:
    rule_matches[87] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['40', '42']:
    rule_matches[87]['correct_lines'].append(p[0].line)
else:
    rule_matches[87]['other_lines'].append(p[0].line)

@ r88 @
symbol cocci_id;
position p;
typedef u32,dma_addr_t;
@@
 struct mv_port_priv {  struct mv_crqb * crqb ;  dma_addr_t crqb_dma ;  struct mv_crpb * crpb ;  dma_addr_t crpb_dma ;  struct mv_sg * sg_tbl [ MV_MAX_Q_DEPTH ] ;  dma_addr_t sg_tbl_dma [ MV_MAX_Q_DEPTH ] ;  unsigned int req_idx ;  unsigned int resp_idx ;  u32 pp_flags ;  struct mv_cached_regs cached ;  unsigned int delayed_eh_pmp_map ; } cocci_id@p ;

@ script:python depends on r88 @
p << r88.p;
@@

if 88 not in rule_matches:
    rule_matches[88] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['89', '101']:
    rule_matches[88]['correct_lines'].append(p[0].line)
else:
    rule_matches[88]['other_lines'].append(p[0].line)

@ r89 @
symbol cocci_id;
position p;
@@
 int cocci_id@p ( void __iomem * port_mmio ) ;

@ script:python depends on r89 @
p << r89.p;
@@

if 89 not in rule_matches:
    rule_matches[89] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['21']:
    rule_matches[89]['correct_lines'].append(p[0].line)
else:
    rule_matches[89]['other_lines'].append(p[0].line)

@ r90 @
symbol cocci_id;
position p;
@@
 struct resource * cocci_id@p ;

@ script:python depends on r90 @
p << r90.p;
@@

if 90 not in rule_matches:
    rule_matches[90] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['149']:
    rule_matches[90]['correct_lines'].append(p[0].line)
else:
    rule_matches[90]['other_lines'].append(p[0].line)

@ r91 @
symbol cocci_id;
position p;
@@
 const unsigned long * cocci_id@p ;

@ script:python depends on r91 @
p << r91.p;
@@

if 91 not in rule_matches:
    rule_matches[91] = {'lines': [], 'correct_lines': [], 'other_lines': []}
if p[0].line in ['156']:
    rule_matches[91]['correct_lines'].append(p[0].line)
else:
    rule_matches[91]['other_lines'].append(p[0].line)

@ finalize:python @
@@
rules = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91]
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
