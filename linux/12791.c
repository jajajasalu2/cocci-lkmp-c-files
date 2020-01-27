cocci_test_suite() {
	struct stm_source_data *cocci_id/* drivers/hwtracing/stm/heartbeat.c 44 */;
	struct stm_heartbeat cocci_id/* drivers/hwtracing/stm/heartbeat.c 34 */;
	struct stm_heartbeat *cocci_id/* drivers/hwtracing/stm/heartbeat.c 34 */;
	enum hrtimer_restart cocci_id/* drivers/hwtracing/stm/heartbeat.c 32 */;
	struct hrtimer *cocci_id/* drivers/hwtracing/stm/heartbeat.c 32 */;
	const char cocci_id/* drivers/hwtracing/stm/heartbeat.c 30 */[];
	struct stm_heartbeat {
		struct stm_source_data data;
		struct hrtimer hrtimer;
		unsigned int active;
	} cocci_id/* drivers/hwtracing/stm/heartbeat.c 24 */[STM_HEARTBEAT_MAX];
	int cocci_id/* drivers/hwtracing/stm/heartbeat.c 19 */;
	void cocci_id/* drivers/hwtracing/stm/heartbeat.c 103 */;
}
