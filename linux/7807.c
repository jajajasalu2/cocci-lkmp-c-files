cocci_test_suite() {
	uintptr_t cocci_id/* drivers/ntb/test/ntb_msi_test.c 63 */;
	struct ntb_msit_ctx cocci_id/* drivers/ntb/test/ntb_msi_test.c 58 */;
	struct work_struct *cocci_id/* drivers/ntb/test/ntb_msi_test.c 56 */;
	irqreturn_t cocci_id/* drivers/ntb/test/ntb_msi_test.c 43 */;
	void __exit cocci_id/* drivers/ntb/test/ntb_msi_test.c 428 */;
	int __init cocci_id/* drivers/ntb/test/ntb_msi_test.c 412 */;
	struct ntb_client cocci_id/* drivers/ntb/test/ntb_msi_test.c 405 */;
	size_t cocci_id/* drivers/ntb/test/ntb_msi_test.c 322 */;
	struct ntb_dev *cocci_id/* drivers/ntb/test/ntb_msi_test.c 319 */;
	struct ntb_client *cocci_id/* drivers/ntb/test/ntb_msi_test.c 319 */;
	struct dentry *cocci_id/* drivers/ntb/test/ntb_msi_test.c 275 */;
	char cocci_id/* drivers/ntb/test/ntb_msi_test.c 273 */[32];
	struct pci_dev *cocci_id/* drivers/ntb/test/ntb_msi_test.c 272 */;
	struct ntb_msit_isr_ctx *cocci_id/* drivers/ntb/test/ntb_msi_test.c 246 */;
	struct ntb_msit_peer *cocci_id/* drivers/ntb/test/ntb_msi_test.c 215 */;
	u64 *cocci_id/* drivers/ntb/test/ntb_msi_test.c 213 */;
	struct ntb_msit_ctx {
		struct ntb_dev *ntb;
		struct dentry *dbgfs_dir;
		struct work_struct setup_work;
		struct ntb_msit_isr_ctx {
			int irq_idx;
			int irq_num;
			int occurrences;
			struct ntb_msit_ctx *nm;
			struct ntb_msi_desc desc;
		} *isr_ctx;
		struct ntb_msit_peer {
			struct ntb_msit_ctx *nm;
			int pidx;
			int num_irqs;
			struct completion init_comp;
			struct ntb_msi_desc *msi_desc;
		} peers[];
	} cocci_id/* drivers/ntb/test/ntb_msi_test.c 19 */;
	const struct ntb_ctx_ops cocci_id/* drivers/ntb/test/ntb_msi_test.c 179 */;
	u32 cocci_id/* drivers/ntb/test/ntb_msi_test.c 154 */;
	u64 cocci_id/* drivers/ntb/test/ntb_msi_test.c 153 */;
	void *cocci_id/* drivers/ntb/test/ntb_msi_test.c 149 */;
	struct ntb_msi_desc *cocci_id/* drivers/ntb/test/ntb_msi_test.c 134 */;
	struct ntb_msit_ctx *cocci_id/* drivers/ntb/test/ntb_msi_test.c 131 */;
	int cocci_id/* drivers/ntb/test/ntb_msi_test.c 131 */;
	void cocci_id/* drivers/ntb/test/ntb_msi_test.c 131 */;
}
