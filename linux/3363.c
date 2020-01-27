cocci_test_suite() {
	unsigned long cocci_id/* drivers/pwm/pwm-pxa.c 65 */;
	unsigned long long cocci_id/* drivers/pwm/pwm-pxa.c 64 */;
	struct pwm_device *cocci_id/* drivers/pwm/pwm-pxa.c 60 */;
	struct pwm_chip *cocci_id/* drivers/pwm/pwm-pxa.c 60 */;
	struct pxa_pwm_chip cocci_id/* drivers/pwm/pwm-pxa.c 53 */;
	struct pxa_pwm_chip {
		struct pwm_chip chip;
		struct device *dev;
		struct clk *clk;
		void __iomem *mmio_base;
	} cocci_id/* drivers/pwm/pwm-pxa.c 43 */;
	const struct platform_device_id cocci_id/* drivers/pwm/pwm-pxa.c 25 */[];
	struct platform_driver cocci_id/* drivers/pwm/pwm-pxa.c 222 */;
	struct resource *cocci_id/* drivers/pwm/pwm-pxa.c 169 */;
	struct pxa_pwm_chip *cocci_id/* drivers/pwm/pwm-pxa.c 168 */;
	const struct platform_device_id *cocci_id/* drivers/pwm/pwm-pxa.c 167 */;
	struct platform_device *cocci_id/* drivers/pwm/pwm-pxa.c 165 */;
	int cocci_id/* drivers/pwm/pwm-pxa.c 165 */;
	const struct of_phandle_args *cocci_id/* drivers/pwm/pwm-pxa.c 152 */;
	const struct of_device_id *cocci_id/* drivers/pwm/pwm-pxa.c 146 */;
	struct device *cocci_id/* drivers/pwm/pwm-pxa.c 144 */;
	const struct of_device_id cocci_id/* drivers/pwm/pwm-pxa.c 132 */[];
	const struct pwm_ops cocci_id/* drivers/pwm/pwm-pxa.c 118 */;
	void cocci_id/* drivers/pwm/pwm-pxa.c 111 */;
}
