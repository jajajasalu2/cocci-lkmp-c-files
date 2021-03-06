cocci_test_suite() {
	const struct kernel_param *cocci_id/* drivers/isdn/hardware/mISDN/speedfax.c 84 */;
	const char *cocci_id/* drivers/isdn/hardware/mISDN/speedfax.c 84 */;
	struct sfax_hw *cocci_id/* drivers/isdn/hardware/mISDN/speedfax.c 76 */;
	struct sfax_hw {
		struct list_head list;
		struct pci_dev *pdev;
		char name[MISDN_MAX_IDLEN];
		u32 irq;
		u32 irqcnt;
		u32 cfg;
		struct _ioport p_isac;
		struct _ioport p_isar;
		u8 aux_data;
		spinlock_t lock;
		struct isac_hw isac;
		struct isar_hw isar;
	} cocci_id/* drivers/isdn/hardware/mISDN/speedfax.c 57 */;
	u32 cocci_id/* drivers/isdn/hardware/mISDN/speedfax.c 54 */;
	void cocci_id/* drivers/isdn/hardware/mISDN/speedfax.c 513 */;
	void __exit cocci_id/* drivers/isdn/hardware/mISDN/speedfax.c 512 */;
	int cocci_id/* drivers/isdn/hardware/mISDN/speedfax.c 504 */;
	int __init cocci_id/* drivers/isdn/hardware/mISDN/speedfax.c 501 */;
	struct pci_driver cocci_id/* drivers/isdn/hardware/mISDN/speedfax.c 494 */;
	unsigned long cocci_id/* drivers/isdn/hardware/mISDN/speedfax.c 484 */;
	struct pci_device_id cocci_id/* drivers/isdn/hardware/mISDN/speedfax.c 481 */[];
	struct pci_dev *cocci_id/* drivers/isdn/hardware/mISDN/speedfax.c 471 */;
	char *cocci_id/* drivers/isdn/hardware/mISDN/speedfax.c 459 */;
	struct sfax_hw cocci_id/* drivers/isdn/hardware/mISDN/speedfax.c 445 */;
	const struct pci_device_id *cocci_id/* drivers/isdn/hardware/mISDN/speedfax.c 442 */;
	void *cocci_id/* drivers/isdn/hardware/mISDN/speedfax.c 376 */;
	const struct firmware *cocci_id/* drivers/isdn/hardware/mISDN/speedfax.c 364 */;
	u_long cocci_id/* drivers/isdn/hardware/mISDN/speedfax.c 276 */;
	struct channel_req *cocci_id/* drivers/isdn/hardware/mISDN/speedfax.c 241 */;
	struct dchannel cocci_id/* drivers/isdn/hardware/mISDN/speedfax.c 239 */;
	struct dchannel *cocci_id/* drivers/isdn/hardware/mISDN/speedfax.c 239 */;
	struct mISDNdevice cocci_id/* drivers/isdn/hardware/mISDN/speedfax.c 238 */;
	struct mISDNdevice *cocci_id/* drivers/isdn/hardware/mISDN/speedfax.c 238 */;
	struct mISDNchannel *cocci_id/* drivers/isdn/hardware/mISDN/speedfax.c 236 */;
	struct mISDN_ctrl_req *cocci_id/* drivers/isdn/hardware/mISDN/speedfax.c 208 */;
	u8 cocci_id/* drivers/isdn/hardware/mISDN/speedfax.c 115 */;
	irqreturn_t cocci_id/* drivers/isdn/hardware/mISDN/speedfax.c 111 */;
}
