cocci_test_suite() {
	const struct v4l2_frequency *cocci_id/* drivers/media/radio/si4713/radio-usb-si4713.c 93 */;
	const struct v4l2_modulator *cocci_id/* drivers/media/radio/si4713/radio-usb-si4713.c 85 */;
	struct v4l2_modulator *cocci_id/* drivers/media/radio/si4713/radio-usb-si4713.c 77 */;
	struct v4l2_capability *cocci_id/* drivers/media/radio/si4713/radio-usb-si4713.c 66 */;
	struct si4713_usb_device cocci_id/* drivers/media/radio/si4713/radio-usb-si4713.c 62 */;
	struct v4l2_device *cocci_id/* drivers/media/radio/si4713/radio-usb-si4713.c 60 */;
	struct usb_driver cocci_id/* drivers/media/radio/si4713/radio-usb-si4713.c 515 */;
	struct usb_interface *cocci_id/* drivers/media/radio/si4713/radio-usb-si4713.c 500 */;
	void cocci_id/* drivers/media/radio/si4713/radio-usb-si4713.c 500 */;
	struct si4713_usb_device {
		struct usb_device *usbdev;
		struct usb_interface *intf;
		struct video_device vdev;
		struct v4l2_device v4l2_dev;
		struct v4l2_subdev *v4l2_subdev;
		struct mutex lock;
		struct i2c_adapter i2c_adapter;
		u8 *buffer;
	} cocci_id/* drivers/media/radio/si4713/radio-usb-si4713.c 48 */;
	struct v4l2_subdev *cocci_id/* drivers/media/radio/si4713/radio-usb-si4713.c 416 */;
	const struct usb_device_id *cocci_id/* drivers/media/radio/si4713/radio-usb-si4713.c 412 */;
	const struct usb_device_id cocci_id/* drivers/media/radio/si4713/radio-usb-si4713.c 40 */[];
	const struct i2c_adapter cocci_id/* drivers/media/radio/si4713/radio-usb-si4713.c 394 */;
	const struct i2c_algorithm cocci_id/* drivers/media/radio/si4713/radio-usb-si4713.c 387 */;
	u32 cocci_id/* drivers/media/radio/si4713/radio-usb-si4713.c 382 */;
	struct i2c_adapter *cocci_id/* drivers/media/radio/si4713/radio-usb-si4713.c 382 */;
	struct i2c_msg *cocci_id/* drivers/media/radio/si4713/radio-usb-si4713.c 364 */;
	unsigned long cocci_id/* drivers/media/radio/si4713/radio-usb-si4713.c 314 */;
	u8 *cocci_id/* drivers/media/radio/si4713/radio-usb-si4713.c 293 */;
	struct si4713_usb_device *cocci_id/* drivers/media/radio/si4713/radio-usb-si4713.c 293 */;
	char *cocci_id/* drivers/media/radio/si4713/radio-usb-si4713.c 293 */;
	int cocci_id/* drivers/media/radio/si4713/radio-usb-si4713.c 293 */;
	struct si4713_command_table cocci_id/* drivers/media/radio/si4713/radio-usb-si4713.c 276 */[];
	struct si4713_command_table {
		int command_id;
		u8 payload[8];
	} cocci_id/* drivers/media/radio/si4713/radio-usb-si4713.c 263 */;
	struct i2c_board_info cocci_id/* drivers/media/radio/si4713/radio-usb-si4713.c 259 */;
	const u8 *cocci_id/* drivers/media/radio/si4713/radio-usb-si4713.c 249 */;
	const struct si4713_start_seq_table cocci_id/* drivers/media/radio/si4713/radio-usb-si4713.c 211 */[];
	struct si4713_start_seq_table {
		int len;
		u8 payload[8];
	} cocci_id/* drivers/media/radio/si4713/radio-usb-si4713.c 201 */;
	const struct v4l2_file_operations cocci_id/* drivers/media/radio/si4713/radio-usb-si4713.c 120 */;
	const struct v4l2_ioctl_ops cocci_id/* drivers/media/radio/si4713/radio-usb-si4713.c 108 */;
	struct v4l2_frequency *cocci_id/* drivers/media/radio/si4713/radio-usb-si4713.c 101 */;
	struct file *cocci_id/* drivers/media/radio/si4713/radio-usb-si4713.c 100 */;
	void *cocci_id/* drivers/media/radio/si4713/radio-usb-si4713.c 100 */;
}
