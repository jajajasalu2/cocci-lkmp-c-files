cocci_test_suite() {
	u32 cocci_id/* drivers/isdn/hardware/mISDN/netjet.c 89 */;
	struct channel_req *cocci_id/* drivers/isdn/hardware/mISDN/netjet.c 875 */;
	struct dchannel cocci_id/* drivers/isdn/hardware/mISDN/netjet.c 873 */;
	struct dchannel *cocci_id/* drivers/isdn/hardware/mISDN/netjet.c 873 */;
	struct mISDNdevice cocci_id/* drivers/isdn/hardware/mISDN/netjet.c 872 */;
	struct mISDNdevice *cocci_id/* drivers/isdn/hardware/mISDN/netjet.c 872 */;
	u_long cocci_id/* drivers/isdn/hardware/mISDN/netjet.c 795 */;
	struct tiger_ch cocci_id/* drivers/isdn/hardware/mISDN/netjet.c 792 */;
	struct bchannel cocci_id/* drivers/isdn/hardware/mISDN/netjet.c 791 */;
	struct bchannel *cocci_id/* drivers/isdn/hardware/mISDN/netjet.c 791 */;
	struct mISDNchannel *cocci_id/* drivers/isdn/hardware/mISDN/netjet.c 789 */;
	struct mISDN_ctrl_req *cocci_id/* drivers/isdn/hardware/mISDN/netjet.c 783 */;
	unsigned long cocci_id/* drivers/isdn/hardware/mISDN/netjet.c 744 */;
	struct mISDNhead *cocci_id/* drivers/isdn/hardware/mISDN/netjet.c 743 */;
	struct sk_buff *cocci_id/* drivers/isdn/hardware/mISDN/netjet.c 737 */;
	irqreturn_t cocci_id/* drivers/isdn/hardware/mISDN/netjet.c 674 */;
	struct tiger_hw {
		struct list_head list;
		struct pci_dev *pdev;
		char name[MISDN_MAX_IDLEN];
		enum nj_types typ;
		int irq;
		u32 irqcnt;
		u32 base;
		size_t base_s;
		dma_addr_t dma;
		void *dma_p;
		spinlock_t lock;
		struct isac_hw isac;
		struct tiger_dma send;
		struct tiger_dma recv;
		struct tiger_ch bc[2];
		u8 ctrlreg;
		u8 dmactrl;
		u8 auxd;
		u8 last_is0;
		u8 irqmask0;
		char log[LOG_SIZE];
	} cocci_id/* drivers/isdn/hardware/mISDN/netjet.c 63 */;
	struct tiger_ch *cocci_id/* drivers/isdn/hardware/mISDN/netjet.c 601 */;
	int cocci_id/* drivers/isdn/hardware/mISDN/netjet.c 484 */(struct tiger_ch *);
	struct tiger_ch {
		struct bchannel bch;
		struct tiger_hw *nj;
		int idx;
		int free;
		int lastrx;
		u16 rxstate;
		u16 txstate;
		struct isdnhdlc_vars hsend;
		struct isdnhdlc_vars hrecv;
		u8 *hsbuf;
		u8 *hrbuf;
	} cocci_id/* drivers/isdn/hardware/mISDN/netjet.c 41 */;
	u64 cocci_id/* drivers/isdn/hardware/mISDN/netjet.c 306 */;
	struct tiger_dma {
		size_t size;
		u32 *start;
		int idx;
		u32 dmastart;
		u32 dmairq;
		u32 dmaend;
		u32 dmacur;
	} cocci_id/* drivers/isdn/hardware/mISDN/netjet.c 29 */;
	enum nj_types{NETJET_S_TJ300, NETJET_S_TJ320, ENTERNOW__TJ320,} cocci_id/* drivers/isdn/hardware/mISDN/netjet.c 23 */;
	struct tiger_hw *cocci_id/* drivers/isdn/hardware/mISDN/netjet.c 157 */;
	u8 cocci_id/* drivers/isdn/hardware/mISDN/netjet.c 155 */;
	u8 *cocci_id/* drivers/isdn/hardware/mISDN/netjet.c 155 */;
	void *cocci_id/* drivers/isdn/hardware/mISDN/netjet.c 155 */;
	int cocci_id/* drivers/isdn/hardware/mISDN/netjet.c 155 */;
	void cocci_id/* drivers/isdn/hardware/mISDN/netjet.c 154 */;
	void __exit cocci_id/* drivers/isdn/hardware/mISDN/netjet.c 1149 */;
	int __init cocci_id/* drivers/isdn/hardware/mISDN/netjet.c 1140 */;
	struct pci_driver cocci_id/* drivers/isdn/hardware/mISDN/netjet.c 1133 */;
	const struct pci_device_id cocci_id/* drivers/isdn/hardware/mISDN/netjet.c 1126 */[];
	struct tiger_hw cocci_id/* drivers/isdn/hardware/mISDN/netjet.c 1073 */;
	const struct pci_device_id *cocci_id/* drivers/isdn/hardware/mISDN/netjet.c 1049 */;
	struct pci_dev *cocci_id/* drivers/isdn/hardware/mISDN/netjet.c 1049 */;
	const struct kernel_param *cocci_id/* drivers/isdn/hardware/mISDN/netjet.c 101 */;
	const char *cocci_id/* drivers/isdn/hardware/mISDN/netjet.c 101 */;
}
