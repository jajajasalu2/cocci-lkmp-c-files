cocci_test_suite() {
	u8 cocci_id/* drivers/media/usb/gspca/mars.c 90 */;
	void cocci_id/* drivers/media/usb/gspca/mars.c 89 */;
	const __u8 cocci_id/* drivers/media/usb/gspca/mars.c 56 */[0x20];
	const struct v4l2_pix_format cocci_id/* drivers/media/usb/gspca/mars.c 43 */[];
	struct usb_driver cocci_id/* drivers/media/usb/gspca/mars.c 415 */;
	struct sd cocci_id/* drivers/media/usb/gspca/mars.c 411 */;
	struct usb_interface *cocci_id/* drivers/media/usb/gspca/mars.c 408 */;
	const struct usb_device_id cocci_id/* drivers/media/usb/gspca/mars.c 401 */[];
	const struct sd_desc cocci_id/* drivers/media/usb/gspca/mars.c 390 */;
	void cocci_id/* drivers/media/usb/gspca/mars.c 38 */(struct gspca_dev *gspca_dev,
							     s32 val);
	u8 *cocci_id/* drivers/media/usb/gspca/mars.c 352 */;
	struct sd {
		struct gspca_dev gspca_dev;
		struct v4l2_ctrl *brightness;
		struct v4l2_ctrl *saturation;
		struct v4l2_ctrl *sharpness;
		struct v4l2_ctrl *gamma;
		struct {
			struct v4l2_ctrl *illum_top;
			struct v4l2_ctrl *illum_bottom;
		};
		u8 jpeg_hdr[JPEG_HDR_SZ];
	} cocci_id/* drivers/media/usb/gspca/mars.c 23 */;
	struct cam *cocci_id/* drivers/media/usb/gspca/mars.c 223 */;
	const struct usb_device_id *cocci_id/* drivers/media/usb/gspca/mars.c 221 */;
	struct v4l2_ctrl_handler *cocci_id/* drivers/media/usb/gspca/mars.c 193 */;
	const struct v4l2_ctrl_ops cocci_id/* drivers/media/usb/gspca/mars.c 185 */;
	struct sd *cocci_id/* drivers/media/usb/gspca/mars.c 147 */;
	struct gspca_dev cocci_id/* drivers/media/usb/gspca/mars.c 146 */;
	struct gspca_dev *cocci_id/* drivers/media/usb/gspca/mars.c 145 */;
	struct v4l2_ctrl *cocci_id/* drivers/media/usb/gspca/mars.c 143 */;
	int cocci_id/* drivers/media/usb/gspca/mars.c 143 */;
	bool cocci_id/* drivers/media/usb/gspca/mars.c 130 */;
	s32 cocci_id/* drivers/media/usb/gspca/mars.c 101 */;
}
