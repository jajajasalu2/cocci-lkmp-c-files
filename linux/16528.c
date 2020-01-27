cocci_test_suite() {
	s64 cocci_id/* drivers/cpuidle/governors/ladder.c 73 */;
	bool *cocci_id/* drivers/cpuidle/governors/ladder.c 67 */;
	int cocci_id/* drivers/cpuidle/governors/ladder.c 53 */;
	struct ladder_device *cocci_id/* drivers/cpuidle/governors/ladder.c 52 */;
	struct cpuidle_device *cocci_id/* drivers/cpuidle/governors/ladder.c 51 */;
	struct ladder_device {
		struct ladder_device_state states[CPUIDLE_STATE_MAX];
	} cocci_id/* drivers/cpuidle/governors/ladder.c 39 */;
	struct ladder_device_state {
		struct {
			u32 promotion_count;
			u32 demotion_count;
			u64 promotion_time_ns;
			u64 demotion_time_ns;
		} threshold;
		struct {
			int promotion_count;
			int demotion_count;
		} stats;
	} cocci_id/* drivers/cpuidle/governors/ladder.c 26 */;
	int __init cocci_id/* drivers/cpuidle/governors/ladder.c 184 */;
	void cocci_id/* drivers/cpuidle/governors/ladder.c 184 */;
	struct cpuidle_governor cocci_id/* drivers/cpuidle/governors/ladder.c 173 */;
	struct cpuidle_state *cocci_id/* drivers/cpuidle/governors/ladder.c 139 */;
	struct ladder_device_state *cocci_id/* drivers/cpuidle/governors/ladder.c 138 */;
	struct cpuidle_driver *cocci_id/* drivers/cpuidle/governors/ladder.c 132 */;
	__typeof__(struct ladder_device) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
}
