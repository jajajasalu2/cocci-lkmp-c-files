cocci_test_suite() {
	const struct inf_cinfo cocci_id/* drivers/isdn/hardware/mISDN/mISDNinfineon.c 941 */[];
	struct inf_hw {
		struct list_head list;
		struct pci_dev *pdev;
		const struct inf_cinfo *ci;
		char name[MISDN_MAX_IDLEN];
		u32 irq;
		u32 irqcnt;
		struct _iohandle cfg;
		struct _iohandle addr;
		struct _ioaddr isac;
		struct _ioaddr hscx;
		spinlock_t lock;
		struct ipac_hw ipac;
		struct inf_hw *sc[3];
	} cocci_id/* drivers/isdn/hardware/mISDN/mISDNinfineon.c 92 */;
	ulong cocci_id/* drivers/isdn/hardware/mISDN/mISDNinfineon.c 854 */;
	struct _iohandle {
		enum addr_mode mode;
		resource_size_t size;
		resource_size_t start;
		void __iomem *p;
	} cocci_id/* drivers/isdn/hardware/mISDN/mISDNinfineon.c 85 */;
	struct _ioaddr {
		enum addr_mode mode;
		union {
			void __iomem *p;
			struct _ioport io;
		} a;
	} cocci_id/* drivers/isdn/hardware/mISDN/mISDNinfineon.c 77 */;
	struct inf_cinfo {
		enum inf_types typ;
		const char *full;
		const char *name;
		enum addr_mode cfg_mode;
		enum addr_mode addr_mode;
		u8 cfg_bar;
		u8 addr_bar;
		void *irqfunc;
	} cocci_id/* drivers/isdn/hardware/mISDN/mISDNinfineon.c 66 */;
	enum addr_mode{AM_NONE=0, AM_IO, AM_MEMIO, AM_IND_IO,} cocci_id/* drivers/isdn/hardware/mISDN/mISDNinfineon.c 59 */;
	u_long cocci_id/* drivers/isdn/hardware/mISDN/mISDNinfineon.c 574 */;
	u16 cocci_id/* drivers/isdn/hardware/mISDN/mISDNinfineon.c 433 */;
	enum inf_types{INF_NONE, INF_DIVA20, INF_DIVA20U, INF_DIVA201, INF_DIVA202, INF_SPEEDWIN, INF_SAPHIR3, INF_QS1000, INF_QS3000, INF_NICCY, INF_SCT_1, INF_SCT_2, INF_SCT_3, INF_SCT_4, INF_GAZEL_R685, INF_GAZEL_R753,} cocci_id/* drivers/isdn/hardware/mISDN/mISDNinfineon.c 40 */;
	u32 cocci_id/* drivers/isdn/hardware/mISDN/mISDNinfineon.c 37 */;
	u8 cocci_id/* drivers/isdn/hardware/mISDN/mISDNinfineon.c 286 */;
	void *cocci_id/* drivers/isdn/hardware/mISDN/mISDNinfineon.c 283 */;
	int cocci_id/* drivers/isdn/hardware/mISDN/mISDNinfineon.c 283 */;
	irqreturn_t cocci_id/* drivers/isdn/hardware/mISDN/mISDNinfineon.c 282 */;
	const struct kernel_param *cocci_id/* drivers/isdn/hardware/mISDN/mISDNinfineon.c 232 */;
	const char *cocci_id/* drivers/isdn/hardware/mISDN/mISDNinfineon.c 232 */;
	struct inf_hw *cocci_id/* drivers/isdn/hardware/mISDN/mISDNinfineon.c 224 */;
	void cocci_id/* drivers/isdn/hardware/mISDN/mISDNinfineon.c 223 */;
	void __exit cocci_id/* drivers/isdn/hardware/mISDN/mISDNinfineon.c 1155 */;
	int __init cocci_id/* drivers/isdn/hardware/mISDN/mISDNinfineon.c 1145 */;
	struct pci_driver cocci_id/* drivers/isdn/hardware/mISDN/mISDNinfineon.c 1138 */;
	struct pci_device_id cocci_id/* drivers/isdn/hardware/mISDN/mISDNinfineon.c 113 */[];
	struct inf_hw cocci_id/* drivers/isdn/hardware/mISDN/mISDNinfineon.c 1071 */;
	const struct pci_device_id *cocci_id/* drivers/isdn/hardware/mISDN/mISDNinfineon.c 1066 */;
	struct pci_dev *cocci_id/* drivers/isdn/hardware/mISDN/mISDNinfineon.c 1066 */;
	enum inf_types cocci_id/* drivers/isdn/hardware/mISDN/mISDNinfineon.c 1053 */;
	const struct inf_cinfo *cocci_id/* drivers/isdn/hardware/mISDN/mISDNinfineon.c 1052 */;
}
