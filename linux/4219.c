cocci_test_suite() {
	u8 cocci_id/* drivers/platform/chrome/cros_ec_rpmsg.c 80 */;
	unsigned long cocci_id/* drivers/platform/chrome/cros_ec_rpmsg.c 77 */;
	struct ec_host_response *cocci_id/* drivers/platform/chrome/cros_ec_rpmsg.c 76 */;
	struct cros_ec_rpmsg *cocci_id/* drivers/platform/chrome/cros_ec_rpmsg.c 75 */;
	struct cros_ec_command *cocci_id/* drivers/platform/chrome/cros_ec_rpmsg.c 59 */;
	struct cros_ec_device *cocci_id/* drivers/platform/chrome/cros_ec_rpmsg.c 58 */;
	int cocci_id/* drivers/platform/chrome/cros_ec_rpmsg.c 58 */;
	struct cros_ec_rpmsg {
		struct rpmsg_device *rpdev;
		struct completion xfer_ack;
		struct work_struct host_event_work;
		struct rpmsg_endpoint *ept;
	} cocci_id/* drivers/platform/chrome/cros_ec_rpmsg.c 40 */;
	struct cros_ec_rpmsg_response {
		u8 type;
		u8 data[]__aligned(4);
	} cocci_id/* drivers/platform/chrome/cros_ec_rpmsg.c 28 */;
	struct rpmsg_driver cocci_id/* drivers/platform/chrome/cros_ec_rpmsg.c 279 */;
	const struct of_device_id cocci_id/* drivers/platform/chrome/cros_ec_rpmsg.c 273 */[];
	struct ec_host_request cocci_id/* drivers/platform/chrome/cros_ec_rpmsg.c 222 */;
	struct ec_response_get_protocol_info cocci_id/* drivers/platform/chrome/cros_ec_rpmsg.c 221 */;
	struct ec_host_response cocci_id/* drivers/platform/chrome/cros_ec_rpmsg.c 220 */;
	struct device *cocci_id/* drivers/platform/chrome/cros_ec_rpmsg.c 202 */;
	struct rpmsg_channel_info cocci_id/* drivers/platform/chrome/cros_ec_rpmsg.c 191 */;
	struct rpmsg_endpoint *cocci_id/* drivers/platform/chrome/cros_ec_rpmsg.c 188 */;
	struct cros_ec_rpmsg_response cocci_id/* drivers/platform/chrome/cros_ec_rpmsg.c 166 */;
	struct cros_ec_rpmsg_response *cocci_id/* drivers/platform/chrome/cros_ec_rpmsg.c 158 */;
	u32 cocci_id/* drivers/platform/chrome/cros_ec_rpmsg.c 154 */;
	struct rpmsg_device *cocci_id/* drivers/platform/chrome/cros_ec_rpmsg.c 153 */;
	void *cocci_id/* drivers/platform/chrome/cros_ec_rpmsg.c 153 */;
	bool cocci_id/* drivers/platform/chrome/cros_ec_rpmsg.c 146 */;
	struct cros_ec_rpmsg cocci_id/* drivers/platform/chrome/cros_ec_rpmsg.c 143 */;
	struct work_struct *cocci_id/* drivers/platform/chrome/cros_ec_rpmsg.c 140 */;
	void cocci_id/* drivers/platform/chrome/cros_ec_rpmsg.c 139 */;
}
