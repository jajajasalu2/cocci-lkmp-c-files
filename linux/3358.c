cocci_test_suite() {
	u16 cocci_id/* drivers/pwm/pwm-tiecap.c 56 */;
	unsigned long long cocci_id/* drivers/pwm/pwm-tiecap.c 55 */;
	u32 cocci_id/* drivers/pwm/pwm-tiecap.c 54 */;
	struct ecap_pwm_chip *cocci_id/* drivers/pwm/pwm-tiecap.c 53 */;
	struct pwm_device *cocci_id/* drivers/pwm/pwm-tiecap.c 50 */;
	struct pwm_chip *cocci_id/* drivers/pwm/pwm-tiecap.c 50 */;
	int cocci_id/* drivers/pwm/pwm-tiecap.c 50 */;
	struct ecap_pwm_chip cocci_id/* drivers/pwm/pwm-tiecap.c 43 */;
	struct ecap_pwm_chip {
		struct pwm_chip chip;
		unsigned int clk_rate;
		void __iomem *mmio_base;
		struct ecap_context ctx;
	} cocci_id/* drivers/pwm/pwm-tiecap.c 34 */;
	struct platform_driver cocci_id/* drivers/pwm/pwm-tiecap.c 306 */;
	struct device *cocci_id/* drivers/pwm/pwm-tiecap.c 290 */;
	struct ecap_context {
		u32 cap3;
		u32 cap4;
		u16 ecctl2;
	} cocci_id/* drivers/pwm/pwm-tiecap.c 28 */;
	struct clk *cocci_id/* drivers/pwm/pwm-tiecap.c 200 */;
	struct resource *cocci_id/* drivers/pwm/pwm-tiecap.c 199 */;
	struct device_node *cocci_id/* drivers/pwm/pwm-tiecap.c 197 */;
	struct platform_device *cocci_id/* drivers/pwm/pwm-tiecap.c 195 */;
	const struct of_device_id cocci_id/* drivers/pwm/pwm-tiecap.c 188 */[];
	const struct pwm_ops cocci_id/* drivers/pwm/pwm-tiecap.c 179 */;
	void cocci_id/* drivers/pwm/pwm-tiecap.c 154 */;
	enum pwm_polarity cocci_id/* drivers/pwm/pwm-tiecap.c 112 */;
}
