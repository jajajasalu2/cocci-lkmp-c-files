cocci_test_suite() {
	struct usb_driver cocci_id/* drivers/media/usb/dvb-usb/dib0700_core.c 935 */;
	struct i2c_client *cocci_id/* drivers/media/usb/dvb-usb/dib0700_core.c 915 */;
	struct usb_interface *cocci_id/* drivers/media/usb/dvb-usb/dib0700_core.c 911 */;
	void cocci_id/* drivers/media/usb/dvb-usb/dib0700_core.c 911 */;
	const struct usb_device_id *cocci_id/* drivers/media/usb/dvb-usb/dib0700_core.c 877 */;
	unsigned int cocci_id/* drivers/media/usb/dvb-usb/dib0700_core.c 813 */;
	const struct usb_endpoint_descriptor *cocci_id/* drivers/media/usb/dvb-usb/dib0700_core.c 811 */;
	struct urb *cocci_id/* drivers/media/usb/dvb-usb/dib0700_core.c 810 */;
	u16 cocci_id/* drivers/media/usb/dvb-usb/dib0700_core.c 73 */;
	enum rc_proto cocci_id/* drivers/media/usb/dvb-usb/dib0700_core.c 712 */;
	struct dib0700_rc_response *cocci_id/* drivers/media/usb/dvb-usb/dib0700_core.c 711 */;
	u8 *cocci_id/* drivers/media/usb/dvb-usb/dib0700_core.c 71 */;
	struct dib0700_rc_response {
		u8 report_id;
		u8 data_state;
		union {
			struct {
				u8 system;
				u8 not_system;
				u8 data;
				u8 not_data;
			} nec;
			struct {
				u8 not_used;
				u8 system;
				u8 data;
				u8 not_data;
			} rc5;
		};
	} cocci_id/* drivers/media/usb/dvb-usb/dib0700_core.c 688 */;
	struct dib0700_state *cocci_id/* drivers/media/usb/dvb-usb/dib0700_core.c 641 */;
	struct dvb_usb_device *cocci_id/* drivers/media/usb/dvb-usb/dib0700_core.c 640 */;
	u64 *cocci_id/* drivers/media/usb/dvb-usb/dib0700_core.c 638 */;
	struct rc_dev *cocci_id/* drivers/media/usb/dvb-usb/dib0700_core.c 638 */;
	int cocci_id/* drivers/media/usb/dvb-usb/dib0700_core.c 638 */;
	struct dvb_usb_adapter *cocci_id/* drivers/media/usb/dvb-usb/dib0700_core.c 581 */;
	struct hexline cocci_id/* drivers/media/usb/dvb-usb/dib0700_core.c 507 */;
	const struct firmware *cocci_id/* drivers/media/usb/dvb-usb/dib0700_core.c 505 */;
	struct usb_device *cocci_id/* drivers/media/usb/dvb-usb/dib0700_core.c 505 */;
	u8 cocci_id/* drivers/media/usb/dvb-usb/dib0700_core.c 465 */;
	u32 cocci_id/* drivers/media/usb/dvb-usb/dib0700_core.c 465 */;
	s16 cocci_id/* drivers/media/usb/dvb-usb/dib0700_core.c 378 */;
	struct dvb_usb_device_description **cocci_id/* drivers/media/usb/dvb-usb/dib0700_core.c 376 */;
	int *cocci_id/* drivers/media/usb/dvb-usb/dib0700_core.c 376 */;
	struct dvb_usb_device_properties *cocci_id/* drivers/media/usb/dvb-usb/dib0700_core.c 375 */;
	struct i2c_algorithm cocci_id/* drivers/media/usb/dvb-usb/dib0700_core.c 370 */;
	struct i2c_adapter *cocci_id/* drivers/media/usb/dvb-usb/dib0700_core.c 365 */;
	struct i2c_msg *cocci_id/* drivers/media/usb/dvb-usb/dib0700_core.c 350 */;
	u32 *cocci_id/* drivers/media/usb/dvb-usb/dib0700_core.c 21 */;
	uint8_t cocci_id/* drivers/media/usb/dvb-usb/dib0700_core.c 166 */;
	enum dib07x0_gpios cocci_id/* drivers/media/usb/dvb-usb/dib0700_core.c 108 */;
}
