cocci_test_suite() {
	struct usb_driver cocci_id/* drivers/media/usb/gspca/se401.c 716 */;
	struct usb_interface *cocci_id/* drivers/media/usb/gspca/se401.c 711 */;
	struct sd cocci_id/* drivers/media/usb/gspca/se401.c 702 */;
	const struct usb_device_id cocci_id/* drivers/media/usb/gspca/se401.c 688 */[];
	const struct sd_desc cocci_id/* drivers/media/usb/gspca/se401.c 672 */;
	struct v4l2_ctrl_handler *cocci_id/* drivers/media/usb/gspca/se401.c 647 */;
	const struct v4l2_ctrl_ops cocci_id/* drivers/media/usb/gspca/se401.c 640 */;
	struct gspca_dev cocci_id/* drivers/media/usb/gspca/se401.c 618 */;
	struct v4l2_ctrl *cocci_id/* drivers/media/usb/gspca/se401.c 615 */;
	u8 cocci_id/* drivers/media/usb/gspca/se401.c 592 */;
	struct sd *cocci_id/* drivers/media/usb/gspca/se401.c 451 */;
	u8 *cocci_id/* drivers/media/usb/gspca/se401.c 449 */;
	struct gspca_dev *cocci_id/* drivers/media/usb/gspca/se401.c 449 */;
	int cocci_id/* drivers/media/usb/gspca/se401.c 449 */;
	void cocci_id/* drivers/media/usb/gspca/se401.c 449 */;
	struct sd {
		struct gspca_dev gspca_dev;
		struct {
			struct v4l2_ctrl *exposure;
			struct v4l2_ctrl *freq;
		};
		bool has_brightness;
		struct v4l2_pix_format fmts[MAX_MODES];
		int pixels_read;
		int packet_read;
		u8 packet[PACKET_SIZE];
		u8 restart_stream;
		u8 button_state;
		u8 resetlevel;
		u8 resetlevel_frame_count;
		int resetlevel_adjust_dir;
		int expo_change_state;
	} cocci_id/* drivers/media/usb/gspca/se401.c 42 */;
	unsigned int cocci_id/* drivers/media/usb/gspca/se401.c 391 */;
	enum{EXPO_CHANGED, EXPO_DROP_FRAME, EXPO_NO_CHANGE,} cocci_id/* drivers/media/usb/gspca/se401.c 35 */;
	int cocci_id/* drivers/media/usb/gspca/se401.c 214 */[MAX_MODES];
	struct cam *cocci_id/* drivers/media/usb/gspca/se401.c 211 */;
	const struct usb_device_id *cocci_id/* drivers/media/usb/gspca/se401.c 208 */;
	s32 cocci_id/* drivers/media/usb/gspca/se401.c 159 */;
	u16 cocci_id/* drivers/media/usb/gspca/se401.c 132 */;
}
