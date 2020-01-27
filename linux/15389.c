cocci_test_suite() {
	void cocci_id/* drivers/watchdog/stm32_iwdg.c 82 */;
	u32 cocci_id/* drivers/watchdog/stm32_iwdg.c 77 */;
	void __iomem *cocci_id/* drivers/watchdog/stm32_iwdg.c 77 */;
	struct stm32_iwdg {
		struct watchdog_device wdd;
		const struct stm32_iwdg_data *data;
		void __iomem *regs;
		struct clk *clk_lsi;
		struct clk *clk_pclk;
		unsigned int rate;
	} cocci_id/* drivers/watchdog/stm32_iwdg.c 68 */;
	const struct stm32_iwdg_data cocci_id/* drivers/watchdog/stm32_iwdg.c 58 */;
	struct stm32_iwdg_data {
		bool has_pclk;
		u32 max_prescaler;
	} cocci_id/* drivers/watchdog/stm32_iwdg.c 53 */;
	struct platform_driver cocci_id/* drivers/watchdog/stm32_iwdg.c 274 */;
	const struct of_device_id cocci_id/* drivers/watchdog/stm32_iwdg.c 219 */[];
	const struct watchdog_ops cocci_id/* drivers/watchdog/stm32_iwdg.c 212 */;
	const struct watchdog_info cocci_id/* drivers/watchdog/stm32_iwdg.c 205 */;
	struct device *cocci_id/* drivers/watchdog/stm32_iwdg.c 161 */;
	struct stm32_iwdg *cocci_id/* drivers/watchdog/stm32_iwdg.c 159 */;
	struct platform_device *cocci_id/* drivers/watchdog/stm32_iwdg.c 158 */;
	int cocci_id/* drivers/watchdog/stm32_iwdg.c 158 */;
	void *cocci_id/* drivers/watchdog/stm32_iwdg.c 153 */;
	unsigned int cocci_id/* drivers/watchdog/stm32_iwdg.c 141 */;
	struct watchdog_device *cocci_id/* drivers/watchdog/stm32_iwdg.c 128 */;
}
