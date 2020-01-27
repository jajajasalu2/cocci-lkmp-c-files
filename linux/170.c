cocci_test_suite() {
	struct node_vectors {
		unsigned id;
		union {
			unsigned nvectors;
			unsigned ncpus;
		};
	} cocci_id/* kernel/irq/affinity.c 98 */;
	nodemask_t *cocci_id/* kernel/irq/affinity.c 84 */;
	const struct irq_affinity *cocci_id/* kernel/irq/affinity.c 497 */;
	cpumask_var_t cocci_id/* kernel/irq/affinity.c 48 */;
	void cocci_id/* kernel/irq/affinity.c 43 */;
	struct irq_affinity *cocci_id/* kernel/irq/affinity.c 402 */;
	struct node_vectors cocci_id/* kernel/irq/affinity.c 281 */;
	struct node_vectors *cocci_id/* kernel/irq/affinity.c 259 */;
	nodemask_t cocci_id/* kernel/irq/affinity.c 258 */;
	struct irq_affinity_desc *cocci_id/* kernel/irq/affinity.c 253 */;
	struct cpumask *cocci_id/* kernel/irq/affinity.c 252 */;
	const struct cpumask *cocci_id/* kernel/irq/affinity.c 251 */;
	cpumask_var_t *cocci_id/* kernel/irq/affinity.c 250 */;
	unsigned int cocci_id/* kernel/irq/affinity.c 247 */;
	int cocci_id/* kernel/irq/affinity.c 247 */;
	unsigned cocci_id/* kernel/irq/affinity.c 135 */;
	const nodemask_t cocci_id/* kernel/irq/affinity.c 131 */;
	const struct node_vectors *cocci_id/* kernel/irq/affinity.c 109 */;
	const void *cocci_id/* kernel/irq/affinity.c 107 */;
}
