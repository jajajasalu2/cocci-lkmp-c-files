cocci_test_suite() {
	struct typec_altmode_driver cocci_id/* drivers/usb/typec/altmodes/displayport.c 565 */;
	const struct typec_device_id cocci_id/* drivers/usb/typec/altmodes/displayport.c 559 */[];
	struct dp_altmode {
		struct typec_displayport_data data;
		enum dp_state state;
		struct mutex lock;
		struct work_struct work;
		struct typec_altmode *alt;
		const struct typec_altmode *port;
	} cocci_id/* drivers/usb/typec/altmodes/displayport.c 55 */;
	const struct typec_altmode *cocci_id/* drivers/usb/typec/altmodes/displayport.c 512 */;
	const struct attribute_group cocci_id/* drivers/usb/typec/altmodes/displayport.c 505 */;
	struct attribute *cocci_id/* drivers/usb/typec/altmodes/displayport.c 499 */[];
	enum dp_state{DP_STATE_IDLE, DP_STATE_ENTER, DP_STATE_UPDATE, DP_STATE_CONFIGURE, DP_STATE_EXIT,} cocci_id/* drivers/usb/typec/altmodes/displayport.c 47 */;
	u8 cocci_id/* drivers/usb/typec/altmodes/displayport.c 375 */;
	int cocci_id/* drivers/usb/typec/altmodes/displayport.c 374 */;
	struct dp_altmode *cocci_id/* drivers/usb/typec/altmodes/displayport.c 373 */;
	struct device_attribute *cocci_id/* drivers/usb/typec/altmodes/displayport.c 371 */;
	char *cocci_id/* drivers/usb/typec/altmodes/displayport.c 371 */;
	struct device *cocci_id/* drivers/usb/typec/altmodes/displayport.c 370 */;
	ssize_t cocci_id/* drivers/usb/typec/altmodes/displayport.c 370 */;
	u32 cocci_id/* drivers/usb/typec/altmodes/displayport.c 329 */;
	const char *cocci_id/* drivers/usb/typec/altmodes/displayport.c 326 */;
	size_t cocci_id/* drivers/usb/typec/altmodes/displayport.c 326 */;
	const char *const cocci_id/* drivers/usb/typec/altmodes/displayport.c 318 */[];
	const struct typec_altmode_ops cocci_id/* drivers/usb/typec/altmodes/displayport.c 312 */;
	struct typec_altmode *cocci_id/* drivers/usb/typec/altmodes/displayport.c 307 */;
	const u32 *cocci_id/* drivers/usb/typec/altmodes/displayport.c 250 */;
	const u32 cocci_id/* drivers/usb/typec/altmodes/displayport.c 223 */;
	void cocci_id/* drivers/usb/typec/altmodes/displayport.c 223 */;
	enum{DP_CONF_USB, DP_CONF_DFP_D, DP_CONF_UFP_D, DP_CONF_DUAL_D,} cocci_id/* drivers/usb/typec/altmodes/displayport.c 20 */;
	struct dp_altmode cocci_id/* drivers/usb/typec/altmodes/displayport.c 182 */;
	struct work_struct *cocci_id/* drivers/usb/typec/altmodes/displayport.c 180 */;
	bool cocci_id/* drivers/usb/typec/altmodes/displayport.c 119 */;
}
