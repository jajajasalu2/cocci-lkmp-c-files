cocci_test_suite() {
	uint16_t cocci_id/* drivers/media/usb/dvb-usb/cinergyT2-fe.c 29 */;
	struct dvb_frontend_ops cocci_id/* drivers/media/usb/dvb-usb/cinergyT2-fe.c 277 */;
	struct cinergyt2_fe_state cocci_id/* drivers/media/usb/dvb-usb/cinergyT2-fe.c 272 */;
	struct cinergyt2_fe_state *cocci_id/* drivers/media/usb/dvb-usb/cinergyT2-fe.c 271 */;
	struct dvb_usb_device *cocci_id/* drivers/media/usb/dvb-usb/cinergyT2-fe.c 269 */;
	struct dvb_frontend *cocci_id/* drivers/media/usb/dvb-usb/cinergyT2-fe.c 269 */;
	const struct dvb_frontend_ops cocci_id/* drivers/media/usb/dvb-usb/cinergyT2-fe.c 267 */;
	void cocci_id/* drivers/media/usb/dvb-usb/cinergyT2-fe.c 261 */;
	void *cocci_id/* drivers/media/usb/dvb-usb/cinergyT2-fe.c 233 */;
	struct dvbt_set_parameters_msg *cocci_id/* drivers/media/usb/dvb-usb/cinergyT2-fe.c 228 */;
	struct dtv_frontend_properties *cocci_id/* drivers/media/usb/dvb-usb/cinergyT2-fe.c 226 */;
	struct dvb_frontend_tune_settings *cocci_id/* drivers/media/usb/dvb-usb/cinergyT2-fe.c 218 */;
	int cocci_id/* drivers/media/usb/dvb-usb/cinergyT2-fe.c 217 */;
	u16 *cocci_id/* drivers/media/usb/dvb-usb/cinergyT2-fe.c 190 */;
	u32 *cocci_id/* drivers/media/usb/dvb-usb/cinergyT2-fe.c 173 */;
	enum fe_status *cocci_id/* drivers/media/usb/dvb-usb/cinergyT2-fe.c 136 */;
	struct cinergyt2_fe_state {
		struct dvb_frontend fe;
		struct dvb_usb_device *d;
		unsigned char data[64];
		struct mutex data_mutex;
		struct dvbt_get_status_msg status;
	} cocci_id/* drivers/media/usb/dvb-usb/cinergyT2-fe.c 125 */;
}
