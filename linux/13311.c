cocci_test_suite() {
	loff_t *cocci_id/* drivers/media/pci/ttpci/av7110_av.c 997 */;
	__poll_t cocci_id/* drivers/media/pci/ttpci/av7110_av.c 977 */;
	poll_table *cocci_id/* drivers/media/pci/ttpci/av7110_av.c 977 */;
	unsigned char *cocci_id/* drivers/media/pci/ttpci/av7110_av.c 93 */;
	struct dvb_video_events *cocci_id/* drivers/media/pci/ttpci/av7110_av.c 869 */;
	struct video_event *cocci_id/* drivers/media/pci/ttpci/av7110_av.c 867 */;
	struct dvb_filter_pes2ts *cocci_id/* drivers/media/pci/ttpci/av7110_av.c 78 */;
	u8 cocci_id/* drivers/media/pci/ttpci/av7110_av.c 765 */[TS_SIZE];
	int cocci_id/* drivers/media/pci/ttpci/av7110_av.c 75 */(struct av7110 *av7110,
								 int type,
								 const u8 *buf,
								 size_t len);
	u8 cocci_id/* drivers/media/pci/ttpci/av7110_av.c 731 */[4];
	void cocci_id/* drivers/media/pci/ttpci/av7110_av.c 73 */(const u8 *buf,
								  long int length,
								  u16 pid,
								  u8 *counter,
								  struct dvb_demux_feed *feed);
	u8 cocci_id/* drivers/media/pci/ttpci/av7110_av.c 726 */;
	u16 cocci_id/* drivers/media/pci/ttpci/av7110_av.c 631 */;
	long int cocci_id/* drivers/media/pci/ttpci/av7110_av.c 631 */;
	struct av7110_p2t *cocci_id/* drivers/media/pci/ttpci/av7110_av.c 564 */;
	const char __user *cocci_id/* drivers/media/pci/ttpci/av7110_av.c 532 */;
	ssize_t cocci_id/* drivers/media/pci/ttpci/av7110_av.c 532 */;
	int cocci_id/* drivers/media/pci/ttpci/av7110_av.c 388 */;
	const u8 *cocci_id/* drivers/media/pci/ttpci/av7110_av.c 385 */;
	unsigned long cocci_id/* drivers/media/pci/ttpci/av7110_av.c 385 */;
	struct dvb_ringbuffer *cocci_id/* drivers/media/pci/ttpci/av7110_av.c 384 */;
	long cocci_id/* drivers/media/pci/ttpci/av7110_av.c 384 */;
	enum av7110_video_mode cocci_id/* drivers/media/pci/ttpci/av7110_av.c 338 */[16];
	enum av7110_video_mode cocci_id/* drivers/media/pci/ttpci/av7110_av.c 319 */;
	unsigned int cocci_id/* drivers/media/pci/ttpci/av7110_av.c 266 */;
	size_t cocci_id/* drivers/media/pci/ttpci/av7110_av.c 257 */;
	u32 cocci_id/* drivers/media/pci/ttpci/av7110_av.c 223 */;
	struct av7110 *cocci_id/* drivers/media/pci/ttpci/av7110_av.c 1676 */;
	void cocci_id/* drivers/media/pci/ttpci/av7110_av.c 1676 */;
	u8 *cocci_id/* drivers/media/pci/ttpci/av7110_av.c 1670 */;
	struct ipack *cocci_id/* drivers/media/pci/ttpci/av7110_av.c 1656 */;
	void (*cocci_id/* drivers/media/pci/ttpci/av7110_av.c 1652 */[])(u8 *,
									 int,
									 void *);
	video_size_t cocci_id/* drivers/media/pci/ttpci/av7110_av.c 1633 */;
	struct dvb_device cocci_id/* drivers/media/pci/ttpci/av7110_av.c 1603 */;
	const struct file_operations cocci_id/* drivers/media/pci/ttpci/av7110_av.c 1592 */;
	struct inode *cocci_id/* drivers/media/pci/ttpci/av7110_av.c 1540 */;
	struct audio_mixer *cocci_id/* drivers/media/pci/ttpci/av7110_av.c 1484 */;
	unsigned int *cocci_id/* drivers/media/pci/ttpci/av7110_av.c 1465 */;
	struct audio_status cocci_id/* drivers/media/pci/ttpci/av7110_av.c 1460 */;
	audio_channel_select_t cocci_id/* drivers/media/pci/ttpci/av7110_av.c 1424 */;
	audio_stream_source_t cocci_id/* drivers/media/pci/ttpci/av7110_av.c 1401 */;
	struct dvb_device *cocci_id/* drivers/media/pci/ttpci/av7110_av.c 1354 */;
	struct file *cocci_id/* drivers/media/pci/ttpci/av7110_av.c 1351 */;
	int *cocci_id/* drivers/media/pci/ttpci/av7110_av.c 1313 */;
	struct video_still_picture *cocci_id/* drivers/media/pci/ttpci/av7110_av.c 1271 */;
	struct compat_video_still_picture *cocci_id/* drivers/media/pci/ttpci/av7110_av.c 1259 */;
	video_displayformat_t cocci_id/* drivers/media/pci/ttpci/av7110_av.c 1224 */;
	void *cocci_id/* drivers/media/pci/ttpci/av7110_av.c 121 */;
	struct video_status cocci_id/* drivers/media/pci/ttpci/av7110_av.c 1205 */;
	video_stream_source_t cocci_id/* drivers/media/pci/ttpci/av7110_av.c 1197 */;
	struct compat_video_event cocci_id/* drivers/media/pci/ttpci/av7110_av.c 1110 */;
	struct video_event cocci_id/* drivers/media/pci/ttpci/av7110_av.c 1105 */;
	struct compat_video_event *cocci_id/* drivers/media/pci/ttpci/av7110_av.c 1103 */;
	struct compat_video_event {
		__s32 type;
		compat_long_t timestamp;
		union {
			video_size_t size;
			unsigned int frame_rate;
			unsigned char vsync_field;
		} u;
	} cocci_id/* drivers/media/pci/ttpci/av7110_av.c 1090 */;
	struct compat_video_still_picture cocci_id/* drivers/media/pci/ttpci/av7110_av.c 1088 */;
	struct compat_video_still_picture {
		compat_uptr_t iFrame;
		int32_t size;
	} cocci_id/* drivers/media/pci/ttpci/av7110_av.c 1084 */;
	struct dvb_demux *cocci_id/* drivers/media/pci/ttpci/av7110_av.c 106 */;
	struct dvb_demux_feed *cocci_id/* drivers/media/pci/ttpci/av7110_av.c 103 */;
	unsigned cocci_id/* drivers/media/pci/ttpci/av7110_av.c 1024 */;
	char __user *cocci_id/* drivers/media/pci/ttpci/av7110_av.c 1022 */;
	u8 cocci_id/* drivers/media/pci/ttpci/av7110_av.c 1018 */[];
	unsigned char cocci_id/* drivers/media/pci/ttpci/av7110_av.c 1001 */;
}
