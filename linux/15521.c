cocci_test_suite() {
	const unsigned long cocci_id/* drivers/counter/stm32-timer-cnt.c 64 */;
	unsigned long *cocci_id/* drivers/counter/stm32-timer-cnt.c 51 */;
	enum counter_count_function cocci_id/* drivers/counter/stm32-timer-cnt.c 44 */[];
	struct platform_driver cocci_id/* drivers/counter/stm32-timer-cnt.c 371 */;
	enum stm32_count_function{STM32_COUNT_SLAVE_MODE_DISABLED=-1, STM32_COUNT_ENCODER_MODE_1, STM32_COUNT_ENCODER_MODE_2, STM32_COUNT_ENCODER_MODE_3,} cocci_id/* drivers/counter/stm32-timer-cnt.c 37 */;
	const struct of_device_id cocci_id/* drivers/counter/stm32-timer-cnt.c 365 */[];
	struct stm32_timer_cnt *cocci_id/* drivers/counter/stm32-timer-cnt.c 339 */;
	struct device *cocci_id/* drivers/counter/stm32-timer-cnt.c 338 */;
	struct stm32_timers *cocci_id/* drivers/counter/stm32-timer-cnt.c 337 */;
	struct platform_device *cocci_id/* drivers/counter/stm32-timer-cnt.c 335 */;
	struct counter_count cocci_id/* drivers/counter/stm32-timer-cnt.c 324 */;
	struct counter_synapse cocci_id/* drivers/counter/stm32-timer-cnt.c 311 */[];
	struct counter_signal cocci_id/* drivers/counter/stm32-timer-cnt.c 300 */[];
	const struct counter_ops cocci_id/* drivers/counter/stm32-timer-cnt.c 292 */;
	size_t cocci_id/* drivers/counter/stm32-timer-cnt.c 262 */;
	size_t *cocci_id/* drivers/counter/stm32-timer-cnt.c 260 */;
	struct counter_synapse *cocci_id/* drivers/counter/stm32-timer-cnt.c 259 */;
	struct counter_count *cocci_id/* drivers/counter/stm32-timer-cnt.c 258 */;
	struct counter_device *cocci_id/* drivers/counter/stm32-timer-cnt.c 257 */;
	int cocci_id/* drivers/counter/stm32-timer-cnt.c 257 */;
	enum counter_synapse_action cocci_id/* drivers/counter/stm32-timer-cnt.c 252 */[];
	enum stm32_synapse_action{STM32_SYNAPSE_ACTION_NONE, STM32_SYNAPSE_ACTION_BOTH_EDGES,} cocci_id/* drivers/counter/stm32-timer-cnt.c 247 */;
	const struct counter_count_ext cocci_id/* drivers/counter/stm32-timer-cnt.c 230 */[];
	struct stm32_timer_cnt {
		struct counter_device counter;
		struct regmap *regmap;
		struct clk *clk;
		u32 ceiling;
	} cocci_id/* drivers/counter/stm32-timer-cnt.c 23 */;
	bool cocci_id/* drivers/counter/stm32-timer-cnt.c 207 */;
	unsigned int cocci_id/* drivers/counter/stm32-timer-cnt.c 172 */;
	const char *cocci_id/* drivers/counter/stm32-timer-cnt.c 169 */;
	u32 cocci_id/* drivers/counter/stm32-timer-cnt.c 159 */;
	struct stm32_timer_cnt *constcocci_id/* drivers/counter/stm32-timer-cnt.c 158 */;
	char *cocci_id/* drivers/counter/stm32-timer-cnt.c 156 */;
	void *cocci_id/* drivers/counter/stm32-timer-cnt.c 156 */;
	ssize_t cocci_id/* drivers/counter/stm32-timer-cnt.c 154 */;
}
