cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/pwm/pwm-stm32.c 707 */;
	const struct of_device_id cocci_id/* drivers/pwm/pwm-stm32.c 701 */[];
	int __maybe_unused cocci_id/* drivers/pwm/pwm-stm32.c 686 */;
	struct stm32_timers *cocci_id/* drivers/pwm/pwm-stm32.c 614 */;
	struct device_node *cocci_id/* drivers/pwm/pwm-stm32.c 613 */;
	struct device *cocci_id/* drivers/pwm/pwm-stm32.c 612 */;
	struct platform_device *cocci_id/* drivers/pwm/pwm-stm32.c 610 */;
	void cocci_id/* drivers/pwm/pwm-stm32.c 565 */;
	u32 *cocci_id/* drivers/pwm/pwm-stm32.c 551 */;
	struct stm32_breakinput cocci_id/* drivers/pwm/pwm-stm32.c 536 */;
	unsigned int cocci_id/* drivers/pwm/pwm-stm32.c 517 */;
	const struct stm32_breakinput *cocci_id/* drivers/pwm/pwm-stm32.c 494 */;
	const struct pwm_ops cocci_id/* drivers/pwm/pwm-stm32.c 487 */;
	u32 cocci_id/* drivers/pwm/pwm-stm32.c 46 */;
	struct stm32_pwm *cocci_id/* drivers/pwm/pwm-stm32.c 46 */;
	bool cocci_id/* drivers/pwm/pwm-stm32.c 448 */;
	const struct pwm_state *cocci_id/* drivers/pwm/pwm-stm32.c 446 */;
	struct pwm_device *cocci_id/* drivers/pwm/pwm-stm32.c 445 */;
	struct pwm_chip *cocci_id/* drivers/pwm/pwm-stm32.c 445 */;
	int cocci_id/* drivers/pwm/pwm-stm32.c 445 */;
	struct stm32_pwm cocci_id/* drivers/pwm/pwm-stm32.c 43 */;
	enum pwm_polarity cocci_id/* drivers/pwm/pwm-stm32.c 388 */;
	struct stm32_pwm {
		struct pwm_chip chip;
		struct mutex lock;
		struct clk *clk;
		struct regmap *regmap;
		u32 max_arr;
		bool have_complementary_output;
		struct stm32_breakinput breakinputs[MAX_BREAKINPUT];
		unsigned int num_breakinputs;
		u32 capture[4]____cacheline_aligned;
	} cocci_id/* drivers/pwm/pwm-stm32.c 29 */;
	struct stm32_breakinput {
		u32 index;
		u32 level;
		u32 filter;
	} cocci_id/* drivers/pwm/pwm-stm32.c 23 */;
	unsigned long long cocci_id/* drivers/pwm/pwm-stm32.c 173 */;
	struct pwm_capture *cocci_id/* drivers/pwm/pwm-stm32.c 170 */;
	unsigned long cocci_id/* drivers/pwm/pwm-stm32.c 170 */;
	enum stm32_timers_dmas cocci_id/* drivers/pwm/pwm-stm32.c 113 */;
}
