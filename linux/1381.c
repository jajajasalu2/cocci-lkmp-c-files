cocci_test_suite() {
	u8 cocci_id/* drivers/usb/typec/mux/pi3usb30532.c 79 */;
	struct pi3usb30532 *cocci_id/* drivers/usb/typec/mux/pi3usb30532.c 78 */;
	struct typec_mux *cocci_id/* drivers/usb/typec/mux/pi3usb30532.c 76 */;
	int cocci_id/* drivers/usb/typec/mux/pi3usb30532.c 76 */;
	enum typec_orientation cocci_id/* drivers/usb/typec/mux/pi3usb30532.c 49 */;
	struct typec_switch *cocci_id/* drivers/usb/typec/mux/pi3usb30532.c 48 */;
	struct pi3usb30532 {
		struct i2c_client *client;
		struct mutex lock;
		struct typec_switch *sw;
		struct typec_mux *mux;
		u8 conf;
	} cocci_id/* drivers/usb/typec/mux/pi3usb30532.c 23 */;
	struct i2c_driver cocci_id/* drivers/usb/typec/mux/pi3usb30532.c 177 */;
	const struct i2c_device_id cocci_id/* drivers/usb/typec/mux/pi3usb30532.c 171 */[];
	struct typec_mux_desc cocci_id/* drivers/usb/typec/mux/pi3usb30532.c 117 */;
	struct typec_switch_desc cocci_id/* drivers/usb/typec/mux/pi3usb30532.c 116 */;
	struct device *cocci_id/* drivers/usb/typec/mux/pi3usb30532.c 115 */;
	struct i2c_client *cocci_id/* drivers/usb/typec/mux/pi3usb30532.c 113 */;
}
