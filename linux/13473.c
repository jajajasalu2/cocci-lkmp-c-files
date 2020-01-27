cocci_test_suite() {
	u16 *cocci_id/* drivers/media/usb/dvb-usb/dtt200u-fe.c 88 */;
	u32 *cocci_id/* drivers/media/usb/dvb-usb/dtt200u-fe.c 56 */;
	enum fe_status *cocci_id/* drivers/media/usb/dvb-usb/dtt200u-fe.c 24 */;
	struct dvb_frontend_ops cocci_id/* drivers/media/usb/dvb-usb/dtt200u-fe.c 218 */;
	struct dtt200u_fe_state cocci_id/* drivers/media/usb/dvb-usb/dtt200u-fe.c 209 */;
	struct dtt200u_fe_state *cocci_id/* drivers/media/usb/dvb-usb/dtt200u-fe.c 206 */;
	struct dvb_usb_device *cocci_id/* drivers/media/usb/dvb-usb/dtt200u-fe.c 204 */;
	struct dvb_frontend *cocci_id/* drivers/media/usb/dvb-usb/dtt200u-fe.c 204 */;
	const struct dvb_frontend_ops cocci_id/* drivers/media/usb/dvb-usb/dtt200u-fe.c 202 */;
	void cocci_id/* drivers/media/usb/dvb-usb/dtt200u-fe.c 196 */;
	struct dtv_frontend_properties cocci_id/* drivers/media/usb/dvb-usb/dtt200u-fe.c 192 */;
	struct dtv_frontend_properties *cocci_id/* drivers/media/usb/dvb-usb/dtt200u-fe.c 188 */;
	int cocci_id/* drivers/media/usb/dvb-usb/dtt200u-fe.c 187 */;
	u16 cocci_id/* drivers/media/usb/dvb-usb/dtt200u-fe.c 152 */;
	struct dvb_frontend_tune_settings *cocci_id/* drivers/media/usb/dvb-usb/dtt200u-fe.c 139 */;
	struct dtt200u_fe_state {
		struct dvb_usb_device *d;
		enum fe_status stat;
		struct dtv_frontend_properties fep;
		struct dvb_frontend frontend;
		unsigned char data[80];
		struct mutex data_mutex;
	} cocci_id/* drivers/media/usb/dvb-usb/dtt200u-fe.c 11 */;
}
