cocci_test_suite() {
	struct wilco_ec_message cocci_id/* drivers/platform/chrome/wilco_ec/debugfs.c 99 */;
	char *cocci_id/* drivers/platform/chrome/wilco_ec/debugfs.c 98 */;
	const char __user *cocci_id/* drivers/platform/chrome/wilco_ec/debugfs.c 95 */;
	u8 cocci_id/* drivers/platform/chrome/wilco_ec/debugfs.c 56 */;
	char cocci_id/* drivers/platform/chrome/wilco_ec/debugfs.c 55 */[MAX_WORD_SIZE + 1];
	const char *cocci_id/* drivers/platform/chrome/wilco_ec/debugfs.c 47 */;
	struct wilco_ec_debugfs *cocci_id/* drivers/platform/chrome/wilco_ec/debugfs.c 29 */;
	struct platform_driver cocci_id/* drivers/platform/chrome/wilco_ec/debugfs.c 267 */;
	struct platform_device *cocci_id/* drivers/platform/chrome/wilco_ec/debugfs.c 240 */;
	u64 cocci_id/* drivers/platform/chrome/wilco_ec/debugfs.c 221 */;
	struct wilco_ec_debugfs {
		struct wilco_ec_device *ec;
		struct dentry *dir;
		size_t response_size;
		u8 raw_data[EC_MAILBOX_DATA_SIZE];
		u8 formatted_data[FORMATTED_BUFFER_SIZE];
	} cocci_id/* drivers/platform/chrome/wilco_ec/debugfs.c 22 */;
	u8 *cocci_id/* drivers/platform/chrome/wilco_ec/debugfs.c 211 */;
	u64 *cocci_id/* drivers/platform/chrome/wilco_ec/debugfs.c 209 */;
	void *cocci_id/* drivers/platform/chrome/wilco_ec/debugfs.c 209 */;
	int cocci_id/* drivers/platform/chrome/wilco_ec/debugfs.c 209 */;
	struct ec_response cocci_id/* drivers/platform/chrome/wilco_ec/debugfs.c 179 */;
	struct ec_request cocci_id/* drivers/platform/chrome/wilco_ec/debugfs.c 178 */;
	struct wilco_ec_device *cocci_id/* drivers/platform/chrome/wilco_ec/debugfs.c 176 */;
	struct ec_response {
		u8 status;
		u8 val;
	}__packed cocci_id/* drivers/platform/chrome/wilco_ec/debugfs.c 171 */;
	struct ec_request {
		u8 cmd;
		u8 reserved;
		u8 sub_cmd;
	}__packed cocci_id/* drivers/platform/chrome/wilco_ec/debugfs.c 165 */;
	const struct file_operations cocci_id/* drivers/platform/chrome/wilco_ec/debugfs.c 154 */;
	loff_t *cocci_id/* drivers/platform/chrome/wilco_ec/debugfs.c 136 */;
	struct file *cocci_id/* drivers/platform/chrome/wilco_ec/debugfs.c 135 */;
	char __user *cocci_id/* drivers/platform/chrome/wilco_ec/debugfs.c 135 */;
	ssize_t cocci_id/* drivers/platform/chrome/wilco_ec/debugfs.c 135 */;
	size_t cocci_id/* drivers/platform/chrome/wilco_ec/debugfs.c 135 */;
	u8 cocci_id/* drivers/platform/chrome/wilco_ec/debugfs.c 100 */[TYPE_AND_DATA_SIZE];
}
