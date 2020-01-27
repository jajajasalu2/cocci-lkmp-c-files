cocci_test_suite() {
	const struct fsl_pwm_periodcfg *cocci_id/* drivers/pwm/pwm-fsl-ftm.c 77 */;
	struct fsl_pwm_chip cocci_id/* drivers/pwm/pwm-fsl-ftm.c 59 */;
	struct platform_driver cocci_id/* drivers/pwm/pwm-fsl-ftm.c 553 */;
	const struct of_device_id cocci_id/* drivers/pwm/pwm-fsl-ftm.c 546 */[];
	const struct fsl_ftm_soc cocci_id/* drivers/pwm/pwm-fsl-ftm.c 542 */;
	const struct dev_pm_ops cocci_id/* drivers/pwm/pwm-fsl-ftm.c 534 */;
	struct device *cocci_id/* drivers/pwm/pwm-fsl-ftm.c 506 */;
	struct fsl_pwm_chip {
		struct pwm_chip chip;
		struct mutex lock;
		struct regmap *regmap;
		struct fsl_pwm_periodcfg period;
		struct clk *ipg_clk;
		struct clk *clk[FSL_PWM_CLK_MAX];
		const struct fsl_ftm_soc *soc;
	} cocci_id/* drivers/pwm/pwm-fsl-ftm.c 43 */;
	void __iomem *cocci_id/* drivers/pwm/pwm-fsl-ftm.c 403 */;
	struct resource *cocci_id/* drivers/pwm/pwm-fsl-ftm.c 402 */;
	struct platform_device *cocci_id/* drivers/pwm/pwm-fsl-ftm.c 399 */;
	const struct regmap_config cocci_id/* drivers/pwm/pwm-fsl-ftm.c 389 */;
	struct fsl_pwm_periodcfg {
		enum fsl_pwm_clk clk_select;
		unsigned int clk_ps;
		unsigned int mod_period;
	} cocci_id/* drivers/pwm/pwm-fsl-ftm.c 37 */;
	const struct pwm_ops cocci_id/* drivers/pwm/pwm-fsl-ftm.c 354 */;
	struct fsl_ftm_soc {
		bool has_enable_bits;
	} cocci_id/* drivers/pwm/pwm-fsl-ftm.c 33 */;
	struct pwm_state *cocci_id/* drivers/pwm/pwm-fsl-ftm.c 304 */;
	struct fsl_pwm_chip *cocci_id/* drivers/pwm/pwm-fsl-ftm.c 303 */;
	const struct pwm_state *cocci_id/* drivers/pwm/pwm-fsl-ftm.c 301 */;
	struct pwm_device *cocci_id/* drivers/pwm/pwm-fsl-ftm.c 300 */;
	struct pwm_chip *cocci_id/* drivers/pwm/pwm-fsl-ftm.c 300 */;
	int cocci_id/* drivers/pwm/pwm-fsl-ftm.c 300 */;
	enum fsl_pwm_clk cocci_id/* drivers/pwm/pwm-fsl-ftm.c 260 */;
	enum fsl_pwm_clk{FSL_PWM_CLK_SYS, FSL_PWM_CLK_FIX, FSL_PWM_CLK_EXT, FSL_PWM_CLK_CNTEN, FSL_PWM_CLK_MAX,} cocci_id/* drivers/pwm/pwm-fsl-ftm.c 25 */;
	bool cocci_id/* drivers/pwm/pwm-fsl-ftm.c 236 */;
	struct fsl_pwm_periodcfg cocci_id/* drivers/pwm/pwm-fsl-ftm.c 235 */;
	u32 cocci_id/* drivers/pwm/pwm-fsl-ftm.c 233 */;
	unsigned int cocci_id/* drivers/pwm/pwm-fsl-ftm.c 232 */;
	unsigned long long cocci_id/* drivers/pwm/pwm-fsl-ftm.c 193 */;
	unsigned long cocci_id/* drivers/pwm/pwm-fsl-ftm.c 164 */;
	struct fsl_pwm_periodcfg *cocci_id/* drivers/pwm/pwm-fsl-ftm.c 161 */;
	void cocci_id/* drivers/pwm/pwm-fsl-ftm.c 105 */;
}
