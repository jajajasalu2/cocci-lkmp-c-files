cocci_test_suite() {
	unsigned long cocci_id/* drivers/edac/thunderx_edac.c 69 */;
	struct thunderx_lmc cocci_id/* drivers/edac/thunderx_edac.c 689 */;
	struct edac_mc_layer cocci_id/* drivers/edac/thunderx_edac.c 665 */;
	struct pci_dev *cocci_id/* drivers/edac/thunderx_edac.c 651 */;
	struct lmc_err_ctx *cocci_id/* drivers/edac/thunderx_edac.c 551 */;
	struct mem_ctl_info *cocci_id/* drivers/edac/thunderx_edac.c 547 */;
	int cocci_id/* drivers/edac/thunderx_edac.c 54 */;
	const uint64_t cocci_id/* drivers/edac/thunderx_edac.c 52 */;
	const struct error_descr *cocci_id/* drivers/edac/thunderx_edac.c 51 */;
	char *cocci_id/* drivers/edac/thunderx_edac.c 50 */;
	size_t cocci_id/* drivers/edac/thunderx_edac.c 50 */;
	void cocci_id/* drivers/edac/thunderx_edac.c 50 */;
	u64 cocci_id/* drivers/edac/thunderx_edac.c 491 */;
	phys_addr_t cocci_id/* drivers/edac/thunderx_edac.c 491 */;
	struct dentry *cocci_id/* drivers/edac/thunderx_edac.c 466 */;
	struct error_descr {
		int type;
		u64 mask;
		char *descr;
	} cocci_id/* drivers/edac/thunderx_edac.c 44 */;
	void __iomem *cocci_id/* drivers/edac/thunderx_edac.c 413 */;
	u8 *cocci_id/* drivers/edac/thunderx_edac.c 412 */;
	loff_t *cocci_id/* drivers/edac/thunderx_edac.c 408 */;
	const char __user *cocci_id/* drivers/edac/thunderx_edac.c 407 */;
	struct file *cocci_id/* drivers/edac/thunderx_edac.c 406 */;
	ssize_t cocci_id/* drivers/edac/thunderx_edac.c 406 */;
	struct error_syndrome {
		u64 reg[MAX_SYNDROME_REGS];
	} cocci_id/* drivers/edac/thunderx_edac.c 40 */;
	const unsigned int cocci_id/* drivers/edac/thunderx_edac.c 341 */;
	unsigned int cocci_id/* drivers/edac/thunderx_edac.c 340 */;
	uintptr_t cocci_id/* drivers/edac/thunderx_edac.c 339 */;
	struct thunderx_lmc *cocci_id/* drivers/edac/thunderx_edac.c 338 */;
	void *cocci_id/* drivers/edac/thunderx_edac.c 336 */;
	char cocci_id/* drivers/edac/thunderx_edac.c 327 */[20];
	char __user *cocci_id/* drivers/edac/thunderx_edac.c 323 */;
	enum{ERR_CORRECTED=1, ERR_UNCORRECTED=2, ERR_UNKNOWN=3,} cocci_id/* drivers/edac/thunderx_edac.c 32 */;
	void __exit cocci_id/* drivers/edac/thunderx_edac.c 2138 */;
	int __init cocci_id/* drivers/edac/thunderx_edac.c 2113 */;
	struct pci_driver cocci_id/* drivers/edac/thunderx_edac.c 2106 */;
	const char *cocci_id/* drivers/edac/thunderx_edac.c 1954 */;
	char cocci_id/* drivers/edac/thunderx_edac.c 1953 */[32];
	irqreturn_t (*cocci_id/* drivers/edac/thunderx_edac.c 1952 */)(int,
								       void *);
	struct debugfs_entry **cocci_id/* drivers/edac/thunderx_edac.c 1950 */;
	struct edac_device_ctl_info *cocci_id/* drivers/edac/thunderx_edac.c 1949 */;
	const struct pci_device_id *cocci_id/* drivers/edac/thunderx_edac.c 1946 */;
	const struct pci_device_id cocci_id/* drivers/edac/thunderx_edac.c 1938 */[];
	struct debugfs_entry *cocci_id/* drivers/edac/thunderx_edac.c 1928 */[];
	struct thunderx_lmc {
		void __iomem *regs;
		struct pci_dev *pdev;
		struct msix_entry msix_ent;
		atomic_t ecc_int;
		u64 mask0;
		u64 mask2;
		u64 parity_test;
		u64 node;
		int xbits;
		int bank_width;
		int pbank_lsb;
		int dimm_lsb;
		int rank_lsb;
		int bank_lsb;
		int row_lsb;
		int col_hi_lsb;
		int xor_bank;
		int l2c_alias;
		struct page *mem;
		struct lmc_err_ctx err_ctx[RING_ENTRIES];
		unsigned long ring_head;
		unsigned long ring_tail;
	} cocci_id/* drivers/edac/thunderx_edac.c 183 */;
	struct l2c_err_ctx *cocci_id/* drivers/edac/thunderx_edac.c 1799 */;
	struct thunderx_l2c cocci_id/* drivers/edac/thunderx_edac.c 1795 */;
	struct thunderx_l2c *cocci_id/* drivers/edac/thunderx_edac.c 1795 */;
	struct msix_entry *cocci_id/* drivers/edac/thunderx_edac.c 1794 */;
	irqreturn_t cocci_id/* drivers/edac/thunderx_edac.c 1792 */;
	struct lmc_err_ctx {
		u64 reg_int;
		u64 reg_fadr;
		u64 reg_nxm_fadr;
		u64 reg_scram_fadr;
		u64 reg_ecc_synd;
	} cocci_id/* drivers/edac/thunderx_edac.c 175 */;
	struct thunderx_l2c {
		void __iomem *regs;
		struct pci_dev *pdev;
		struct edac_device_ctl_info *edac_dev;
		struct dentry *debugfs;
		int index;
		struct msix_entry msix_ent;
		struct l2c_err_ctx err_ctx[RING_ENTRIES];
		unsigned long ring_head;
		unsigned long ring_tail;
	} cocci_id/* drivers/edac/thunderx_edac.c 1744 */;
	struct l2c_err_ctx {
		char *reg_ext_name;
		u64 reg_int;
		u64 reg_ext;
	} cocci_id/* drivers/edac/thunderx_edac.c 1738 */;
	struct debugfs_entry {
		const char *name;
		umode_t mode;
		const struct file_operations fops;
	} cocci_id/* drivers/edac/thunderx_edac.c 169 */;
	const struct error_descr cocci_id/* drivers/edac/thunderx_edac.c 1659 */[];
	struct thunderx_ocx *cocci_id/* drivers/edac/thunderx_edac.c 1327 */;
	struct ocx_link_err_ctx *cocci_id/* drivers/edac/thunderx_edac.c 1175 */;
	struct ocx_com_err_ctx *cocci_id/* drivers/edac/thunderx_edac.c 1084 */;
	struct thunderx_ocx cocci_id/* drivers/edac/thunderx_edac.c 1078 */;
	struct thunderx_ocx {
		void __iomem *regs;
		int com_link;
		struct pci_dev *pdev;
		struct edac_device_ctl_info *edac_dev;
		struct dentry *debugfs;
		struct msix_entry msix_ent[OCX_INTS];
		struct ocx_com_err_ctx com_err_ctx[RING_ENTRIES];
		struct ocx_link_err_ctx link_err_ctx[RING_ENTRIES];
		unsigned long com_ring_head;
		unsigned long com_ring_tail;
		unsigned long link_ring_head;
		unsigned long link_ring_tail;
	} cocci_id/* drivers/edac/thunderx_edac.c 1052 */;
	struct ocx_link_err_ctx {
		u64 reg_com_link_int;
		int link;
	} cocci_id/* drivers/edac/thunderx_edac.c 1047 */;
	struct ocx_com_err_ctx {
		u64 reg_com_int;
		u64 reg_lane_int[OCX_RX_LANES];
		u64 reg_lane_stat11[OCX_RX_LANES];
	} cocci_id/* drivers/edac/thunderx_edac.c 1041 */;
}
