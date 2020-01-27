cocci_test_suite() {
	struct test_parman_item *cocci_id/* lib/test_parman.c 90 */;
	struct test_parman {
		struct parman *parman;
		struct test_parman_item **prio_array;
		unsigned long prio_array_limit;
		struct test_parman_prio prios[TEST_PARMAN_PRIO_COUNT];
		struct test_parman_item items[TEST_PARMAN_ITEM_COUNT];
		struct rnd_state rnd;
		unsigned long run_budget;
		unsigned long bulk_budget;
		bool bulk_noop;
		unsigned int used_items;
	} cocci_id/* lib/test_parman.c 77 */;
	struct test_parman_item {
		struct parman_item parman_item;
		struct test_parman_prio *prio;
		bool used;
	} cocci_id/* lib/test_parman.c 71 */;
	struct test_parman_prio {
		struct parman_prio parman_prio;
		unsigned long priority;
	} cocci_id/* lib/test_parman.c 66 */;
	void __exit cocci_id/* lib/test_parman.c 386 */;
	int __init cocci_id/* lib/test_parman.c 381 */;
	unsigned long cocci_id/* lib/test_parman.c 304 */;
	unsigned int cocci_id/* lib/test_parman.c 303 */;
	bool cocci_id/* lib/test_parman.c 301 */;
	struct test_parman *cocci_id/* lib/test_parman.c 300 */;
	int cocci_id/* lib/test_parman.c 300 */;
	void cocci_id/* lib/test_parman.c 246 */;
	const struct parman_ops *cocci_id/* lib/test_parman.c 217 */;
	struct test_parman_prio *cocci_id/* lib/test_parman.c 153 */;
	u32 cocci_id/* lib/test_parman.c 137 */;
	const struct parman_ops cocci_id/* lib/test_parman.c 124 */;
	struct test_parman_item **cocci_id/* lib/test_parman.c 117 */;
	void *cocci_id/* lib/test_parman.c 113 */;
}
