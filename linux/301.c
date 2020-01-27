cocci_test_suite() {
	struct task_struct *cocci_id/* kernel/softirq.c 87 */;
	unsigned int __weak cocci_id/* kernel/softirq.c 710 */;
	int __init __weak cocci_id/* kernel/softirq.c 705 */;
	struct smp_hotplug_thread cocci_id/* kernel/softirq.c 673 */;
	struct tasklet_struct **cocci_id/* kernel/softirq.c 623 */;
	const char *const cocci_id/* kernel/softirq.c 59 */[NR_SOFTIRQS];
	void __init cocci_id/* kernel/softirq.c 575 */;
	void (*cocci_id/* kernel/softirq.c 550 */)(unsigned long);
	struct softirq_action cocci_id/* kernel/softirq.c 55 */[NR_SOFTIRQS]__cacheline_aligned_in_smp;
	struct tasklet_struct *cocci_id/* kernel/softirq.c 494 */;
	struct tasklet_head *cocci_id/* kernel/softirq.c 475 */;
	struct tasklet_head __percpu *cocci_id/* kernel/softirq.c 472 */;
	struct tasklet_head {
		struct tasklet_struct *head;
		struct tasklet_struct **tail;
	} cocci_id/* kernel/softirq.c 463 */;
	void (*cocci_id/* kernel/softirq.c 455 */)(struct softirq_action *);
	unsigned int cocci_id/* kernel/softirq.c 281 */;
	__u32 cocci_id/* kernel/softirq.c 256 */;
	bool cocci_id/* kernel/softirq.c 255 */;
	struct softirq_action *cocci_id/* kernel/softirq.c 254 */;
	int cocci_id/* kernel/softirq.c 253 */;
	unsigned long cocci_id/* kernel/softirq.c 251 */;
	void __softirq_entry cocci_id/* kernel/softirq.c 249 */;
	void cocci_id/* kernel/softirq.c 249 */;
	__typeof__(struct tasklet_head) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
	__typeof__(struct task_struct *) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
}
