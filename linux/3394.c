cocci_test_suite() {
	u32 cocci_id/* drivers/pwm/pwm-imx1.c 67 */;
	struct pwm_device *cocci_id/* drivers/pwm/pwm-imx1.c 64 */;
	struct pwm_imx1_chip *cocci_id/* drivers/pwm/pwm-imx1.c 57 */;
	struct pwm_chip *cocci_id/* drivers/pwm/pwm-imx1.c 55 */;
	void cocci_id/* drivers/pwm/pwm-imx1.c 55 */;
	int cocci_id/* drivers/pwm/pwm-imx1.c 37 */;
	struct pwm_imx1_chip cocci_id/* drivers/pwm/pwm-imx1.c 35 */;
	struct pwm_imx1_chip {
		struct clk *clk_ipg;
		struct clk *clk_per;
		void __iomem *mmio_base;
		struct pwm_chip chip;
	} cocci_id/* drivers/pwm/pwm-imx1.c 28 */;
	struct platform_driver cocci_id/* drivers/pwm/pwm-imx1.c 188 */;
	struct resource *cocci_id/* drivers/pwm/pwm-imx1.c 139 */;
	struct platform_device *cocci_id/* drivers/pwm/pwm-imx1.c 136 */;
	const struct of_device_id cocci_id/* drivers/pwm/pwm-imx1.c 130 */[];
	const struct pwm_ops cocci_id/* drivers/pwm/pwm-imx1.c 123 */;
}
