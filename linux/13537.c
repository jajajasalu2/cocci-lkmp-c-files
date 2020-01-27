cocci_test_suite() {
	u8 *cocci_id/* drivers/media/usb/cx231xx/cx231xx-417.c 941 */;
	u16 cocci_id/* drivers/media/usb/cx231xx/cx231xx-417.c 940 */;
	u32 *cocci_id/* drivers/media/usb/cx231xx/cx231xx-417.c 937 */;
	const struct firmware *cocci_id/* drivers/media/usb/cx231xx/cx231xx-417.c 927 */;
	const unsigned char cocci_id/* drivers/media/usb/cx231xx/cx231xx-417.c 924 */[8];
	struct cx231xx_tvnorm cocci_id/* drivers/media/usb/cx231xx/cx231xx-417.c 82 */[];
	u32 cocci_id/* drivers/media/usb/cx231xx/cx231xx-417.c 819 */[4];
	int *cocci_id/* drivers/media/usb/cx231xx/cx231xx-417.c 808 */;
	va_list cocci_id/* drivers/media/usb/cx231xx/cx231xx-417.c 797 */;
	u32 cocci_id/* drivers/media/usb/cx231xx/cx231xx-417.c 796 */[CX2341X_MBOX_MAX_DATA];
	unsigned int cocci_id/* drivers/media/usb/cx231xx/cx231xx-417.c 63 */;
	enum cx231xx_mute_video_shift{CX231xx_MUTE_VIDEO_V_SHIFT=8, CX231xx_MUTE_VIDEO_U_SHIFT=16, CX231xx_MUTE_VIDEO_Y_SHIFT=24,} cocci_id/* drivers/media/usb/cx231xx/cx231xx-417.c 239 */;
	enum cx231xx_mute_video_mask{CX231xx_MUTE_VIDEO_V_MASK=0x0000FF00, CX231xx_MUTE_VIDEO_U_MASK=0x00FF0000, CX231xx_MUTE_VIDEO_Y_MASK=0xFF000000,} cocci_id/* drivers/media/usb/cx231xx/cx231xx-417.c 233 */;
	enum cx231xx_mute{CX231xx_UNMUTE, CX231xx_MUTE,} cocci_id/* drivers/media/usb/cx231xx/cx231xx-417.c 228 */;
	enum cx231xx_custom_data_type{CX231xx_CUSTOM_EXTENSION_USR_DATA, CX231xx_CUSTOM_PRIVATE_PACKET,} cocci_id/* drivers/media/usb/cx231xx/cx231xx-417.c 223 */;
	enum cx231xx_field2_lines{CX231xx_FIELD2_SAA7114=0x00EF, CX231xx_FIELD2_SAA7115=0x00F0, CX231xx_FIELD2_MICRONAS=0x0106,} cocci_id/* drivers/media/usb/cx231xx/cx231xx-417.c 217 */;
	enum cx231xx_field1_lines{CX231xx_FIELD1_SAA7114=0x00EF, CX231xx_FIELD1_SAA7115=0x00F0, CX231xx_FIELD1_MICRONAS=0x0105,} cocci_id/* drivers/media/usb/cx231xx/cx231xx-417.c 211 */;
	enum cx231xx_notification_mailbox{CX231xx_NOTIFICATION_NO_MAILBOX=-1,} cocci_id/* drivers/media/usb/cx231xx/cx231xx-417.c 207 */;
	enum cx231xx_notification_status{CX231xx_NOTIFICATION_OFF, CX231xx_NOTIFICATION_ON,} cocci_id/* drivers/media/usb/cx231xx/cx231xx-417.c 202 */;
	enum cx231xx_notification_type{CX231xx_NOTIFICATION_REFRESH,} cocci_id/* drivers/media/usb/cx231xx/cx231xx-417.c 198 */;
	enum cx231xx_copyright{CX231xx_COPYRIGHT_OFF, CX231xx_COPYRIGHT_ON,} cocci_id/* drivers/media/usb/cx231xx/cx231xx-417.c 193 */;
	enum cx231xx_pause{CX231xx_PAUSE_ENCODING, CX231xx_RESUME_ENCODING,} cocci_id/* drivers/media/usb/cx231xx/cx231xx-417.c 188 */;
	enum cx231xx_dma_transfer_status_bits{CX231xx_DMA_TRANSFER_BITS_DONE=0x01, CX231xx_DMA_TRANSFER_BITS_ERROR=0x04, CX231xx_DMA_TRANSFER_BITS_LL_ERROR=0x10,} cocci_id/* drivers/media/usb/cx231xx/cx231xx-417.c 182 */;
	enum cx231xx_dma_unit{CX231xx_DMA_BYTES, CX231xx_DMA_FRAMES,} cocci_id/* drivers/media/usb/cx231xx/cx231xx-417.c 177 */;
	struct vb2_queue *cocci_id/* drivers/media/usb/cx231xx/cx231xx-417.c 1739 */;
	struct cx231xx_tsport *cocci_id/* drivers/media/usb/cx231xx/cx231xx-417.c 1738 */;
	const char *cocci_id/* drivers/media/usb/cx231xx/cx231xx-417.c 1714 */;
	const struct video_device *cocci_id/* drivers/media/usb/cx231xx/cx231xx-417.c 1713 */;
	struct video_device *cocci_id/* drivers/media/usb/cx231xx/cx231xx-417.c 1712 */;
	struct usb_device *cocci_id/* drivers/media/usb/cx231xx/cx231xx-417.c 1711 */;
	const struct cx2341x_handler_ops cocci_id/* drivers/media/usb/cx231xx/cx231xx-417.c 1702 */;
	struct cx231xx cocci_id/* drivers/media/usb/cx231xx/cx231xx-417.c 1693 */;
	const u32 cocci_id/* drivers/media/usb/cx231xx/cx231xx-417.c 1692 */[3];
	struct cx2341x_handler *cocci_id/* drivers/media/usb/cx231xx/cx231xx-417.c 1690 */;
	enum cx231xx_vbi_insertion_bits{CX231xx_VBI_BITS_INSERT_IN_XTENSION_USR_DATA, CX231xx_VBI_BITS_INSERT_IN_PRIVATE_PACKETS=0x1 << 1, CX231xx_VBI_BITS_SEPARATE_STREAM=0x2 << 1, CX231xx_VBI_BITS_SEPARATE_STREAM_USR_DATA=0x4 << 1, CX231xx_VBI_BITS_SEPARATE_STREAM_PRV_DATA=0x5 << 1,} cocci_id/* drivers/media/usb/cx231xx/cx231xx-417.c 169 */;
	struct v4l2_subdev_format cocci_id/* drivers/media/usb/cx231xx/cx231xx-417.c 1678 */;
	struct video_device cocci_id/* drivers/media/usb/cx231xx/cx231xx-417.c 1655 */;
	enum cx231xx_vbi_mode_bits{CX231xx_VBI_BITS_SLICED, CX231xx_VBI_BITS_RAW,} cocci_id/* drivers/media/usb/cx231xx/cx231xx-417.c 164 */;
	const struct v4l2_ioctl_ops cocci_id/* drivers/media/usb/cx231xx/cx231xx-417.c 1622 */;
	const struct v4l2_file_operations cocci_id/* drivers/media/usb/cx231xx/cx231xx-417.c 1612 */;
	enum cx231xx_picture_mask{CX231xx_PICTURE_MASK_NONE, CX231xx_PICTURE_MASK_I_FRAMES, CX231xx_PICTURE_MASK_I_P_FRAMES=0x3, CX231xx_PICTURE_MASK_ALL_FRAMES=0x7,} cocci_id/* drivers/media/usb/cx231xx/cx231xx-417.c 157 */;
	struct v4l2_format *cocci_id/* drivers/media/usb/cx231xx/cx231xx-417.c 1569 */;
	struct v4l2_fmtdesc *cocci_id/* drivers/media/usb/cx231xx/cx231xx-417.c 1558 */;
	struct file *cocci_id/* drivers/media/usb/cx231xx/cx231xx-417.c 1557 */;
	struct v4l2_subdev *cocci_id/* drivers/media/usb/cx231xx/cx231xx-417.c 1547 */;
	struct v4l2_control *cocci_id/* drivers/media/usb/cx231xx/cx231xx-417.c 1544 */;
	enum cx231xx_data_xfer_status{CX231xx_MORE_BUFFERS_FOLLOW, CX231xx_LAST_BUFFER,} cocci_id/* drivers/media/usb/cx231xx/cx231xx-417.c 152 */;
	v4l2_std_id cocci_id/* drivers/media/usb/cx231xx/cx231xx-417.c 1512 */;
	v4l2_std_id *cocci_id/* drivers/media/usb/cx231xx/cx231xx-417.c 1504 */;
	struct v4l2_selection *cocci_id/* drivers/media/usb/cx231xx/cx231xx-417.c 1483 */;
	bool cocci_id/* drivers/media/usb/cx231xx/cx231xx-417.c 1471 */;
	struct v4l2_fract *cocci_id/* drivers/media/usb/cx231xx/cx231xx-417.c 1468 */;
	enum cx231xx_stream_port{CX231xx_OUTPUT_PORT_MEMORY, CX231xx_OUTPUT_PORT_STREAMING, CX231xx_OUTPUT_PORT_SERIAL,} cocci_id/* drivers/media/usb/cx231xx/cx231xx-417.c 146 */;
	struct vb2_ops cocci_id/* drivers/media/usb/cx231xx/cx231xx-417.c 1456 */;
	enum cx231xx_framerate{CX231xx_FRAMERATE_NTSC_30, CX231xx_FRAMERATE_PAL_25,} cocci_id/* drivers/media/usb/cx231xx/cx231xx-417.c 141 */;
	enum vb2_buffer_state cocci_id/* drivers/media/usb/cx231xx/cx231xx-417.c 1379 */;
	unsigned long cocci_id/* drivers/media/usb/cx231xx/cx231xx-417.c 1371 */;
	struct vb2_buffer *cocci_id/* drivers/media/usb/cx231xx/cx231xx-417.c 1365 */;
	enum cx231xx_capture_end{CX231xx_END_AT_GOP, CX231xx_END_NOW,} cocci_id/* drivers/media/usb/cx231xx/cx231xx-417.c 136 */;
	unsigned char *cocci_id/* drivers/media/usb/cx231xx/cx231xx-417.c 1344 */;
	enum cx231xx_capture_bits{CX231xx_RAW_BITS_NONE=0x00, CX231xx_RAW_BITS_YUV_CAPTURE=0x01, CX231xx_RAW_BITS_PCM_CAPTURE=0x02, CX231xx_RAW_BITS_VBI_CAPTURE=0x04, CX231xx_RAW_BITS_PASSTHRU_CAPTURE=0x08, CX231xx_RAW_BITS_TO_HOST_CAPTURE=0x10,} cocci_id/* drivers/media/usb/cx231xx/cx231xx-417.c 127 */;
	struct cx231xx_buffer cocci_id/* drivers/media/usb/cx231xx/cx231xx-417.c 1250 */;
	u32 cocci_id/* drivers/media/usb/cx231xx/cx231xx-417.c 1242 */;
	struct cx231xx_buffer *cocci_id/* drivers/media/usb/cx231xx/cx231xx-417.c 1241 */;
	void *cocci_id/* drivers/media/usb/cx231xx/cx231xx-417.c 1240 */;
	struct cx231xx_dmaqueue *cocci_id/* drivers/media/usb/cx231xx/cx231xx-417.c 1238 */;
	struct urb *cocci_id/* drivers/media/usb/cx231xx/cx231xx-417.c 1237 */;
	struct cx231xx *cocci_id/* drivers/media/usb/cx231xx/cx231xx-417.c 1237 */;
	char *cocci_id/* drivers/media/usb/cx231xx/cx231xx-417.c 1237 */;
	int cocci_id/* drivers/media/usb/cx231xx/cx231xx-417.c 1237 */;
	void cocci_id/* drivers/media/usb/cx231xx/cx231xx-417.c 1237 */;
	struct device *cocci_id/* drivers/media/usb/cx231xx/cx231xx-417.c 1218 */[];
	unsigned int cocci_id/* drivers/media/usb/cx231xx/cx231xx-417.c 1218 */[];
	unsigned int *cocci_id/* drivers/media/usb/cx231xx/cx231xx-417.c 1217 */;
	enum cx231xx_capture_type{CX231xx_MPEG_CAPTURE, CX231xx_RAW_CAPTURE, CX231xx_RAW_PASSTHRU_CAPTURE,} cocci_id/* drivers/media/usb/cx231xx/cx231xx-417.c 121 */;
	u8 cocci_id/* drivers/media/usb/cx231xx/cx231xx-417.c 1036 */;
}
