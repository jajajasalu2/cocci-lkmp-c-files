cocci_test_suite() {
	struct samsung_pwm_chip {
		struct pwm_chip chip;
		struct samsung_pwm_variant variant;
		u8 inverter_mask;
		u8 disabled_mask;
		void __iomem *base;
		struct clk *base_clk;
		struct clk *tclk0;
		struct clk *tclk1;
	} cocci_id/* drivers/pwm/pwm-samsung.c 81 */;
	struct samsung_pwm_channel {
		u32 period_ns;
		u32 duty_ns;
		u32 tin_ns;
	} cocci_id/* drivers/pwm/pwm-samsung.c 64 */;
	struct platform_driver cocci_id/* drivers/pwm/pwm-samsung.c 637 */;
	struct resource *cocci_id/* drivers/pwm/pwm-samsung.c 513 */;
	struct device *cocci_id/* drivers/pwm/pwm-samsung.c 511 */;
	struct platform_device *cocci_id/* drivers/pwm/pwm-samsung.c 509 */;
	const __be32 *cocci_id/* drivers/pwm/pwm-samsung.c 481 */;
	struct property *cocci_id/* drivers/pwm/pwm-samsung.c 480 */;
	const struct of_device_id *cocci_id/* drivers/pwm/pwm-samsung.c 479 */;
	struct device_node *cocci_id/* drivers/pwm/pwm-samsung.c 478 */;
	const struct of_device_id cocci_id/* drivers/pwm/pwm-samsung.c 466 */[];
	const struct samsung_pwm_variant cocci_id/* drivers/pwm/pwm-samsung.c 438 */;
	const struct pwm_ops cocci_id/* drivers/pwm/pwm-samsung.c 427 */;
	enum pwm_polarity cocci_id/* drivers/pwm/pwm-samsung.c 416 */;
	unsigned long cocci_id/* drivers/pwm/pwm-samsung.c 326 */;
	u32 cocci_id/* drivers/pwm/pwm-samsung.c 308 */;
	struct samsung_pwm_channel *cocci_id/* drivers/pwm/pwm-samsung.c 307 */;
	struct samsung_pwm_chip *cocci_id/* drivers/pwm/pwm-samsung.c 306 */;
	bool cocci_id/* drivers/pwm/pwm-samsung.c 304 */;
	struct pwm_device *cocci_id/* drivers/pwm/pwm-samsung.c 303 */;
	struct pwm_chip *cocci_id/* drivers/pwm/pwm-samsung.c 303 */;
	int cocci_id/* drivers/pwm/pwm-samsung.c 303 */;
	void cocci_id/* drivers/pwm/pwm-samsung.c 266 */;
	u8 cocci_id/* drivers/pwm/pwm-samsung.c 174 */;
	struct clk *cocci_id/* drivers/pwm/pwm-samsung.c 173 */;
	struct samsung_pwm_variant *cocci_id/* drivers/pwm/pwm-samsung.c 171 */;
	unsigned int cocci_id/* drivers/pwm/pwm-samsung.c 169 */;
	struct samsung_pwm_chip cocci_id/* drivers/pwm/pwm-samsung.c 111 */;
}
