cocci_test_suite() {
	SMC37c669_IRQ_TRANSLATION_ENTRY cocci_id/* arch/alpha/kernel/smc37c669.c 991 */[]
__initdata;
	SMC37c669_IRQ_TRANSLATION_ENTRY *cocci_id/* arch/alpha/kernel/smc37c669.c 985 */;
	SMC37c669_CONFIG_REGS *cocci_id/* arch/alpha/kernel/smc37c669.c 976 */;
	unsigned long cocci_id/* arch/alpha/kernel/smc37c669.c 966 */[]__initdata;
	struct DEVICE_CONFIG {
		unsigned int port1;
		unsigned int port2;
		int irq;
		int drq;
	} cocci_id/* arch/alpha/kernel/smc37c669.c 956 */[NUM_FUNCS];
	void cocci_id/* arch/alpha/kernel/smc37c669.c 882 */(void);
	unsigned int cocci_id/* arch/alpha/kernel/smc37c669.c 875 */(unsigned int func,
								     int port,
								     int irq,
								     int drq);
	unsigned int cocci_id/* arch/alpha/kernel/smc37c669.c 871 */(unsigned int func);
	SMC37c669_CONFIG_REGS *cocci_id/* arch/alpha/kernel/smc37c669.c 863 */(int);
	struct _SMC37c669_DRQ_TRANSLATION_ENTRY {
		int device_drq;
		int isa_drq;
	} cocci_id/* arch/alpha/kernel/smc37c669.c 854 */;
	struct _SMC37c669_IRQ_TRANSLATION_ENTRY {
		int device_irq;
		int isa_irq;
	} cocci_id/* arch/alpha/kernel/smc37c669.c 846 */;
	SMC37c669_CR28 cocci_id/* arch/alpha/kernel/smc37c669.c 841 */;
	SMC37c669_CR27 cocci_id/* arch/alpha/kernel/smc37c669.c 840 */;
	SMC37c669_CR26 cocci_id/* arch/alpha/kernel/smc37c669.c 839 */;
	SMC37c669_CR24 cocci_id/* arch/alpha/kernel/smc37c669.c 838 */;
	SMC37c669_CR23 cocci_id/* arch/alpha/kernel/smc37c669.c 837 */;
	SMC37c669_CR21 cocci_id/* arch/alpha/kernel/smc37c669.c 836 */;
	SMC37c669_CR20 cocci_id/* arch/alpha/kernel/smc37c669.c 835 */;
	SMC37c669_CR0E cocci_id/* arch/alpha/kernel/smc37c669.c 834 */;
	SMC37c669_CR0D cocci_id/* arch/alpha/kernel/smc37c669.c 833 */;
	union _SMC37c669_CR29 {
		unsigned char as_uchar;
		struct {
			unsigned irqin_irq:4;
			unsigned reserved1:4;
		} by_field;
	} cocci_id/* arch/alpha/kernel/smc37c669.c 810 */;
	union _SMC37c669_CR28 {
		unsigned char as_uchar;
		struct {
			unsigned uart2_irq:4;
			unsigned uart1_irq:4;
		} by_field;
	} cocci_id/* arch/alpha/kernel/smc37c669.c 781 */;
	union _SMC37c669_CR27 {
		unsigned char as_uchar;
		struct {
			unsigned ppt_irq:4;
			unsigned fdc_irq:4;
		} by_field;
	} cocci_id/* arch/alpha/kernel/smc37c669.c 747 */;
	union _SMC37c669_CR26 {
		unsigned char as_uchar;
		struct {
			unsigned ppt_drq:4;
			unsigned fdc_drq:4;
		} by_field;
	} cocci_id/* arch/alpha/kernel/smc37c669.c 718 */;
	union _SMC37c669_CR25 {
		unsigned char as_uchar;
		struct {
			unsigned zero:1;
			unsigned addr9_3:7;
		} by_field;
	} cocci_id/* arch/alpha/kernel/smc37c669.c 696 */;
	union _SMC37c669_CR24 {
		unsigned char as_uchar;
		struct {
			unsigned zero:1;
			unsigned addr9_3:7;
		} by_field;
	} cocci_id/* arch/alpha/kernel/smc37c669.c 680 */;
	union _SMC37c669_CR23 {
		unsigned char as_uchar;
		struct {
			unsigned addr9_2:8;
		} by_field;
	} cocci_id/* arch/alpha/kernel/smc37c669.c 665 */;
	union _SMC37c669_CR22 {
		unsigned char as_uchar;
		struct {
			unsigned zero:2;
			unsigned addr9_4:6;
		} by_field;
	} cocci_id/* arch/alpha/kernel/smc37c669.c 647 */;
	union _SMC37c669_CR21 {
		unsigned char as_uchar;
		struct {
			unsigned zero:2;
			unsigned addr9_4:6;
		} by_field;
	} cocci_id/* arch/alpha/kernel/smc37c669.c 631 */;
	union _SMC37c669_CR20 {
		unsigned char as_uchar;
		struct {
			unsigned zero:2;
			unsigned addr9_4:6;
		} by_field;
	} cocci_id/* arch/alpha/kernel/smc37c669.c 615 */;
	union _SMC37c669_CR1F {
		unsigned char as_uchar;
		struct {
			unsigned fdd0_drive_type:2;
			unsigned fdd1_drive_type:2;
			unsigned fdd2_drive_type:2;
			unsigned fdd3_drive_type:2;
		} by_field;
	} cocci_id/* arch/alpha/kernel/smc37c669.c 597 */;
	union _SMC37c66_CR1E {
		unsigned char as_uchar;
		struct {
			unsigned gamecs_config:2;
			unsigned gamecs_addr9_4:6;
		} by_field;
	} cocci_id/* arch/alpha/kernel/smc37c669.c 573 */;
	union _SMC37c669_CR11 {
		unsigned char as_uchar;
		struct {
			unsigned ir_loopback:1;
			unsigned test_10ms:1;
			unsigned reserved1:6;
		} by_field;
	} cocci_id/* arch/alpha/kernel/smc37c669.c 550 */;
	union _SMC37c669_CR10 {
		unsigned char as_uchar;
		struct {
			unsigned reserved1:3;
			unsigned pll_gain:1;
			unsigned pll_stop:1;
			unsigned ace_stop:1;
			unsigned pll_clock_ctrl:1;
			unsigned ir_test:1;
		} by_field;
	} cocci_id/* arch/alpha/kernel/smc37c669.c 535 */;
	union _SMC37c669_CR0F {
		unsigned char as_uchar;
		struct {
			unsigned test0:1;
			unsigned test1:1;
			unsigned test2:1;
			unsigned test3:1;
			unsigned test4:1;
			unsigned test5:1;
			unsigned test6:1;
			unsigned test7:1;
		} by_field;
	} cocci_id/* arch/alpha/kernel/smc37c669.c 518 */;
	union _SMC37c669_CR0E {
		unsigned char as_uchar;
		struct {
			unsigned device_rev:8;
		} by_field;
	} cocci_id/* arch/alpha/kernel/smc37c669.c 508 */;
	union _SMC37c669_CR0D {
		unsigned char as_uchar;
		struct {
			unsigned device_id:8;
		} by_field;
	} cocci_id/* arch/alpha/kernel/smc37c669.c 496 */;
	union _SMC37c669_CR0C {
		unsigned char as_uchar;
		struct {
			unsigned uart2_rcv_polarity:1;
			unsigned uart2_xmit_polarity:1;
			unsigned uart2_duplex:1;
			unsigned uart2_mode:3;
			unsigned uart1_speed:1;
			unsigned uart2_speed:1;
		} by_field;
	} cocci_id/* arch/alpha/kernel/smc37c669.c 479 */;
	union _SMC37c669_CR0B {
		unsigned char as_uchar;
		struct {
			unsigned fdd0_drtx:2;
			unsigned fdd1_drtx:2;
			unsigned fdd2_drtx:2;
			unsigned fdd3_drtx:2;
		} by_field;
	} cocci_id/* arch/alpha/kernel/smc37c669.c 458 */;
	union _SMC37c669_CR0A {
		unsigned char as_uchar;
		struct {
			unsigned ecp_fifo_threshold:4;
			unsigned reserved1:4;
		} by_field;
	} cocci_id/* arch/alpha/kernel/smc37c669.c 447 */;
	union _SMC37c669_CR09 {
		unsigned char as_uchar;
		struct {
			unsigned adra8:3;
			unsigned reserved1:3;
			unsigned adrx_config:2;
		} by_field;
	} cocci_id/* arch/alpha/kernel/smc37c669.c 435 */;
	union _SMC37c669_CR08 {
		unsigned char as_uchar;
		struct {
			unsigned zero:4;
			unsigned addrx7_4:4;
		} by_field;
	} cocci_id/* arch/alpha/kernel/smc37c669.c 417 */;
	union _SMC37c669_CR07 {
		unsigned char as_uchar;
		struct {
			unsigned floppy_boot:2;
			unsigned reserved1:2;
			unsigned ppt_en:1;
			unsigned uart1_en:1;
			unsigned uart2_en:1;
			unsigned fdc_en:1;
		} by_field;
	} cocci_id/* arch/alpha/kernel/smc37c669.c 402 */;
	union _SMC37c669_CR06 {
		unsigned char as_uchar;
		struct {
			unsigned floppy_a:2;
			unsigned floppy_b:2;
			unsigned floppy_c:2;
			unsigned floppy_d:2;
		} by_field;
	} cocci_id/* arch/alpha/kernel/smc37c669.c 381 */;
	union _SMC37c669_CR05 {
		unsigned char as_uchar;
		struct {
			unsigned reserved1:2;
			unsigned fdc_dma_mode:1;
			unsigned den_sel:2;
			unsigned swap_drv:1;
			unsigned extx4:1;
			unsigned reserved2:1;
		} by_field;
	} cocci_id/* arch/alpha/kernel/smc37c669.c 366 */;
	union _SMC37c669_CR04 {
		unsigned char as_uchar;
		struct {
			unsigned ppt_ext_mode:2;
			unsigned ppt_fdc:2;
			unsigned midi1:1;
			unsigned midi2:1;
			unsigned epp_type:1;
			unsigned alt_io:1;
		} by_field;
	} cocci_id/* arch/alpha/kernel/smc37c669.c 344 */;
	union _SMC37c669_CR03 {
		unsigned char as_uchar;
		struct {
			unsigned pwrgd_gamecs:1;
			unsigned fdc_mode2:1;
			unsigned pin94_0:1;
			unsigned reserved1:1;
			unsigned drvden:1;
			unsigned op_mode:2;
			unsigned pin94_1:1;
		} by_field;
	} cocci_id/* arch/alpha/kernel/smc37c669.c 288 */;
	union _SMC37c669_CR02 {
		unsigned char as_uchar;
		struct {
			unsigned reserved1:3;
			unsigned uart1_pwr:1;
			unsigned reserved2:3;
			unsigned uart2_pwr:1;
		} by_field;
	} cocci_id/* arch/alpha/kernel/smc37c669.c 262 */;
	unsigned long cocci_id/* arch/alpha/kernel/smc37c669.c 2470 */;
	union _SMC37c669_CR01 {
		unsigned char as_uchar;
		struct {
			unsigned reserved1:2;
			unsigned ppt_pwr:1;
			unsigned ppt_mode:1;
			unsigned reserved2:1;
			unsigned reserved3:2;
			unsigned lock_crx:1;
		} by_field;
	} cocci_id/* arch/alpha/kernel/smc37c669.c 247 */;
	void __init cocci_id/* arch/alpha/kernel/smc37c669.c 2433 */;
	union _SMC37c669_CR00 {
		unsigned char as_uchar;
		struct {
			unsigned ide_en:2;
			unsigned reserved1:1;
			unsigned fdc_pwr:1;
			unsigned reserved2:3;
			unsigned valid:1;
		} by_field;
	} cocci_id/* arch/alpha/kernel/smc37c669.c 233 */;
	int __init cocci_id/* arch/alpha/kernel/smc37c669.c 2298 */;
	struct DEVICE_CONFIG *__init cocci_id/* arch/alpha/kernel/smc37c669.c 2200 */;
	struct _SMC37c669_CONFIG_REGS {
		unsigned char index_port;
		unsigned char data_port;
	} cocci_id/* arch/alpha/kernel/smc37c669.c 210 */;
	unsigned char __init cocci_id/* arch/alpha/kernel/smc37c669.c 2006 */;
	unsigned int cocci_id/* arch/alpha/kernel/smc37c669.c 1963 */;
	void __init cocci_id/* arch/alpha/kernel/smc37c669.c 1962 */;
	void cocci_id/* arch/alpha/kernel/smc37c669.c 1884 */;
	unsigned char cocci_id/* arch/alpha/kernel/smc37c669.c 1736 */;
	struct DEVICE_CONFIG *cocci_id/* arch/alpha/kernel/smc37c669.c 1673 */;
	int cocci_id/* arch/alpha/kernel/smc37c669.c 1669 */;
	unsigned int __init cocci_id/* arch/alpha/kernel/smc37c669.c 1667 */;
	SMC37c669_IDE_ADDRESS_REGISTER cocci_id/* arch/alpha/kernel/smc37c669.c 1595 */;
	SMC37c669_FDC_BASE_ADDRESS_REGISTER cocci_id/* arch/alpha/kernel/smc37c669.c 1554 */;
	SMC37c669_PARALLEL_FDC_DRQ_REGISTER cocci_id/* arch/alpha/kernel/smc37c669.c 1515 */;
	SMC37c669_PARALLEL_FDC_IRQ_REGISTER cocci_id/* arch/alpha/kernel/smc37c669.c 1514 */;
	SMC37c669_PARALLEL_BASE_ADDRESS_REGISTER cocci_id/* arch/alpha/kernel/smc37c669.c 1513 */;
	SMC37c669_SERIAL_IRQ_REGISTER cocci_id/* arch/alpha/kernel/smc37c669.c 1465 */;
	SMC37c669_SERIAL_BASE_ADDRESS_REGISTER cocci_id/* arch/alpha/kernel/smc37c669.c 1464 */;
	SMC37c669_DEVICE_ID_REGISTER cocci_id/* arch/alpha/kernel/smc37c669.c 1120 */;
	SMC37c669_CONFIG_REGS *__init cocci_id/* arch/alpha/kernel/smc37c669.c 1117 */;
	int cocci_id/* arch/alpha/kernel/smc37c669.c 1089 */(int drq);
	int cocci_id/* arch/alpha/kernel/smc37c669.c 1085 */(int irq);
	struct DEVICE_CONFIG *cocci_id/* arch/alpha/kernel/smc37c669.c 1081 */(unsigned int func);
	void cocci_id/* arch/alpha/kernel/smc37c669.c 1074 */(unsigned char index,
							      unsigned char data);
	unsigned char cocci_id/* arch/alpha/kernel/smc37c669.c 1070 */(unsigned char index);
	void cocci_id/* arch/alpha/kernel/smc37c669.c 1066 */(unsigned int enable);
	SMC37c669_DRQ_TRANSLATION_ENTRY cocci_id/* arch/alpha/kernel/smc37c669.c 1040 */[]
__initdata;
	SMC37c669_DRQ_TRANSLATION_ENTRY *cocci_id/* arch/alpha/kernel/smc37c669.c 1034 */;
	SMC37c669_IRQ_TRANSLATION_ENTRY *cocci_id/* arch/alpha/kernel/smc37c669.c 1021 */[]__initdata;
}
