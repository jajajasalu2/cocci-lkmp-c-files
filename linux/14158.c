cocci_test_suite() {
	struct v4l2_fmtdesc *cocci_id/* drivers/media/platform/aspeed-video.c 994 */;
	struct v4l2_capability *cocci_id/* drivers/media/platform/aspeed-video.c 983 */;
	struct v4l2_bt_timings *cocci_id/* drivers/media/platform/aspeed-video.c 739 */;
	const unsigned int cocci_id/* drivers/media/platform/aspeed-video.c 701 */;
	u32 cocci_id/* drivers/media/platform/aspeed-video.c 699 */;
	unsigned int cocci_id/* drivers/media/platform/aspeed-video.c 669 */;
	struct aspeed_video_addr *cocci_id/* drivers/media/platform/aspeed-video.c 668 */;
	bool cocci_id/* drivers/media/platform/aspeed-video.c 667 */;
	struct aspeed_video *cocci_id/* drivers/media/platform/aspeed-video.c 667 */;
	struct aspeed_video_buffer cocci_id/* drivers/media/platform/aspeed-video.c 580 */;
	irqreturn_t cocci_id/* drivers/media/platform/aspeed-video.c 538 */;
	ulong cocci_id/* drivers/media/platform/aspeed-video.c 525 */;
	enum vb2_buffer_state cocci_id/* drivers/media/platform/aspeed-video.c 513 */;
	dma_addr_t cocci_id/* drivers/media/platform/aspeed-video.c 432 */;
	u32 *cocci_id/* drivers/media/platform/aspeed-video.c 379 */;
	const struct v4l2_dv_timings_cap cocci_id/* drivers/media/platform/aspeed-video.c 362 */;
	const u32 cocci_id/* drivers/media/platform/aspeed-video.c 274 */[ASPEED_VIDEO_JPEG_NUM_QUALITIES][ASPEED_VIDEO_JPEG_DCT_SIZE];
	const u32 cocci_id/* drivers/media/platform/aspeed-video.c 251 */[ASPEED_VIDEO_JPEG_QUANT_SIZE];
	const u32 cocci_id/* drivers/media/platform/aspeed-video.c 246 */[ASPEED_VIDEO_JPEG_HEADER_SIZE];
	struct aspeed_video {
		void __iomem *base;
		struct clk *eclk;
		struct clk *vclk;
		struct device *dev;
		struct v4l2_ctrl_handler ctrl_handler;
		struct v4l2_device v4l2_dev;
		struct v4l2_pix_format pix_fmt;
		struct v4l2_bt_timings active_timings;
		struct v4l2_bt_timings detected_timings;
		u32 v4l2_input_status;
		struct vb2_queue queue;
		struct video_device vdev;
		struct mutex video_lock;
		wait_queue_head_t wait;
		spinlock_t lock;
		struct delayed_work res_work;
		struct list_head buffers;
		unsigned long flags;
		unsigned int sequence;
		unsigned int max_compressed_size;
		struct aspeed_video_addr srcs[2];
		struct aspeed_video_addr jpeg;
		bool yuv420;
		unsigned int frame_rate;
		unsigned int jpeg_quality;
		unsigned int frame_bottom;
		unsigned int frame_left;
		unsigned int frame_right;
		unsigned int frame_top;
	} cocci_id/* drivers/media/platform/aspeed-video.c 207 */;
	struct aspeed_video_buffer {
		struct vb2_v4l2_buffer vb;
		struct list_head link;
	} cocci_id/* drivers/media/platform/aspeed-video.c 199 */;
	struct aspeed_video_addr {
		unsigned int size;
		dma_addr_t dma;
		void *virt;
	} cocci_id/* drivers/media/platform/aspeed-video.c 193 */;
	enum{VIDEO_MODE_DETECT_DONE, VIDEO_RES_CHANGE, VIDEO_RES_DETECT, VIDEO_STREAMING, VIDEO_FRAME_INPRG, VIDEO_STOPPED, VIDEO_CLOCKS_ON,} cocci_id/* drivers/media/platform/aspeed-video.c 183 */;
	struct platform_driver cocci_id/* drivers/media/platform/aspeed-video.c 1726 */;
	const struct of_device_id cocci_id/* drivers/media/platform/aspeed-video.c 1719 */[];
	struct v4l2_device *cocci_id/* drivers/media/platform/aspeed-video.c 1695 */;
	struct resource *cocci_id/* drivers/media/platform/aspeed-video.c 1659 */;
	struct platform_device *cocci_id/* drivers/media/platform/aspeed-video.c 1656 */;
	struct device *cocci_id/* drivers/media/platform/aspeed-video.c 1592 */;
	struct video_device *cocci_id/* drivers/media/platform/aspeed-video.c 1507 */;
	const u64 cocci_id/* drivers/media/platform/aspeed-video.c 1503 */;
	const struct vb2_ops cocci_id/* drivers/media/platform/aspeed-video.c 1491 */;
	unsigned long cocci_id/* drivers/media/platform/aspeed-video.c 1479 */;
	struct aspeed_video_buffer *cocci_id/* drivers/media/platform/aspeed-video.c 1478 */;
	struct vb2_v4l2_buffer *cocci_id/* drivers/media/platform/aspeed-video.c 1477 */;
	void cocci_id/* drivers/media/platform/aspeed-video.c 1473 */;
	struct vb2_buffer *cocci_id/* drivers/media/platform/aspeed-video.c 1417 */;
	int cocci_id/* drivers/media/platform/aspeed-video.c 1417 */;
	struct device *cocci_id/* drivers/media/platform/aspeed-video.c 1400 */[];
	unsigned int cocci_id/* drivers/media/platform/aspeed-video.c 1399 */[];
	struct vb2_queue *cocci_id/* drivers/media/platform/aspeed-video.c 1396 */;
	const struct v4l2_file_operations cocci_id/* drivers/media/platform/aspeed-video.c 1386 */;
	const struct v4l2_event cocci_id/* drivers/media/platform/aspeed-video.c 1332 */;
	struct aspeed_video cocci_id/* drivers/media/platform/aspeed-video.c 1315 */;
	struct delayed_work *cocci_id/* drivers/media/platform/aspeed-video.c 1314 */;
	struct work_struct *cocci_id/* drivers/media/platform/aspeed-video.c 1312 */;
	const struct v4l2_ctrl_ops cocci_id/* drivers/media/platform/aspeed-video.c 1308 */;
	struct v4l2_ctrl *cocci_id/* drivers/media/platform/aspeed-video.c 1281 */;
	const struct v4l2_ioctl_ops cocci_id/* drivers/media/platform/aspeed-video.c 1223 */;
	const struct v4l2_event_subscription *cocci_id/* drivers/media/platform/aspeed-video.c 1213 */;
	struct v4l2_fh *cocci_id/* drivers/media/platform/aspeed-video.c 1212 */;
	struct v4l2_dv_timings_cap *cocci_id/* drivers/media/platform/aspeed-video.c 1205 */;
	struct file *cocci_id/* drivers/media/platform/aspeed-video.c 1204 */;
	void *cocci_id/* drivers/media/platform/aspeed-video.c 1204 */;
	struct v4l2_enum_dv_timings *cocci_id/* drivers/media/platform/aspeed-video.c 1198 */;
	struct v4l2_dv_timings *cocci_id/* drivers/media/platform/aspeed-video.c 1159 */;
	struct v4l2_frmivalenum *cocci_id/* drivers/media/platform/aspeed-video.c 1108 */;
	struct v4l2_frmsizeenum *cocci_id/* drivers/media/platform/aspeed-video.c 1090 */;
	struct v4l2_streamparm *cocci_id/* drivers/media/platform/aspeed-video.c 1046 */;
	unsigned int *cocci_id/* drivers/media/platform/aspeed-video.c 1030 */;
	struct v4l2_input *cocci_id/* drivers/media/platform/aspeed-video.c 1015 */;
	struct v4l2_format *cocci_id/* drivers/media/platform/aspeed-video.c 1005 */;
}
