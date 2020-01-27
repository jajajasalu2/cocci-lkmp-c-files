cocci_test_suite() {
	unsigned int cocci_id/* kernel/time/sched_clock.c 99 */;
	unsigned long long notrace cocci_id/* kernel/time/sched_clock.c 96 */;
	u64 notrace cocci_id/* kernel/time/sched_clock.c 91 */;
	u64 cocci_id/* kernel/time/sched_clock.c 91 */;
	u32 cocci_id/* kernel/time/sched_clock.c 91 */;
	struct clock_data cocci_id/* kernel/time/sched_clock.c 85 */;
	int cocci_id/* kernel/time/sched_clock.c 72 */;
	struct hrtimer cocci_id/* kernel/time/sched_clock.c 71 */;
	struct clock_data {
		seqcount_t seq;
		struct clock_read_data read_data[2];
		ktime_t wrap_kt;
		unsigned long rate;
		u64 (*actual_read_sched_clock)(void);
	} cocci_id/* kernel/time/sched_clock.c 62 */;
	struct clock_read_data {
		u64 epoch_ns;
		u64 epoch_cyc;
		u64 sched_clock_mask;
		u64 (*read_sched_clock)(void);
		u32 mult;
		u32 shift;
	} cocci_id/* kernel/time/sched_clock.c 38 */;
	int __init cocci_id/* kernel/time/sched_clock.c 302 */;
	struct syscore_ops cocci_id/* kernel/time/sched_clock.c 297 */;
	void __init cocci_id/* kernel/time/sched_clock.c 239 */;
	void cocci_id/* kernel/time/sched_clock.c 239 */;
	struct clock_read_data cocci_id/* kernel/time/sched_clock.c 174 */;
	char cocci_id/* kernel/time/sched_clock.c 173 */;
	u64 (*cocci_id/* kernel/time/sched_clock.c 168 */)(void);
	unsigned long cocci_id/* kernel/time/sched_clock.c 168 */;
	void __init cocci_id/* kernel/time/sched_clock.c 167 */;
	enum hrtimer_restart cocci_id/* kernel/time/sched_clock.c 159 */;
	struct hrtimer *cocci_id/* kernel/time/sched_clock.c 159 */;
	struct clock_read_data *cocci_id/* kernel/time/sched_clock.c 100 */;
}
