cocci_test_suite() {
	struct ce_array {
		u64 *array;
		unsigned int n;
		unsigned int decay_count;
		u64 pfns_poisoned;
		u64 ces_entered;
		u64 decays_done;
		union {
			struct {
				__u32 disabled:1,__resv:31;
			};
			__u32 flags;
		};
	} cocci_id/* drivers/ras/cec.c 94 */;
	char *cocci_id/* drivers/ras/cec.c 552 */;
	unsigned long cocci_id/* drivers/ras/cec.c 542 */;
	void __init cocci_id/* drivers/ras/cec.c 530 */;
	void cocci_id/* drivers/ras/cec.c 530 */;
	struct dentry *cocci_id/* drivers/ras/cec.c 485 */;
	int __init cocci_id/* drivers/ras/cec.c 483 */;
	const struct file_operations cocci_id/* drivers/ras/cec.c 475 */;
	struct inode *cocci_id/* drivers/ras/cec.c 470 */;
	struct file *cocci_id/* drivers/ras/cec.c 470 */;
	struct seq_file *cocci_id/* drivers/ras/cec.c 438 */;
	const char *constcocci_id/* drivers/ras/cec.c 436 */[];
	u64 *cocci_id/* drivers/ras/cec.c 425 */;
	void *cocci_id/* drivers/ras/cec.c 423 */;
	unsigned int cocci_id/* drivers/ras/cec.c 315 */;
	bool cocci_id/* drivers/ras/cec.c 283 */;
	u64 __maybe_unused cocci_id/* drivers/ras/cec.c 268 */;
	u64 cocci_id/* drivers/ras/cec.c 186 */;
	struct ce_array *cocci_id/* drivers/ras/cec.c 186 */;
	unsigned int *cocci_id/* drivers/ras/cec.c 186 */;
	int cocci_id/* drivers/ras/cec.c 186 */;
	struct work_struct *cocci_id/* drivers/ras/cec.c 172 */;
	u8 cocci_id/* drivers/ras/cec.c 147 */;
	struct delayed_work cocci_id/* drivers/ras/cec.c 135 */;
}
