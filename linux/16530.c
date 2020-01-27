cocci_test_suite() {
	struct teo_idle_state {
		unsigned int early_hits;
		unsigned int hits;
		unsigned int misses;
	} cocci_id/* drivers/cpuidle/governors/teo.c 88 */;
	int __init cocci_id/* drivers/cpuidle/governors/teo.c 489 */;
	void cocci_id/* drivers/cpuidle/governors/teo.c 489 */;
	struct cpuidle_governor cocci_id/* drivers/cpuidle/governors/teo.c 481 */;
	struct teo_cpu *cocci_id/* drivers/cpuidle/governors/teo.c 470 */;
	struct cpuidle_device *cocci_id/* drivers/cpuidle/governors/teo.c 468 */;
	struct cpuidle_driver *cocci_id/* drivers/cpuidle/governors/teo.c 467 */;
	int cocci_id/* drivers/cpuidle/governors/teo.c 467 */;
	struct cpuidle_state *cocci_id/* drivers/cpuidle/governors/teo.c 269 */;
	ktime_t cocci_id/* drivers/cpuidle/governors/teo.c 248 */;
	unsigned int cocci_id/* drivers/cpuidle/governors/teo.c 246 */;
	s64 cocci_id/* drivers/cpuidle/governors/teo.c 244 */;
	bool *cocci_id/* drivers/cpuidle/governors/teo.c 241 */;
	u64 cocci_id/* drivers/cpuidle/governors/teo.c 219 */;
	bool cocci_id/* drivers/cpuidle/governors/teo.c 205 */;
	struct teo_cpu {
		u64 time_span_ns;
		u64 sleep_length_ns;
		struct teo_idle_state states[CPUIDLE_STATE_MAX];
		int interval_idx;
		u64 intervals[INTERVALS];
	} cocci_id/* drivers/cpuidle/governors/teo.c 102 */;
	__typeof__(struct teo_cpu) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
}
