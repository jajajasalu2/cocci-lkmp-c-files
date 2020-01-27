cocci_test_suite() {
	struct klp_shadow {
		struct hlist_node node;
		struct rcu_head rcu_head;
		void *obj;
		unsigned long id;
		char data[];
	} cocci_id/* kernel/livepatch/shadow.c 54 */;
	klp_shadow_dtor_t cocci_id/* kernel/livepatch/shadow.c 253 */;
	void cocci_id/* kernel/livepatch/shadow.c 253 */;
	int cocci_id/* kernel/livepatch/shadow.c 144 */;
	struct klp_shadow *cocci_id/* kernel/livepatch/shadow.c 109 */;
	bool cocci_id/* kernel/livepatch/shadow.c 107 */;
	klp_shadow_ctor_t cocci_id/* kernel/livepatch/shadow.c 106 */;
	gfp_t cocci_id/* kernel/livepatch/shadow.c 105 */;
	size_t cocci_id/* kernel/livepatch/shadow.c 105 */;
	void *cocci_id/* kernel/livepatch/shadow.c 104 */;
	unsigned long cocci_id/* kernel/livepatch/shadow.c 104 */;
}
