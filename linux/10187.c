cocci_test_suite() {
	struct hdlc_stat_reg {
#ifdef __BIG_ENDIAN
		u8 fill;
		u8 mode;
		u8 xml;
		u8 cmd;
#else
		u8 cmd;
		u8 xml;
		u8 mode;
		u8 fill;
#endif
	}__attribute__((packed)) cocci_id/* drivers/isdn/hardware/mISDN/avmfritz.c 96 */;
	struct channel_req *cocci_id/* drivers/isdn/hardware/mISDN/avmfritz.c 920 */;
	struct dchannel cocci_id/* drivers/isdn/hardware/mISDN/avmfritz.c 918 */;
	struct dchannel *cocci_id/* drivers/isdn/hardware/mISDN/avmfritz.c 918 */;
	struct mISDNdevice cocci_id/* drivers/isdn/hardware/mISDN/avmfritz.c 917 */;
	struct mISDNdevice *cocci_id/* drivers/isdn/hardware/mISDN/avmfritz.c 917 */;
	struct bchannel cocci_id/* drivers/isdn/hardware/mISDN/avmfritz.c 838 */;
	struct mISDNchannel *cocci_id/* drivers/isdn/hardware/mISDN/avmfritz.c 836 */;
	struct mISDN_ctrl_req *cocci_id/* drivers/isdn/hardware/mISDN/avmfritz.c 830 */;
	unsigned long cocci_id/* drivers/isdn/hardware/mISDN/avmfritz.c 686 */;
	struct mISDNhead *cocci_id/* drivers/isdn/hardware/mISDN/avmfritz.c 685 */;
	struct sk_buff *cocci_id/* drivers/isdn/hardware/mISDN/avmfritz.c 680 */;
	irqreturn_t cocci_id/* drivers/isdn/hardware/mISDN/avmfritz.c 619 */;
	struct hdlc_hw *cocci_id/* drivers/isdn/hardware/mISDN/avmfritz.c 528 */;
	struct fritzcard *cocci_id/* drivers/isdn/hardware/mISDN/avmfritz.c 525 */;
	u32 cocci_id/* drivers/isdn/hardware/mISDN/avmfritz.c 523 */;
	struct bchannel *cocci_id/* drivers/isdn/hardware/mISDN/avmfritz.c 523 */;
	bool cocci_id/* drivers/isdn/hardware/mISDN/avmfritz.c 441 */;
	u32 *cocci_id/* drivers/isdn/hardware/mISDN/avmfritz.c 392 */;
	u_long cocci_id/* drivers/isdn/hardware/mISDN/avmfritz.c 294 */;
	enum{AVM_FRITZ_PCI, AVM_FRITZ_PCIV2,} cocci_id/* drivers/isdn/hardware/mISDN/avmfritz.c 25 */;
	int cocci_id/* drivers/isdn/hardware/mISDN/avmfritz.c 22 */;
	u8 cocci_id/* drivers/isdn/hardware/mISDN/avmfritz.c 190 */;
	u8 *cocci_id/* drivers/isdn/hardware/mISDN/avmfritz.c 190 */;
	void *cocci_id/* drivers/isdn/hardware/mISDN/avmfritz.c 190 */;
	const struct kernel_param *cocci_id/* drivers/isdn/hardware/mISDN/avmfritz.c 146 */;
	const char *cocci_id/* drivers/isdn/hardware/mISDN/avmfritz.c 146 */;
	struct fritzcard {
		struct list_head list;
		struct pci_dev *pdev;
		char name[MISDN_MAX_IDLEN];
		u8 type;
		u8 ctrlreg;
		u16 irq;
		u32 irqcnt;
		u32 addr;
		spinlock_t lock;
		struct isac_hw isac;
		struct hdlc_hw hdlc[2];
		struct bchannel bch[2];
		char log[LOG_SIZE + 1];
	} cocci_id/* drivers/isdn/hardware/mISDN/avmfritz.c 118 */;
	void __exit cocci_id/* drivers/isdn/hardware/mISDN/avmfritz.c 1157 */;
	void cocci_id/* drivers/isdn/hardware/mISDN/avmfritz.c 1157 */;
	int __init cocci_id/* drivers/isdn/hardware/mISDN/avmfritz.c 1148 */;
	struct pci_driver cocci_id/* drivers/isdn/hardware/mISDN/avmfritz.c 1141 */;
	const struct pci_device_id cocci_id/* drivers/isdn/hardware/mISDN/avmfritz.c 1132 */[];
	struct pci_dev *cocci_id/* drivers/isdn/hardware/mISDN/avmfritz.c 1121 */;
	char *cocci_id/* drivers/isdn/hardware/mISDN/avmfritz.c 1109 */;
	struct hdlc_hw {
		union {
			u32 ctrl;
			struct hdlc_stat_reg sr;
		} ctrl;
		u32 stat;
	} cocci_id/* drivers/isdn/hardware/mISDN/avmfritz.c 110 */;
	struct fritzcard cocci_id/* drivers/isdn/hardware/mISDN/avmfritz.c 1092 */;
	const struct pci_device_id *cocci_id/* drivers/isdn/hardware/mISDN/avmfritz.c 1087 */;
	unsigned short cocci_id/* drivers/isdn/hardware/mISDN/avmfritz.c 1028 */;
}
