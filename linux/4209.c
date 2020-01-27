cocci_test_suite() {
	struct telem_args_get_temp_info {
		u8 command;
		u8 index;
		u8 field;
		u8 zone;
	}__packed cocci_id/* drivers/platform/chrome/wilco_ec/telemetry.c 99 */;
	struct telem_args_get_diag_info {
		u8 type;
		u8 sub_type;
	}__packed cocci_id/* drivers/platform/chrome/wilco_ec/telemetry.c 94 */;
	struct telem_args_get_fan_info {
		u8 command;
		u8 fan_number;
		u8 arg;
	}__packed cocci_id/* drivers/platform/chrome/wilco_ec/telemetry.c 88 */;
	struct telem_args_get_version {
		u8 index;
	}__packed cocci_id/* drivers/platform/chrome/wilco_ec/telemetry.c 84 */;
	struct telem_args_get_log {
		u8 log_type;
		u8 log_index;
	}__packed cocci_id/* drivers/platform/chrome/wilco_ec/telemetry.c 71 */;
	void __exit cocci_id/* drivers/platform/chrome/wilco_ec/telemetry.c 458 */;
	struct class cocci_id/* drivers/platform/chrome/wilco_ec/telemetry.c 44 */;
	dev_t cocci_id/* drivers/platform/chrome/wilco_ec/telemetry.c 425 */;
	int __init cocci_id/* drivers/platform/chrome/wilco_ec/telemetry.c 423 */;
	struct platform_driver cocci_id/* drivers/platform/chrome/wilco_ec/telemetry.c 415 */;
	struct platform_device *cocci_id/* drivers/platform/chrome/wilco_ec/telemetry.c 361 */;
	struct telem_device_data cocci_id/* drivers/platform/chrome/wilco_ec/telemetry.c 348 */;
	struct telem_device_data *cocci_id/* drivers/platform/chrome/wilco_ec/telemetry.c 346 */;
	struct device *cocci_id/* drivers/platform/chrome/wilco_ec/telemetry.c 344 */;
	void cocci_id/* drivers/platform/chrome/wilco_ec/telemetry.c 344 */;
	const struct file_operations cocci_id/* drivers/platform/chrome/wilco_ec/telemetry.c 328 */;
	loff_t *cocci_id/* drivers/platform/chrome/wilco_ec/telemetry.c 300 */;
	char __user *cocci_id/* drivers/platform/chrome/wilco_ec/telemetry.c 299 */;
	ssize_t cocci_id/* drivers/platform/chrome/wilco_ec/telemetry.c 299 */;
	struct wilco_ec_message cocci_id/* drivers/platform/chrome/wilco_ec/telemetry.c 269 */;
	const char __user *cocci_id/* drivers/platform/chrome/wilco_ec/telemetry.c 265 */;
	struct telem_session_data *cocci_id/* drivers/platform/chrome/wilco_ec/telemetry.c 242 */;
	struct inode *cocci_id/* drivers/platform/chrome/wilco_ec/telemetry.c 239 */;
	struct file *cocci_id/* drivers/platform/chrome/wilco_ec/telemetry.c 239 */;
	struct telem_session_data {
		struct telem_device_data *dev_data;
		struct wilco_ec_telem_request request;
		u8 response[TELEM_RESPONSE_SIZE];
		bool has_msg;
	} cocci_id/* drivers/platform/chrome/wilco_ec/telemetry.c 220 */;
	struct telem_device_data {
		struct device dev;
		struct cdev cdev;
		struct wilco_ec_device *ec;
		atomic_t available;
	} cocci_id/* drivers/platform/chrome/wilco_ec/telemetry.c 204 */;
	struct wilco_ec_telem_request cocci_id/* drivers/platform/chrome/wilco_ec/telemetry.c 157 */;
	size_t cocci_id/* drivers/platform/chrome/wilco_ec/telemetry.c 155 */;
	struct wilco_ec_telem_request *cocci_id/* drivers/platform/chrome/wilco_ec/telemetry.c 154 */;
	int cocci_id/* drivers/platform/chrome/wilco_ec/telemetry.c 154 */;
	struct wilco_ec_telem_request {
		u8 command;
		u8 reserved;
		union {
			u8 buf[TELEM_ARGS_SIZE_MAX];
			struct telem_args_get_log get_log;
			struct telem_args_get_version get_version;
			struct telem_args_get_fan_info get_fan_info;
			struct telem_args_get_diag_info get_diag_info;
			struct telem_args_get_temp_info get_temp_info;
			struct telem_args_get_temp_read get_temp_read;
			struct telem_args_get_batt_ext_info get_batt_ext_info;
			struct telem_args_get_batt_ppid_info get_batt_ppid_info;
		} args;
	}__packed cocci_id/* drivers/platform/chrome/wilco_ec/telemetry.c 124 */;
	struct telem_args_get_batt_ppid_info {
		u8 always1;
	}__packed cocci_id/* drivers/platform/chrome/wilco_ec/telemetry.c 114 */;
	struct telem_args_get_batt_ext_info {
		u8 var_args[5];
	}__packed cocci_id/* drivers/platform/chrome/wilco_ec/telemetry.c 110 */;
	struct telem_args_get_temp_read {
		u8 sensor_index;
	}__packed cocci_id/* drivers/platform/chrome/wilco_ec/telemetry.c 106 */;
}
