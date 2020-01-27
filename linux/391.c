cocci_test_suite() {
	va_list cocci_id/* kernel/printk/printk_safe.c 69 */;
	void __init cocci_id/* kernel/printk/printk_safe.c 389 */;
	struct printk_safe_seq_buf {
		atomic_t len;
		atomic_t message_lost;
		struct irq_work work;
		unsigned char buffer[SAFE_LOG_BUF_LEN];
	} cocci_id/* kernel/printk/printk_safe.c 37 */;
	void cocci_id/* kernel/printk/printk_safe.c 350 */;
	struct irq_work cocci_id/* kernel/printk/printk_safe.c 35 */;
	atomic_t cocci_id/* kernel/printk/printk_safe.c 33 */;
	void notrace cocci_id/* kernel/printk/printk_safe.c 297 */;
	const char *cocci_id/* kernel/printk/printk_safe.c 210 */;
	int cocci_id/* kernel/printk/printk_safe.c 188 */;
	size_t cocci_id/* kernel/printk/printk_safe.c 187 */;
	unsigned long cocci_id/* kernel/printk/printk_safe.c 186 */;
	struct printk_safe_seq_buf cocci_id/* kernel/printk/printk_safe.c 185 */;
	struct printk_safe_seq_buf *cocci_id/* kernel/printk/printk_safe.c 184 */;
	raw_spinlock_t cocci_id/* kernel/printk/printk_safe.c 182 */;
	struct irq_work *cocci_id/* kernel/printk/printk_safe.c 180 */;
	const char cocci_id/* kernel/printk/printk_safe.c 159 */[];
	bool cocci_id/* kernel/printk/printk_safe.c 125 */;
	__typeof__(struct printk_safe_seq_buf) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
	__typeof__(int) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
}
