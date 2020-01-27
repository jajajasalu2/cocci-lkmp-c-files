cocci_test_suite() {
	struct imx6ul_tsc {
		struct device *dev;
		struct input_dev *input;
		void __iomem *tsc_regs;
		void __iomem *adc_regs;
		struct clk *tsc_clk;
		struct clk *adc_clk;
		struct gpio_desc *xnur_gpio;
		u32 measure_delay_time;
		u32 pre_charge_time;
		bool average_enable;
		u32 average_select;
		struct completion completion;
	} cocci_id/* drivers/input/touchscreen/imx6ul_tsc.c 82 */;
	struct platform_driver cocci_id/* drivers/input/touchscreen/imx6ul_tsc.c 561 */;
	const struct of_device_id cocci_id/* drivers/input/touchscreen/imx6ul_tsc.c 555 */[];
	struct device *cocci_id/* drivers/input/touchscreen/imx6ul_tsc.c 524 */;
	int __maybe_unused cocci_id/* drivers/input/touchscreen/imx6ul_tsc.c 524 */;
	struct device_node *cocci_id/* drivers/input/touchscreen/imx6ul_tsc.c 364 */;
	struct platform_device *cocci_id/* drivers/input/touchscreen/imx6ul_tsc.c 362 */;
	struct input_dev *cocci_id/* drivers/input/touchscreen/imx6ul_tsc.c 352 */;
	u32 cocci_id/* drivers/input/touchscreen/imx6ul_tsc.c 306 */;
	struct imx6ul_tsc *cocci_id/* drivers/input/touchscreen/imx6ul_tsc.c 305 */;
	irqreturn_t cocci_id/* drivers/input/touchscreen/imx6ul_tsc.c 303 */;
	void *cocci_id/* drivers/input/touchscreen/imx6ul_tsc.c 303 */;
	int cocci_id/* drivers/input/touchscreen/imx6ul_tsc.c 303 */;
	bool cocci_id/* drivers/input/touchscreen/imx6ul_tsc.c 241 */;
	void cocci_id/* drivers/input/touchscreen/imx6ul_tsc.c 163 */;
	unsigned long cocci_id/* drivers/input/touchscreen/imx6ul_tsc.c 109 */;
}
