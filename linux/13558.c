cocci_test_suite() {
	struct device *cocci_id/* drivers/media/usb/s2255/s2255drv.c 967 */;
	u32 cocci_id/* drivers/media/usb/s2255/s2255drv.c 901 */;
	struct s2255_mode *cocci_id/* drivers/media/usb/s2255/s2255drv.c 901 */;
	enum v4l2_field cocci_id/* drivers/media/usb/s2255/s2255drv.c 761 */;
	struct v4l2_format *cocci_id/* drivers/media/usb/s2255/s2255drv.c 738 */;
	struct v4l2_fmtdesc *cocci_id/* drivers/media/usb/s2255/s2255drv.c 724 */;
	struct v4l2_capability *cocci_id/* drivers/media/usb/s2255/s2255drv.c 712 */;
	const struct vb2_ops cocci_id/* drivers/media/usb/s2255/s2255drv.c 701 */;
	void cocci_id/* drivers/media/usb/s2255/s2255drv.c 699 */(struct vb2_queue *vq);
	int cocci_id/* drivers/media/usb/s2255/s2255drv.c 698 */(struct vb2_queue *vq,
								 unsigned int count);
	void cocci_id/* drivers/media/usb/s2255/s2255drv.c 686 */;
	unsigned long cocci_id/* drivers/media/usb/s2255/s2255drv.c 663 */;
	struct s2255_buffer cocci_id/* drivers/media/usb/s2255/s2255drv.c 660 */;
	struct s2255_buffer *cocci_id/* drivers/media/usb/s2255/s2255drv.c 660 */;
	struct vb2_v4l2_buffer *cocci_id/* drivers/media/usb/s2255/s2255drv.c 659 */;
	struct s2255_vc *cocci_id/* drivers/media/usb/s2255/s2255drv.c 658 */;
	struct vb2_buffer *cocci_id/* drivers/media/usb/s2255/s2255drv.c 656 */;
	int cocci_id/* drivers/media/usb/s2255/s2255drv.c 656 */;
	struct device *cocci_id/* drivers/media/usb/s2255/s2255drv.c 646 */[];
	unsigned int cocci_id/* drivers/media/usb/s2255/s2255drv.c 646 */[];
	unsigned int *cocci_id/* drivers/media/usb/s2255/s2255drv.c 645 */;
	struct vb2_queue *cocci_id/* drivers/media/usb/s2255/s2255drv.c 644 */;
	char *cocci_id/* drivers/media/usb/s2255/s2255drv.c 597 */;
	const char *cocci_id/* drivers/media/usb/s2255/s2255drv.c 596 */;
	unsigned int cocci_id/* drivers/media/usb/s2255/s2255drv.c 571 */;
	const struct s2255_fmt *cocci_id/* drivers/media/usb/s2255/s2255drv.c 569 */;
	struct usb_device *cocci_id/* drivers/media/usb/s2255/s2255drv.c 495 */;
	struct s2255_fw *cocci_id/* drivers/media/usb/s2255/s2255drv.c 494 */;
	struct timer_list *cocci_id/* drivers/media/usb/s2255/s2255drv.c 472 */;
	unsigned char *cocci_id/* drivers/media/usb/s2255/s2255drv.c 439 */;
	const unsigned char *cocci_id/* drivers/media/usb/s2255/s2255drv.c 438 */;
	const struct s2255_fmt cocci_id/* drivers/media/usb/s2255/s2255drv.c 385 */[];
	const struct usb_device_id cocci_id/* drivers/media/usb/s2255/s2255drv.c 374 */[];
	struct usb_driver cocci_id/* drivers/media/usb/s2255/s2255drv.c 357 */;
	long cocci_id/* drivers/media/usb/s2255/s2255drv.c 345 */(struct s2255_dev *dev,
								  unsigned char req,
								  u16 index,
								  u16 value,
								  void *buf,
								  s32 buf_len,
								  int bOut);
	void cocci_id/* drivers/media/usb/s2255/s2255drv.c 344 */(struct s2255_dev *dev);
	int cocci_id/* drivers/media/usb/s2255/s2255drv.c 342 */(struct s2255_dev *dev);
	int cocci_id/* drivers/media/usb/s2255/s2255drv.c 341 */(struct s2255_vc *vc,
								 struct s2255_mode *mode);
	void cocci_id/* drivers/media/usb/s2255/s2255drv.c 339 */(struct s2255_vc *vc,
								  struct s2255_buffer *buf,
								  int jpgsize);
	int cocci_id/* drivers/media/usb/s2255/s2255drv.c 337 */(struct s2255_vc *vc);
	unsigned long cocci_id/* drivers/media/usb/s2255/s2255drv.c 331 */[MAX_CHANNELS];
	struct s2255_buffer {
		struct vb2_v4l2_buffer vb;
		struct list_head list;
	} cocci_id/* drivers/media/usb/s2255/s2255drv.c 281 */;
	struct s2255_fmt {
		u32 fourcc;
		int depth;
	} cocci_id/* drivers/media/usb/s2255/s2255drv.c 275 */;
	struct v4l2_device *cocci_id/* drivers/media/usb/s2255/s2255drv.c 270 */;
	struct s2255_dev {
		struct s2255_vc vc[MAX_CHANNELS];
		struct v4l2_device v4l2_dev;
		atomic_t num_channels;
		int frames;
		struct mutex lock;
		struct mutex cmdlock;
		struct usb_device *udev;
		struct usb_interface *interface;
		u8 read_endpoint;
		struct timer_list timer;
		struct s2255_fw *fw_data;
		struct s2255_pipeinfo pipe;
		u32 cc;
		int frame_ready;
		int chn_ready;
		int dsp_fw_ver;
		u16 pid;
#define S2255_CMDBUF_SIZE 512
		__le32 *cmdbuf;
	} cocci_id/* drivers/media/usb/s2255/s2255drv.c 247 */;
	struct usb_interface *cocci_id/* drivers/media/usb/s2255/s2255drv.c 2341 */;
	struct s2255_fw cocci_id/* drivers/media/usb/s2255/s2255drv.c 2227 */;
	struct s2255_dev cocci_id/* drivers/media/usb/s2255/s2255drv.c 2213 */;
	struct usb_endpoint_descriptor *cocci_id/* drivers/media/usb/s2255/s2255drv.c 2206 */;
	struct usb_host_interface *cocci_id/* drivers/media/usb/s2255/s2255drv.c 2205 */;
	const struct usb_device_id *cocci_id/* drivers/media/usb/s2255/s2255drv.c 2202 */;
	struct s2255_vc {
		struct s2255_dev *dev;
		struct video_device vdev;
		struct v4l2_ctrl_handler hdl;
		struct v4l2_ctrl *jpegqual_ctrl;
		int resources;
		struct list_head buf_list;
		struct s2255_bufferi buffer;
		struct s2255_mode mode;
		v4l2_std_id std;
		unsigned jpegqual;
		struct v4l2_captureparm cap_parm;
		int cur_frame;
		int last_frame;
		unsigned long req_image_size;
		unsigned long pkt_size;
		int bad_payload;
		unsigned long frame_count;
		int jpg_size;
		int configured;
		wait_queue_head_t wait_setmode;
		int setmode_ready;
		int vidstatus;
		wait_queue_head_t wait_vidstatus;
		int vidstatus_ready;
		unsigned int width;
		unsigned int height;
		enum v4l2_field field;
		const struct s2255_fmt *fmt;
		int idx;
		struct vb2_queue vb_vidq;
		struct mutex vb_lock;
		spinlock_t qlock;
	} cocci_id/* drivers/media/usb/s2255/s2255drv.c 204 */;
	struct s2255_dev *cocci_id/* drivers/media/usb/s2255/s2255drv.c 2038 */;
	struct s2255_pipeinfo *cocci_id/* drivers/media/usb/s2255/s2255drv.c 2037 */;
	struct urb *cocci_id/* drivers/media/usb/s2255/s2255drv.c 2035 */;
	struct s2255_fmt cocci_id/* drivers/media/usb/s2255/s2255drv.c 200 */;
	struct s2255_mode cocci_id/* drivers/media/usb/s2255/s2255drv.c 1970 */;
	unsigned char cocci_id/* drivers/media/usb/s2255/s2255drv.c 1911 */[64];
	struct s2255_pipeinfo {
		u32 max_transfer_size;
		u32 cur_transfer_size;
		u8 *transfer_buffer;
		u32 state;
		void *stream_urb;
		void *dev;
		u32 err_count;
		u32 idx;
	} cocci_id/* drivers/media/usb/s2255/s2255drv.c 189 */;
	s32 cocci_id/* drivers/media/usb/s2255/s2255drv.c 1872 */;
	u16 cocci_id/* drivers/media/usb/s2255/s2255drv.c 1871 */;
	void *cocci_id/* drivers/media/usb/s2255/s2255drv.c 1871 */;
	unsigned char cocci_id/* drivers/media/usb/s2255/s2255drv.c 1870 */;
	long cocci_id/* drivers/media/usb/s2255/s2255drv.c 1870 */;
	u8 *cocci_id/* drivers/media/usb/s2255/s2255drv.c 1807 */;
	struct s2255_fw {
		int fw_loaded;
		int fw_size;
		struct urb *fw_urb;
		atomic_t fw_state;
		void *pfw_data;
		wait_queue_head_t wait_fw;
		const struct firmware *fw;
	} cocci_id/* drivers/media/usb/s2255/s2255drv.c 179 */;
	struct s2255_framei *cocci_id/* drivers/media/usb/s2255/s2255drv.c 1701 */;
	struct s2255_bufferi {
		unsigned long dwFrames;
		struct s2255_framei frame[SYS_FRAMES];
	} cocci_id/* drivers/media/usb/s2255/s2255drv.c 160 */;
	const struct v4l2_ctrl_config cocci_id/* drivers/media/usb/s2255/s2255drv.c 1576 */;
	const struct v4l2_ctrl_ops cocci_id/* drivers/media/usb/s2255/s2255drv.c 1572 */;
	const struct video_device cocci_id/* drivers/media/usb/s2255/s2255drv.c 1564 */;
	struct video_device *cocci_id/* drivers/media/usb/s2255/s2255drv.c 1548 */;
	const struct v4l2_ioctl_ops cocci_id/* drivers/media/usb/s2255/s2255drv.c 1520 */;
	struct s2255_framei {
		unsigned long size;
		unsigned long ulState;
		void *lpvbits;
		unsigned long cur_size;
	} cocci_id/* drivers/media/usb/s2255/s2255drv.c 152 */;
	const struct v4l2_file_operations cocci_id/* drivers/media/usb/s2255/s2255drv.c 1510 */;
	struct file *cocci_id/* drivers/media/usb/s2255/s2255drv.c 1404 */;
	int cocci_id/* drivers/media/usb/s2255/s2255drv.c 1377 */[NUM_FRAME_ENUMS];
	const struct v4l2_frmsize_discrete *cocci_id/* drivers/media/usb/s2255/s2255drv.c 1374 */;
	struct v4l2_frmivalenum *cocci_id/* drivers/media/usb/s2255/s2255drv.c 1370 */;
	struct v4l2_frmsizeenum *cocci_id/* drivers/media/usb/s2255/s2255drv.c 1352 */;
	const struct v4l2_frmsize_discrete cocci_id/* drivers/media/usb/s2255/s2255drv.c 1340 */[];
	struct s2255_mode {
		u32 format;
		u32 scale;
		u32 color;
		u32 fdec;
		u32 bright;
		u32 contrast;
		u32 saturation;
		u32 hue;
		u32 single;
		u32 usb_block;
		u32 restart;
	} cocci_id/* drivers/media/usb/s2255/s2255drv.c 133 */;
	__u32 cocci_id/* drivers/media/usb/s2255/s2255drv.c 1263 */;
	struct v4l2_streamparm *cocci_id/* drivers/media/usb/s2255/s2255drv.c 1261 */;
	const struct v4l2_jpegcompression *cocci_id/* drivers/media/usb/s2255/s2255drv.c 1249 */;
	struct v4l2_jpegcompression *cocci_id/* drivers/media/usb/s2255/s2255drv.c 1238 */;
	struct s2255_vc cocci_id/* drivers/media/usb/s2255/s2255drv.c 1201 */;
	struct v4l2_ctrl *cocci_id/* drivers/media/usb/s2255/s2255drv.c 1198 */;
	struct v4l2_input *cocci_id/* drivers/media/usb/s2255/s2255drv.c 1153 */;
	v4l2_std_id *cocci_id/* drivers/media/usb/s2255/s2255drv.c 1137 */;
	v4l2_std_id cocci_id/* drivers/media/usb/s2255/s2255drv.c 1096 */;
	__le32 cocci_id/* drivers/media/usb/s2255/s2255drv.c 1045 */;
	__le32 *cocci_id/* drivers/media/usb/s2255/s2255drv.c 1038 */;
	u32 *cocci_id/* drivers/media/usb/s2255/s2255drv.c 1033 */;
}
