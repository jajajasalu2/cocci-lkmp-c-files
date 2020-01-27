cocci_test_suite() {
	struct i2c_msg cocci_id/* drivers/media/usb/dvb-usb-v2/dvbsky.c 99 */[];
	u8 cocci_id/* drivers/media/usb/dvb-usb-v2/dvbsky.c 89 */[3];
	struct usb_driver cocci_id/* drivers/media/usb/dvb-usb-v2/dvbsky.c 796 */;
	struct dvb_frontend *cocci_id/* drivers/media/usb/dvb-usb-v2/dvbsky.c 78 */;
	const struct usb_device_id cocci_id/* drivers/media/usb/dvb-usb-v2/dvbsky.c 748 */[];
	const u8 cocci_id/* drivers/media/usb/dvb-usb-v2/dvbsky.c 62 */[3];
	struct dvbsky_state cocci_id/* drivers/media/usb/dvb-usb-v2/dvbsky.c 618 */;
	struct dvb_usb_device_properties cocci_id/* drivers/media/usb/dvb-usb-v2/dvbsky.c 614 */;
	struct dvbsky_state *cocci_id/* drivers/media/usb/dvb-usb-v2/dvbsky.c 602 */;
	struct dvb_usb_adapter *cocci_id/* drivers/media/usb/dvb-usb-v2/dvbsky.c 599 */;
	const char **cocci_id/* drivers/media/usb/dvb-usb-v2/dvbsky.c 578 */;
	struct si2157_config cocci_id/* drivers/media/usb/dvb-usb-v2/dvbsky.c 538 */;
	struct si2168_config cocci_id/* drivers/media/usb/dvb-usb-v2/dvbsky.c 537 */;
	u16 cocci_id/* drivers/media/usb/dvb-usb-v2/dvbsky.c 40 */;
	u8 *cocci_id/* drivers/media/usb/dvb-usb-v2/dvbsky.c 40 */;
	struct sp2_config cocci_id/* drivers/media/usb/dvb-usb-v2/dvbsky.c 383 */;
	u8 cocci_id/* drivers/media/usb/dvb-usb-v2/dvbsky.c 350 */[4];
	struct dvb_usb_device *cocci_id/* drivers/media/usb/dvb-usb-v2/dvbsky.c 348 */;
	int *cocci_id/* drivers/media/usb/dvb-usb-v2/dvbsky.c 346 */;
	u8 cocci_id/* drivers/media/usb/dvb-usb-v2/dvbsky.c 345 */;
	void *cocci_id/* drivers/media/usb/dvb-usb-v2/dvbsky.c 345 */;
	enum fe_sec_voltage cocci_id/* drivers/media/usb/dvb-usb-v2/dvbsky.c 330 */;
	struct ts2020_config cocci_id/* drivers/media/usb/dvb-usb-v2/dvbsky.c 280 */;
	struct m88ds3103_platform_data cocci_id/* drivers/media/usb/dvb-usb-v2/dvbsky.c 279 */;
	enum fe_status *cocci_id/* drivers/media/usb/dvb-usb-v2/dvbsky.c 258 */;
	struct dvbsky_state {
		u8 ibuf[DVBSKY_BUF_LEN];
		u8 obuf[DVBSKY_BUF_LEN];
		u8 last_lock;
		struct i2c_client *i2c_client_demod;
		struct i2c_client *i2c_client_tuner;
		struct i2c_client *i2c_client_ci;
		int (*fe_set_voltage)(struct dvb_frontend *fe,
				      enum fe_sec_voltage voltage);
		int (*fe_read_status)(struct dvb_frontend *fe,
				      enum fe_status *status);
	} cocci_id/* drivers/media/usb/dvb-usb-v2/dvbsky.c 24 */;
	u8 cocci_id/* drivers/media/usb/dvb-usb-v2/dvbsky.c 235 */[];
	u8 cocci_id/* drivers/media/usb/dvb-usb-v2/dvbsky.c 232 */[6];
	struct dvb_usb_rc *cocci_id/* drivers/media/usb/dvb-usb-v2/dvbsky.c 200 */;
	u8 cocci_id/* drivers/media/usb/dvb-usb-v2/dvbsky.c 182 */[2];
	int cocci_id/* drivers/media/usb/dvb-usb-v2/dvbsky.c 18 */;
	struct i2c_algorithm cocci_id/* drivers/media/usb/dvb-usb-v2/dvbsky.c 172 */;
	u32 cocci_id/* drivers/media/usb/dvb-usb-v2/dvbsky.c 167 */;
	struct i2c_adapter *cocci_id/* drivers/media/usb/dvb-usb-v2/dvbsky.c 167 */;
	u8 cocci_id/* drivers/media/usb/dvb-usb-v2/dvbsky.c 104 */[64];
}
