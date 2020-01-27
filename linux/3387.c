cocci_test_suite() {
	void cocci_id/* drivers/pwm/pwm-hibvt.c 99 */;
	struct hibvt_pwm_chip cocci_id/* drivers/pwm/pwm-hibvt.c 68 */;
	const struct hibvt_pwm_soc cocci_id/* drivers/pwm/pwm-hibvt.c 48 */;
	struct hibvt_pwm_soc {
		u32 num_pwms;
		bool quirk_force_enable;
	} cocci_id/* drivers/pwm/pwm-hibvt.c 43 */;
	struct hibvt_pwm_chip {
		struct pwm_chip chip;
		struct clk *clk;
		void __iomem *base;
		struct reset_control *rstc;
		const struct hibvt_pwm_soc *soc;
	} cocci_id/* drivers/pwm/pwm-hibvt.c 35 */;
	struct platform_driver cocci_id/* drivers/pwm/pwm-hibvt.c 279 */;
	const struct of_device_id cocci_id/* drivers/pwm/pwm-hibvt.c 266 */[];
	struct resource *cocci_id/* drivers/pwm/pwm-hibvt.c 193 */;
	const struct hibvt_pwm_soc *cocci_id/* drivers/pwm/pwm-hibvt.c 190 */;
	struct platform_device *cocci_id/* drivers/pwm/pwm-hibvt.c 188 */;
	const struct pwm_ops cocci_id/* drivers/pwm/pwm-hibvt.c 181 */;
	struct hibvt_pwm_chip *cocci_id/* drivers/pwm/pwm-hibvt.c 154 */;
	const struct pwm_state *cocci_id/* drivers/pwm/pwm-hibvt.c 152 */;
	struct pwm_device *cocci_id/* drivers/pwm/pwm-hibvt.c 151 */;
	struct pwm_chip *cocci_id/* drivers/pwm/pwm-hibvt.c 151 */;
	int cocci_id/* drivers/pwm/pwm-hibvt.c 151 */;
	void __iomem *cocci_id/* drivers/pwm/pwm-hibvt.c 135 */;
	struct pwm_state *cocci_id/* drivers/pwm/pwm-hibvt.c 132 */;
	enum pwm_polarity cocci_id/* drivers/pwm/pwm-hibvt.c 119 */;
	u32 cocci_id/* drivers/pwm/pwm-hibvt.c 103 */;
}
