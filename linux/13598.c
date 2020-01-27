cocci_test_suite() {
	struct usb_driver cocci_id/* drivers/media/usb/dvb-usb-v2/az6007.c 961 */;
	struct usb_interface *cocci_id/* drivers/media/usb/dvb-usb-v2/az6007.c 951 */;
	struct mt2063_config cocci_id/* drivers/media/usb/dvb-usb-v2/az6007.c 95 */;
	pm_message_t cocci_id/* drivers/media/usb/dvb-usb-v2/az6007.c 943 */;
	const struct usb_device_id cocci_id/* drivers/media/usb/dvb-usb-v2/az6007.c 929 */[];
	struct az6007_device_state cocci_id/* drivers/media/usb/dvb-usb-v2/az6007.c 912 */;
	struct dvb_usb_device_properties cocci_id/* drivers/media/usb/dvb-usb-v2/az6007.c 906 */;
	const struct firmware *cocci_id/* drivers/media/usb/dvb-usb-v2/az6007.c 876 */;
	const char **cocci_id/* drivers/media/usb/dvb-usb-v2/az6007.c 837 */;
	struct i2c_algorithm cocci_id/* drivers/media/usb/dvb-usb-v2/az6007.c 832 */;
	u32 cocci_id/* drivers/media/usb/dvb-usb-v2/az6007.c 827 */;
	struct i2c_adapter *cocci_id/* drivers/media/usb/dvb-usb-v2/az6007.c 827 */;
	struct i2c_msg cocci_id/* drivers/media/usb/dvb-usb-v2/az6007.c 742 */[];
	struct az6007_device_state *cocci_id/* drivers/media/usb/dvb-usb-v2/az6007.c 649 */;
	struct dvb_usb_adapter *cocci_id/* drivers/media/usb/dvb-usb-v2/az6007.c 647 */;
	struct drxk_config cocci_id/* drivers/media/usb/dvb-usb-v2/az6007.c 63 */;
	u8 cocci_id/* drivers/media/usb/dvb-usb-v2/az6007.c 611 */[6];
	void cocci_id/* drivers/media/usb/dvb-usb-v2/az6007.c 554 */;
	struct az6007_device_state {
		struct mutex mutex;
		struct mutex ca_mutex;
		struct dvb_ca_en50221 ca;
		unsigned warm:1;
		int (*gate_ctrl)(struct dvb_frontend *, int);
		unsigned char data[4096];
	} cocci_id/* drivers/media/usb/dvb-usb-v2/az6007.c 41 */;
	u8 *cocci_id/* drivers/media/usb/dvb-usb-v2/az6007.c 408 */;
	u16 cocci_id/* drivers/media/usb/dvb-usb-v2/az6007.c 405 */;
	u8 cocci_id/* drivers/media/usb/dvb-usb-v2/az6007.c 404 */;
	struct dvb_usb_device *cocci_id/* drivers/media/usb/dvb-usb-v2/az6007.c 401 */;
	struct dvb_ca_en50221 *cocci_id/* drivers/media/usb/dvb-usb-v2/az6007.c 399 */;
	int cocci_id/* drivers/media/usb/dvb-usb-v2/az6007.c 399 */;
	struct dvb_usb_rc *cocci_id/* drivers/media/usb/dvb-usb-v2/az6007.c 232 */;
	enum rc_proto cocci_id/* drivers/media/usb/dvb-usb-v2/az6007.c 203 */;
	unsigned cocci_id/* drivers/media/usb/dvb-usb-v2/az6007.c 202 */;
	struct dvb_frontend *cocci_id/* drivers/media/usb/dvb-usb-v2/az6007.c 188 */;
	struct usb_device *cocci_id/* drivers/media/usb/dvb-usb-v2/az6007.c 100 */;
}
