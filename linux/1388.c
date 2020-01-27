cocci_test_suite() {
	const struct typec_altmode *cocci_id/* drivers/usb/typec/ucsi/displayport.c 59 */;
	u8 cocci_id/* drivers/usb/typec/ucsi/displayport.c 53 */;
	struct ucsi *cocci_id/* drivers/usb/typec/ucsi/displayport.c 51 */;
	struct typec_altmode *cocci_id/* drivers/usb/typec/ucsi/displayport.c 48 */;
	struct typec_altmode_desc *cocci_id/* drivers/usb/typec/ucsi/displayport.c 281 */;
	bool cocci_id/* drivers/usb/typec/ucsi/displayport.c 280 */;
	struct ucsi_connector *cocci_id/* drivers/usb/typec/ucsi/displayport.c 279 */;
	void cocci_id/* drivers/usb/typec/ucsi/displayport.c 266 */;
	struct ucsi_dp cocci_id/* drivers/usb/typec/ucsi/displayport.c 249 */;
	struct work_struct *cocci_id/* drivers/usb/typec/ucsi/displayport.c 247 */;
	const struct typec_altmode_ops cocci_id/* drivers/usb/typec/ucsi/displayport.c 241 */;
	const u32 *cocci_id/* drivers/usb/typec/ucsi/displayport.c 184 */;
	struct ucsi_dp {
		struct typec_displayport_data data;
		struct ucsi_connector *con;
		struct typec_altmode *alt;
		struct work_struct work;
		int offset;
		bool override;
		bool initialized;
		u32 header;
		u32 *vdo_data;
		u8 vdo_size;
	} cocci_id/* drivers/usb/typec/ucsi/displayport.c 18 */;
	u64 cocci_id/* drivers/usb/typec/ucsi/displayport.c 173 */;
	u32 cocci_id/* drivers/usb/typec/ucsi/displayport.c 172 */;
	struct ucsi_dp *cocci_id/* drivers/usb/typec/ucsi/displayport.c 170 */;
	int cocci_id/* drivers/usb/typec/ucsi/displayport.c 170 */;
}
