cocci_test_suite() {
	struct pwm_device *cocci_id/* drivers/pwm/pwm-brcmstb.c 97 */;
	struct pwm_chip *cocci_id/* drivers/pwm/pwm-brcmstb.c 97 */;
	int cocci_id/* drivers/pwm/pwm-brcmstb.c 97 */;
	struct brcmstb_pwm cocci_id/* drivers/pwm/pwm-brcmstb.c 81 */;
	struct brcmstb_pwm {
		void __iomem *base;
		spinlock_t lock;
		struct clk *clk;
		struct pwm_chip chip;
	} cocci_id/* drivers/pwm/pwm-brcmstb.c 54 */;
	struct platform_driver cocci_id/* drivers/pwm/pwm-brcmstb.c 319 */;
	struct device *cocci_id/* drivers/pwm/pwm-brcmstb.c 306 */;
	struct resource *cocci_id/* drivers/pwm/pwm-brcmstb.c 237 */;
	struct platform_device *cocci_id/* drivers/pwm/pwm-brcmstb.c 234 */;
	const struct of_device_id cocci_id/* drivers/pwm/pwm-brcmstb.c 228 */[];
	const struct pwm_ops cocci_id/* drivers/pwm/pwm-brcmstb.c 221 */;
	void cocci_id/* drivers/pwm/pwm-brcmstb.c 214 */;
	bool cocci_id/* drivers/pwm/pwm-brcmstb.c 185 */;
	u64 cocci_id/* drivers/pwm/pwm-brcmstb.c 117 */;
	u32 cocci_id/* drivers/pwm/pwm-brcmstb.c 103 */;
	unsigned int cocci_id/* drivers/pwm/pwm-brcmstb.c 102 */;
	unsigned long cocci_id/* drivers/pwm/pwm-brcmstb.c 101 */;
	struct brcmstb_pwm *cocci_id/* drivers/pwm/pwm-brcmstb.c 100 */;
}
