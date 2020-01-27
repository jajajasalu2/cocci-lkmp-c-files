cocci_test_suite() {
	struct clk *cocci_id/* drivers/pwm/pwm-omap-dmtimer.c 99 */;
	u32 cocci_id/* drivers/pwm/pwm-omap-dmtimer.c 97 */;
	struct pwm_omap_dmtimer_chip *cocci_id/* drivers/pwm/pwm-omap-dmtimer.c 96 */;
	struct pwm_device *cocci_id/* drivers/pwm/pwm-omap-dmtimer.c 93 */;
	struct pwm_chip *cocci_id/* drivers/pwm/pwm-omap-dmtimer.c 92 */;
	int cocci_id/* drivers/pwm/pwm-omap-dmtimer.c 92 */;
	void cocci_id/* drivers/pwm/pwm-omap-dmtimer.c 82 */;
	struct pwm_omap_dmtimer_chip cocci_id/* drivers/pwm/pwm-omap-dmtimer.c 45 */;
	struct platform_driver cocci_id/* drivers/pwm/pwm-omap-dmtimer.c 371 */;
	const struct of_device_id cocci_id/* drivers/pwm/pwm-omap-dmtimer.c 365 */[];
	struct pwm_omap_dmtimer_chip {
		struct pwm_chip chip;
		struct mutex mutex;
		pwm_omap_dmtimer *dm_timer;
		const struct omap_dm_timer_ops *pdata;
		struct platform_device *dm_timer_pdev;
	} cocci_id/* drivers/pwm/pwm-omap-dmtimer.c 34 */;
	pwm_omap_dmtimer *cocci_id/* drivers/pwm/pwm-omap-dmtimer.c 247 */;
	const struct omap_dm_timer_ops *cocci_id/* drivers/pwm/pwm-omap-dmtimer.c 246 */;
	struct dmtimer_platform_data *cocci_id/* drivers/pwm/pwm-omap-dmtimer.c 245 */;
	struct device_node *cocci_id/* drivers/pwm/pwm-omap-dmtimer.c 241 */;
	struct platform_device *cocci_id/* drivers/pwm/pwm-omap-dmtimer.c 239 */;
	const struct pwm_ops cocci_id/* drivers/pwm/pwm-omap-dmtimer.c 231 */;
	enum pwm_polarity cocci_id/* drivers/pwm/pwm-omap-dmtimer.c 213 */;
	u64 cocci_id/* drivers/pwm/pwm-omap-dmtimer.c 169 */;
	bool cocci_id/* drivers/pwm/pwm-omap-dmtimer.c 101 */;
	unsigned long cocci_id/* drivers/pwm/pwm-omap-dmtimer.c 100 */;
}
