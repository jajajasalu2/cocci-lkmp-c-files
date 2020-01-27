cocci_test_suite() {
	struct {
		struct cros_ec_command msg;
		union {
			struct ec_params_host_sleep_event req0;
			struct ec_params_host_sleep_event_v1 req1;
			struct ec_response_host_sleep_event_v1 resp1;
		} u;
	}__packed cocci_id/* drivers/platform/chrome/cros_ec.c 92 */;
	int cocci_id/* drivers/platform/chrome/cros_ec.c 57 */;
	bool cocci_id/* drivers/platform/chrome/cros_ec.c 53 */;
	struct cros_ec_device *cocci_id/* drivers/platform/chrome/cros_ec.c 53 */;
	irqreturn_t cocci_id/* drivers/platform/chrome/cros_ec.c 34 */;
	void *cocci_id/* drivers/platform/chrome/cros_ec.c 34 */;
	u8 cocci_id/* drivers/platform/chrome/cros_ec.c 317 */;
	void cocci_id/* drivers/platform/chrome/cros_ec.c 298 */;
	struct cros_ec_platform cocci_id/* drivers/platform/chrome/cros_ec.c 192 */;
	struct ec_response_get_protocol_info cocci_id/* drivers/platform/chrome/cros_ec.c 157 */;
	struct ec_params_hello cocci_id/* drivers/platform/chrome/cros_ec.c 156 */;
	struct device *cocci_id/* drivers/platform/chrome/cros_ec.c 151 */;
}
