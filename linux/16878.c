cocci_test_suite() {
	irqreturn_t cocci_id/* drivers/input/mouse/elan_i2c_core.c 998 */;
	struct input_dev *cocci_id/* drivers/input/mouse/elan_i2c_core.c 947 */;
	u8 *cocci_id/* drivers/input/mouse/elan_i2c_core.c 945 */;
	const struct attribute_group *cocci_id/* drivers/input/mouse/elan_i2c_core.c 878 */[];
	const struct attribute_group cocci_id/* drivers/input/mouse/elan_i2c_core.c 873 */;
	struct attribute *cocci_id/* drivers/input/mouse/elan_i2c_core.c 866 */[];
	const char *cocci_id/* drivers/input/mouse/elan_i2c_core.c 757 */;
	size_t cocci_id/* drivers/input/mouse/elan_i2c_core.c 757 */;
	struct device_attribute *cocci_id/* drivers/input/mouse/elan_i2c_core.c 756 */;
	ssize_t cocci_id/* drivers/input/mouse/elan_i2c_core.c 756 */;
	enum tp_mode cocci_id/* drivers/input/mouse/elan_i2c_core.c 714 */;
	u8 cocci_id/* drivers/input/mouse/elan_i2c_core.c 650 */[ETP_CALIBRATE_MAX_LEN];
	struct elan_tp_data {
		struct i2c_client *client;
		struct input_dev *input;
		struct input_dev *tp_input;
		struct regulator *vcc;
		const struct elan_transport_ops *ops;
		struct completion fw_completion;
		bool in_fw_update;
		struct mutex sysfs_mutex;
		unsigned int max_x;
		unsigned int max_y;
		unsigned int width_x;
		unsigned int width_y;
		unsigned int x_res;
		unsigned int y_res;
		u8 pattern;
		u16 product_id;
		u8 fw_version;
		u8 sm_version;
		u8 iap_version;
		u16 fw_checksum;
		int pressure_adjustment;
		u8 mode;
		u16 ic_type;
		u16 fw_validpage_count;
		u16 fw_signature_address;
		bool irq_wake;
		u8 min_baseline;
		u8 max_baseline;
		bool baseline_ready;
		u8 clickpad;
		bool middle_button;
	} cocci_id/* drivers/input/mouse/elan_i2c_core.c 61 */;
	const u8 cocci_id/* drivers/input/mouse/elan_i2c_core.c 598 */[];
	char *cocci_id/* drivers/input/mouse/elan_i2c_core.c 540 */;
	const u8 *cocci_id/* drivers/input/mouse/elan_i2c_core.c 472 */;
	u16 cocci_id/* drivers/input/mouse/elan_i2c_core.c 459 */;
	struct device *cocci_id/* drivers/input/mouse/elan_i2c_core.c 456 */;
	const struct firmware *cocci_id/* drivers/input/mouse/elan_i2c_core.c 453 */;
	u32 cocci_id/* drivers/input/mouse/elan_i2c_core.c 370 */;
	char cocci_id/* drivers/input/mouse/elan_i2c_core.c 363 */;
	u8 cocci_id/* drivers/input/mouse/elan_i2c_core.c 354 */;
	unsigned int cocci_id/* drivers/input/mouse/elan_i2c_core.c 354 */;
	bool cocci_id/* drivers/input/mouse/elan_i2c_core.c 246 */;
	struct i2c_client *cocci_id/* drivers/input/mouse/elan_i2c_core.c 245 */;
	struct elan_tp_data *cocci_id/* drivers/input/mouse/elan_i2c_core.c 243 */;
	int cocci_id/* drivers/input/mouse/elan_i2c_core.c 243 */;
	struct i2c_driver cocci_id/* drivers/input/mouse/elan_i2c_core.c 1371 */;
	const struct of_device_id cocci_id/* drivers/input/mouse/elan_i2c_core.c 1364 */[];
	const struct i2c_device_id cocci_id/* drivers/input/mouse/elan_i2c_core.c 1353 */[];
	int __maybe_unused cocci_id/* drivers/input/mouse/elan_i2c_core.c 1325 */;
	struct elan_tp_data cocci_id/* drivers/input/mouse/elan_i2c_core.c 1164 */;
	unsigned long cocci_id/* drivers/input/mouse/elan_i2c_core.c 1147 */;
	const struct elan_transport_ops *cocci_id/* drivers/input/mouse/elan_i2c_core.c 1144 */;
	const struct i2c_device_id *cocci_id/* drivers/input/mouse/elan_i2c_core.c 1142 */;
	void *cocci_id/* drivers/input/mouse/elan_i2c_core.c 1134 */;
	void cocci_id/* drivers/input/mouse/elan_i2c_core.c 1134 */;
	u16 *cocci_id/* drivers/input/mouse/elan_i2c_core.c 103 */;
	u8 cocci_id/* drivers/input/mouse/elan_i2c_core.c 1003 */[ETP_MAX_REPORT_LEN];
}
