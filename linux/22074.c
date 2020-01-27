cocci_test_suite() {
	typeof(struct parman_item) cocci_id/* lib/parman.c 96 */;
	bool cocci_id/* lib/parman.c 87 */;
	int cocci_id/* lib/parman.c 59 */;
	struct parman {
		const struct parman_ops *ops;
		void *priv;
		const struct parman_algo *algo;
		unsigned long count;
		unsigned long limit_count;
		struct list_head prio_list;
	} cocci_id/* lib/parman.c 50 */;
	struct parman_algo {
		int (*item_add)(struct parman *parman,
				struct parman_prio *prio,
				struct parman_item *item);
		void (*item_remove)(struct parman *parman,
				    struct parman_prio *prio,
				    struct parman_item *item);
	} cocci_id/* lib/parman.c 43 */;
	typeof(*prio2) cocci_id/* lib/parman.c 319 */;
	struct list_head *cocci_id/* lib/parman.c 312 */;
	const struct parman_ops *cocci_id/* lib/parman.c 268 */;
	void *cocci_id/* lib/parman.c 268 */;
	const struct parman_algo *cocci_id/* lib/parman.c 225 */[];
	const struct parman_algo cocci_id/* lib/parman.c 220 */;
	struct parman_item *cocci_id/* lib/parman.c 127 */;
	unsigned long cocci_id/* lib/parman.c 127 */;
	struct parman_prio *cocci_id/* lib/parman.c 126 */;
	struct parman *cocci_id/* lib/parman.c 126 */;
	void cocci_id/* lib/parman.c 126 */;
}
