cocci_test_suite() {
	struct pwm_device *cocci_id/* drivers/pwm/pwm-mediatek.c 98 */;
	struct pwm_chip *cocci_id/* drivers/pwm/pwm-mediatek.c 97 */;
	void cocci_id/* drivers/pwm/pwm-mediatek.c 97 */;
	int cocci_id/* drivers/pwm/pwm-mediatek.c 69 */;
	struct pwm_mediatek_chip cocci_id/* drivers/pwm/pwm-mediatek.c 66 */;
	const unsigned int cocci_id/* drivers/pwm/pwm-mediatek.c 59 */[];
	struct pwm_mediatek_chip {
		struct pwm_chip chip;
		void __iomem *regs;
		struct clk *clk_top;
		struct clk *clk_main;
		struct clk **clk_pwms;
		const struct pwm_mediatek_of_data *soc;
	} cocci_id/* drivers/pwm/pwm-mediatek.c 50 */;
	struct pwm_mediatek_of_data {
		unsigned int num_pwms;
		bool pwm45_fixup;
	} cocci_id/* drivers/pwm/pwm-mediatek.c 36 */;
	struct platform_driver cocci_id/* drivers/pwm/pwm-mediatek.c 321 */;
	const struct of_device_id cocci_id/* drivers/pwm/pwm-mediatek.c 310 */[];
	const struct pwm_mediatek_of_data cocci_id/* drivers/pwm/pwm-mediatek.c 280 */;
	char cocci_id/* drivers/pwm/pwm-mediatek.c 245 */[8];
	unsigned int cocci_id/* drivers/pwm/pwm-mediatek.c 211 */;
	struct resource *cocci_id/* drivers/pwm/pwm-mediatek.c 210 */;
	struct platform_device *cocci_id/* drivers/pwm/pwm-mediatek.c 207 */;
	const struct pwm_ops cocci_id/* drivers/pwm/pwm-mediatek.c 200 */;
	u64 cocci_id/* drivers/pwm/pwm-mediatek.c 126 */;
	u32 cocci_id/* drivers/pwm/pwm-mediatek.c 124 */;
	struct pwm_mediatek_chip *cocci_id/* drivers/pwm/pwm-mediatek.c 100 */;
}
