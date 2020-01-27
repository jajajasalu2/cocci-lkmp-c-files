cocci_test_suite() {
	struct dvb_frontend_tune_settings *cocci_id/* drivers/media/usb/ttusb-dec/ttusbdecfe.c 94 */;
	u8 cocci_id/* drivers/media/usb/ttusb-dec/ttusbdecfe.c 42 */[4];
	enum fe_status *cocci_id/* drivers/media/usb/ttusb-dec/ttusbdecfe.c 28 */;
	struct dvb_frontend_ops cocci_id/* drivers/media/usb/ttusb-dec/ttusbdecfe.c 231 */;
	struct ttusbdecfe_state cocci_id/* drivers/media/usb/ttusb-dec/ttusbdecfe.c 221 */;
	struct ttusbdecfe_state *cocci_id/* drivers/media/usb/ttusb-dec/ttusbdecfe.c 218 */;
	const struct ttusbdecfe_config *cocci_id/* drivers/media/usb/ttusb-dec/ttusbdecfe.c 216 */;
	struct dvb_frontend *cocci_id/* drivers/media/usb/ttusb-dec/ttusbdecfe.c 216 */;
	const struct dvb_frontend_ops cocci_id/* drivers/media/usb/ttusb-dec/ttusbdecfe.c 214 */;
	void cocci_id/* drivers/media/usb/ttusb-dec/ttusbdecfe.c 188 */;
	enum fe_sec_voltage cocci_id/* drivers/media/usb/ttusb-dec/ttusbdecfe.c 170 */;
	enum fe_sec_tone_mode cocci_id/* drivers/media/usb/ttusb-dec/ttusbdecfe.c 159 */;
	struct ttusbdecfe_state {
		const struct ttusbdecfe_config *config;
		struct dvb_frontend frontend;
		u8 hi_band;
		u8 voltage;
	} cocci_id/* drivers/media/usb/ttusb-dec/ttusbdecfe.c 15 */;
	u8 cocci_id/* drivers/media/usb/ttusb-dec/ttusbdecfe.c 141 */[];
	struct dvb_diseqc_master_cmd *cocci_id/* drivers/media/usb/ttusb-dec/ttusbdecfe.c 138 */;
	int cocci_id/* drivers/media/usb/ttusb-dec/ttusbdecfe.c 138 */;
	__be32 cocci_id/* drivers/media/usb/ttusb-dec/ttusbdecfe.c 118 */;
	struct dtv_frontend_properties *cocci_id/* drivers/media/usb/ttusb-dec/ttusbdecfe.c 105 */;
}
