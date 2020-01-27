cocci_test_suite() {
	struct timer_list *cocci_id/* arch/powerpc/platforms/cell/spufs/sched.c 988 */;
	unsigned long cocci_id/* arch/powerpc/platforms/cell/spufs/sched.c 955 */;
	struct spu *cocci_id/* arch/powerpc/platforms/cell/spufs/sched.c 852 */;
	struct list_head *cocci_id/* arch/powerpc/platforms/cell/spufs/sched.c 833 */;
	struct timer_list cocci_id/* arch/powerpc/platforms/cell/spufs/sched.c 52 */;
	struct task_struct *cocci_id/* arch/powerpc/platforms/cell/spufs/sched.c 50 */;
	struct spu_prio_array *cocci_id/* arch/powerpc/platforms/cell/spufs/sched.c 49 */;
	void cocci_id/* arch/powerpc/platforms/cell/spufs/sched.c 481 */;
	unsigned long cocci_id/* arch/powerpc/platforms/cell/spufs/sched.c 48 */[3];
	u32 cocci_id/* arch/powerpc/platforms/cell/spufs/sched.c 426 */;
	struct spu_prio_array {
	DECLARE_BITMAP(bitmap,MAX_PRIO)
		;
		struct list_head runq[MAX_PRIO];
		spinlock_t runq_lock;
		int nr_waiting;
	} cocci_id/* arch/powerpc/platforms/cell/spufs/sched.c 41 */;
	struct spu_gang *cocci_id/* arch/powerpc/platforms/cell/spufs/sched.c 258 */;
	const struct cpumask *cocci_id/* arch/powerpc/platforms/cell/spufs/sched.c 158 */;
	struct spu_context *cocci_id/* arch/powerpc/platforms/cell/spufs/sched.c 155 */;
	int cocci_id/* arch/powerpc/platforms/cell/spufs/sched.c 155 */;
	struct spu_prio_array cocci_id/* arch/powerpc/platforms/cell/spufs/sched.c 1089 */;
	struct proc_dir_entry *cocci_id/* arch/powerpc/platforms/cell/spufs/sched.c 1086 */;
	int __init cocci_id/* arch/powerpc/platforms/cell/spufs/sched.c 1084 */;
	struct seq_file *cocci_id/* arch/powerpc/platforms/cell/spufs/sched.c 1061 */;
	void *cocci_id/* arch/powerpc/platforms/cell/spufs/sched.c 1061 */;
	signed long long cocci_id/* arch/powerpc/platforms/cell/spufs/sched.c 1029 */;
	unsigned long long cocci_id/* arch/powerpc/platforms/cell/spufs/sched.c 1028 */;
	enum spu_utilization_state cocci_id/* arch/powerpc/platforms/cell/spufs/sched.c 1026 */;
	struct mutex *cocci_id/* arch/powerpc/platforms/cell/spufs/sched.c 1003 */;
}
