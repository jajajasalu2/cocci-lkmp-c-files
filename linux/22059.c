cocci_test_suite() {
	void cocci_id/* lib/atomic64.c 58 */;
	const atomic64_t *cocci_id/* lib/atomic64.c 45 */;
	union {
		raw_spinlock_t lock;
		char pad[L1_CACHE_BYTES];
	} cocci_id/* lib/atomic64.c 27 */[NR_LOCKS]__cacheline_aligned_in_smp;
	raw_spinlock_t *cocci_id/* lib/atomic64.c 151 */;
	unsigned long cocci_id/* lib/atomic64.c 150 */;
	s64 cocci_id/* lib/atomic64.c 148 */;
	atomic64_t *cocci_id/* lib/atomic64.c 148 */;
}
