cocci_test_suite() {
	const struct mmc_pwrseq_ops cocci_id/* drivers/mmc/core/pwrseq_simple.c 99 */;
	struct mmc_pwrseq_simple *cocci_id/* drivers/mmc/core/pwrseq_simple.c 75 */;
	struct mmc_host *cocci_id/* drivers/mmc/core/pwrseq_simple.c 73 */;
	void cocci_id/* drivers/mmc/core/pwrseq_simple.c 73 */;
	unsigned long *cocci_id/* drivers/mmc/core/pwrseq_simple.c 42 */;
	struct gpio_descs *cocci_id/* drivers/mmc/core/pwrseq_simple.c 39 */;
	struct mmc_pwrseq_simple cocci_id/* drivers/mmc/core/pwrseq_simple.c 34 */;
	struct mmc_pwrseq_simple {
		struct mmc_pwrseq pwrseq;
		bool clk_enabled;
		u32 post_power_on_delay_ms;
		u32 power_off_delay_us;
		struct clk *ext_clk;
		struct gpio_descs *reset_gpios;
	} cocci_id/* drivers/mmc/core/pwrseq_simple.c 25 */;
	struct platform_driver cocci_id/* drivers/mmc/core/pwrseq_simple.c 154 */;
	struct device *cocci_id/* drivers/mmc/core/pwrseq_simple.c 114 */;
	struct platform_device *cocci_id/* drivers/mmc/core/pwrseq_simple.c 111 */;
	int cocci_id/* drivers/mmc/core/pwrseq_simple.c 111 */;
	const struct of_device_id cocci_id/* drivers/mmc/core/pwrseq_simple.c 105 */[];
}
