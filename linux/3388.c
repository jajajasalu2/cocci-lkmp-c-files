cocci_test_suite() {
	unsigned int cocci_id/* drivers/pwm/pwm-img.c 98 */;
	struct img_pwm_chip *cocci_id/* drivers/pwm/pwm-img.c 97 */;
	unsigned long cocci_id/* drivers/pwm/pwm-img.c 96 */;
	u32 cocci_id/* drivers/pwm/pwm-img.c 95 */;
	struct pwm_device *cocci_id/* drivers/pwm/pwm-img.c 92 */;
	struct pwm_chip *cocci_id/* drivers/pwm/pwm-img.c 92 */;
	int cocci_id/* drivers/pwm/pwm-img.c 92 */;
	struct img_pwm_chip cocci_id/* drivers/pwm/pwm-img.c 77 */;
	struct img_pwm_chip {
		struct device *dev;
		struct pwm_chip chip;
		struct clk *pwm_clk;
		struct clk *sys_clk;
		void __iomem *base;
		struct regmap *periph_regs;
		int max_period_ns;
		int min_period_ns;
		const struct img_pwm_soc_data *data;
		u32 suspend_ctrl_cfg;
		u32 suspend_ch_cfg[IMG_PWM_NPWM];
	} cocci_id/* drivers/pwm/pwm-img.c 61 */;
	struct img_pwm_soc_data {
		u32 max_timebase;
	} cocci_id/* drivers/pwm/pwm-img.c 57 */;
	struct platform_driver cocci_id/* drivers/pwm/pwm-img.c 412 */;
	struct device *cocci_id/* drivers/pwm/pwm-img.c 374 */;
	const struct of_device_id *cocci_id/* drivers/pwm/pwm-img.c 243 */;
	struct resource *cocci_id/* drivers/pwm/pwm-img.c 241 */;
	u64 cocci_id/* drivers/pwm/pwm-img.c 239 */;
	struct platform_device *cocci_id/* drivers/pwm/pwm-img.c 236 */;
	const struct of_device_id cocci_id/* drivers/pwm/pwm-img.c 196 */[];
	const struct img_pwm_soc_data cocci_id/* drivers/pwm/pwm-img.c 192 */;
	const struct pwm_ops cocci_id/* drivers/pwm/pwm-img.c 185 */;
	void cocci_id/* drivers/pwm/pwm-img.c 172 */;
}
