cocci_test_suite() {
	struct lpc18xx_pwm_chip {
		struct device *dev;
		struct pwm_chip chip;
		void __iomem *base;
		struct clk *pwm_clk;
		unsigned long clk_rate;
		unsigned int period_ns;
		unsigned int min_period_ns;
		unsigned int max_period_ns;
		unsigned int period_event;
		unsigned long event_map;
		struct mutex res_lock;
		struct mutex period_lock;
	} cocci_id/* drivers/pwm/pwm-lpc18xx-sct.c 91 */;
	struct lpc18xx_pwm_data {
		unsigned int duty_event;
	} cocci_id/* drivers/pwm/pwm-lpc18xx-sct.c 87 */;
	enum lpc18xx_pwm_res_action{LPC18XX_PWM_RES_NONE, LPC18XX_PWM_RES_SET, LPC18XX_PWM_RES_CLEAR, LPC18XX_PWM_RES_TOGGLE,} cocci_id/* drivers/pwm/pwm-lpc18xx-sct.c 80 */;
	struct platform_driver cocci_id/* drivers/pwm/pwm-lpc18xx-sct.c 456 */;
	struct resource *cocci_id/* drivers/pwm/pwm-lpc18xx-sct.c 328 */;
	struct platform_device *cocci_id/* drivers/pwm/pwm-lpc18xx-sct.c 324 */;
	const struct of_device_id cocci_id/* drivers/pwm/pwm-lpc18xx-sct.c 318 */[];
	const struct pwm_ops cocci_id/* drivers/pwm/pwm-lpc18xx-sct.c 308 */;
	unsigned long cocci_id/* drivers/pwm/pwm-lpc18xx-sct.c 283 */;
	unsigned int cocci_id/* drivers/pwm/pwm-lpc18xx-sct.c 238 */;
	enum lpc18xx_pwm_res_action cocci_id/* drivers/pwm/pwm-lpc18xx-sct.c 237 */;
	enum pwm_polarity cocci_id/* drivers/pwm/pwm-lpc18xx-sct.c 228 */;
	struct lpc18xx_pwm_chip *cocci_id/* drivers/pwm/pwm-lpc18xx-sct.c 184 */;
	struct pwm_device *cocci_id/* drivers/pwm/pwm-lpc18xx-sct.c 181 */;
	struct pwm_chip *cocci_id/* drivers/pwm/pwm-lpc18xx-sct.c 181 */;
	int cocci_id/* drivers/pwm/pwm-lpc18xx-sct.c 181 */;
	u32 cocci_id/* drivers/pwm/pwm-lpc18xx-sct.c 174 */;
	u64 cocci_id/* drivers/pwm/pwm-lpc18xx-sct.c 167 */;
	struct lpc18xx_pwm_data *cocci_id/* drivers/pwm/pwm-lpc18xx-sct.c 166 */;
	void cocci_id/* drivers/pwm/pwm-lpc18xx-sct.c 162 */;
	struct lpc18xx_pwm_chip cocci_id/* drivers/pwm/pwm-lpc18xx-sct.c 109 */;
}
