cocci_test_suite() {
	void cocci_id/* drivers/pwm/pwm-sprd.c 68 */;
	const char *constcocci_id/* drivers/pwm/pwm-sprd.c 46 */[];
	struct sprd_pwm_chip {
		void __iomem *base;
		struct device *dev;
		struct pwm_chip chip;
		int num_pwms;
		struct sprd_pwm_chn chn[SPRD_PWM_CHN_NUM];
	} cocci_id/* drivers/pwm/pwm-sprd.c 34 */;
	struct platform_driver cocci_id/* drivers/pwm/pwm-sprd.c 297 */;
	const struct of_device_id cocci_id/* drivers/pwm/pwm-sprd.c 291 */[];
	struct sprd_pwm_chn {
		struct clk_bulk_data clks[SPRD_PWM_CHN_CLKS_NUM];
		u32 clk_rate;
	} cocci_id/* drivers/pwm/pwm-sprd.c 29 */;
	struct platform_device *cocci_id/* drivers/pwm/pwm-sprd.c 252 */;
	struct clk *cocci_id/* drivers/pwm/pwm-sprd.c 214 */;
	const struct pwm_ops cocci_id/* drivers/pwm/pwm-sprd.c 206 */;
	struct pwm_state *cocci_id/* drivers/pwm/pwm-sprd.c 164 */;
	struct sprd_pwm_chn *cocci_id/* drivers/pwm/pwm-sprd.c 163 */;
	struct sprd_pwm_chip cocci_id/* drivers/pwm/pwm-sprd.c 162 */;
	struct sprd_pwm_chip *cocci_id/* drivers/pwm/pwm-sprd.c 161 */;
	const struct pwm_state *cocci_id/* drivers/pwm/pwm-sprd.c 159 */;
	struct pwm_device *cocci_id/* drivers/pwm/pwm-sprd.c 158 */;
	struct pwm_chip *cocci_id/* drivers/pwm/pwm-sprd.c 158 */;
	int cocci_id/* drivers/pwm/pwm-sprd.c 158 */;
	u64 cocci_id/* drivers/pwm/pwm-sprd.c 123 */;
	u32 cocci_id/* drivers/pwm/pwm-sprd.c 122 */;
}
