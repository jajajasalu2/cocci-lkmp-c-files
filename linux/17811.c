cocci_test_suite() {
	unsigned long cocci_id/* arch/ia64/kernel/uncached.c 79 */;
	struct page *cocci_id/* arch/ia64/kernel/uncached.c 77 */;
	struct uncached_pool *cocci_id/* arch/ia64/kernel/uncached.c 75 */;
	int cocci_id/* arch/ia64/kernel/uncached.c 75 */;
	struct uncached_pool cocci_id/* arch/ia64/kernel/uncached.c 40 */[MAX_NUMNODES];
	struct uncached_pool {
		struct gen_pool *pool;
		struct mutex add_chunk_mutex;
		int nchunks_added;
		atomic_t status;
	} cocci_id/* arch/ia64/kernel/uncached.c 31 */;
	void __init cocci_id/* arch/ia64/kernel/uncached.c 29 */(efi_freemem_callback_t,
								 void *);
	void cocci_id/* arch/ia64/kernel/uncached.c 256 */;
	char *cocci_id/* arch/ia64/kernel/uncached.c 255 */;
	size_t cocci_id/* arch/ia64/kernel/uncached.c 250 */;
	struct gen_pool *cocci_id/* arch/ia64/kernel/uncached.c 249 */;
	u64 cocci_id/* arch/ia64/kernel/uncached.c 246 */;
	void *cocci_id/* arch/ia64/kernel/uncached.c 246 */;
	int __init cocci_id/* arch/ia64/kernel/uncached.c 246 */;
}
