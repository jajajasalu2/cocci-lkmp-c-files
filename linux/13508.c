cocci_test_suite() {
	struct usb_driver cocci_id/* drivers/media/usb/dvb-usb/technisat-usb2.c 794 */;
	struct technisat_usb2_state *cocci_id/* drivers/media/usb/dvb-usb/technisat-usb2.c 786 */;
	struct dvb_usb_device *cocci_id/* drivers/media/usb/dvb-usb/technisat-usb2.c 782 */;
	struct usb_interface *cocci_id/* drivers/media/usb/dvb-usb/technisat-usb2.c 780 */;
	void cocci_id/* drivers/media/usb/dvb-usb/technisat-usb2.c 780 */;
	const struct usb_device_id *cocci_id/* drivers/media/usb/dvb-usb/technisat-usb2.c 757 */;
	struct technisat_usb2_state cocci_id/* drivers/media/usb/dvb-usb/technisat-usb2.c 707 */;
	struct dvb_usb_device_properties cocci_id/* drivers/media/usb/dvb-usb/technisat-usb2.c 699 */;
	struct usb_device_id cocci_id/* drivers/media/usb/dvb-usb/technisat-usb2.c 692 */[];
	struct ir_raw_event cocci_id/* drivers/media/usb/dvb-usb/technisat-usb2.c 611 */;
	const struct stv6110x_devctl *cocci_id/* drivers/media/usb/dvb-usb/technisat-usb2.c 527 */;
	struct usb_device *cocci_id/* drivers/media/usb/dvb-usb/technisat-usb2.c 520 */;
	struct technisat_usb2_state {
		struct dvb_usb_device *dev;
		struct delayed_work green_led_work;
		u8 power_state;
		u16 last_scan_code;
		u8 buf[64];
	} cocci_id/* drivers/media/usb/dvb-usb/technisat-usb2.c 52 */;
	struct dvb_usb_adapter *cocci_id/* drivers/media/usb/dvb-usb/technisat-usb2.c 518 */;
	struct stv6110x_config cocci_id/* drivers/media/usb/dvb-usb/technisat-usb2.c 512 */;
	u8 cocci_id/* drivers/media/usb/dvb-usb/technisat-usb2.c 471 */[3];
	enum fe_sec_voltage cocci_id/* drivers/media/usb/dvb-usb/technisat-usb2.c 468 */;
	struct stv090x_config cocci_id/* drivers/media/usb/dvb-usb/technisat-usb2.c 464 */;
	u8 cocci_id/* drivers/media/usb/dvb-usb/technisat-usb2.c 454 */[EEPROM_MAC_TOTAL];
	u8 cocci_id/* drivers/media/usb/dvb-usb/technisat-usb2.c 452 */[];
	struct i2c_msg cocci_id/* drivers/media/usb/dvb-usb/technisat-usb2.c 420 */[];
	u8 *cocci_id/* drivers/media/usb/dvb-usb/technisat-usb2.c 417 */;
	u8 cocci_id/* drivers/media/usb/dvb-usb/technisat-usb2.c 408 */;
	u16 cocci_id/* drivers/media/usb/dvb-usb/technisat-usb2.c 408 */;
	const u8 *cocci_id/* drivers/media/usb/dvb-usb/technisat-usb2.c 408 */;
	int cocci_id/* drivers/media/usb/dvb-usb/technisat-usb2.c 38 */;
	struct dvb_usb_device_description **cocci_id/* drivers/media/usb/dvb-usb/technisat-usb2.c 334 */;
	int *cocci_id/* drivers/media/usb/dvb-usb/technisat-usb2.c 334 */;
	struct dvb_usb_device_properties *cocci_id/* drivers/media/usb/dvb-usb/technisat-usb2.c 333 */;
	u32 cocci_id/* drivers/media/usb/dvb-usb/technisat-usb2.c 313 */;
	enum fe_status cocci_id/* drivers/media/usb/dvb-usb/technisat-usb2.c 307 */;
	struct dvb_frontend *cocci_id/* drivers/media/usb/dvb-usb/technisat-usb2.c 301 */;
	struct work_struct *cocci_id/* drivers/media/usb/dvb-usb/technisat-usb2.c 297 */;
	enum technisat_usb2_led_state cocci_id/* drivers/media/usb/dvb-usb/technisat-usb2.c 227 */;
	enum technisat_usb2_led_state{TECH_LED_OFF, TECH_LED_BLINK, TECH_LED_ON, TECH_LED_UNDEFINED,} cocci_id/* drivers/media/usb/dvb-usb/technisat-usb2.c 219 */;
	struct i2c_algorithm cocci_id/* drivers/media/usb/dvb-usb/technisat-usb2.c 202 */;
	struct i2c_adapter *cocci_id/* drivers/media/usb/dvb-usb/technisat-usb2.c 197 */;
	struct i2c_msg *cocci_id/* drivers/media/usb/dvb-usb/technisat-usb2.c 161 */;
}