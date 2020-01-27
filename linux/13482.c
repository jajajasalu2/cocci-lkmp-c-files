cocci_test_suite() {
	u32 *cocci_id/* drivers/media/usb/dvb-usb/vp702x-fe.c 91 */;
	enum fe_status *cocci_id/* drivers/media/usb/dvb-usb/vp702x-fe.c 72 */;
	u8 cocci_id/* drivers/media/usb/dvb-usb/vp702x-fe.c 62 */;
	u8 *cocci_id/* drivers/media/usb/dvb-usb/vp702x-fe.c 62 */;
	int cocci_id/* drivers/media/usb/dvb-usb/vp702x-fe.c 62 */;
	struct vp702x_device_state *cocci_id/* drivers/media/usb/dvb-usb/vp702x-fe.c 40 */;
	struct dvb_frontend_ops cocci_id/* drivers/media/usb/dvb-usb/vp702x-fe.c 332 */;
	struct vp702x_fe_state cocci_id/* drivers/media/usb/dvb-usb/vp702x-fe.c 326 */;
	struct vp702x_fe_state *cocci_id/* drivers/media/usb/dvb-usb/vp702x-fe.c 326 */;
	struct dvb_usb_device *cocci_id/* drivers/media/usb/dvb-usb/vp702x-fe.c 324 */;
	struct dvb_frontend *cocci_id/* drivers/media/usb/dvb-usb/vp702x-fe.c 324 */;
	const struct dvb_frontend_ops cocci_id/* drivers/media/usb/dvb-usb/vp702x-fe.c 322 */;
	void cocci_id/* drivers/media/usb/dvb-usb/vp702x-fe.c 316 */;
	enum fe_sec_voltage cocci_id/* drivers/media/usb/dvb-usb/vp702x-fe.c 285 */;
	enum fe_sec_tone_mode cocci_id/* drivers/media/usb/dvb-usb/vp702x-fe.c 251 */;
	enum fe_sec_mini_cmd cocci_id/* drivers/media/usb/dvb-usb/vp702x-fe.c 244 */;
	struct dvb_diseqc_master_cmd *cocci_id/* drivers/media/usb/dvb-usb/vp702x-fe.c 212 */;
	struct vp702x_fe_state {
		struct dvb_frontend fe;
		struct dvb_usb_device *d;
		struct dvb_frontend_ops ops;
		enum fe_sec_voltage voltage;
		enum fe_sec_tone_mode tone_mode;
		u8 lnb_buf[8];
		u8 lock;
		u8 sig;
		u8 snr;
		unsigned long next_status_check;
		unsigned long status_check_interval;
	} cocci_id/* drivers/media/usb/dvb-usb/vp702x-fe.c 19 */;
	unsigned long cocci_id/* drivers/media/usb/dvb-usb/vp702x-fe.c 163 */;
	u64 cocci_id/* drivers/media/usb/dvb-usb/vp702x-fe.c 143 */;
	u32 cocci_id/* drivers/media/usb/dvb-usb/vp702x-fe.c 140 */;
	struct dtv_frontend_properties *cocci_id/* drivers/media/usb/dvb-usb/vp702x-fe.c 137 */;
	struct dvb_frontend_tune_settings *cocci_id/* drivers/media/usb/dvb-usb/vp702x-fe.c 128 */;
	u16 *cocci_id/* drivers/media/usb/dvb-usb/vp702x-fe.c 108 */;
}
