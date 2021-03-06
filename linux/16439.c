cocci_test_suite() {
	const u8 cocci_id/* drivers/hid/usbhid/hid-pidff.c 99 */[];
	int *cocci_id/* drivers/hid/usbhid/hid-pidff.c 894 */;
	struct hid_report *cocci_id/* drivers/hid/usbhid/hid-pidff.c 759 */;
	const u8 *cocci_id/* drivers/hid/usbhid/hid-pidff.c 758 */;
	struct pidff_usage *cocci_id/* drivers/hid/usbhid/hid-pidff.c 758 */;
	struct hid_field *cocci_id/* drivers/hid/usbhid/hid-pidff.c 721 */;
	u16 cocci_id/* drivers/hid/usbhid/hid-pidff.c 719 */;
	void cocci_id/* drivers/hid/usbhid/hid-pidff.c 719 */;
	struct ff_condition_effect *cocci_id/* drivers/hid/usbhid/hid-pidff.c 405 */;
	struct ff_effect *cocci_id/* drivers/hid/usbhid/hid-pidff.c 398 */;
	struct ff_envelope *cocci_id/* drivers/hid/usbhid/hid-pidff.c 261 */;
	s16 cocci_id/* drivers/hid/usbhid/hid-pidff.c 214 */;
	struct pidff_device {
		struct hid_device *hid;
		struct hid_report *reports[sizeof(pidff_reports)];
		struct pidff_usage set_effect[sizeof(pidff_set_effect)];
		struct pidff_usage set_envelope[sizeof(pidff_set_envelope)];
		struct pidff_usage set_condition[sizeof(pidff_set_condition)];
		struct pidff_usage set_periodic[sizeof(pidff_set_periodic)];
		struct pidff_usage set_constant[sizeof(pidff_set_constant)];
		struct pidff_usage set_ramp[sizeof(pidff_set_ramp)];
		struct pidff_usage device_gain[sizeof(pidff_device_gain)];
		struct pidff_usage block_load[sizeof(pidff_block_load)];
		struct pidff_usage pool[sizeof(pidff_pool)];
		struct pidff_usage effect_operation[sizeof(pidff_effect_operation)];
		struct pidff_usage block_free[sizeof(pidff_block_free)];
		struct hid_field *create_new_effect_type;
		struct hid_field *set_effect_type;
		struct hid_field *effect_direction;
		struct hid_field *device_control;
		struct hid_field *block_load_status;
		struct hid_field *effect_operation_status;
		int control_id[sizeof(pidff_device_control)];
		int type_id[sizeof(pidff_effect_types)];
		int status_id[sizeof(pidff_block_load_status)];
		int operation_id[sizeof(pidff_effect_operation_status)];
		int pid_id[PID_EFFECTS_MAX];
	} cocci_id/* drivers/hid/usbhid/hid-pidff.c 144 */;
	struct pidff_usage {
		struct hid_field *field;
		s32 *value;
	} cocci_id/* drivers/hid/usbhid/hid-pidff.c 139 */;
	struct ff_device *cocci_id/* drivers/hid/usbhid/hid-pidff.c 1232 */;
	struct input_dev *cocci_id/* drivers/hid/usbhid/hid-pidff.c 1231 */;
	struct hid_input cocci_id/* drivers/hid/usbhid/hid-pidff.c 1230 */;
	struct hid_input *cocci_id/* drivers/hid/usbhid/hid-pidff.c 1229 */;
	struct pidff_device *cocci_id/* drivers/hid/usbhid/hid-pidff.c 1228 */;
	struct hid_device *cocci_id/* drivers/hid/usbhid/hid-pidff.c 1226 */;
	int cocci_id/* drivers/hid/usbhid/hid-pidff.c 1226 */;
}
