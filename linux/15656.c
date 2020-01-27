cocci_test_suite() {
	struct gb_pwm_config_request cocci_id/* drivers/staging/greybus/pwm.c 94 */;
	u32 cocci_id/* drivers/staging/greybus/pwm.c 92 */;
	struct gb_pwm_deactivate_request cocci_id/* drivers/staging/greybus/pwm.c 69 */;
	struct gbphy_device *cocci_id/* drivers/staging/greybus/pwm.c 45 */;
	struct gb_pwm_activate_request cocci_id/* drivers/staging/greybus/pwm.c 44 */;
	u8 cocci_id/* drivers/staging/greybus/pwm.c 42 */;
	struct gb_pwm_chip *cocci_id/* drivers/staging/greybus/pwm.c 41 */;
	int cocci_id/* drivers/staging/greybus/pwm.c 41 */;
	struct gbphy_driver cocci_id/* drivers/staging/greybus/pwm.c 328 */;
	const struct gbphy_device_id cocci_id/* drivers/staging/greybus/pwm.c 322 */[];
	struct gb_pwm_count_response cocci_id/* drivers/staging/greybus/pwm.c 30 */;
	struct gb_connection *cocci_id/* drivers/staging/greybus/pwm.c 250 */;
	struct gb_pwm_chip cocci_id/* drivers/staging/greybus/pwm.c 25 */;
	const struct gbphy_device_id *cocci_id/* drivers/staging/greybus/pwm.c 248 */;
	const struct pwm_ops cocci_id/* drivers/staging/greybus/pwm.c 237 */;
	void cocci_id/* drivers/staging/greybus/pwm.c 230 */;
	enum pwm_polarity cocci_id/* drivers/staging/greybus/pwm.c 216 */;
	struct pwm_device *cocci_id/* drivers/staging/greybus/pwm.c 207 */;
	struct pwm_chip *cocci_id/* drivers/staging/greybus/pwm.c 207 */;
	struct gb_pwm_disable_request cocci_id/* drivers/staging/greybus/pwm.c 172 */;
	struct gb_pwm_chip {
		struct gb_connection *connection;
		u8 pwm_max;
		struct pwm_chip chip;
		struct pwm_chip *pwm;
	} cocci_id/* drivers/staging/greybus/pwm.c 17 */;
	struct gb_pwm_enable_request cocci_id/* drivers/staging/greybus/pwm.c 147 */;
	struct gb_pwm_polarity_request cocci_id/* drivers/staging/greybus/pwm.c 121 */;
}
