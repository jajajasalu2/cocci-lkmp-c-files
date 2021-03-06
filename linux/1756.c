cocci_test_suite() {
	struct stm32_timer_trigger_cfg {
		const void **valids_table[MAX_VALIDS];
		const unsigned int num_valids_table;
	} cocci_id/* drivers/iio/trigger/stm32-timer-trigger.c 88 */;
	struct platform_driver cocci_id/* drivers/iio/trigger/stm32-timer-trigger.c 787 */;
	struct stm32_timer_trigger {
		struct device *dev;
		struct regmap *regmap;
		struct clk *clk;
		u32 max_arr;
		const void *triggers;
		const void *valids;
		bool has_trgo2;
	} cocci_id/* drivers/iio/trigger/stm32-timer-trigger.c 78 */;
	void *cocci_id/* drivers/iio/trigger/stm32-timer-trigger.c 778 */;
	const struct of_device_id cocci_id/* drivers/iio/trigger/stm32-timer-trigger.c 775 */[];
	const struct stm32_timer_trigger_cfg cocci_id/* drivers/iio/trigger/stm32-timer-trigger.c 765 */;
	const struct stm32_timer_trigger_cfg *cocci_id/* drivers/iio/trigger/stm32-timer-trigger.c 725 */;
	struct stm32_timers *cocci_id/* drivers/iio/trigger/stm32-timer-trigger.c 724 */;
	struct platform_device *cocci_id/* drivers/iio/trigger/stm32-timer-trigger.c 720 */;
	void cocci_id/* drivers/iio/trigger/stm32-timer-trigger.c 706 */;
	bool cocci_id/* drivers/iio/trigger/stm32-timer-trigger.c 700 */;
	struct iio_trigger *cocci_id/* drivers/iio/trigger/stm32-timer-trigger.c 700 */;
	struct stm32_timer_trigger cocci_id/* drivers/iio/trigger/stm32-timer-trigger.c 674 */;
	struct device *cocci_id/* drivers/iio/trigger/stm32-timer-trigger.c 668 */;
	const struct iio_chan_spec cocci_id/* drivers/iio/trigger/stm32-timer-trigger.c 658 */;
	const struct iio_chan_spec_ext_info cocci_id/* drivers/iio/trigger/stm32-timer-trigger.c 644 */[];
	int cocci_id/* drivers/iio/trigger/stm32-timer-trigger.c 631 */;
	unsigned int cocci_id/* drivers/iio/trigger/stm32-timer-trigger.c 630 */;
	const char *cocci_id/* drivers/iio/trigger/stm32-timer-trigger.c 627 */;
	size_t cocci_id/* drivers/iio/trigger/stm32-timer-trigger.c 627 */;
	u32 cocci_id/* drivers/iio/trigger/stm32-timer-trigger.c 617 */;
	struct stm32_timer_trigger *cocci_id/* drivers/iio/trigger/stm32-timer-trigger.c 616 */;
	char *cocci_id/* drivers/iio/trigger/stm32-timer-trigger.c 614 */;
	const struct iio_chan_spec *cocci_id/* drivers/iio/trigger/stm32-timer-trigger.c 613 */;
	uintptr_t cocci_id/* drivers/iio/trigger/stm32-timer-trigger.c 612 */;
	struct iio_dev *cocci_id/* drivers/iio/trigger/stm32-timer-trigger.c 611 */;
	ssize_t cocci_id/* drivers/iio/trigger/stm32-timer-trigger.c 611 */;
	const struct iio_enum cocci_id/* drivers/iio/trigger/stm32-timer-trigger.c 604 */;
	const void *cocci_id/* drivers/iio/trigger/stm32-timer-trigger.c 58 */[][MAX_VALIDS];
	const char *const cocci_id/* drivers/iio/trigger/stm32-timer-trigger.c 533 */[];
	const struct iio_info cocci_id/* drivers/iio/trigger/stm32-timer-trigger.c 494 */;
	const char *const *cocci_id/* drivers/iio/trigger/stm32-timer-trigger.c 474 */;
	int *cocci_id/* drivers/iio/trigger/stm32-timer-trigger.c 402 */;
	long cocci_id/* drivers/iio/trigger/stm32-timer-trigger.c 402 */;
	const struct iio_trigger_ops cocci_id/* drivers/iio/trigger/stm32-timer-trigger.c 357 */;
	const struct attribute_group *cocci_id/* drivers/iio/trigger/stm32-timer-trigger.c 352 */[];
	const struct attribute_group cocci_id/* drivers/iio/trigger/stm32-timer-trigger.c 348 */;
	struct attribute *cocci_id/* drivers/iio/trigger/stm32-timer-trigger.c 341 */[];
	char *cocci_id/* drivers/iio/trigger/stm32-timer-trigger.c 238 */[];
	const void *cocci_id/* drivers/iio/trigger/stm32-timer-trigger.c 22 */[][MAX_TRIGGERS];
	struct device_attribute *cocci_id/* drivers/iio/trigger/stm32-timer-trigger.c 211 */;
	unsigned long long cocci_id/* drivers/iio/trigger/stm32-timer-trigger.c 107 */;
}
