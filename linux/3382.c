cocci_test_suite() {
	u64 cocci_id/* drivers/pwm/pwm-berlin.c 96 */;
	u32 cocci_id/* drivers/pwm/pwm-berlin.c 95 */;
	bool cocci_id/* drivers/pwm/pwm-berlin.c 94 */;
	struct berlin_pwm_chip *cocci_id/* drivers/pwm/pwm-berlin.c 93 */;
	struct pwm_device *cocci_id/* drivers/pwm/pwm-berlin.c 90 */;
	struct pwm_chip *cocci_id/* drivers/pwm/pwm-berlin.c 90 */;
	int cocci_id/* drivers/pwm/pwm-berlin.c 90 */;
	struct berlin_pwm_channel *cocci_id/* drivers/pwm/pwm-berlin.c 85 */;
	unsigned long cocci_id/* drivers/pwm/pwm-berlin.c 60 */;
	unsigned int cocci_id/* drivers/pwm/pwm-berlin.c 60 */;
	struct berlin_pwm_chip cocci_id/* drivers/pwm/pwm-berlin.c 56 */;
	struct berlin_pwm_chip {
		struct pwm_chip chip;
		struct clk *clk;
		void __iomem *base;
	} cocci_id/* drivers/pwm/pwm-berlin.c 48 */;
	struct berlin_pwm_channel {
		u32 enable;
		u32 ctrl;
		u32 duty;
		u32 tcnt;
	} cocci_id/* drivers/pwm/pwm-berlin.c 41 */;
	struct platform_driver cocci_id/* drivers/pwm/pwm-berlin.c 293 */;
	struct device *cocci_id/* drivers/pwm/pwm-berlin.c 263 */;
	struct resource *cocci_id/* drivers/pwm/pwm-berlin.c 189 */;
	struct platform_device *cocci_id/* drivers/pwm/pwm-berlin.c 186 */;
	const struct of_device_id cocci_id/* drivers/pwm/pwm-berlin.c 180 */[];
	const struct pwm_ops cocci_id/* drivers/pwm/pwm-berlin.c 170 */;
	void cocci_id/* drivers/pwm/pwm-berlin.c 159 */;
	enum pwm_polarity cocci_id/* drivers/pwm/pwm-berlin.c 130 */;
}
