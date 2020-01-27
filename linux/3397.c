cocci_test_suite() {
	struct imx_tpm_pwm_chip cocci_id/* drivers/pwm/pwm-imx-tpm.c 80 */;
	struct imx_tpm_pwm_param {
		u8 prescale;
		u32 mod;
		u32 val;
	} cocci_id/* drivers/pwm/pwm-imx-tpm.c 71 */;
	struct imx_tpm_pwm_chip {
		struct pwm_chip chip;
		struct clk *clk;
		void __iomem *base;
		struct mutex lock;
		u32 user_count;
		u32 enable_count;
		u32 real_period;
	} cocci_id/* drivers/pwm/pwm-imx-tpm.c 61 */;
	struct platform_driver cocci_id/* drivers/pwm/pwm-imx-tpm.c 436 */;
	const struct of_device_id cocci_id/* drivers/pwm/pwm-imx-tpm.c 430 */[];
	struct device *cocci_id/* drivers/pwm/pwm-imx-tpm.c 413 */;
	int __maybe_unused cocci_id/* drivers/pwm/pwm-imx-tpm.c 413 */;
	struct platform_device *cocci_id/* drivers/pwm/pwm-imx-tpm.c 338 */;
	const struct pwm_ops cocci_id/* drivers/pwm/pwm-imx-tpm.c 330 */;
	void cocci_id/* drivers/pwm/pwm-imx-tpm.c 321 */;
	struct pwm_state cocci_id/* drivers/pwm/pwm-imx-tpm.c 296 */;
	struct imx_tpm_pwm_param cocci_id/* drivers/pwm/pwm-imx-tpm.c 295 */;
	struct imx_tpm_pwm_chip *cocci_id/* drivers/pwm/pwm-imx-tpm.c 294 */;
	const struct pwm_state *cocci_id/* drivers/pwm/pwm-imx-tpm.c 292 */;
	struct pwm_device *cocci_id/* drivers/pwm/pwm-imx-tpm.c 291 */;
	struct pwm_chip *cocci_id/* drivers/pwm/pwm-imx-tpm.c 290 */;
	int cocci_id/* drivers/pwm/pwm-imx-tpm.c 290 */;
	unsigned long cocci_id/* drivers/pwm/pwm-imx-tpm.c 181 */;
	u32 cocci_id/* drivers/pwm/pwm-imx-tpm.c 180 */;
	bool cocci_id/* drivers/pwm/pwm-imx-tpm.c 178 */;
	struct pwm_state *cocci_id/* drivers/pwm/pwm-imx-tpm.c 174 */;
	struct imx_tpm_pwm_param *cocci_id/* drivers/pwm/pwm-imx-tpm.c 173 */;
	u64 cocci_id/* drivers/pwm/pwm-imx-tpm.c 143 */;
}
