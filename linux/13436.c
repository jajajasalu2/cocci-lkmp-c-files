cocci_test_suite() {
	u8 *cocci_id/* drivers/media/usb/go7007/go7007-usb.c 954 */;
	struct i2c_msg cocci_id/* drivers/media/usb/go7007/go7007-usb.c 950 */[];
	const struct go7007_hpi_ops cocci_id/* drivers/media/usb/go7007/go7007-usb.c 927 */;
	struct urb *cocci_id/* drivers/media/usb/go7007/go7007-usb.c 808 */;
	__le16 *cocci_id/* drivers/media/usb/go7007/go7007-usb.c 693 */;
	u16 cocci_id/* drivers/media/usb/go7007/go7007-usb.c 680 */;
	struct go7007_usb *cocci_id/* drivers/media/usb/go7007/go7007-usb.c 678 */;
	int cocci_id/* drivers/media/usb/go7007/go7007-usb.c 675 */;
	void *cocci_id/* drivers/media/usb/go7007/go7007-usb.c 623 */;
	struct go7007_usb {
		const struct go7007_usb_board *board;
		struct mutex i2c_lock;
		struct usb_device *usbdev;
		struct urb *video_urbs[8];
		struct urb *audio_urbs[8];
		struct urb *intr_urb;
	} cocci_id/* drivers/media/usb/go7007/go7007-usb.c 53 */;
	kernel_ulong_t cocci_id/* drivers/media/usb/go7007/go7007-usb.c 517 */;
	const struct usb_device_id cocci_id/* drivers/media/usb/go7007/go7007-usb.c 506 */[];
	struct go7007_usb_board {
		unsigned int flags;
		struct go7007_board_info main_info;
	} cocci_id/* drivers/media/usb/go7007/go7007-usb.c 48 */;
	const struct go7007_usb_board cocci_id/* drivers/media/usb/go7007/go7007-usb.c 386 */;
	unsigned int cocci_id/* drivers/media/usb/go7007/go7007-usb.c 24 */;
	struct usb_driver cocci_id/* drivers/media/usb/go7007/go7007-usb.c 1334 */;
	struct go7007 *cocci_id/* drivers/media/usb/go7007/go7007-usb.c 1317 */;
	struct usb_interface *cocci_id/* drivers/media/usb/go7007/go7007-usb.c 1315 */;
	void cocci_id/* drivers/media/usb/go7007/go7007-usb.c 1315 */;
	union i2c_smbus_data cocci_id/* drivers/media/usb/go7007/go7007-usb.c 1183 */;
	struct go7007_usb cocci_id/* drivers/media/usb/go7007/go7007-usb.c 1117 */;
	char *cocci_id/* drivers/media/usb/go7007/go7007-usb.c 1048 */;
	unsigned cocci_id/* drivers/media/usb/go7007/go7007-usb.c 1047 */;
	struct usb_device *cocci_id/* drivers/media/usb/go7007/go7007-usb.c 1046 */;
	const struct go7007_usb_board *cocci_id/* drivers/media/usb/go7007/go7007-usb.c 1045 */;
	const struct usb_device_id *cocci_id/* drivers/media/usb/go7007/go7007-usb.c 1041 */;
	struct i2c_adapter cocci_id/* drivers/media/usb/go7007/go7007-usb.c 1032 */;
	const struct i2c_algorithm cocci_id/* drivers/media/usb/go7007/go7007-usb.c 1027 */;
	u32 cocci_id/* drivers/media/usb/go7007/go7007-usb.c 1020 */;
	struct i2c_adapter *cocci_id/* drivers/media/usb/go7007/go7007-usb.c 1020 */;
}
