cocci_test_suite() {
	struct ec_host_response_i2c *cocci_id/* drivers/platform/chrome/cros_ec_i2c.c 63 */;
	struct ec_host_request_i2c *cocci_id/* drivers/platform/chrome/cros_ec_i2c.c 62 */;
	struct ec_host_response *cocci_id/* drivers/platform/chrome/cros_ec_i2c.c 61 */;
	struct ec_host_response_i2c {
		uint8_t result;
		uint8_t packet_length;
		struct ec_host_response ec_response;
	}__packed cocci_id/* drivers/platform/chrome/cros_ec_i2c.c 37 */;
	struct i2c_driver cocci_id/* drivers/platform/chrome/cros_ec_i2c.c 359 */;
	const struct acpi_device_id cocci_id/* drivers/platform/chrome/cros_ec_i2c.c 352 */[];
	const struct i2c_device_id cocci_id/* drivers/platform/chrome/cros_ec_i2c.c 345 */[];
	const struct of_device_id cocci_id/* drivers/platform/chrome/cros_ec_i2c.c 338 */[];
	const struct dev_pm_ops cocci_id/* drivers/platform/chrome/cros_ec_i2c.c 333 */;
	struct ec_host_request_i2c cocci_id/* drivers/platform/chrome/cros_ec_i2c.c 299 */;
	struct ec_response_get_protocol_info cocci_id/* drivers/platform/chrome/cros_ec_i2c.c 298 */;
	struct ec_host_response_i2c cocci_id/* drivers/platform/chrome/cros_ec_i2c.c 297 */;
	struct device *cocci_id/* drivers/platform/chrome/cros_ec_i2c.c 282 */;
	const struct i2c_device_id *cocci_id/* drivers/platform/chrome/cros_ec_i2c.c 280 */;
	struct ec_host_request_i2c {
		uint8_t command_protocol;
		struct ec_host_request ec_request;
	}__packed cocci_id/* drivers/platform/chrome/cros_ec_i2c.c 23 */;
	char *cocci_id/* drivers/platform/chrome/cros_ec_i2c.c 205 */;
	struct i2c_msg cocci_id/* drivers/platform/chrome/cros_ec_i2c.c 189 */[2];
	u8 cocci_id/* drivers/platform/chrome/cros_ec_i2c.c 188 */;
	u8 *cocci_id/* drivers/platform/chrome/cros_ec_i2c.c 186 */;
	struct i2c_client *cocci_id/* drivers/platform/chrome/cros_ec_i2c.c 181 */;
	struct cros_ec_command *cocci_id/* drivers/platform/chrome/cros_ec_i2c.c 179 */;
	struct cros_ec_device *cocci_id/* drivers/platform/chrome/cros_ec_i2c.c 178 */;
	int cocci_id/* drivers/platform/chrome/cros_ec_i2c.c 178 */;
	struct ec_host_response cocci_id/* drivers/platform/chrome/cros_ec_i2c.c 134 */;
}
