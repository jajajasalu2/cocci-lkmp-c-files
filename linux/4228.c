cocci_test_suite() {
	uint8_t *cocci_id/* drivers/platform/chrome/cros_ec_debugfs.c 72 */;
	struct ec_params_console_read_v1 *cocci_id/* drivers/platform/chrome/cros_ec_debugfs.c 70 */;
	struct cros_ec_command cocci_id/* drivers/platform/chrome/cros_ec_debugfs.c 66 */;
	struct cros_ec_dev *cocci_id/* drivers/platform/chrome/cros_ec_debugfs.c 64 */;
	struct cros_ec_debugfs cocci_id/* drivers/platform/chrome/cros_ec_debugfs.c 62 */;
	struct work_struct *cocci_id/* drivers/platform/chrome/cros_ec_debugfs.c 58 */;
	struct platform_driver cocci_id/* drivers/platform/chrome/cros_ec_debugfs.c 498 */;
	struct device *cocci_id/* drivers/platform/chrome/cros_ec_debugfs.c 485 */;
	int __maybe_unused cocci_id/* drivers/platform/chrome/cros_ec_debugfs.c 485 */;
	const char *cocci_id/* drivers/platform/chrome/cros_ec_debugfs.c 426 */;
	struct cros_ec_platform *cocci_id/* drivers/platform/chrome/cros_ec_debugfs.c 425 */;
	struct platform_device *cocci_id/* drivers/platform/chrome/cros_ec_debugfs.c 422 */;
	struct cros_ec_debugfs {
		struct cros_ec_dev *ec;
		struct dentry *dir;
		struct circ_buf log_buffer;
		struct cros_ec_command *read_msg;
		struct mutex log_mutex;
		wait_queue_head_t log_wq;
		struct delayed_work log_poll_work;
		struct debugfs_blob_wrapper panicinfo_blob;
	} cocci_id/* drivers/platform/chrome/cros_ec_debugfs.c 41 */;
	struct cros_ec_command *cocci_id/* drivers/platform/chrome/cros_ec_debugfs.c 386 */;
	struct cros_ec_device *cocci_id/* drivers/platform/chrome/cros_ec_debugfs.c 384 */;
	struct cros_ec_debugfs *cocci_id/* drivers/platform/chrome/cros_ec_debugfs.c 374 */;
	void cocci_id/* drivers/platform/chrome/cros_ec_debugfs.c 374 */;
	struct ec_params_console_read_v1 cocci_id/* drivers/platform/chrome/cros_ec_debugfs.c 344 */;
	char *cocci_id/* drivers/platform/chrome/cros_ec_debugfs.c 329 */;
	struct ec_response_get_cmd_versions *cocci_id/* drivers/platform/chrome/cros_ec_debugfs.c 300 */;
	struct ec_params_get_cmd_versions_v1 *cocci_id/* drivers/platform/chrome/cros_ec_debugfs.c 299 */;
	const struct file_operations cocci_id/* drivers/platform/chrome/cros_ec_debugfs.c 274 */;
	char cocci_id/* drivers/platform/chrome/cros_ec_debugfs.c 256 */[32];
	struct ec_response_uptime_info *cocci_id/* drivers/platform/chrome/cros_ec_debugfs.c 255 */;
	struct {
		struct cros_ec_command cmd;
		struct ec_response_uptime_info resp;
	}__packed cocci_id/* drivers/platform/chrome/cros_ec_debugfs.c 251 */;
	struct ec_params_usb_pd_control *cocci_id/* drivers/platform/chrome/cros_ec_debugfs.c 211 */;
	struct ec_response_usb_pd_control_v1 *cocci_id/* drivers/platform/chrome/cros_ec_debugfs.c 210 */;
	struct {
		struct cros_ec_command msg;
		union {
			struct ec_response_usb_pd_control_v1 resp;
			struct ec_params_usb_pd_control params;
		};
	}__packed cocci_id/* drivers/platform/chrome/cros_ec_debugfs.c 202 */;
	char cocci_id/* drivers/platform/chrome/cros_ec_debugfs.c 199 */[EC_USB_PD_MAX_PORTS * 40];
	poll_table *cocci_id/* drivers/platform/chrome/cros_ec_debugfs.c 172 */;
	__poll_t cocci_id/* drivers/platform/chrome/cros_ec_debugfs.c 171 */;
	struct circ_buf *cocci_id/* drivers/platform/chrome/cros_ec_debugfs.c 132 */;
	loff_t *cocci_id/* drivers/platform/chrome/cros_ec_debugfs.c 129 */;
	size_t cocci_id/* drivers/platform/chrome/cros_ec_debugfs.c 129 */;
	char __user *cocci_id/* drivers/platform/chrome/cros_ec_debugfs.c 128 */;
	ssize_t cocci_id/* drivers/platform/chrome/cros_ec_debugfs.c 128 */;
	struct inode *cocci_id/* drivers/platform/chrome/cros_ec_debugfs.c 121 */;
	struct file *cocci_id/* drivers/platform/chrome/cros_ec_debugfs.c 121 */;
	int cocci_id/* drivers/platform/chrome/cros_ec_debugfs.c 121 */;
}
