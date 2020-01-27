cocci_test_suite() {
	const struct pwm_ops cocci_id/* drivers/pwm/pwm-clps711x.c 96 */;
	void cocci_id/* drivers/pwm/pwm-clps711x.c 89 */;
	struct clps711x_chip *cocci_id/* drivers/pwm/pwm-clps711x.c 66 */;
	struct pwm_chip *cocci_id/* drivers/pwm/pwm-clps711x.c 63 */;
	int cocci_id/* drivers/pwm/pwm-clps711x.c 63 */;
	struct pwm_device *cocci_id/* drivers/pwm/pwm-clps711x.c 43 */;
	unsigned int cocci_id/* drivers/pwm/pwm-clps711x.c 43 */;
	unsigned long cocci_id/* drivers/pwm/pwm-clps711x.c 30 */;
	u32 cocci_id/* drivers/pwm/pwm-clps711x.c 26 */;
	struct clps711x_chip cocci_id/* drivers/pwm/pwm-clps711x.c 23 */;
	struct platform_driver cocci_id/* drivers/pwm/pwm-clps711x.c 158 */;
	const struct of_device_id __maybe_unused cocci_id/* drivers/pwm/pwm-clps711x.c 152 */[];
	struct clps711x_chip {
		struct pwm_chip chip;
		void __iomem *pmpcon;
		struct clk *clk;
		spinlock_t lock;
	} cocci_id/* drivers/pwm/pwm-clps711x.c 14 */;
	struct resource *cocci_id/* drivers/pwm/pwm-clps711x.c 116 */;
	struct platform_device *cocci_id/* drivers/pwm/pwm-clps711x.c 113 */;
	const struct of_phandle_args *cocci_id/* drivers/pwm/pwm-clps711x.c 105 */;
}
