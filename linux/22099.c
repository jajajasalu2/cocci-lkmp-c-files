cocci_test_suite() {
	atomic_t cocci_id/* lib/test_vmalloc.c 66 */;
	cpumask_t cocci_id/* lib/test_vmalloc.c 54 */;
	struct test_driver *cocci_id/* lib/test_vmalloc.c 482 */;
	u32 cocci_id/* lib/test_vmalloc.c 427 */;
	u64 cocci_id/* lib/test_vmalloc.c 389 */;
	ktime_t cocci_id/* lib/test_vmalloc.c 388 */;
	int cocci_id/* lib/test_vmalloc.c 386 */[ARRAY_SIZE(test_case_array)];
	int *cocci_id/* lib/test_vmalloc.c 365 */;
	struct test_driver {
		struct task_struct *task;
		unsigned long start;
		unsigned long stop;
		int cpu;
	} cocci_id/* lib/test_vmalloc.c 358 */[NR_CPUS];
	struct test_case_data cocci_id/* lib/test_vmalloc.c 355 */[NR_CPUS][ARRAY_SIZE(test_case_array)];
	struct test_case_data {
		int test_failed;
		int test_passed;
		u64 time;
	} cocci_id/* lib/test_vmalloc.c 348 */;
	struct test_case_desc cocci_id/* lib/test_vmalloc.c 336 */[];
	struct test_case_desc {
		const char *test_name;
		int (*test_func)(void);
	} cocci_id/* lib/test_vmalloc.c 331 */;
	unsigned int cocci_id/* lib/test_vmalloc.c 307 */;
	void __percpu *cocci_id/* lib/test_vmalloc.c 302 */;
	size_t cocci_id/* lib/test_vmalloc.c 299 */;
	void __percpu **cocci_id/* lib/test_vmalloc.c 298 */;
	__u8 *cocci_id/* lib/test_vmalloc.c 285 */;
	void **cocci_id/* lib/test_vmalloc.c 225 */;
	void *cocci_id/* lib/test_vmalloc.c 115 */;
	unsigned long cocci_id/* lib/test_vmalloc.c 114 */;
	int cocci_id/* lib/test_vmalloc.c 112 */;
	void cocci_id/* lib/test_vmalloc.c 112 */;
}
