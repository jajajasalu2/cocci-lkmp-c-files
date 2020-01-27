cocci_test_suite() {
	struct ehrpwm_context {
		u16 tbctl;
		u16 tbprd;
		u16 cmpa;
		u16 cmpb;
		u16 aqctla;
		u16 aqctlb;
		u16 aqsfrc;
		u16 aqcsfrc;
	} cocci_id/* drivers/pwm/pwm-tiehrpwm.c 96 */;
	struct platform_driver cocci_id/* drivers/pwm/pwm-tiehrpwm.c 577 */;
	struct device *cocci_id/* drivers/pwm/pwm-tiehrpwm.c 553 */;
	struct clk *cocci_id/* drivers/pwm/pwm-tiehrpwm.c 425 */;
	struct resource *cocci_id/* drivers/pwm/pwm-tiehrpwm.c 424 */;
	struct device_node *cocci_id/* drivers/pwm/pwm-tiehrpwm.c 422 */;
	struct platform_device *cocci_id/* drivers/pwm/pwm-tiehrpwm.c 420 */;
	const struct of_device_id cocci_id/* drivers/pwm/pwm-tiehrpwm.c 413 */[];
	const struct pwm_ops cocci_id/* drivers/pwm/pwm-tiehrpwm.c 404 */;
	enum pwm_polarity cocci_id/* drivers/pwm/pwm-tiehrpwm.c 309 */;
	unsigned long cocci_id/* drivers/pwm/pwm-tiehrpwm.c 233 */;
	unsigned long long cocci_id/* drivers/pwm/pwm-tiehrpwm.c 225 */;
	u32 cocci_id/* drivers/pwm/pwm-tiehrpwm.c 222 */;
	struct pwm_device *cocci_id/* drivers/pwm/pwm-tiehrpwm.c 218 */;
	struct pwm_chip *cocci_id/* drivers/pwm/pwm-tiehrpwm.c 218 */;
	unsigned int cocci_id/* drivers/pwm/pwm-tiehrpwm.c 184 */;
	u16 cocci_id/* drivers/pwm/pwm-tiehrpwm.c 183 */;
	struct ehrpwm_pwm_chip *cocci_id/* drivers/pwm/pwm-tiehrpwm.c 181 */;
	int cocci_id/* drivers/pwm/pwm-tiehrpwm.c 181 */;
	void cocci_id/* drivers/pwm/pwm-tiehrpwm.c 181 */;
	u16 *cocci_id/* drivers/pwm/pwm-tiehrpwm.c 150 */;
	unsigned short cocci_id/* drivers/pwm/pwm-tiehrpwm.c 136 */;
	void __iomem *cocci_id/* drivers/pwm/pwm-tiehrpwm.c 133 */;
	struct ehrpwm_pwm_chip cocci_id/* drivers/pwm/pwm-tiehrpwm.c 119 */;
	struct ehrpwm_pwm_chip {
		struct pwm_chip chip;
		unsigned long clk_rate;
		void __iomem *mmio_base;
		unsigned long period_cycles[NUM_PWM_CHANNEL];
		enum pwm_polarity polarity[NUM_PWM_CHANNEL];
		struct clk *tbclk;
		struct ehrpwm_context ctx;
	} cocci_id/* drivers/pwm/pwm-tiehrpwm.c 107 */;
}
