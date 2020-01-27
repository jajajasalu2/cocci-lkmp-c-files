cocci_test_suite() {
	u32 cocci_id/* drivers/pwm/pwm-atmel-hlcdc.c 54 */;
	unsigned long cocci_id/* drivers/pwm/pwm-atmel-hlcdc.c 52 */;
	u64 cocci_id/* drivers/pwm/pwm-atmel-hlcdc.c 51 */;
	struct clk *cocci_id/* drivers/pwm/pwm-atmel-hlcdc.c 50 */;
	unsigned int cocci_id/* drivers/pwm/pwm-atmel-hlcdc.c 46 */;
	struct atmel_hlcdc *cocci_id/* drivers/pwm/pwm-atmel-hlcdc.c 45 */;
	struct atmel_hlcdc_pwm *cocci_id/* drivers/pwm/pwm-atmel-hlcdc.c 44 */;
	const struct pwm_state *cocci_id/* drivers/pwm/pwm-atmel-hlcdc.c 42 */;
	struct pwm_device *cocci_id/* drivers/pwm/pwm-atmel-hlcdc.c 41 */;
	struct pwm_chip *cocci_id/* drivers/pwm/pwm-atmel-hlcdc.c 41 */;
	int cocci_id/* drivers/pwm/pwm-atmel-hlcdc.c 41 */;
	struct atmel_hlcdc_pwm cocci_id/* drivers/pwm/pwm-atmel-hlcdc.c 38 */;
	struct platform_driver cocci_id/* drivers/pwm/pwm-atmel-hlcdc.c 303 */;
	struct atmel_hlcdc_pwm {
		struct pwm_chip chip;
		struct atmel_hlcdc *hlcdc;
		struct clk *cur_clk;
		const struct atmel_hlcdc_pwm_errata *errata;
	} cocci_id/* drivers/pwm/pwm-atmel-hlcdc.c 29 */;
	struct device *cocci_id/* drivers/pwm/pwm-atmel-hlcdc.c 246 */;
	const struct of_device_id *cocci_id/* drivers/pwm/pwm-atmel-hlcdc.c 245 */;
	struct platform_device *cocci_id/* drivers/pwm/pwm-atmel-hlcdc.c 243 */;
	struct atmel_hlcdc_pwm_errata {
		bool slow_clk_erratum;
		bool div1_clk_erratum;
	} cocci_id/* drivers/pwm/pwm-atmel-hlcdc.c 24 */;
	const struct of_device_id cocci_id/* drivers/pwm/pwm-atmel-hlcdc.c 217 */[];
	struct pwm_state cocci_id/* drivers/pwm/pwm-atmel-hlcdc.c 198 */;
	const struct atmel_hlcdc_pwm_errata cocci_id/* drivers/pwm/pwm-atmel-hlcdc.c 175 */;
	const struct pwm_ops cocci_id/* drivers/pwm/pwm-atmel-hlcdc.c 170 */;
}
