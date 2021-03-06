cocci_test_suite() {
	v4l2_std_id cocci_id/* drivers/media/pci/ivtv/ivtv-ioctl.c 984 */;
	unsigned int *cocci_id/* drivers/media/pci/ivtv/ivtv-ioctl.c 972 */;
	struct v4l2_sliced_vbi_format *cocci_id/* drivers/media/pci/ivtv/ivtv-ioctl.c 95 */;
	int cocci_id/* drivers/media/pci/ivtv/ivtv-ioctl.c 95 */;
	void cocci_id/* drivers/media/pci/ivtv/ivtv-ioctl.c 95 */;
	const struct v4l2_fmtdesc cocci_id/* drivers/media/pci/ivtv/ivtv-ioctl.c 922 */;
	struct v4l2_fmtdesc *cocci_id/* drivers/media/pci/ivtv/ivtv-ioctl.c 920 */;
	struct v4l2_rect cocci_id/* drivers/media/pci/ivtv/ivtv-ioctl.c 880 */;
	struct v4l2_selection *cocci_id/* drivers/media/pci/ivtv/ivtv-ioctl.c 875 */;
	unsigned cocci_id/* drivers/media/pci/ivtv/ivtv-ioctl.c 859 */;
	u16 cocci_id/* drivers/media/pci/ivtv/ivtv-ioctl.c 84 */;
	struct v4l2_fract *cocci_id/* drivers/media/pci/ivtv/ivtv-ioctl.c 814 */;
	struct v4l2_output *cocci_id/* drivers/media/pci/ivtv/ivtv-ioctl.c 806 */;
	struct v4l2_input *cocci_id/* drivers/media/pci/ivtv/ivtv-ioctl.c 798 */;
	const struct v4l2_audioout *cocci_id/* drivers/media/pci/ivtv/ivtv-ioctl.c 789 */;
	struct v4l2_audioout *cocci_id/* drivers/media/pci/ivtv/ivtv-ioctl.c 773 */;
	const struct v4l2_audio *cocci_id/* drivers/media/pci/ivtv/ivtv-ioctl.c 760 */;
	struct v4l2_audio *cocci_id/* drivers/media/pci/ivtv/ivtv-ioctl.c 745 */;
	struct v4l2_capability *cocci_id/* drivers/media/pci/ivtv/ivtv-ioctl.c 733 */;
	const struct v4l2_dbg_register *cocci_id/* drivers/media/pci/ivtv/ivtv-ioctl.c 724 */;
	struct v4l2_dbg_register *cocci_id/* drivers/media/pci/ivtv/ivtv-ioctl.c 716 */;
	volatile u8 __iomem *cocci_id/* drivers/media/pci/ivtv/ivtv-ioctl.c 695 */;
	u64 cocci_id/* drivers/media/pci/ivtv/ivtv-ioctl.c 693 */;
	u64 *cocci_id/* drivers/media/pci/ivtv/ivtv-ioctl.c 693 */;
	struct v4l2_subdev_format cocci_id/* drivers/media/pci/ivtv/ivtv-ioctl.c 576 */;
	u8 cocci_id/* drivers/media/pci/ivtv/ivtv-ioctl.c 555 */;
	s32 cocci_id/* drivers/media/pci/ivtv/ivtv-ioctl.c 519 */;
	struct v4l2_window *cocci_id/* drivers/media/pci/ivtv/ivtv-ioctl.c 444 */;
	struct v4l2_sliced_vbi_data cocci_id/* drivers/media/pci/ivtv/ivtv-ioctl.c 385 */;
	struct v4l2_format *cocci_id/* drivers/media/pci/ivtv/ivtv-ioctl.c 377 */;
	struct v4l2_vbi_format *cocci_id/* drivers/media/pci/ivtv/ivtv-ioctl.c 362 */;
	struct v4l2_pix_format *cocci_id/* drivers/media/pci/ivtv/ivtv-ioctl.c 340 */;
	struct video_device *cocci_id/* drivers/media/pci/ivtv/ivtv-ioctl.c 1960 */;
	const struct v4l2_ioctl_ops cocci_id/* drivers/media/pci/ivtv/ivtv-ioctl.c 1898 */;
	u32 cocci_id/* drivers/media/pci/ivtv/ivtv-ioctl.c 1864 */;
	u32 *cocci_id/* drivers/media/pci/ivtv/ivtv-ioctl.c 1864 */;
	bool cocci_id/* drivers/media/pci/ivtv/ivtv-ioctl.c 1839 */;
	long cocci_id/* drivers/media/pci/ivtv/ivtv-ioctl.c 1839 */;
	unsigned char cocci_id/* drivers/media/pci/ivtv/ivtv-ioctl.c 1770 */;
	struct video_event *cocci_id/* drivers/media/pci/ivtv/ivtv-ioctl.c 1757 */;
	struct compat_video_event *cocci_id/* drivers/media/pci/ivtv/ivtv-ioctl.c 1755 */;
	struct v4l2_decoder_cmd cocci_id/* drivers/media/pci/ivtv/ivtv-ioctl.c 1700 */;
	s64 cocci_id/* drivers/media/pci/ivtv/ivtv-ioctl.c 1673 */;
	s64 *cocci_id/* drivers/media/pci/ivtv/ivtv-ioctl.c 1672 */;
	int *cocci_id/* drivers/media/pci/ivtv/ivtv-ioctl.c 1669 */;
	struct ivtv_dma_frame *cocci_id/* drivers/media/pci/ivtv/ivtv-ioctl.c 1642 */;
	unsigned long cocci_id/* drivers/media/pci/ivtv/ivtv-ioctl.c 1637 */;
	struct ivtv_stream *cocci_id/* drivers/media/pci/ivtv/ivtv-ioctl.c 1634 */;
	unsigned int cocci_id/* drivers/media/pci/ivtv/ivtv-ioctl.c 1630 */;
	struct compat_video_event cocci_id/* drivers/media/pci/ivtv/ivtv-ioctl.c 1625 */;
	struct compat_video_event {
		__s32 type;
		compat_long_t timestamp;
		union {
			video_size_t size;
			unsigned int frame_rate;
			unsigned char vsync_field;
		} u;
	} cocci_id/* drivers/media/pci/ivtv/ivtv-ioctl.c 1615 */;
	const char *cocci_id/* drivers/media/pci/ivtv/ivtv-ioctl.c 1608 */;
	struct ivtv *cocci_id/* drivers/media/pci/ivtv/ivtv-ioctl.c 1592 */;
	struct ivtv_open_id *cocci_id/* drivers/media/pci/ivtv/ivtv-ioctl.c 1591 */;
	struct v4l2_decoder_cmd *cocci_id/* drivers/media/pci/ivtv/ivtv-ioctl.c 1589 */;
	struct file *cocci_id/* drivers/media/pci/ivtv/ivtv-ioctl.c 1589 */;
	void *cocci_id/* drivers/media/pci/ivtv/ivtv-ioctl.c 1589 */;
	long long cocci_id/* drivers/media/pci/ivtv/ivtv-ioctl.c 1584 */;
	const char *constcocci_id/* drivers/media/pci/ivtv/ivtv-ioctl.c 1537 */[16];
	const char *constcocci_id/* drivers/media/pci/ivtv/ivtv-ioctl.c 1531 */[4];
	const char *constcocci_id/* drivers/media/pci/ivtv/ivtv-ioctl.c 1524 */[5];
	struct v4l2_audioout cocci_id/* drivers/media/pci/ivtv/ivtv-ioctl.c 1522 */;
	struct v4l2_output cocci_id/* drivers/media/pci/ivtv/ivtv-ioctl.c 1521 */;
	struct tveeprom cocci_id/* drivers/media/pci/ivtv/ivtv-ioctl.c 1509 */;
	struct v4l2_audio cocci_id/* drivers/media/pci/ivtv/ivtv-ioctl.c 1504 */;
	struct v4l2_input cocci_id/* drivers/media/pci/ivtv/ivtv-ioctl.c 1503 */;
	const struct v4l2_event_subscription *cocci_id/* drivers/media/pci/ivtv/ivtv-ioctl.c 1486 */;
	struct v4l2_fh *cocci_id/* drivers/media/pci/ivtv/ivtv-ioctl.c 1486 */;
	const struct v4l2_framebuffer *cocci_id/* drivers/media/pci/ivtv/ivtv-ioctl.c 1449 */;
	u32 cocci_id/* drivers/media/pci/ivtv/ivtv-ioctl.c 1370 */[16];
	struct yuv_playback_info *cocci_id/* drivers/media/pci/ivtv/ivtv-ioctl.c 1367 */;
	u32 cocci_id/* drivers/media/pci/ivtv/ivtv-ioctl.c 1366 */[CX2341X_MBOX_MAX_DATA];
	struct v4l2_framebuffer *cocci_id/* drivers/media/pci/ivtv/ivtv-ioctl.c 1362 */;
	struct v4l2_encoder_cmd *cocci_id/* drivers/media/pci/ivtv/ivtv-ioctl.c 1280 */;
	struct v4l2_enc_idx_entry *cocci_id/* drivers/media/pci/ivtv/ivtv-ioctl.c 1257 */;
	struct v4l2_enc_idx *cocci_id/* drivers/media/pci/ivtv/ivtv-ioctl.c 1254 */;
	struct v4l2_sliced_vbi_cap *cocci_id/* drivers/media/pci/ivtv/ivtv-ioctl.c 1219 */;
	struct v4l2_tuner *cocci_id/* drivers/media/pci/ivtv/ivtv-ioctl.c 1203 */;
	const struct v4l2_tuner *cocci_id/* drivers/media/pci/ivtv/ivtv-ioctl.c 1190 */;
	unsigned long long cocci_id/* drivers/media/pci/ivtv/ivtv-ioctl.c 1181 */;
	v4l2_std_id *cocci_id/* drivers/media/pci/ivtv/ivtv-ioctl.c 1089 */;
	const struct v4l2_frequency *cocci_id/* drivers/media/pci/ivtv/ivtv-ioctl.c 1072 */;
	struct v4l2_frequency *cocci_id/* drivers/media/pci/ivtv/ivtv-ioctl.c 1058 */;
}
