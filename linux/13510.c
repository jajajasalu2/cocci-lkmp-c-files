cocci_test_suite() {
	enum af9005_usb_table_entry{AFATECH_AF9005, TERRATEC_AF9005, ANSONIC_AF9005,} cocci_id/* drivers/media/usb/dvb-usb/af9005.c 997 */;
	const struct usb_device_id *cocci_id/* drivers/media/usb/dvb-usb/af9005.c 991 */;
	struct usb_interface *cocci_id/* drivers/media/usb/dvb-usb/af9005.c 990 */;
	struct dvb_usb_device_properties cocci_id/* drivers/media/usb/dvb-usb/af9005.c 988 */;
	int *cocci_id/* drivers/media/usb/dvb-usb/af9005.c 960 */;
	struct dvb_usb_device_description **cocci_id/* drivers/media/usb/dvb-usb/af9005.c 959 */;
	struct dvb_usb_device_properties *cocci_id/* drivers/media/usb/dvb-usb/af9005.c 958 */;
	u32 *cocci_id/* drivers/media/usb/dvb-usb/af9005.c 823 */;
	u8 cocci_id/* drivers/media/usb/dvb-usb/af9005.c 802 */[8];
	struct dvb_usb_adapter *cocci_id/* drivers/media/usb/dvb-usb/af9005.c 800 */;
	const struct firmware *cocci_id/* drivers/media/usb/dvb-usb/af9005.c 708 */;
	u8 cocci_id/* drivers/media/usb/dvb-usb/af9005.c 560 */;
	u16 cocci_id/* drivers/media/usb/dvb-usb/af9005.c 556 */;
	u8 *cocci_id/* drivers/media/usb/dvb-usb/af9005.c 553 */;
	struct usb_device *cocci_id/* drivers/media/usb/dvb-usb/af9005.c 553 */;
	int cocci_id/* drivers/media/usb/dvb-usb/af9005.c 553 */;
	struct af9005_device_state *cocci_id/* drivers/media/usb/dvb-usb/af9005.c 48 */;
	struct dvb_usb_device *cocci_id/* drivers/media/usb/dvb-usb/af9005.c 45 */;
	struct i2c_algorithm cocci_id/* drivers/media/usb/dvb-usb/af9005.c 443 */;
	u32 cocci_id/* drivers/media/usb/dvb-usb/af9005.c 438 */;
	struct i2c_adapter *cocci_id/* drivers/media/usb/dvb-usb/af9005.c 438 */;
	struct i2c_msg cocci_id/* drivers/media/usb/dvb-usb/af9005.c 400 */[];
	struct af9005_device_state {
		u8 sequence;
		int led_state;
		unsigned char data[256];
	} cocci_id/* drivers/media/usb/dvb-usb/af9005.c 39 */;
	u8 cocci_id/* drivers/media/usb/dvb-usb/af9005.c 355 */[3];
	void *cocci_id/* drivers/media/usb/dvb-usb/af9005.c 34 */;
	int (*cocci_id/* drivers/media/usb/dvb-usb/af9005.c 32 */)(struct dvb_usb_device *d,
								   u8 *data,
								   int len,
								   u32 *event,
								   int *state);
	bool cocci_id/* drivers/media/usb/dvb-usb/af9005.c 20 */;
	void __exit cocci_id/* drivers/media/usb/dvb-usb/af9005.c 1118 */;
	void cocci_id/* drivers/media/usb/dvb-usb/af9005.c 1118 */;
	int __init cocci_id/* drivers/media/usb/dvb-usb/af9005.c 1094 */;
	struct usb_driver cocci_id/* drivers/media/usb/dvb-usb/af9005.c 1086 */;
	struct af9005_device_state cocci_id/* drivers/media/usb/dvb-usb/af9005.c 1023 */;
	struct usb_device_id cocci_id/* drivers/media/usb/dvb-usb/af9005.c 1003 */[];
}
