cocci_test_suite() {
	struct sd {
		struct gspca_dev gspca_dev;
		struct {
			struct v4l2_ctrl *brightness;
			struct v4l2_ctrl *contrast;
		};
		struct v4l2_ctrl *saturation;
		struct v4l2_ctrl *white_balance;
		struct v4l2_ctrl *red_balance;
		struct v4l2_ctrl *blue_balance;
		struct {
			struct v4l2_ctrl *hflip;
			struct v4l2_ctrl *vflip;
		};
		struct v4l2_ctrl *sharpness;
		u8 flags;
#define FL_HFLIP 0x01
#define FL_VFLIP 0x02
		u8 sof_read;
		s8 autogain_ignore_frames;
		atomic_t avg_lum;
	} cocci_id/* drivers/media/usb/gspca/pac7302.c 99 */;
	struct usb_driver cocci_id/* drivers/media/usb/gspca/pac7302.c 940 */;
	struct sd cocci_id/* drivers/media/usb/gspca/pac7302.c 936 */;
	struct usb_interface *cocci_id/* drivers/media/usb/gspca/pac7302.c 933 */;
	const struct usb_device_id cocci_id/* drivers/media/usb/gspca/pac7302.c 911 */[];
	const struct sd_desc cocci_id/* drivers/media/usb/gspca/pac7302.c 892 */;
	u8 *cocci_id/* drivers/media/usb/gspca/pac7302.c 862 */;
	const struct v4l2_dbg_register *cocci_id/* drivers/media/usb/gspca/pac7302.c 828 */;
	const int cocci_id/* drivers/media/usb/gspca/pac7302.c 729 */;
	int cocci_id/* drivers/media/usb/gspca/pac7302.c 727 */;
	struct sd *cocci_id/* drivers/media/usb/gspca/pac7302.c 726 */;
	struct gspca_dev *cocci_id/* drivers/media/usb/gspca/pac7302.c 724 */;
	void cocci_id/* drivers/media/usb/gspca/pac7302.c 724 */;
	struct v4l2_ctrl_handler *cocci_id/* drivers/media/usb/gspca/pac7302.c 634 */;
	const struct v4l2_ctrl_ops cocci_id/* drivers/media/usb/gspca/pac7302.c 626 */;
	struct gspca_dev cocci_id/* drivers/media/usb/gspca/pac7302.c 574 */;
	struct v4l2_ctrl *cocci_id/* drivers/media/usb/gspca/pac7302.c 571 */;
	u16 cocci_id/* drivers/media/usb/gspca/pac7302.c 489 */;
	const unsigned int cocci_id/* drivers/media/usb/gspca/pac7302.c 428 */;
	s32 cocci_id/* drivers/media/usb/gspca/pac7302.c 426 */;
	const int cocci_id/* drivers/media/usb/gspca/pac7302.c 399 */[9];
	const u8 cocci_id/* drivers/media/usb/gspca/pac7302.c 373 */[10];
	struct cam *cocci_id/* drivers/media/usb/gspca/pac7302.c 358 */;
	const struct usb_device_id *cocci_id/* drivers/media/usb/gspca/pac7302.c 355 */;
	unsigned int cocci_id/* drivers/media/usb/gspca/pac7302.c 318 */;
	u8 cocci_id/* drivers/media/usb/gspca/pac7302.c 257 */;
	const u8 *cocci_id/* drivers/media/usb/gspca/pac7302.c 234 */;
	const u8 cocci_id/* drivers/media/usb/gspca/pac7302.c 136 */[];
	const struct v4l2_pix_format cocci_id/* drivers/media/usb/gspca/pac7302.c 125 */[];
}
