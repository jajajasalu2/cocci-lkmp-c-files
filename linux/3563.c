cocci_test_suite() {
	struct device *cocci_id/* drivers/mmc/core/pwrseq_emmc.c 62 */;
	struct mmc_pwrseq_emmc *cocci_id/* drivers/mmc/core/pwrseq_emmc.c 61 */;
	struct platform_device *cocci_id/* drivers/mmc/core/pwrseq_emmc.c 59 */;
	int cocci_id/* drivers/mmc/core/pwrseq_emmc.c 59 */;
	const struct mmc_pwrseq_ops cocci_id/* drivers/mmc/core/pwrseq_emmc.c 55 */;
	struct mmc_pwrseq_emmc cocci_id/* drivers/mmc/core/pwrseq_emmc.c 46 */;
	void *cocci_id/* drivers/mmc/core/pwrseq_emmc.c 43 */;
	unsigned long cocci_id/* drivers/mmc/core/pwrseq_emmc.c 43 */;
	struct notifier_block *cocci_id/* drivers/mmc/core/pwrseq_emmc.c 42 */;
	struct mmc_host *cocci_id/* drivers/mmc/core/pwrseq_emmc.c 32 */;
	void cocci_id/* drivers/mmc/core/pwrseq_emmc.c 32 */;
	struct mmc_pwrseq_emmc {
		struct mmc_pwrseq pwrseq;
		struct notifier_block reset_nb;
		struct gpio_desc *reset_gpio;
	} cocci_id/* drivers/mmc/core/pwrseq_emmc.c 24 */;
	struct platform_driver cocci_id/* drivers/mmc/core/pwrseq_emmc.c 110 */;
	const struct of_device_id cocci_id/* drivers/mmc/core/pwrseq_emmc.c 103 */[];
}
