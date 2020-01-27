cocci_test_suite() {
	struct irq_matrix *cocci_id/* kernel/irq/matrix.c 49 */;
	unsigned int cocci_id/* kernel/irq/matrix.c 49 */;
	struct seq_file *cocci_id/* kernel/irq/matrix.c 481 */;
	struct cpumap *cocci_id/* kernel/irq/matrix.c 381 */;
	bool cocci_id/* kernel/irq/matrix.c 378 */;
	unsigned int *cocci_id/* kernel/irq/matrix.c 378 */;
	const struct cpumask *cocci_id/* kernel/irq/matrix.c 377 */;
	int cocci_id/* kernel/irq/matrix.c 377 */;
	void cocci_id/* kernel/irq/matrix.c 321 */;
	struct irq_matrix {
		unsigned int matrix_bits;
		unsigned int alloc_start;
		unsigned int alloc_end;
		unsigned int alloc_size;
		unsigned int global_available;
		unsigned int global_reserved;
		unsigned int systembits_inalloc;
		unsigned int total_allocated;
		unsigned int online_maps;
		struct cpumap __percpu *maps;
		unsigned long scratch_map[IRQ_MATRIX_SIZE];
		unsigned long system_map[IRQ_MATRIX_SIZE];
	} cocci_id/* kernel/irq/matrix.c 24 */;
	struct cpumap {
		unsigned int available;
		unsigned int allocated;
		unsigned int managed;
		unsigned int managed_allocated;
		bool initialized;
		bool online;
		unsigned long alloc_map[IRQ_MATRIX_SIZE];
		unsigned long managed_map[IRQ_MATRIX_SIZE];
	} cocci_id/* kernel/irq/matrix.c 13 */;
}
