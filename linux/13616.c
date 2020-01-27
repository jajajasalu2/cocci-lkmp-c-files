cocci_test_suite() {
	struct usb_driver cocci_id/* drivers/media/usb/gspca/spca561.c 899 */;
	struct sd cocci_id/* drivers/media/usb/gspca/spca561.c 895 */;
	struct usb_interface *cocci_id/* drivers/media/usb/gspca/spca561.c 890 */;
	const struct usb_device_id cocci_id/* drivers/media/usb/gspca/spca561.c 867 */[];
	const struct sd_desc *cocci_id/* drivers/media/usb/gspca/spca561.c 861 */[2];
	const struct sd_desc cocci_id/* drivers/media/usb/gspca/spca561.c 836 */;
	struct v4l2_ctrl_handler *cocci_id/* drivers/media/usb/gspca/spca561.c 791 */;
	const struct v4l2_ctrl_ops cocci_id/* drivers/media/usb/gspca/spca561.c 785 */;
	struct gspca_dev cocci_id/* drivers/media/usb/gspca/spca561.c 752 */;
	struct v4l2_ctrl *cocci_id/* drivers/media/usb/gspca/spca561.c 749 */;
	u8 *cocci_id/* drivers/media/usb/gspca/spca561.c 702 */;
	__u8 cocci_id/* drivers/media/usb/gspca/spca561.c 649 */;
	int cocci_id/* drivers/media/usb/gspca/spca561.c 646 */;
	struct sd *cocci_id/* drivers/media/usb/gspca/spca561.c 645 */;
	struct gspca_dev *cocci_id/* drivers/media/usb/gspca/spca561.c 643 */;
	void cocci_id/* drivers/media/usb/gspca/spca561.c 643 */;
	const __u8 cocci_id/* drivers/media/usb/gspca/spca561.c 560 */[8];
	s32 cocci_id/* drivers/media/usb/gspca/spca561.c 547 */;
	int cocci_id/* drivers/media/usb/gspca/spca561.c 513 */[];
	const struct v4l2_pix_format cocci_id/* drivers/media/usb/gspca/spca561.c 44 */[];
	struct cam *cocci_id/* drivers/media/usb/gspca/spca561.c 396 */;
	const struct usb_device_id *cocci_id/* drivers/media/usb/gspca/spca561.c 393 */;
	const __u16 *cocci_id/* drivers/media/usb/gspca/spca561.c 363 */[2];
	__u16 cocci_id/* drivers/media/usb/gspca/spca561.c 341 */;
	struct usb_device *cocci_id/* drivers/media/usb/gspca/spca561.c 278 */;
	struct sd {
		struct gspca_dev gspca_dev;
		struct {
			struct v4l2_ctrl *contrast;
			struct v4l2_ctrl *hue;
		};
		struct v4l2_ctrl *autogain;
#define EXPO12A_DEF 3
		__u8 expo12a;
		__u8 chip_revision;
#define Rev012A 0
#define Rev072A 1
		signed char ag_cnt;
#define AG_CNT_START 13
	} cocci_id/* drivers/media/usb/gspca/spca561.c 24 */;
	const __u16 cocci_id/* drivers/media/usb/gspca/spca561.c 197 */[][2];
	const u16 cocci_id/* drivers/media/usb/gspca/spca561.c 131 */[][2];
}
