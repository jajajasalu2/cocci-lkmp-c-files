cocci_test_suite() {
	const struct v4l2_pix_format cocci_id/* drivers/media/usb/gspca/mr97310a.c 94 */[];
	bool cocci_id/* drivers/media/usb/gspca/mr97310a.c 929 */;
	void cocci_id/* drivers/media/usb/gspca/mr97310a.c 92 */(struct gspca_dev *gspca_dev);
	const struct v4l2_ctrl_config cocci_id/* drivers/media/usb/gspca/mr97310a.c 919 */;
	struct v4l2_ctrl_handler *cocci_id/* drivers/media/usb/gspca/mr97310a.c 918 */;
	const struct v4l2_ctrl_ops cocci_id/* drivers/media/usb/gspca/mr97310a.c 911 */;
	struct gspca_dev cocci_id/* drivers/media/usb/gspca/mr97310a.c 885 */;
	struct v4l2_ctrl *cocci_id/* drivers/media/usb/gspca/mr97310a.c 882 */;
	struct sensor_w_data {
		u8 reg;
		u8 flags;
		u8 data[16];
		int len;
	} cocci_id/* drivers/media/usb/gspca/mr97310a.c 85 */;
	u8 cocci_id/* drivers/media/usb/gspca/mr97310a.c 813 */[2];
	const u8 cocci_id/* drivers/media/usb/gspca/mr97310a.c 787 */[];
	s32 cocci_id/* drivers/media/usb/gspca/mr97310a.c 782 */;
	struct sd {
		struct gspca_dev gspca_dev;
		struct {
			struct v4l2_ctrl *exposure;
			struct v4l2_ctrl *min_clockdiv;
		};
		u8 sof_read;
		u8 cam_type;
		u8 sensor_type;
		u8 do_lcd_stop;
		u8 adj_colors;
	} cocci_id/* drivers/media/usb/gspca/mr97310a.c 72 */;
	const struct sensor_w_data cocci_id/* drivers/media/usb/gspca/mr97310a.c 537 */[];
	const __u8 cocci_id/* drivers/media/usb/gspca/mr97310a.c 491 */[];
	__u8 *cocci_id/* drivers/media/usb/gspca/mr97310a.c 489 */;
	struct cam *cocci_id/* drivers/media/usb/gspca/mr97310a.c 343 */;
	struct sd *cocci_id/* drivers/media/usb/gspca/mr97310a.c 342 */;
	const struct usb_device_id *cocci_id/* drivers/media/usb/gspca/mr97310a.c 340 */;
	void cocci_id/* drivers/media/usb/gspca/mr97310a.c 323 */;
	u8 cocci_id/* drivers/media/usb/gspca/mr97310a.c 201 */;
	struct gspca_dev *cocci_id/* drivers/media/usb/gspca/mr97310a.c 201 */;
	int cocci_id/* drivers/media/usb/gspca/mr97310a.c 201 */;
	const struct sensor_w_data *cocci_id/* drivers/media/usb/gspca/mr97310a.c 162 */;
	const u8 *cocci_id/* drivers/media/usb/gspca/mr97310a.c 151 */;
	struct usb_driver cocci_id/* drivers/media/usb/gspca/mr97310a.c 1066 */;
	struct sd cocci_id/* drivers/media/usb/gspca/mr97310a.c 1062 */;
	struct usb_interface *cocci_id/* drivers/media/usb/gspca/mr97310a.c 1059 */;
	const struct usb_device_id cocci_id/* drivers/media/usb/gspca/mr97310a.c 1049 */[];
	const struct sd_desc cocci_id/* drivers/media/usb/gspca/mr97310a.c 1038 */;
	unsigned char *cocci_id/* drivers/media/usb/gspca/mr97310a.c 1014 */;
	u8 *cocci_id/* drivers/media/usb/gspca/mr97310a.c 1010 */;
}
