cocci_test_suite() {
	u8 cocci_id/* drivers/pwm/pwm-twl.c 64 */[2];
	struct twl_pwm_chip cocci_id/* drivers/pwm/pwm-twl.c 57 */;
	struct twl_pwm_chip *cocci_id/* drivers/pwm/pwm-twl.c 55 */;
	struct pwm_chip *cocci_id/* drivers/pwm/pwm-twl.c 55 */;
	struct twl_pwm_chip {
		struct pwm_chip chip;
		struct mutex mutex;
		u8 twl6030_toggle3;
		u8 twl4030_pwm_mux;
	} cocci_id/* drivers/pwm/pwm-twl.c 48 */;
	struct platform_driver cocci_id/* drivers/pwm/pwm-twl.c 343 */;
	const struct of_device_id cocci_id/* drivers/pwm/pwm-twl.c 335 */[];
	struct platform_device *cocci_id/* drivers/pwm/pwm-twl.c 298 */;
	const struct pwm_ops cocci_id/* drivers/pwm/pwm-twl.c 282 */;
	u8 cocci_id/* drivers/pwm/pwm-twl.c 128 */;
	int cocci_id/* drivers/pwm/pwm-twl.c 127 */;
	struct pwm_device *cocci_id/* drivers/pwm/pwm-twl.c 124 */;
	void cocci_id/* drivers/pwm/pwm-twl.c 124 */;
}
