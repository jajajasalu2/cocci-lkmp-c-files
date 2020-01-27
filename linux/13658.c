cocci_test_suite() {
	struct v4l2_pix_format cocci_id/* drivers/media/usb/gspca/jeilinj.c 67 */[];
	struct jlj_command {
		unsigned char instruction[2];
		unsigned char ack_wanted;
		unsigned char delay;
	} cocci_id/* drivers/media/usb/gspca/jeilinj.c 60 */;
	struct usb_driver cocci_id/* drivers/media/usb/gspca/jeilinj.c 525 */;
	struct sd cocci_id/* drivers/media/usb/gspca/jeilinj.c 521 */;
	struct usb_interface *cocci_id/* drivers/media/usb/gspca/jeilinj.c 516 */;
	const struct sd_desc *cocci_id/* drivers/media/usb/gspca/jeilinj.c 510 */[2];
	const struct sd_desc cocci_id/* drivers/media/usb/gspca/jeilinj.c 488 */;
	struct v4l2_jpegcompression *cocci_id/* drivers/media/usb/gspca/jeilinj.c 475 */;
	const struct v4l2_jpegcompression *cocci_id/* drivers/media/usb/gspca/jeilinj.c 466 */;
	struct sd {
		struct gspca_dev gspca_dev;
		int blocks_left;
		const struct v4l2_pix_format *cap_mode;
		struct v4l2_ctrl *freq;
		struct v4l2_ctrl *jpegqual;
		u8 type;
		u8 quality;
#define QUALITY_MIN 35
#define QUALITY_MAX 85
#define QUALITY_DEF 85
		u8 jpeg_hdr[JPEG_HDR_SZ];
	} cocci_id/* drivers/media/usb/gspca/jeilinj.c 45 */;
	const struct v4l2_ctrl_config cocci_id/* drivers/media/usb/gspca/jeilinj.c 431 */;
	struct v4l2_ctrl_handler *cocci_id/* drivers/media/usb/gspca/jeilinj.c 430 */;
	const struct v4l2_ctrl_ops cocci_id/* drivers/media/usb/gspca/jeilinj.c 423 */;
	struct gspca_dev cocci_id/* drivers/media/usb/gspca/jeilinj.c 391 */;
	struct v4l2_ctrl *cocci_id/* drivers/media/usb/gspca/jeilinj.c 388 */;
	const struct usb_device_id cocci_id/* drivers/media/usb/gspca/jeilinj.c 380 */[];
	enum{SAKAR_57379, SPORTSCAM_DV15,} cocci_id/* drivers/media/usb/gspca/jeilinj.c 36 */;
	u8 cocci_id/* drivers/media/usb/gspca/jeilinj.c 326 */[][2];
	struct cam *cocci_id/* drivers/media/usb/gspca/jeilinj.c 308 */;
	const struct usb_device_id *cocci_id/* drivers/media/usb/gspca/jeilinj.c 306 */;
	u32 *cocci_id/* drivers/media/usb/gspca/jeilinj.c 274 */;
	u32 cocci_id/* drivers/media/usb/gspca/jeilinj.c 265 */;
	u8 *cocci_id/* drivers/media/usb/gspca/jeilinj.c 261 */;
	struct jlj_command cocci_id/* drivers/media/usb/gspca/jeilinj.c 209 */[];
	struct sd *cocci_id/* drivers/media/usb/gspca/jeilinj.c 208 */;
	u8 cocci_id/* drivers/media/usb/gspca/jeilinj.c 207 */;
	s32 cocci_id/* drivers/media/usb/gspca/jeilinj.c 151 */;
	int cocci_id/* drivers/media/usb/gspca/jeilinj.c 106 */;
	struct gspca_dev *cocci_id/* drivers/media/usb/gspca/jeilinj.c 104 */;
	unsigned char *cocci_id/* drivers/media/usb/gspca/jeilinj.c 104 */;
	void cocci_id/* drivers/media/usb/gspca/jeilinj.c 104 */;
}
