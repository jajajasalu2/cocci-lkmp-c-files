cocci_test_suite() {
	int __init cocci_id/* drivers/cpuidle/governors/menu.c 569 */;
	void cocci_id/* drivers/cpuidle/governors/menu.c 569 */;
	struct cpuidle_governor cocci_id/* drivers/cpuidle/governors/menu.c 558 */;
	struct menu_device cocci_id/* drivers/cpuidle/governors/menu.c 546 */;
	struct cpuidle_device *cocci_id/* drivers/cpuidle/governors/menu.c 541 */;
	struct cpuidle_driver *cocci_id/* drivers/cpuidle/governors/menu.c 540 */;
	struct cpuidle_state *cocci_id/* drivers/cpuidle/governors/menu.c 339 */;
	ktime_t cocci_id/* drivers/cpuidle/governors/menu.c 274 */;
	unsigned long cocci_id/* drivers/cpuidle/governors/menu.c 273 */;
	s64 cocci_id/* drivers/cpuidle/governors/menu.c 269 */;
	bool *cocci_id/* drivers/cpuidle/governors/menu.c 266 */;
	u64 cocci_id/* drivers/cpuidle/governors/menu.c 237 */;
	int64_t cocci_id/* drivers/cpuidle/governors/menu.c 215 */;
	uint64_t cocci_id/* drivers/cpuidle/governors/menu.c 174 */;
	int cocci_id/* drivers/cpuidle/governors/menu.c 172 */;
	struct menu_device *cocci_id/* drivers/cpuidle/governors/menu.c 169 */;
	unsigned int cocci_id/* drivers/cpuidle/governors/menu.c 169 */;
	void cocci_id/* drivers/cpuidle/governors/menu.c 161 */(struct cpuidle_driver *drv,
								struct cpuidle_device *dev);
	struct menu_device {
		int needs_update;
		int tick_wakeup;
		u64 next_timer_ns;
		unsigned int bucket;
		unsigned int correction_factor[BUCKETS];
		unsigned int intervals[INTERVALS];
		int interval_ptr;
	} cocci_id/* drivers/cpuidle/governors/menu.c 109 */;
	__typeof__(struct menu_device) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
}
