cocci_test_suite() {
	struct sched_clock_data cocci_id/* kernel/sched/clock.c 96 */;
	struct sched_clock_data {
		u64 tick_raw;
		u64 tick_gtod;
		u64 clock;
	} cocci_id/* kernel/sched/clock.c 90 */;
	u64 cocci_id/* kernel/sched/clock.c 88 */;
	int cocci_id/* kernel/sched/clock.c 82 */;
	unsigned long long cocci_id/* kernel/sched/clock.c 66 */;
	unsigned long long __weak cocci_id/* kernel/sched/clock.c 64 */;
	u64 __weak cocci_id/* kernel/sched/clock.c 479 */;
	unsigned long cocci_id/* kernel/sched/clock.c 437 */;
	s64 cocci_id/* kernel/sched/clock.c 268 */;
	int __init cocci_id/* kernel/sched/clock.c 226 */;
	void __init cocci_id/* kernel/sched/clock.c 207 */;
	void cocci_id/* kernel/sched/clock.c 180 */;
	struct work_struct *cocci_id/* kernel/sched/clock.c 154 */;
	struct sched_clock_data *cocci_id/* kernel/sched/clock.c 113 */;
}
