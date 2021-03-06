cocci_test_suite() {
	struct dvb_demux_feed *cocci_id/* drivers/media/usb/ttusb-budget/dvb-ttusb-budget.c 886 */;
	struct urb *cocci_id/* drivers/media/usb/ttusb-budget/dvb-ttusb-budget.c 803 */;
	struct ttusb {
		struct dvb_demux dvb_demux;
		struct dmxdev dmxdev;
		struct dvb_net dvbnet;
		struct mutex semi2c;
		struct mutex semusb;
		struct dvb_adapter adapter;
		struct usb_device *dev;
		struct i2c_adapter i2c_adap;
		int disconnecting;
		int iso_streaming;
		unsigned int bulk_out_pipe;
		unsigned int bulk_in_pipe;
		unsigned int isoc_in_pipe;
		void *iso_buffer;
		struct urb *iso_urb[ISO_BUF_COUNT];
		int running_feed_count;
		int last_channel;
		int last_filter;
		u8 c;
		enum fe_sec_tone_mode tone;
		enum fe_sec_voltage voltage;
		int mux_state;
		u8 mux_npacks;
		u8 muxpack[256 + 8];
		int muxpack_ptr,muxpack_len;
		int insync;
		int cc;
		u8 last_result[32];
		int revision;
		struct dvb_frontend *fe;
	} cocci_id/* drivers/media/usb/ttusb-budget/dvb-ttusb-budget.c 79 */;
	struct usb_iso_packet_descriptor *cocci_id/* drivers/media/usb/ttusb-budget/dvb-ttusb-budget.c 748 */;
	__le16 *cocci_id/* drivers/media/usb/ttusb-budget/dvb-ttusb-budget.c 568 */;
	u16 cocci_id/* drivers/media/usb/ttusb-budget/dvb-ttusb-budget.c 558 */;
	unsigned long cocci_id/* drivers/media/usb/ttusb-budget/dvb-ttusb-budget.c 553 */;
	void cocci_id/* drivers/media/usb/ttusb-budget/dvb-ttusb-budget.c 548 */(struct ttusb_channel *channel,
										 const u8 *data,
										 int len);
	enum fe_sec_tone_mode cocci_id/* drivers/media/usb/ttusb-budget/dvb-ttusb-budget.c 519 */;
	enum fe_sec_voltage cocci_id/* drivers/media/usb/ttusb-budget/dvb-ttusb-budget.c 510 */;
	u8 cocci_id/* drivers/media/usb/ttusb-budget/dvb-ttusb-budget.c 472 */[12];
	const struct dvb_diseqc_master_cmd *cocci_id/* drivers/media/usb/ttusb-budget/dvb-ttusb-budget.c 469 */;
	u8 cocci_id/* drivers/media/usb/ttusb-budget/dvb-ttusb-budget.c 407 */[0x20];
	u8 cocci_id/* drivers/media/usb/ttusb-budget/dvb-ttusb-budget.c 367 */[8];
	u8 cocci_id/* drivers/media/usb/ttusb-budget/dvb-ttusb-budget.c 290 */[40];
	const struct firmware *cocci_id/* drivers/media/usb/ttusb-budget/dvb-ttusb-budget.c 288 */;
	struct i2c_msg *cocci_id/* drivers/media/usb/ttusb-budget/dvb-ttusb-budget.c 242 */;
	u8 cocci_id/* drivers/media/usb/ttusb-budget/dvb-ttusb-budget.c 198 */[0x28];
	struct usb_driver cocci_id/* drivers/media/usb/ttusb-budget/dvb-ttusb-budget.c 1793 */;
	const struct usb_device_id cocci_id/* drivers/media/usb/ttusb-budget/dvb-ttusb-budget.c 1784 */[];
	struct usb_interface *cocci_id/* drivers/media/usb/ttusb-budget/dvb-ttusb-budget.c 1756 */;
	void *cocci_id/* drivers/media/usb/ttusb-budget/dvb-ttusb-budget.c 1737 */;
	struct i2c_adapter cocci_id/* drivers/media/usb/ttusb-budget/dvb-ttusb-budget.c 1684 */;
	struct ttusb cocci_id/* drivers/media/usb/ttusb-budget/dvb-ttusb-budget.c 1646 */;
	struct usb_device *cocci_id/* drivers/media/usb/ttusb-budget/dvb-ttusb-budget.c 1636 */;
	const struct usb_device_id *cocci_id/* drivers/media/usb/ttusb-budget/dvb-ttusb-budget.c 1634 */;
	const struct i2c_algorithm cocci_id/* drivers/media/usb/ttusb-budget/dvb-ttusb-budget.c 1629 */;
	void cocci_id/* drivers/media/usb/ttusb-budget/dvb-ttusb-budget.c 1555 */;
	struct stv0297_config cocci_id/* drivers/media/usb/ttusb-budget/dvb-ttusb-budget.c 1549 */;
	u8 *cocci_id/* drivers/media/usb/ttusb-budget/dvb-ttusb-budget.c 150 */;
	u8 cocci_id/* drivers/media/usb/ttusb-budget/dvb-ttusb-budget.c 1390 */[5];
	struct i2c_msg cocci_id/* drivers/media/usb/ttusb-budget/dvb-ttusb-budget.c 1376 */[];
	struct ves1820_config cocci_id/* drivers/media/usb/ttusb-budget/dvb-ttusb-budget.c 1365 */;
	struct i2c_msg cocci_id/* drivers/media/usb/ttusb-budget/dvb-ttusb-budget.c 1347 */;
	u8 cocci_id/* drivers/media/usb/ttusb-budget/dvb-ttusb-budget.c 1346 */[4];
	struct ttusb *cocci_id/* drivers/media/usb/ttusb-budget/dvb-ttusb-budget.c 1344 */;
	struct dtv_frontend_properties *cocci_id/* drivers/media/usb/ttusb-budget/dvb-ttusb-budget.c 1343 */;
	struct tda8083_config cocci_id/* drivers/media/usb/ttusb-budget/dvb-ttusb-budget.c 1336 */;
	const u8 *cocci_id/* drivers/media/usb/ttusb-budget/dvb-ttusb-budget.c 133 */;
	struct stv0299_config cocci_id/* drivers/media/usb/ttusb-budget/dvb-ttusb-budget.c 1301 */;
	u8 cocci_id/* drivers/media/usb/ttusb-budget/dvb-ttusb-budget.c 1237 */;
	u32 cocci_id/* drivers/media/usb/ttusb-budget/dvb-ttusb-budget.c 1235 */;
	struct dvb_frontend *cocci_id/* drivers/media/usb/ttusb-budget/dvb-ttusb-budget.c 1235 */;
	int cocci_id/* drivers/media/usb/ttusb-budget/dvb-ttusb-budget.c 1235 */;
	u8 cocci_id/* drivers/media/usb/ttusb-budget/dvb-ttusb-budget.c 1151 */[];
	struct tda1004x_config cocci_id/* drivers/media/usb/ttusb-budget/dvb-ttusb-budget.c 1143 */;
	const struct firmware **cocci_id/* drivers/media/usb/ttusb-budget/dvb-ttusb-budget.c 1136 */;
	char *cocci_id/* drivers/media/usb/ttusb-budget/dvb-ttusb-budget.c 1136 */;
	struct cx22700_config cocci_id/* drivers/media/usb/ttusb-budget/dvb-ttusb-budget.c 1028 */;
	struct i2c_adapter *cocci_id/* drivers/media/usb/ttusb-budget/dvb-ttusb-budget.c 1000 */;
}
