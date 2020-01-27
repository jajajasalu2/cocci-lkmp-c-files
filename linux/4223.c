cocci_test_suite() {
	struct response_info {
		void *data;
		size_t max_size;
		size_t size;
		int error;
		bool received;
		wait_queue_head_t wait_queue;
	} cocci_id/* drivers/platform/chrome/cros_ec_ishtp.c 94 */;
	void __exit cocci_id/* drivers/platform/chrome/cros_ec_ishtp.c 763 */;
	void cocci_id/* drivers/platform/chrome/cros_ec_ishtp.c 763 */;
	int __init cocci_id/* drivers/platform/chrome/cros_ec_ishtp.c 758 */;
	struct ishtp_cl_driver cocci_id/* drivers/platform/chrome/cros_ec_ishtp.c 747 */;
	int __maybe_unused cocci_id/* drivers/platform/chrome/cros_ec_ishtp.c 735 */;
	struct ishtp_cl *cocci_id/* drivers/platform/chrome/cros_ec_ishtp.c 623 */;
	struct ishtp_cl_device *cocci_id/* drivers/platform/chrome/cros_ec_ishtp.c 620 */;
	struct cros_ish_in_msg {
		struct header hdr;
		struct ec_host_response ec_response;
	}__packed cocci_id/* drivers/platform/chrome/cros_ec_ishtp.c 57 */;
	struct cros_ish_out_msg cocci_id/* drivers/platform/chrome/cros_ec_ishtp.c 561 */;
	struct ec_response_get_protocol_info cocci_id/* drivers/platform/chrome/cros_ec_ishtp.c 560 */;
	struct cros_ish_in_msg cocci_id/* drivers/platform/chrome/cros_ec_ishtp.c 559 */;
	struct device *cocci_id/* drivers/platform/chrome/cros_ec_ishtp.c 545 */;
	struct cros_ec_device *cocci_id/* drivers/platform/chrome/cros_ec_ishtp.c 544 */;
	struct ishtp_cl_data *cocci_id/* drivers/platform/chrome/cros_ec_ishtp.c 542 */;
	int cocci_id/* drivers/platform/chrome/cros_ec_ishtp.c 542 */;
	struct cros_ish_out_msg {
		struct header hdr;
		struct ec_host_request ec_request;
	}__packed cocci_id/* drivers/platform/chrome/cros_ec_ishtp.c 52 */;
	u8 *cocci_id/* drivers/platform/chrome/cros_ec_ishtp.c 515 */;
	size_t cocci_id/* drivers/platform/chrome/cros_ec_ishtp.c 472 */;
	struct cros_ish_out_msg *cocci_id/* drivers/platform/chrome/cros_ec_ishtp.c 470 */;
	struct cros_ish_in_msg *cocci_id/* drivers/platform/chrome/cros_ec_ishtp.c 469 */;
	struct cros_ec_command *cocci_id/* drivers/platform/chrome/cros_ec_ishtp.c 463 */;
	struct header {
		u8 channel;
		u8 status;
		u8 reserved[2];
	}__packed cocci_id/* drivers/platform/chrome/cros_ec_ishtp.c 46 */;
	struct ec_host_response cocci_id/* drivers/platform/chrome/cros_ec_ishtp.c 447 */;
	u8 cocci_id/* drivers/platform/chrome/cros_ec_ishtp.c 431 */;
	const struct cros_ish_in_msg *cocci_id/* drivers/platform/chrome/cros_ec_ishtp.c 428 */;
	const guid_t cocci_id/* drivers/platform/chrome/cros_ec_ishtp.c 42 */;
	struct ishtp_fw_client *cocci_id/* drivers/platform/chrome/cros_ec_ishtp.c 357 */;
	struct ishtp_device *cocci_id/* drivers/platform/chrome/cros_ec_ishtp.c 356 */;
	ktime_t cocci_id/* drivers/platform/chrome/cros_ec_ishtp.c 331 */;
	struct ishtp_cl_rb *cocci_id/* drivers/platform/chrome/cros_ec_ishtp.c 329 */;
	enum cros_ec_ish_channel{CROS_EC_COMMAND=1, CROS_MKBP_EVENT=2,} cocci_id/* drivers/platform/chrome/cros_ec_ishtp.c 30 */;
	struct header cocci_id/* drivers/platform/chrome/cros_ec_ishtp.c 238 */;
	struct header *cocci_id/* drivers/platform/chrome/cros_ec_ishtp.c 164 */;
	bool cocci_id/* drivers/platform/chrome/cros_ec_ishtp.c 139 */;
	struct ishtp_cl_data cocci_id/* drivers/platform/chrome/cros_ec_ishtp.c 137 */;
	struct work_struct *cocci_id/* drivers/platform/chrome/cros_ec_ishtp.c 134 */;
	struct ishtp_cl_data {
		struct ishtp_cl *cros_ish_cl;
		struct ishtp_cl_device *cl_device;
		struct response_info response;
		struct work_struct work_ishtp_reset;
		struct work_struct work_ec_evt;
		struct cros_ec_device *ec_dev;
	} cocci_id/* drivers/platform/chrome/cros_ec_ishtp.c 115 */;
}
