cocci_test_suite() {
	atomic_t cocci_id/* kernel/async.c 79 */;
	struct async_entry {
		struct list_head domain_list;
		struct list_head global_list;
		struct work_struct work;
		async_cookie_t cookie;
		async_func_t func;
		void *data;
		struct async_domain *domain;
	} cocci_id/* kernel/async.c 67 */;
	struct worker *cocci_id/* kernel/async.c 330 */;
	bool cocci_id/* kernel/async.c 328 */;
	async_func_t cocci_id/* kernel/async.c 231 */;
	async_cookie_t cocci_id/* kernel/async.c 231 */;
	void *cocci_id/* kernel/async.c 231 */;
	int cocci_id/* kernel/async.c 231 */;
	struct async_domain *cocci_id/* kernel/async.c 166 */;
	long long cocci_id/* kernel/async.c 119 */;
	ktime_t cocci_id/* kernel/async.c 114 */;
	unsigned long cocci_id/* kernel/async.c 113 */;
	struct async_entry cocci_id/* kernel/async.c 112 */;
	struct async_entry *cocci_id/* kernel/async.c 111 */;
	struct work_struct *cocci_id/* kernel/async.c 109 */;
	void cocci_id/* kernel/async.c 109 */;
}
