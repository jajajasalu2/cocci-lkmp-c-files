cocci_test_suite() {
	void cocci_id/* drivers/pwm/pwm-sifive.c 72 */;
	struct pwm_sifive_ddata cocci_id/* drivers/pwm/pwm-sifive.c 58 */;
	struct pwm_sifive_ddata {
		struct pwm_chip chip;
		struct mutex lock;
		struct notifier_block notifier;
		struct clk *clk;
		void __iomem *regs;
		unsigned int real_period;
		unsigned int approx_period;
		int user_count;
	} cocci_id/* drivers/pwm/pwm-sifive.c 44 */;
	struct platform_driver cocci_id/* drivers/pwm/pwm-sifive.c 326 */;
	const struct of_device_id cocci_id/* drivers/pwm/pwm-sifive.c 320 */[];
	struct resource *cocci_id/* drivers/pwm/pwm-sifive.c 235 */;
	struct device *cocci_id/* drivers/pwm/pwm-sifive.c 232 */;
	struct platform_device *cocci_id/* drivers/pwm/pwm-sifive.c 230 */;
	struct clk_notifier_data *cocci_id/* drivers/pwm/pwm-sifive.c 220 */;
	void *cocci_id/* drivers/pwm/pwm-sifive.c 218 */;
	unsigned long cocci_id/* drivers/pwm/pwm-sifive.c 218 */;
	struct notifier_block *cocci_id/* drivers/pwm/pwm-sifive.c 217 */;
	const struct pwm_ops cocci_id/* drivers/pwm/pwm-sifive.c 209 */;
	u64 cocci_id/* drivers/pwm/pwm-sifive.c 183 */;
	u32 cocci_id/* drivers/pwm/pwm-sifive.c 158 */;
	bool cocci_id/* drivers/pwm/pwm-sifive.c 156 */;
	unsigned long long cocci_id/* drivers/pwm/pwm-sifive.c 155 */;
	unsigned int cocci_id/* drivers/pwm/pwm-sifive.c 154 */;
	struct pwm_state cocci_id/* drivers/pwm/pwm-sifive.c 153 */;
	struct pwm_sifive_ddata *cocci_id/* drivers/pwm/pwm-sifive.c 152 */;
	const struct pwm_state *cocci_id/* drivers/pwm/pwm-sifive.c 150 */;
	struct pwm_device *cocci_id/* drivers/pwm/pwm-sifive.c 149 */;
	struct pwm_chip *cocci_id/* drivers/pwm/pwm-sifive.c 149 */;
	int cocci_id/* drivers/pwm/pwm-sifive.c 149 */;
	struct pwm_state *cocci_id/* drivers/pwm/pwm-sifive.c 110 */;
}
