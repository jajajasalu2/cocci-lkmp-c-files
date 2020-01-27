cocci_test_suite() {
	struct i2c_msg cocci_id/* drivers/media/usb/dvb-usb-v2/gl861.c 87 */[];
	struct usb_driver cocci_id/* drivers/media/usb/dvb-usb-v2/gl861.c 561 */;
	const struct usb_device_id cocci_id/* drivers/media/usb/dvb-usb-v2/gl861.c 550 */[];
	struct gl861 cocci_id/* drivers/media/usb/dvb-usb-v2/gl861.c 530 */;
	struct dvb_usb_device_properties cocci_id/* drivers/media/usb/dvb-usb-v2/gl861.c 525 */;
	struct dvb_frontend *cocci_id/* drivers/media/usb/dvb-usb-v2/gl861.c 516 */;
	struct dvb_usb_device *cocci_id/* drivers/media/usb/dvb-usb-v2/gl861.c 511 */;
	void cocci_id/* drivers/media/usb/dvb-usb-v2/gl861.c 511 */;
	const u8 cocci_id/* drivers/media/usb/dvb-usb-v2/gl861.c 480 */[][2];
	struct dvb_pll_config cocci_id/* drivers/media/usb/dvb-usb-v2/gl861.c 448 */;
	struct gl861 *cocci_id/* drivers/media/usb/dvb-usb-v2/gl861.c 419 */;
	struct i2c_client *cocci_id/* drivers/media/usb/dvb-usb-v2/gl861.c 418 */;
	struct tc90522_config cocci_id/* drivers/media/usb/dvb-usb-v2/gl861.c 417 */;
	const struct i2c_board_info *cocci_id/* drivers/media/usb/dvb-usb-v2/gl861.c 415 */;
	struct dvb_usb_adapter *cocci_id/* drivers/media/usb/dvb-usb-v2/gl861.c 413 */;
	unsigned int cocci_id/* drivers/media/usb/dvb-usb-v2/gl861.c 36 */;
	struct usb_interface *cocci_id/* drivers/media/usb/dvb-usb-v2/gl861.c 34 */;
	u8 cocci_id/* drivers/media/usb/dvb-usb-v2/gl861.c 330 */[1];
	void *cocci_id/* drivers/media/usb/dvb-usb-v2/gl861.c 31 */;
	u16 cocci_id/* drivers/media/usb/dvb-usb-v2/gl861.c 30 */;
	u8 cocci_id/* drivers/media/usb/dvb-usb-v2/gl861.c 268 */;
	u8 *cocci_id/* drivers/media/usb/dvb-usb-v2/gl861.c 266 */;
	struct i2c_msg cocci_id/* drivers/media/usb/dvb-usb-v2/gl861.c 265 */;
	u32 cocci_id/* drivers/media/usb/dvb-usb-v2/gl861.c 262 */;
	int cocci_id/* drivers/media/usb/dvb-usb-v2/gl861.c 261 */;
	const struct friio_config cocci_id/* drivers/media/usb/dvb-usb-v2/gl861.c 243 */;
	struct friio_config {
		struct i2c_board_info demod_info;
		struct tc90522_config demod_cfg;
		struct i2c_board_info tuner_info;
		struct dvb_pll_config tuner_cfg;
	} cocci_id/* drivers/media/usb/dvb-usb-v2/gl861.c 235 */;
	struct qt1010_config cocci_id/* drivers/media/usb/dvb-usb-v2/gl861.c 188 */;
	struct zl10353_config cocci_id/* drivers/media/usb/dvb-usb-v2/gl861.c 171 */;
	struct gl861 {
		u8 buf[16];
		struct i2c_adapter *demod_sub_i2c;
		struct i2c_client *i2c_client_demod;
		struct i2c_client *i2c_client_tuner;
	} cocci_id/* drivers/media/usb/dvb-usb-v2/gl861.c 17 */;
	struct i2c_algorithm cocci_id/* drivers/media/usb/dvb-usb-v2/gl861.c 165 */;
	struct i2c_adapter *cocci_id/* drivers/media/usb/dvb-usb-v2/gl861.c 160 */;
}
