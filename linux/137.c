cocci_test_suite() {
	char *cocci_id/* kernel/dma/debug.c 967 */;
	struct hash_bucket cocci_id/* kernel/dma/debug.c 93 */[HASH_SIZE];
	struct notifier_block cocci_id/* kernel/dma/debug.c 916 */;
	struct notifier_block *cocci_id/* kernel/dma/debug.c 911 */;
	struct bus_type *cocci_id/* kernel/dma/debug.c 909 */;
	struct hash_bucket {
		struct list_head list;
		spinlock_t lock;
	} cocci_id/* kernel/dma/debug.c 87 */;
	struct dma_debug_entry **cocci_id/* kernel/dma/debug.c 859 */;
	bool (*cocci_id/* kernel/dma/debug.c 85 */)(struct dma_debug_entry *,
						    struct dma_debug_entry *);
	struct dentry *cocci_id/* kernel/dma/debug.c 846 */;
	struct seq_file *cocci_id/* kernel/dma/debug.c 817 */;
	const struct file_operations cocci_id/* kernel/dma/debug.c 811 */;
	char cocci_id/* kernel/dma/debug.c 750 */[NAME_MAX_LEN];
	const char __user *cocci_id/* kernel/dma/debug.c 747 */;
	char cocci_id/* kernel/dma/debug.c 728 */[NAME_MAX_LEN + 1];
	loff_t *cocci_id/* kernel/dma/debug.c 726 */;
	struct file *cocci_id/* kernel/dma/debug.c 725 */;
	char __user *cocci_id/* kernel/dma/debug.c 725 */;
	ssize_t cocci_id/* kernel/dma/debug.c 725 */;
	struct dma_debug_entry {
		struct list_head list;
		struct device *dev;
		u64 dev_addr;
		u64 size;
		int type;
		int direction;
		int sg_call_ents;
		int sg_mapped_ents;
		unsigned long pfn;
		size_t offset;
		enum map_err_types map_err_type;
#ifdef CONFIG_STACKTRACE
		unsigned int stack_len;
		unsigned long stack_entries[DMA_DEBUG_STACKTRACE_ENTRIES];
#endif
	}____cacheline_aligned_in_smp cocci_id/* kernel/dma/debug.c 67 */;
	u32 cocci_id/* kernel/dma/debug.c 658 */;
	struct dma_debug_entry cocci_id/* kernel/dma/debug.c 645 */;
	struct dma_debug_entry *cocci_id/* kernel/dma/debug.c 641 */;
	void cocci_id/* kernel/dma/debug.c 641 */;
	gfp_t cocci_id/* kernel/dma/debug.c 623 */;
	void **cocci_id/* kernel/dma/debug.c 563 */;
	struct dma_debug_entry *cocci_id/* kernel/dma/debug.c 561 */[CACHELINES_PER_PAGE];
	unsigned long cocci_id/* kernel/dma/debug.c 513 */;
	phys_addr_t cocci_id/* kernel/dma/debug.c 503 */;
	enum map_err_types{MAP_ERR_CHECK_NOT_APPLICABLE, MAP_ERR_NOT_CHECKED, MAP_ERR_CHECKED,} cocci_id/* kernel/dma/debug.c 45 */;
	enum{dma_debug_single, dma_debug_sg, dma_debug_coherent, dma_debug_resource,} cocci_id/* kernel/dma/debug.c 38 */;
	unsigned int cocci_id/* kernel/dma/debug.c 347 */;
	unsigned long *cocci_id/* kernel/dma/debug.c 344 */;
	struct hash_bucket **cocci_id/* kernel/dma/debug.c 342 */;
	int cocci_id/* kernel/dma/debug.c 291 */;
	match_fn cocci_id/* kernel/dma/debug.c 288 */;
	struct hash_bucket *cocci_id/* kernel/dma/debug.c 286 */;
	int __init cocci_id/* kernel/dma/debug.c 1639 */;
	const char *cocci_id/* kernel/dma/debug.c 144 */[4];
	dma_addr_t cocci_id/* kernel/dma/debug.c 1432 */;
	const char *cocci_id/* kernel/dma/debug.c 140 */[5];
	const char *const cocci_id/* kernel/dma/debug.c 134 */[];
	struct device_driver *cocci_id/* kernel/dma/debug.c 130 */;
	char cocci_id/* kernel/dma/debug.c 129 */[NAME_MAX_LEN]__read_mostly;
	const void *cocci_id/* kernel/dma/debug.c 1234 */;
	u64 cocci_id/* kernel/dma/debug.c 1212 */;
	struct scatterlist *cocci_id/* kernel/dma/debug.c 1208 */;
	unsigned long long cocci_id/* kernel/dma/debug.c 1149 */;
	bool cocci_id/* kernel/dma/debug.c 1135 */;
	struct device *cocci_id/* kernel/dma/debug.c 1126 */;
	void *cocci_id/* kernel/dma/debug.c 1126 */;
	u8 *cocci_id/* kernel/dma/debug.c 1109 */;
	struct vm_struct *cocci_id/* kernel/dma/debug.c 1092 */;
	struct page *cocci_id/* kernel/dma/debug.c 1089 */;
	size_t cocci_id/* kernel/dma/debug.c 1089 */;
}
