cocci_test_suite() {
	struct cros_ec_pwm_device *cocci_id/* drivers/pwm/pwm-cros-ec.c 98 */;
	const struct pwm_state *cocci_id/* drivers/pwm/pwm-cros-ec.c 96 */;
	struct pwm_device *cocci_id/* drivers/pwm/pwm-cros-ec.c 95 */;
	struct pwm_chip *cocci_id/* drivers/pwm/pwm-cros-ec.c 95 */;
	struct cros_ec_command *cocci_id/* drivers/pwm/pwm-cros-ec.c 68 */;
	struct ec_response_pwm_get_duty *cocci_id/* drivers/pwm/pwm-cros-ec.c 67 */;
	struct ec_params_pwm_get_duty *cocci_id/* drivers/pwm/pwm-cros-ec.c 66 */;
	struct {
		struct cros_ec_command msg;
		union {
			struct ec_params_pwm_get_duty params;
			struct ec_response_pwm_get_duty resp;
		};
	}__packed cocci_id/* drivers/pwm/pwm-cros-ec.c 59 */;
	u32 *cocci_id/* drivers/pwm/pwm-cros-ec.c 57 */;
	u8 cocci_id/* drivers/pwm/pwm-cros-ec.c 56 */;
	struct cros_ec_device *cocci_id/* drivers/pwm/pwm-cros-ec.c 56 */;
	int cocci_id/* drivers/pwm/pwm-cros-ec.c 56 */;
	struct ec_params_pwm_set_duty *cocci_id/* drivers/pwm/pwm-cros-ec.c 39 */;
	struct {
		struct cros_ec_command msg;
		struct ec_params_pwm_set_duty params;
	}__packed cocci_id/* drivers/pwm/pwm-cros-ec.c 35 */;
	u16 cocci_id/* drivers/pwm/pwm-cros-ec.c 33 */;
	struct cros_ec_pwm_device cocci_id/* drivers/pwm/pwm-cros-ec.c 30 */;
	struct platform_driver cocci_id/* drivers/pwm/pwm-cros-ec.c 245 */;
	const struct of_device_id cocci_id/* drivers/pwm/pwm-cros-ec.c 238 */[];
	struct cros_ec_pwm_device {
		struct device *dev;
		struct cros_ec_device *ec;
		struct pwm_chip chip;
	} cocci_id/* drivers/pwm/pwm-cros-ec.c 22 */;
	struct device *cocci_id/* drivers/pwm/pwm-cros-ec.c 188 */;
	struct platform_device *cocci_id/* drivers/pwm/pwm-cros-ec.c 185 */;
	u32 cocci_id/* drivers/pwm/pwm-cros-ec.c 163 */;
	const struct pwm_ops cocci_id/* drivers/pwm/pwm-cros-ec.c 151 */;
	const struct of_phandle_args *cocci_id/* drivers/pwm/pwm-cros-ec.c 134 */;
	struct pwm_state *cocci_id/* drivers/pwm/pwm-cros-ec.c 115 */;
	void cocci_id/* drivers/pwm/pwm-cros-ec.c 114 */;
}
