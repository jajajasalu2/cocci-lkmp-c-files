cocci_test_suite() {
	struct arm_smccc_res *cocci_id/* drivers/firmware/stratix10-rsu.c 73 */;
	struct stratix10_rsu_priv {
		struct stratix10_svc_chan *chan;
		struct stratix10_svc_client client;
		struct completion completion;
		struct mutex lock;
		struct {
			unsigned long current_image;
			unsigned long fail_image;
			unsigned int version;
			unsigned int state;
			unsigned int error_details;
			unsigned int error_location;
		} status;
		unsigned int retry_counter;
	} cocci_id/* drivers/firmware/stratix10-rsu.c 44 */;
	struct platform_driver cocci_id/* drivers/firmware/stratix10-rsu.c 432 */;
	struct platform_device *cocci_id/* drivers/firmware/stratix10-rsu.c 374 */;
	struct attribute *cocci_id/* drivers/firmware/stratix10-rsu.c 359 */[];
	int cocci_id/* drivers/firmware/stratix10-rsu.c 316 */;
	unsigned long cocci_id/* drivers/firmware/stratix10-rsu.c 315 */;
	const char *cocci_id/* drivers/firmware/stratix10-rsu.c 312 */;
	size_t cocci_id/* drivers/firmware/stratix10-rsu.c 312 */;
	void (*cocci_id/* drivers/firmware/stratix10-rsu.c 28 */)(struct stratix10_svc_client *client,
								  struct stratix10_svc_cb_data *data);
	struct stratix10_rsu_priv *cocci_id/* drivers/firmware/stratix10-rsu.c 211 */;
	struct device_attribute *cocci_id/* drivers/firmware/stratix10-rsu.c 209 */;
	char *cocci_id/* drivers/firmware/stratix10-rsu.c 209 */;
	struct device *cocci_id/* drivers/firmware/stratix10-rsu.c 208 */;
	ssize_t cocci_id/* drivers/firmware/stratix10-rsu.c 208 */;
	struct stratix10_svc_client_msg cocci_id/* drivers/firmware/stratix10-rsu.c 165 */;
	rsu_callback cocci_id/* drivers/firmware/stratix10-rsu.c 163 */;
	enum stratix10_svc_command_code cocci_id/* drivers/firmware/stratix10-rsu.c 161 */;
	unsigned int *cocci_id/* drivers/firmware/stratix10-rsu.c 134 */;
	struct stratix10_svc_cb_data *cocci_id/* drivers/firmware/stratix10-rsu.c 107 */;
	struct stratix10_svc_client *cocci_id/* drivers/firmware/stratix10-rsu.c 106 */;
	void cocci_id/* drivers/firmware/stratix10-rsu.c 106 */;
}
