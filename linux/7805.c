cocci_test_suite() {
	struct pp_ctx {
		struct ntb_dev *ntb;
		struct hrtimer timer;
		u64 in_db;
		u64 out_db;
		int out_pidx;
		u64 nmask;
		u64 pmask;
		atomic_t count;
		spinlock_t lock;
		struct dentry *dbgfs_dir;
	} cocci_id/* drivers/ntb/test/ntb_pingpong.c 99 */;
	unsigned int cocci_id/* drivers/ntb/test/ntb_pingpong.c 95 */;
	void __exit cocci_id/* drivers/ntb/test/ntb_pingpong.c 429 */;
	int __init cocci_id/* drivers/ntb/test/ntb_pingpong.c 414 */;
	struct ntb_client cocci_id/* drivers/ntb/test/ntb_pingpong.c 407 */;
	struct ntb_client *cocci_id/* drivers/ntb/test/ntb_pingpong.c 368 */;
	struct pci_dev *cocci_id/* drivers/ntb/test/ntb_pingpong.c 356 */;
	u64 cocci_id/* drivers/ntb/test/ntb_pingpong.c 245 */;
	struct ntb_dev *cocci_id/* drivers/ntb/test/ntb_pingpong.c 243 */;
	int cocci_id/* drivers/ntb/test/ntb_pingpong.c 243 */;
	const struct ntb_ctx_ops cocci_id/* drivers/ntb/test/ntb_pingpong.c 238 */;
	void *cocci_id/* drivers/ntb/test/ntb_pingpong.c 231 */;
	enum hrtimer_restart cocci_id/* drivers/ntb/test/ntb_pingpong.c 215 */;
	struct hrtimer *cocci_id/* drivers/ntb/test/ntb_pingpong.c 215 */;
	u32 cocci_id/* drivers/ntb/test/ntb_pingpong.c 173 */;
	struct pp_ctx *cocci_id/* drivers/ntb/test/ntb_pingpong.c 162 */;
	void cocci_id/* drivers/ntb/test/ntb_pingpong.c 162 */;
	struct dentry *cocci_id/* drivers/ntb/test/ntb_pingpong.c 114 */;
	struct pp_ctx cocci_id/* drivers/ntb/test/ntb_pingpong.c 112 */;
}
