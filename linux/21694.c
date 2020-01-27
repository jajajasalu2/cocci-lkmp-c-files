cocci_test_suite() {
	struct cache_info *cocci_id/* arch/s390/kernel/cache.c 91 */;
	struct seq_file *cocci_id/* arch/s390/kernel/cache.c 68 */;
	const enum cache_type cocci_id/* arch/s390/kernel/cache.c 61 */[];
	const char *const cocci_id/* arch/s390/kernel/cache.c 53 */[];
	union cache_topology {
		struct cache_info ci[CACHE_MAX_LEVEL];
		unsigned long long raw;
	} cocci_id/* arch/s390/kernel/cache.c 48 */;
	struct cache_info {
		unsigned char:4;
		unsigned char scope:2;
		unsigned char type:2;
	} cocci_id/* arch/s390/kernel/cache.c 41 */;
	enum{CACHE_TI_UNIFIED=0, CACHE_TI_DATA=0, CACHE_TI_INSTRUCTION,} cocci_id/* arch/s390/kernel/cache.c 35 */;
	enum{EXTRACT_TOPOLOGY, EXTRACT_LINE_SIZE, EXTRACT_SIZE, EXTRACT_ASSOCIATIVITY,} cocci_id/* arch/s390/kernel/cache.c 28 */;
	enum{CTYPE_SEPARATE, CTYPE_DATA, CTYPE_INSTRUCTION, CTYPE_UNIFIED,} cocci_id/* arch/s390/kernel/cache.c 21 */;
	enum{CACHE_SCOPE_NOTEXISTS, CACHE_SCOPE_PRIVATE, CACHE_SCOPE_SHARED, CACHE_SCOPE_RESERVED,} cocci_id/* arch/s390/kernel/cache.c 14 */;
	union cache_topology cocci_id/* arch/s390/kernel/cache.c 132 */;
	struct cpu_cacheinfo *cocci_id/* arch/s390/kernel/cache.c 130 */;
	enum cache_type cocci_id/* arch/s390/kernel/cache.c 107 */;
	unsigned int cocci_id/* arch/s390/kernel/cache.c 107 */;
	struct cacheinfo *cocci_id/* arch/s390/kernel/cache.c 106 */;
	int cocci_id/* arch/s390/kernel/cache.c 106 */;
	void cocci_id/* arch/s390/kernel/cache.c 106 */;
	unsigned long cocci_id/* arch/s390/kernel/cache.c 101 */;
}
