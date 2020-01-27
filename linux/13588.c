cocci_test_suite() {
	u8 cocci_id/* drivers/media/usb/dvb-usb-v2/zd1301.c 85 */;
	struct usb_interface *cocci_id/* drivers/media/usb/dvb-usb-v2/zd1301.c 29 */;
	struct zd1301_dev *cocci_id/* drivers/media/usb/dvb-usb-v2/zd1301.c 28 */;
	struct usb_driver cocci_id/* drivers/media/usb/dvb-usb-v2/zd1301.c 274 */;
	const struct usb_device_id cocci_id/* drivers/media/usb/dvb-usb-v2/zd1301.c 266 */[];
	u8 *cocci_id/* drivers/media/usb/dvb-usb-v2/zd1301.c 26 */;
	unsigned int cocci_id/* drivers/media/usb/dvb-usb-v2/zd1301.c 26 */;
	struct zd1301_dev cocci_id/* drivers/media/usb/dvb-usb-v2/zd1301.c 252 */;
	const u8 *cocci_id/* drivers/media/usb/dvb-usb-v2/zd1301.c 25 */;
	struct dvb_usb_device *cocci_id/* drivers/media/usb/dvb-usb-v2/zd1301.c 25 */;
	int cocci_id/* drivers/media/usb/dvb-usb-v2/zd1301.c 25 */;
	const struct dvb_usb_device_properties cocci_id/* drivers/media/usb/dvb-usb-v2/zd1301.c 248 */;
	u8 cocci_id/* drivers/media/usb/dvb-usb-v2/zd1301.c 234 */[3];
	struct zd1301_dev {
#define BUF_LEN 8
		u8 buf[BUF_LEN];
		struct zd1301_demod_platform_data demod_pdata;
		struct mt2060_platform_data mt2060_pdata;
		struct platform_device *platform_device_demod;
		struct i2c_client *i2c_client_tuner;
	} cocci_id/* drivers/media/usb/dvb-usb-v2/zd1301.c 16 */;
	struct dvb_frontend *cocci_id/* drivers/media/usb/dvb-usb-v2/zd1301.c 132 */;
	struct i2c_adapter *cocci_id/* drivers/media/usb/dvb-usb-v2/zd1301.c 131 */;
	struct i2c_board_info cocci_id/* drivers/media/usb/dvb-usb-v2/zd1301.c 130 */;
	struct i2c_client *cocci_id/* drivers/media/usb/dvb-usb-v2/zd1301.c 129 */;
	struct platform_device *cocci_id/* drivers/media/usb/dvb-usb-v2/zd1301.c 128 */;
	struct dvb_usb_adapter *cocci_id/* drivers/media/usb/dvb-usb-v2/zd1301.c 123 */;
	u8 cocci_id/* drivers/media/usb/dvb-usb-v2/zd1301.c 108 */[7];
	u16 cocci_id/* drivers/media/usb/dvb-usb-v2/zd1301.c 103 */;
	void *cocci_id/* drivers/media/usb/dvb-usb-v2/zd1301.c 103 */;
}
