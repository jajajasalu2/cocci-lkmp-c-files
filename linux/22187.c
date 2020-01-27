cocci_test_suite() {
	struct {
		struct fault_attr attr;
		bool ignore_gfp_reclaim;
		bool cache_filter;
	} cocci_id/* mm/failslab.c 7 */;
	umode_t cocci_id/* mm/failslab.c 46 */;
	struct dentry *cocci_id/* mm/failslab.c 45 */;
	int __init cocci_id/* mm/failslab.c 43 */;
	void cocci_id/* mm/failslab.c 43 */;
	char *cocci_id/* mm/failslab.c 36 */;
	gfp_t cocci_id/* mm/failslab.c 17 */;
	bool cocci_id/* mm/failslab.c 17 */;
	struct kmem_cache *cocci_id/* mm/failslab.c 17 */;
}
