cocci_test_suite() {
	u16 cocci_id/* drivers/media/usb/go7007/s2250-board.c 74 */[];
	struct i2c_driver cocci_id/* drivers/media/usb/go7007/s2250-board.c 622 */;
	const struct i2c_device_id cocci_id/* drivers/media/usb/go7007/s2250-board.c 616 */[];
	u8 cocci_id/* drivers/media/usb/go7007/s2250-board.c 580 */;
	struct s2250 cocci_id/* drivers/media/usb/go7007/s2250-board.c 512 */;
	struct i2c_adapter *cocci_id/* drivers/media/usb/go7007/s2250-board.c 501 */;
	const struct i2c_device_id *cocci_id/* drivers/media/usb/go7007/s2250-board.c 498 */;
	unsigned char cocci_id/* drivers/media/usb/go7007/s2250-board.c 49 */[];
	const struct v4l2_subdev_ops cocci_id/* drivers/media/usb/go7007/s2250-board.c 488 */;
	const struct v4l2_subdev_pad_ops cocci_id/* drivers/media/usb/go7007/s2250-board.c 484 */;
	const struct v4l2_subdev_video_ops cocci_id/* drivers/media/usb/go7007/s2250-board.c 479 */;
	const struct v4l2_subdev_audio_ops cocci_id/* drivers/media/usb/go7007/s2250-board.c 475 */;
	const struct v4l2_subdev_core_ops cocci_id/* drivers/media/usb/go7007/s2250-board.c 471 */;
	const struct v4l2_ctrl_ops cocci_id/* drivers/media/usb/go7007/s2250-board.c 467 */;
	struct s2250 *cocci_id/* drivers/media/usb/go7007/s2250-board.c 449 */;
	struct v4l2_subdev *cocci_id/* drivers/media/usb/go7007/s2250-board.c 447 */;
	u32 cocci_id/* drivers/media/usb/go7007/s2250-board.c 424 */;
	struct v4l2_mbus_framefmt *cocci_id/* drivers/media/usb/go7007/s2250-board.c 404 */;
	struct v4l2_subdev_format *cocci_id/* drivers/media/usb/go7007/s2250-board.c 402 */;
	struct v4l2_subdev_pad_config *cocci_id/* drivers/media/usb/go7007/s2250-board.c 401 */;
	struct go7007_usb {
		struct go7007_usb_board *board;
		struct mutex i2c_lock;
		struct usb_device *usbdev;
		struct urb *video_urbs[8];
		struct urb *audio_urbs[8];
		struct urb *intr_urb;
	} cocci_id/* drivers/media/usb/go7007/s2250-board.c 40 */;
	struct v4l2_ctrl *cocci_id/* drivers/media/usb/go7007/s2250-board.c 363 */;
	struct go7007_usb_board {
		unsigned int flags;
		struct go7007_board_info main_info;
	} cocci_id/* drivers/media/usb/go7007/s2250-board.c 35 */;
	v4l2_std_id cocci_id/* drivers/media/usb/go7007/s2250-board.c 344 */;
	u8 *cocci_id/* drivers/media/usb/go7007/s2250-board.c 254 */;
	u16 *cocci_id/* drivers/media/usb/go7007/s2250-board.c 249 */;
	struct i2c_client *cocci_id/* drivers/media/usb/go7007/s2250-board.c 249 */;
	unsigned int cocci_id/* drivers/media/usb/go7007/s2250-board.c 222 */;
	struct go7007_usb *cocci_id/* drivers/media/usb/go7007/s2250-board.c 134 */;
	void *cocci_id/* drivers/media/usb/go7007/s2250-board.c 132 */;
	u16 cocci_id/* drivers/media/usb/go7007/s2250-board.c 131 */;
	struct go7007 *cocci_id/* drivers/media/usb/go7007/s2250-board.c 131 */;
	int cocci_id/* drivers/media/usb/go7007/s2250-board.c 131 */;
	struct s2250 {
		struct v4l2_subdev sd;
		struct v4l2_ctrl_handler hdl;
		v4l2_std_id std;
		int input;
		int brightness;
		int contrast;
		int saturation;
		int hue;
		int reg12b_val;
		int audio_input;
		struct i2c_client *audio;
	} cocci_id/* drivers/media/usb/go7007/s2250-board.c 111 */;
}
