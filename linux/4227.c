cocci_test_suite() {
	struct ec_response_motion_sense *cocci_id/* drivers/platform/chrome/cros_ec_proto.c 800 */;
	struct ec_params_motion_sense *cocci_id/* drivers/platform/chrome/cros_ec_proto.c 799 */;
	struct ec_response_get_comms_status *cocci_id/* drivers/platform/chrome/cros_ec_proto.c 79 */;
	struct cros_ec_command *cocci_id/* drivers/platform/chrome/cros_ec_proto.c 754 */;
	struct cros_ec_dev *cocci_id/* drivers/platform/chrome/cros_ec_proto.c 752 */;
	int cocci_id/* drivers/platform/chrome/cros_ec_proto.c 752 */;
	u32 cocci_id/* drivers/platform/chrome/cros_ec_proto.c 721 */;
	u8 cocci_id/* drivers/platform/chrome/cros_ec_proto.c 659 */;
	bool *cocci_id/* drivers/platform/chrome/cros_ec_proto.c 656 */;
	u8 cocci_id/* drivers/platform/chrome/cros_ec_proto.c 620 */[sizeof(struct cros_ec_command) + sizeof(ec_dev->event_data.data)];
	struct ec_response_get_next_event_v1 cocci_id/* drivers/platform/chrome/cros_ec_proto.c 615 */;
	struct ec_response_get_next_event cocci_id/* drivers/platform/chrome/cros_ec_proto.c 612 */;
	const int cocci_id/* drivers/platform/chrome/cros_ec_proto.c 602 */;
	struct ec_response_get_next_event_v1 *cocci_id/* drivers/platform/chrome/cros_ec_proto.c 601 */;
	struct {
		struct cros_ec_command msg;
		struct ec_response_get_next_event_v1 event;
	}__packed cocci_id/* drivers/platform/chrome/cros_ec_proto.c 596 */;
	uint32_t cocci_id/* drivers/platform/chrome/cros_ec_proto.c 576 */;
	int (*cocci_id/* drivers/platform/chrome/cros_ec_proto.c 55 */)(struct cros_ec_device *ec,
									struct cros_ec_command *msg);
	struct ec_host_response cocci_id/* drivers/platform/chrome/cros_ec_proto.c 380 */;
	struct ec_host_request cocci_id/* drivers/platform/chrome/cros_ec_proto.c 378 */;
	struct ec_response_get_protocol_info *cocci_id/* drivers/platform/chrome/cros_ec_proto.c 361 */;
	struct device *cocci_id/* drivers/platform/chrome/cros_ec_proto.c 359 */;
	struct ec_response_get_cmd_versions *cocci_id/* drivers/platform/chrome/cros_ec_proto.c 322 */;
	struct ec_params_get_cmd_versions *cocci_id/* drivers/platform/chrome/cros_ec_proto.c 321 */;
	u16 cocci_id/* drivers/platform/chrome/cros_ec_proto.c 319 */;
	u32 *cocci_id/* drivers/platform/chrome/cros_ec_proto.c 319 */;
	struct ec_response_hello *cocci_id/* drivers/platform/chrome/cros_ec_proto.c 257 */;
	struct ec_params_hello *cocci_id/* drivers/platform/chrome/cros_ec_proto.c 256 */;
	struct ec_response_get_protocol_info cocci_id/* drivers/platform/chrome/cros_ec_proto.c 234 */;
	struct ec_host_request *cocci_id/* drivers/platform/chrome/cros_ec_proto.c 21 */;
	struct ec_response_host_event_mask *cocci_id/* drivers/platform/chrome/cros_ec_proto.c 200 */;
	uint32_t *cocci_id/* drivers/platform/chrome/cros_ec_proto.c 198 */;
	struct cros_ec_device *cocci_id/* drivers/platform/chrome/cros_ec_proto.c 165 */;
	u8 *cocci_id/* drivers/platform/chrome/cros_ec_proto.c 134 */;
}
