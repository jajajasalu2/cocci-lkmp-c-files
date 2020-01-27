cocci_test_suite() {
	struct sun4i_pwm_chip cocci_id/* drivers/pwm/pwm-sun4i.c 90 */;
	struct sun4i_pwm_chip {
		struct pwm_chip chip;
		struct clk *clk;
		void __iomem *base;
		spinlock_t ctrl_lock;
		const struct sun4i_pwm_data *data;
		unsigned long next_period[2];
		bool needs_delay[2];
	} cocci_id/* drivers/pwm/pwm-sun4i.c 78 */;
	struct sun4i_pwm_data {
		bool has_prescaler_bypass;
		unsigned int npwm;
	} cocci_id/* drivers/pwm/pwm-sun4i.c 73 */;
	const u32 cocci_id/* drivers/pwm/pwm-sun4i.c 54 */[];
	struct platform_driver cocci_id/* drivers/pwm/pwm-sun4i.c 394 */;
	struct resource *cocci_id/* drivers/pwm/pwm-sun4i.c 347 */;
	struct platform_device *cocci_id/* drivers/pwm/pwm-sun4i.c 344 */;
	const struct of_device_id cocci_id/* drivers/pwm/pwm-sun4i.c 322 */[];
	const struct sun4i_pwm_data cocci_id/* drivers/pwm/pwm-sun4i.c 312 */;
	const struct pwm_ops cocci_id/* drivers/pwm/pwm-sun4i.c 301 */;
	unsigned long cocci_id/* drivers/pwm/pwm-sun4i.c 205 */;
	unsigned int cocci_id/* drivers/pwm/pwm-sun4i.c 204 */;
	u32 cocci_id/* drivers/pwm/pwm-sun4i.c 202 */;
	struct pwm_state cocci_id/* drivers/pwm/pwm-sun4i.c 201 */;
	struct sun4i_pwm_chip *cocci_id/* drivers/pwm/pwm-sun4i.c 200 */;
	const struct pwm_state *cocci_id/* drivers/pwm/pwm-sun4i.c 198 */;
	struct pwm_device *cocci_id/* drivers/pwm/pwm-sun4i.c 197 */;
	struct pwm_chip *cocci_id/* drivers/pwm/pwm-sun4i.c 197 */;
	int cocci_id/* drivers/pwm/pwm-sun4i.c 197 */;
	u64 cocci_id/* drivers/pwm/pwm-sun4i.c 151 */;
	u32 *cocci_id/* drivers/pwm/pwm-sun4i.c 149 */;
	unsigned int *cocci_id/* drivers/pwm/pwm-sun4i.c 149 */;
	struct pwm_state *cocci_id/* drivers/pwm/pwm-sun4i.c 107 */;
	void cocci_id/* drivers/pwm/pwm-sun4i.c 105 */;
}
