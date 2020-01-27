cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/hid/hid-sensor-custom.c 825 */;
	const struct platform_device_id cocci_id/* drivers/hid/hid-sensor-custom.c 814 */[];
	struct platform_device *cocci_id/* drivers/hid/hid-sensor-custom.c 749 */;
	void cocci_id/* drivers/hid/hid-sensor-custom.c 740 */;
	const struct hid_custom_usage_desc {
		int usage_id;
		char *desc;
	} cocci_id/* drivers/hid/hid-sensor-custom.c 73 */[];
	const struct file_operations cocci_id/* drivers/hid/hid-sensor-custom.c 710 */;
	struct poll_table_struct *cocci_id/* drivers/hid/hid-sensor-custom.c 694 */;
	__poll_t cocci_id/* drivers/hid/hid-sensor-custom.c 693 */;
	struct hid_sensor_custom cocci_id/* drivers/hid/hid-sensor-custom.c 685 */;
	struct inode *cocci_id/* drivers/hid/hid-sensor-custom.c 680 */;
	struct file *cocci_id/* drivers/hid/hid-sensor-custom.c 680 */;
	unsigned int cocci_id/* drivers/hid/hid-sensor-custom.c 639 */;
	loff_t *cocci_id/* drivers/hid/hid-sensor-custom.c 636 */;
	char __user *cocci_id/* drivers/hid/hid-sensor-custom.c 635 */;
	struct attribute cocci_id/* drivers/hid/hid-sensor-custom.c 62 */[];
	struct hid_device *cocci_id/* drivers/hid/hid-sensor-custom.c 561 */;
	struct hid_sensor_sample {
		u32 usage_id;
		u64 timestamp;
		u32 raw_len;
	}__packed cocci_id/* drivers/hid/hid-sensor-custom.c 56 */;
	struct hid_report_enum *cocci_id/* drivers/hid/hid-sensor-custom.c 524 */;
	struct attribute_group cocci_id/* drivers/hid/hid-sensor-custom.c 517 */;
	struct hid_sensor_custom_field cocci_id/* drivers/hid/hid-sensor-custom.c 480 */;
	struct hid_sensor_custom_field *cocci_id/* drivers/hid/hid-sensor-custom.c 475 */;
	struct hid_field *cocci_id/* drivers/hid/hid-sensor-custom.c 473 */;
	struct hid_report *cocci_id/* drivers/hid/hid-sensor-custom.c 472 */;
	unsigned char *cocci_id/* drivers/hid/hid-sensor-custom.c 440 */;
	struct hid_sensor_sample cocci_id/* drivers/hid/hid-sensor-custom.c 417 */;
	void *cocci_id/* drivers/hid/hid-sensor-custom.c 414 */;
	unsigned cocci_id/* drivers/hid/hid-sensor-custom.c 413 */;
	struct hid_sensor_hub_device *cocci_id/* drivers/hid/hid-sensor-custom.c 412 */;
	struct hid_custom_usage_desc cocci_id/* drivers/hid/hid-sensor-custom.c 368 */;
	struct hid_custom_usage_desc *cocci_id/* drivers/hid/hid-sensor-custom.c 364 */;
	struct hid_sensor_custom {
		struct mutex mutex;
		struct platform_device *pdev;
		struct hid_sensor_hub_device *hsdev;
		struct hid_sensor_hub_callbacks callbacks;
		int sensor_field_count;
		struct hid_sensor_custom_field *fields;
		int input_field_count;
		int input_report_size;
		int input_report_recd_size;
		bool input_skip_sample;
		bool enable;
		struct hid_sensor_custom_field *power_state;
		struct hid_sensor_custom_field *report_state;
		struct miscdevice custom_dev;
		struct kfifo data_fifo;
		unsigned long misc_opened;
		wait_queue_head_t wait;
	} cocci_id/* drivers/hid/hid-sensor-custom.c 35 */;
	u64 *cocci_id/* drivers/hid/hid-sensor-custom.c 331 */;
	u32 *cocci_id/* drivers/hid/hid-sensor-custom.c 327 */;
	u16 *cocci_id/* drivers/hid/hid-sensor-custom.c 323 */;
	u64 cocci_id/* drivers/hid/hid-sensor-custom.c 304 */;
	u8 cocci_id/* drivers/hid/hid-sensor-custom.c 302 */[HID_CUSTOM_MAX_FEATURE_BYTES];
	char cocci_id/* drivers/hid/hid-sensor-custom.c 279 */[HID_CUSTOM_NAME_LENGTH];
	struct hid_sensor_hub_attribute_info *cocci_id/* drivers/hid/hid-sensor-custom.c 277 */;
	const struct attribute_group cocci_id/* drivers/hid/hid-sensor-custom.c 269 */;
	struct attribute *cocci_id/* drivers/hid/hid-sensor-custom.c 264 */[];
	struct hid_sensor_custom_field {
		int report_id;
		char group_name[HID_CUSTOM_NAME_LENGTH];
		struct hid_sensor_hub_attribute_info attribute;
		struct device_attribute sd_attrs[HID_CUSTOM_MAX_CORE_ATTRS];
		char attr_name[HID_CUSTOM_TOTAL_ATTRS][HID_CUSTOM_NAME_LENGTH];
		struct attribute *attrs[HID_CUSTOM_TOTAL_ATTRS];
		struct attribute_group hid_custom_attribute_group;
	} cocci_id/* drivers/hid/hid-sensor-custom.c 25 */;
	int cocci_id/* drivers/hid/hid-sensor-custom.c 232 */;
	const char *cocci_id/* drivers/hid/hid-sensor-custom.c 229 */;
	size_t cocci_id/* drivers/hid/hid-sensor-custom.c 229 */;
	u32 cocci_id/* drivers/hid/hid-sensor-custom.c 162 */;
	bool cocci_id/* drivers/hid/hid-sensor-custom.c 158 */;
	struct hid_sensor_custom *cocci_id/* drivers/hid/hid-sensor-custom.c 152 */;
	struct device_attribute *cocci_id/* drivers/hid/hid-sensor-custom.c 150 */;
	char *cocci_id/* drivers/hid/hid-sensor-custom.c 150 */;
	struct device *cocci_id/* drivers/hid/hid-sensor-custom.c 149 */;
	ssize_t cocci_id/* drivers/hid/hid-sensor-custom.c 149 */;
	int *cocci_id/* drivers/hid/hid-sensor-custom.c 140 */;
	const void *cocci_id/* drivers/hid/hid-sensor-custom.c 138 */;
}
