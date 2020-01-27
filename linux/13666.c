cocci_test_suite() {
	struct zr364xx_pipeinfo *cocci_id/* drivers/media/usb/zr364xx/zr364xx.c 952 */;
	struct urb *cocci_id/* drivers/media/usb/zr364xx/zr364xx.c 950 */;
	struct v4l2_buffer *cocci_id/* drivers/media/usb/zr364xx/zr364xx.c 939 */;
	void *cocci_id/* drivers/media/usb/zr364xx/zr364xx.c 938 */;
	struct v4l2_requestbuffers *cocci_id/* drivers/media/usb/zr364xx/zr364xx.c 905 */;
	const struct usb_device_id cocci_id/* drivers/media/usb/zr364xx/zr364xx.c 86 */[];
	char cocci_id/* drivers/media/usb/zr364xx/zr364xx.c 815 */[5];
	struct v4l2_format *cocci_id/* drivers/media/usb/zr364xx/zr364xx.c 792 */;
	__u32 cocci_id/* drivers/media/usb/zr364xx/zr364xx.c 750 */;
	char *cocci_id/* drivers/media/usb/zr364xx/zr364xx.c 750 */;
	struct v4l2_fmtdesc *cocci_id/* drivers/media/usb/zr364xx/zr364xx.c 742 */;
	struct v4l2_ctrl *cocci_id/* drivers/media/usb/zr364xx/zr364xx.c 721 */;
	unsigned int cocci_id/* drivers/media/usb/zr364xx/zr364xx.c 714 */;
	struct v4l2_input *cocci_id/* drivers/media/usb/zr364xx/zr364xx.c 697 */;
	struct v4l2_capability *cocci_id/* drivers/media/usb/zr364xx/zr364xx.c 684 */;
	u8 *cocci_id/* drivers/media/usb/zr364xx/zr364xx.c 579 */;
	u16 *cocci_id/* drivers/media/usb/zr364xx/zr364xx.c 567 */;
	struct zr364xx_framei *cocci_id/* drivers/media/usb/zr364xx/zr364xx.c 559 */;
	s32 cocci_id/* drivers/media/usb/zr364xx/zr364xx.c 558 */;
	struct zr364xx_dmaqueue *cocci_id/* drivers/media/usb/zr364xx/zr364xx.c 515 */;
	const char *cocci_id/* drivers/media/usb/zr364xx/zr364xx.c 482 */;
	loff_t *cocci_id/* drivers/media/usb/zr364xx/zr364xx.c 439 */;
	char __user *cocci_id/* drivers/media/usb/zr364xx/zr364xx.c 438 */;
	ssize_t cocci_id/* drivers/media/usb/zr364xx/zr364xx.c 438 */;
	size_t cocci_id/* drivers/media/usb/zr364xx/zr364xx.c 438 */;
	int cocci_id/* drivers/media/usb/zr364xx/zr364xx.c 435 */(struct file *file,
								  void *priv,
								  enum v4l2_buf_type type);
	const struct videobuf_queue_ops cocci_id/* drivers/media/usb/zr364xx/zr364xx.c 425 */;
	void cocci_id/* drivers/media/usb/zr364xx/zr364xx.c 403 */;
	struct zr364xx_buffer cocci_id/* drivers/media/usb/zr364xx/zr364xx.c 370 */;
	struct zr364xx_buffer *cocci_id/* drivers/media/usb/zr364xx/zr364xx.c 370 */;
	struct zr364xx_camera *cocci_id/* drivers/media/usb/zr364xx/zr364xx.c 369 */;
	enum v4l2_field cocci_id/* drivers/media/usb/zr364xx/zr364xx.c 367 */;
	struct videobuf_queue *cocci_id/* drivers/media/usb/zr364xx/zr364xx.c 366 */;
	struct videobuf_buffer *cocci_id/* drivers/media/usb/zr364xx/zr364xx.c 366 */;
	int cocci_id/* drivers/media/usb/zr364xx/zr364xx.c 366 */;
	unsigned int *cocci_id/* drivers/media/usb/zr364xx/zr364xx.c 340 */;
	unsigned char cocci_id/* drivers/media/usb/zr364xx/zr364xx.c 334 */;
	unsigned char cocci_id/* drivers/media/usb/zr364xx/zr364xx.c 281 */[];
	message *cocci_id/* drivers/media/usb/zr364xx/zr364xx.c 277 */[4];
	message cocci_id/* drivers/media/usb/zr364xx/zr364xx.c 227 */[];
	struct {
		unsigned int value;
		unsigned int size;
		unsigned char *bytes;
	} cocci_id/* drivers/media/usb/zr364xx/zr364xx.c 217 */;
	unsigned char *cocci_id/* drivers/media/usb/zr364xx/zr364xx.c 195 */;
	u8 cocci_id/* drivers/media/usb/zr364xx/zr364xx.c 194 */;
	u16 cocci_id/* drivers/media/usb/zr364xx/zr364xx.c 194 */;
	struct usb_device *cocci_id/* drivers/media/usb/zr364xx/zr364xx.c 194 */;
	struct zr364xx_buffer {
		struct videobuf_buffer vb;
		const struct zr364xx_fmt *fmt;
	} cocci_id/* drivers/media/usb/zr364xx/zr364xx.c 187 */;
	struct usb_driver cocci_id/* drivers/media/usb/zr364xx/zr364xx.c 1590 */;
	struct zr364xx_camera {
		struct usb_device *udev;
		struct usb_interface *interface;
		struct v4l2_device v4l2_dev;
		struct v4l2_ctrl_handler ctrl_handler;
		struct video_device vdev;
		struct v4l2_fh *owner;
		int nb;
		struct zr364xx_bufferi buffer;
		int skip;
		int width;
		int height;
		int method;
		struct mutex lock;
		spinlock_t slock;
		struct zr364xx_dmaqueue vidq;
		int last_frame;
		int cur_frame;
		unsigned long frame_count;
		int b_acquire;
		struct zr364xx_pipeinfo pipe[1];
		u8 read_endpoint;
		const struct zr364xx_fmt *fmt;
		struct videobuf_queue vb_vidq;
		bool was_streaming;
	} cocci_id/* drivers/media/usb/zr364xx/zr364xx.c 156 */;
	pm_message_t cocci_id/* drivers/media/usb/zr364xx/zr364xx.c 1558 */;
	struct usb_interface *cocci_id/* drivers/media/usb/zr364xx/zr364xx.c 1537 */;
	const struct zr364xx_fmt cocci_id/* drivers/media/usb/zr364xx/zr364xx.c 148 */[];
	struct zr364xx_fmt {
		u32 fourcc;
		int depth;
	} cocci_id/* drivers/media/usb/zr364xx/zr364xx.c 142 */;
	struct v4l2_ctrl_handler *cocci_id/* drivers/media/usb/zr364xx/zr364xx.c 1391 */;
	struct usb_endpoint_descriptor *cocci_id/* drivers/media/usb/zr364xx/zr364xx.c 1390 */;
	struct usb_host_interface *cocci_id/* drivers/media/usb/zr364xx/zr364xx.c 1389 */;
	const struct usb_device_id *cocci_id/* drivers/media/usb/zr364xx/zr364xx.c 1385 */;
	unsigned long cocci_id/* drivers/media/usb/zr364xx/zr364xx.c 1329 */;
	struct zr364xx_pipeinfo {
		u32 transfer_size;
		u8 *transfer_buffer;
		u32 state;
		void *stream_urb;
		void *cam;
		u32 err_count;
		u32 idx;
	} cocci_id/* drivers/media/usb/zr364xx/zr364xx.c 132 */;
	const struct video_device cocci_id/* drivers/media/usb/zr364xx/zr364xx.c 1312 */;
	const struct v4l2_ioctl_ops cocci_id/* drivers/media/usb/zr364xx/zr364xx.c 1292 */;
	const struct v4l2_file_operations cocci_id/* drivers/media/usb/zr364xx/zr364xx.c 1282 */;
	const struct v4l2_ctrl_ops cocci_id/* drivers/media/usb/zr364xx/zr364xx.c 1278 */;
	struct zr364xx_dmaqueue {
		struct list_head active;
		struct zr364xx_camera *cam;
	} cocci_id/* drivers/media/usb/zr364xx/zr364xx.c 127 */;
	struct poll_table_struct *cocci_id/* drivers/media/usb/zr364xx/zr364xx.c 1267 */;
	__poll_t cocci_id/* drivers/media/usb/zr364xx/zr364xx.c 1266 */;
	struct vm_area_struct *cocci_id/* drivers/media/usb/zr364xx/zr364xx.c 1247 */;
	struct zr364xx_bufferi {
		unsigned long dwFrames;
		struct zr364xx_framei frame[FRAMES];
	} cocci_id/* drivers/media/usb/zr364xx/zr364xx.c 122 */;
	struct file *cocci_id/* drivers/media/usb/zr364xx/zr364xx.c 1212 */;
	struct zr364xx_camera cocci_id/* drivers/media/usb/zr364xx/zr364xx.c 1189 */;
	struct v4l2_device *cocci_id/* drivers/media/usb/zr364xx/zr364xx.c 1186 */;
	enum v4l2_buf_type cocci_id/* drivers/media/usb/zr364xx/zr364xx.c 1145 */;
	struct zr364xx_framei {
		unsigned long ulState;
		void *lpvbits;
		unsigned long cur_size;
	} cocci_id/* drivers/media/usb/zr364xx/zr364xx.c 114 */;
}
