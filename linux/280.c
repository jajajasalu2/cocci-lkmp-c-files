cocci_test_suite() {
	u64 *cocci_id/* kernel/time/timekeeping.c 998 */;
	struct timekeeper *cocci_id/* kernel/time/timekeeping.c 958 */;
	time64_t cocci_id/* kernel/time/timekeeping.c 956 */;
	void cocci_id/* kernel/time/timekeeping.c 956 */;
	int __read_mostly cocci_id/* kernel/time/timekeeping.c 93 */;
	struct tk_fast cocci_id/* kernel/time/timekeeping.c 82 */;
	enum tk_offsets cocci_id/* kernel/time/timekeeping.c 811 */;
	ktime_t *cocci_id/* kernel/time/timekeeping.c 784 */[TK_OFFS_MAX];
	struct clocksource cocci_id/* kernel/time/timekeeping.c 78 */;
	struct tk_fast {
		seqcount_t seq;
		struct tk_read_base base[2];
	} cocci_id/* kernel/time/timekeeping.c 65 */;
	struct notifier_block *cocci_id/* kernel/time/timekeeping.c 584 */;
	const struct tk_read_base *cocci_id/* kernel/time/timekeeping.c 560 */;
	struct tk_read_base cocci_id/* kernel/time/timekeeping.c 559 */;
	const struct timekeeper *cocci_id/* kernel/time/timekeeping.c 557 */;
	struct timekeeper cocci_id/* kernel/time/timekeeping.c 54 */;
	u64 notrace cocci_id/* kernel/time/timekeeping.c 505 */;
	struct {
		seqcount_t seq;
		struct timekeeper timekeeper;
	} cocci_id/* kernel/time/timekeeping.c 46 */;
	unsigned int cocci_id/* kernel/time/timekeeping.c 454 */;
	struct tk_read_base *cocci_id/* kernel/time/timekeeping.c 453 */;
	u64 cocci_id/* kernel/time/timekeeping.c 451 */;
	struct tk_fast *cocci_id/* kernel/time/timekeeping.c 451 */;
	u32 cocci_id/* kernel/time/timekeeping.c 356 */;
	u32 (*cocci_id/* kernel/time/timekeeping.c 354 */)(void);
	enum timekeeping_adv_mode{TK_ADV_TICK, TK_ADV_FREQ,} cocci_id/* kernel/time/timekeeping.c 34 */;
	struct audit_ntp_data cocci_id/* kernel/time/timekeeping.c 2316 */;
	struct __kernel_timex *cocci_id/* kernel/time/timekeeping.c 2313 */;
	const struct __kernel_timex *cocci_id/* kernel/time/timekeeping.c 2247 */;
	ktime_t *cocci_id/* kernel/time/timekeeping.c 2213 */;
	unsigned int *cocci_id/* kernel/time/timekeeping.c 2213 */;
	struct timespec64 *cocci_id/* kernel/time/timekeeping.c 2151 */;
	enum timekeeping_adv_mode cocci_id/* kernel/time/timekeeping.c 2048 */;
	struct timespec64 cocci_id/* kernel/time/timekeeping.c 1984 */;
	int cocci_id/* kernel/time/timekeeping.c 1967 */;
	long cocci_id/* kernel/time/timekeeping.c 1931 */;
	s64 cocci_id/* kernel/time/timekeeping.c 1899 */;
	const char *cocci_id/* kernel/time/timekeeping.c 183 */;
	int __init cocci_id/* kernel/time/timekeeping.c 1811 */;
	struct syscore_ops cocci_id/* kernel/time/timekeeping.c 1806 */;
	const struct timespec64 *cocci_id/* kernel/time/timekeeping.c 1588 */;
	void __init cocci_id/* kernel/time/timekeeping.c 1532 */;
	void __weak __init cocci_id/* kernel/time/timekeeping.c 1503 */;
	void __weak cocci_id/* kernel/time/timekeeping.c 1485 */;
	unsigned long cocci_id/* kernel/time/timekeeping.c 1364 */;
	struct clocksource *cocci_id/* kernel/time/timekeeping.c 1363 */;
	void *cocci_id/* kernel/time/timekeeping.c 1360 */;
	s32 cocci_id/* kernel/time/timekeeping.c 1349 */;
	u8 cocci_id/* kernel/time/timekeeping.c 1131 */;
	ktime_t cocci_id/* kernel/time/timekeeping.c 1129 */;
	struct system_counterval_t cocci_id/* kernel/time/timekeeping.c 1125 */;
	int (*cocci_id/* kernel/time/timekeeping.c 1117 */)(ktime_t *device_time,
							    struct system_counterval_t *sys_counterval,
							    void *ctx);
	struct system_device_crosststamp *cocci_id/* kernel/time/timekeeping.c 1036 */;
	bool cocci_id/* kernel/time/timekeeping.c 1035 */;
	struct system_time_snapshot *cocci_id/* kernel/time/timekeeping.c 1032 */;
}
