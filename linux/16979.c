cocci_test_suite() {
	struct tsc_param {
		u32 scanning_period;
		u32 debounce_timeout;
		u32 settling_timeout;
		u32 touch_timeout;
		u32 average_data;
		u32 fifo_threshold;
		u32 max_x;
		u32 max_y;
		u32 fuzz_x;
		u32 fuzz_y;
		bool invert_x;
		bool invert_y;
	} cocci_id/* drivers/input/touchscreen/bcm_iproc_tsc.c 99 */;
	struct platform_driver cocci_id/* drivers/input/touchscreen/bcm_iproc_tsc.c 517 */;
	const struct of_device_id cocci_id/* drivers/input/touchscreen/bcm_iproc_tsc.c 511 */[];
	struct input_dev *cocci_id/* drivers/input/touchscreen/bcm_iproc_tsc.c 426 */;
	u32 cocci_id/* drivers/input/touchscreen/bcm_iproc_tsc.c 346 */;
	struct device_node *cocci_id/* drivers/input/touchscreen/bcm_iproc_tsc.c 345 */;
	struct iproc_ts_priv *cocci_id/* drivers/input/touchscreen/bcm_iproc_tsc.c 343 */;
	struct device *cocci_id/* drivers/input/touchscreen/bcm_iproc_tsc.c 343 */;
	int cocci_id/* drivers/input/touchscreen/bcm_iproc_tsc.c 343 */;
	void cocci_id/* drivers/input/touchscreen/bcm_iproc_tsc.c 323 */;
	bool cocci_id/* drivers/input/touchscreen/bcm_iproc_tsc.c 203 */;
	u16 cocci_id/* drivers/input/touchscreen/bcm_iproc_tsc.c 200 */;
	struct platform_device *cocci_id/* drivers/input/touchscreen/bcm_iproc_tsc.c 196 */;
	irqreturn_t cocci_id/* drivers/input/touchscreen/bcm_iproc_tsc.c 194 */;
	void *cocci_id/* drivers/input/touchscreen/bcm_iproc_tsc.c 194 */;
	const struct tsc_param cocci_id/* drivers/input/touchscreen/bcm_iproc_tsc.c 161 */;
	struct iproc_ts_priv {
		struct platform_device *pdev;
		struct input_dev *idev;
		struct regmap *regmap;
		struct clk *tsc_clk;
		int pen_status;
		struct tsc_param cfg_params;
	} cocci_id/* drivers/input/touchscreen/bcm_iproc_tsc.c 146 */;
}
