cocci_test_suite() {
	enum ttusb_dec_interface cocci_id/* drivers/media/usb/ttusb-dec/ttusb_dec.c 895 */;
	struct ttusb_dec {
		enum ttusb_dec_model model;
		char *model_name;
		char *firmware_name;
		int can_playback;
		struct dvb_adapter adapter;
		struct dmxdev dmxdev;
		struct dvb_demux demux;
		struct dmx_frontend frontend;
		struct dvb_net dvb_net;
		struct dvb_frontend *fe;
		u16 pid[DMX_PES_OTHER];
		struct usb_device *udev;
		u8 trans_count;
		unsigned int command_pipe;
		unsigned int result_pipe;
		unsigned int in_pipe;
		unsigned int out_pipe;
		unsigned int irq_pipe;
		enum ttusb_dec_interface interface;
		struct mutex usb_mutex;
		void *irq_buffer;
		struct urb *irq_urb;
		dma_addr_t irq_dma_handle;
		void *iso_buffer;
		struct urb *iso_urb[ISO_BUF_COUNT];
		int iso_stream_count;
		struct mutex iso_mutex;
		u8 packet[MAX_PVA_LENGTH + 4];
		enum ttusb_dec_packet_type packet_type;
		int packet_state;
		int packet_length;
		int packet_payload_length;
		u16 next_packet_id;
		int pva_stream_count;
		int filter_stream_count;
		struct dvb_filter_pes2ts a_pes2ts;
		struct dvb_filter_pes2ts v_pes2ts;
		u8 v_pes[16 + MAX_PVA_LENGTH];
		int v_pes_length;
		int v_pes_postbytes;
		struct list_head urb_frame_list;
		struct tasklet_struct urb_tasklet;
		spinlock_t urb_frame_list_lock;
		struct dvb_demux_filter *audio_filter;
		struct dvb_demux_filter *video_filter;
		struct list_head filter_info_list;
		spinlock_t filter_info_list_lock;
		struct input_dev *rc_input_dev;
		char rc_phys[64];
		int active;
	} cocci_id/* drivers/media/usb/ttusb-dec/ttusb_dec.c 89 */;
	struct dvb_filter_pes2ts {
		unsigned char buf[188];
		unsigned char cc;
		dvb_filter_pes2ts_cb_t *cb;
		void *priv;
	} cocci_id/* drivers/media/usb/ttusb-dec/ttusb_dec.c 82 */;
	struct usb_iso_packet_descriptor *cocci_id/* drivers/media/usb/ttusb-dec/ttusb_dec.c 804 */;
	int cocci_id/* drivers/media/usb/ttusb-dec/ttusb_dec.c 80 */(void *,
								     unsigned char *);
	enum ttusb_dec_interface{TTUSB_DEC_INTERFACE_INITIAL, TTUSB_DEC_INTERFACE_IN, TTUSB_DEC_INTERFACE_OUT,} cocci_id/* drivers/media/usb/ttusb-dec/ttusb_dec.c 74 */;
	enum ttusb_dec_packet_type{TTUSB_DEC_PACKET_PVA, TTUSB_DEC_PACKET_SECTION, TTUSB_DEC_PACKET_EMPTY,} cocci_id/* drivers/media/usb/ttusb-dec/ttusb_dec.c 68 */;
	u8 *cocci_id/* drivers/media/usb/ttusb-dec/ttusb_dec.c 635 */;
	enum ttusb_dec_model{TTUSB_DEC2000T, TTUSB_DEC2540T, TTUSB_DEC3000S,} cocci_id/* drivers/media/usb/ttusb-dec/ttusb_dec.c 62 */;
	struct dvb_demux_filter *cocci_id/* drivers/media/usb/ttusb-dec/ttusb_dec.c 564 */;
	u8 cocci_id/* drivers/media/usb/ttusb-dec/ttusb_dec.c 386 */[COMMAND_PACKET_SIZE];
	unsigned int *cocci_id/* drivers/media/usb/ttusb-dec/ttusb_dec.c 383 */;
	u8 cocci_id/* drivers/media/usb/ttusb-dec/ttusb_dec.c 306 */;
	u16 cocci_id/* drivers/media/usb/ttusb-dec/ttusb_dec.c 300 */;
	const u8 *cocci_id/* drivers/media/usb/ttusb-dec/ttusb_dec.c 300 */;
	size_t cocci_id/* drivers/media/usb/ttusb-dec/ttusb_dec.c 300 */;
	int cocci_id/* drivers/media/usb/ttusb-dec/ttusb_dec.c 29 */;
	char *cocci_id/* drivers/media/usb/ttusb-dec/ttusb_dec.c 251 */;
	void cocci_id/* drivers/media/usb/ttusb-dec/ttusb_dec.c 245 */(struct ttusb_dec *dec,
								       enum ttusb_dec_model model);
	unsigned char *cocci_id/* drivers/media/usb/ttusb-dec/ttusb_dec.c 212 */;
	struct dvb_filter_pes2ts *cocci_id/* drivers/media/usb/ttusb-dec/ttusb_dec.c 211 */;
	dvb_filter_pes2ts_cb_t *cocci_id/* drivers/media/usb/ttusb-dec/ttusb_dec.c 199 */;
	void *cocci_id/* drivers/media/usb/ttusb-dec/ttusb_dec.c 199 */;
	unsigned short cocci_id/* drivers/media/usb/ttusb-dec/ttusb_dec.c 198 */;
	void cocci_id/* drivers/media/usb/ttusb-dec/ttusb_dec.c 197 */;
	struct usb_driver cocci_id/* drivers/media/usb/ttusb-dec/ttusb_dec.c 1782 */;
	const struct usb_device_id cocci_id/* drivers/media/usb/ttusb-dec/ttusb_dec.c 1774 */[];
	enum ttusb_dec_model cocci_id/* drivers/media/usb/ttusb-dec/ttusb_dec.c 1752 */;
	struct usb_interface *cocci_id/* drivers/media/usb/ttusb-dec/ttusb_dec.c 1731 */;
	u16 cocci_id/* drivers/media/usb/ttusb-dec/ttusb_dec.c 168 */[];
	struct ttusb_dec cocci_id/* drivers/media/usb/ttusb-dec/ttusb_dec.c 1654 */;
	struct usb_device *cocci_id/* drivers/media/usb/ttusb-dec/ttusb_dec.c 1646 */;
	const struct usb_device_id *cocci_id/* drivers/media/usb/ttusb-dec/ttusb_dec.c 1644 */;
	const struct ttusbdecfe_config cocci_id/* drivers/media/usb/ttusb-dec/ttusb_dec.c 1639 */;
	struct ttusb_dec *cocci_id/* drivers/media/usb/ttusb-dec/ttusb_dec.c 1635 */;
	u8 cocci_id/* drivers/media/usb/ttusb-dec/ttusb_dec.c 1633 */[];
	int *cocci_id/* drivers/media/usb/ttusb-dec/ttusb_dec.c 1633 */;
	const u8 cocci_id/* drivers/media/usb/ttusb-dec/ttusb_dec.c 1632 */[];
	const u8 cocci_id/* drivers/media/usb/ttusb-dec/ttusb_dec.c 1631 */;
	struct dvb_frontend *cocci_id/* drivers/media/usb/ttusb-dec/ttusb_dec.c 1631 */;
	struct filter_info cocci_id/* drivers/media/usb/ttusb-dec/ttusb_dec.c 1625 */;
	struct filter_info *cocci_id/* drivers/media/usb/ttusb-dec/ttusb_dec.c 1622 */;
	struct list_head *cocci_id/* drivers/media/usb/ttusb-dec/ttusb_dec.c 1621 */;
	struct filter_info {
		u8 stream_id;
		struct dvb_demux_filter *filter;
		struct list_head filter_info_list;
	} cocci_id/* drivers/media/usb/ttusb-dec/ttusb_dec.c 162 */;
	struct urb_frame cocci_id/* drivers/media/usb/ttusb-dec/ttusb_dec.c 1607 */;
	struct urb_frame *cocci_id/* drivers/media/usb/ttusb-dec/ttusb_dec.c 1602 */;
	struct urb_frame {
		u8 data[ISO_FRAME_SIZE];
		int length;
		struct list_head urb_frame_list;
	} cocci_id/* drivers/media/usb/ttusb-dec/ttusb_dec.c 156 */;
	unsigned int cocci_id/* drivers/media/usb/ttusb-dec/ttusb_dec.c 1417 */;
	const struct firmware *cocci_id/* drivers/media/usb/ttusb-dec/ttusb_dec.c 1322 */;
	u32 cocci_id/* drivers/media/usb/ttusb-dec/ttusb_dec.c 1320 */;
	__be32 cocci_id/* drivers/media/usb/ttusb-dec/ttusb_dec.c 1319 */;
	__be16 cocci_id/* drivers/media/usb/ttusb-dec/ttusb_dec.c 1318 */;
	char cocci_id/* drivers/media/usb/ttusb-dec/ttusb_dec.c 1314 */[21];
	struct input_dev *cocci_id/* drivers/media/usb/ttusb-dec/ttusb_dec.c 1217 */;
	unsigned long cocci_id/* drivers/media/usb/ttusb-dec/ttusb_dec.c 1212 */;
	struct urb *cocci_id/* drivers/media/usb/ttusb-dec/ttusb_dec.c 1192 */;
	struct dvb_demux *cocci_id/* drivers/media/usb/ttusb-dec/ttusb_dec.c 1091 */;
	struct dvb_demux_feed *cocci_id/* drivers/media/usb/ttusb-dec/ttusb_dec.c 1089 */;
}