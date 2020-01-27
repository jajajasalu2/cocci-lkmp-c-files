cocci_test_suite() {
	unsigned int cocci_id/* drivers/pwm/pwm-atmel.c 96 */;
	struct atmel_pwm_chip cocci_id/* drivers/pwm/pwm-atmel.c 80 */;
	struct atmel_pwm_chip {
		struct pwm_chip chip;
		struct clk *clk;
		void __iomem *base;
		const struct atmel_pwm_data *data;
		unsigned int updated_pwms;
		struct mutex isr_lock;
	} cocci_id/* drivers/pwm/pwm-atmel.c 67 */;
	struct atmel_pwm_data {
		struct atmel_pwm_registers regs;
		struct atmel_pwm_config cfg;
	} cocci_id/* drivers/pwm/pwm-atmel.c 62 */;
	struct atmel_pwm_config {
		u32 max_period;
		u32 max_pres;
	} cocci_id/* drivers/pwm/pwm-atmel.c 57 */;
	struct atmel_pwm_registers {
		u8 period;
		u8 period_upd;
		u8 duty;
		u8 duty_upd;
	} cocci_id/* drivers/pwm/pwm-atmel.c 50 */;
	struct platform_driver cocci_id/* drivers/pwm/pwm-atmel.c 401 */;
	struct resource *cocci_id/* drivers/pwm/pwm-atmel.c 343 */;
	struct platform_device *cocci_id/* drivers/pwm/pwm-atmel.c 340 */;
	const struct of_device_id cocci_id/* drivers/pwm/pwm-atmel.c 321 */[];
	const struct atmel_pwm_data cocci_id/* drivers/pwm/pwm-atmel.c 279 */;
	const struct pwm_ops cocci_id/* drivers/pwm/pwm-atmel.c 274 */;
	u32 cocci_id/* drivers/pwm/pwm-atmel.c 217 */;
	unsigned long cocci_id/* drivers/pwm/pwm-atmel.c 216 */;
	struct pwm_state cocci_id/* drivers/pwm/pwm-atmel.c 215 */;
	struct atmel_pwm_chip *cocci_id/* drivers/pwm/pwm-atmel.c 214 */;
	const struct pwm_state *cocci_id/* drivers/pwm/pwm-atmel.c 212 */;
	struct pwm_device *cocci_id/* drivers/pwm/pwm-atmel.c 211 */;
	struct pwm_chip *cocci_id/* drivers/pwm/pwm-atmel.c 211 */;
	int cocci_id/* drivers/pwm/pwm-atmel.c 211 */;
	bool cocci_id/* drivers/pwm/pwm-atmel.c 176 */;
	unsigned long long cocci_id/* drivers/pwm/pwm-atmel.c 139 */;
	unsigned long *cocci_id/* drivers/pwm/pwm-atmel.c 137 */;
	void cocci_id/* drivers/pwm/pwm-atmel.c 136 */;
	u32 *cocci_id/* drivers/pwm/pwm-atmel.c 114 */;
}
