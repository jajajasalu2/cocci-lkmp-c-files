cocci_test_suite() {
	struct usb_driver cocci_id/* drivers/media/usb/gspca/sn9c2028.c 951 */;
	struct sd cocci_id/* drivers/media/usb/gspca/sn9c2028.c 947 */;
	struct usb_interface *cocci_id/* drivers/media/usb/gspca/sn9c2028.c 944 */;
	const struct usb_device_id cocci_id/* drivers/media/usb/gspca/sn9c2028.c 929 */[];
	const struct sd_desc cocci_id/* drivers/media/usb/gspca/sn9c2028.c 917 */;
	unsigned char *cocci_id/* drivers/media/usb/gspca/sn9c2028.c 894 */;
	__u8 *cocci_id/* drivers/media/usb/gspca/sn9c2028.c 891 */;
	s32 cocci_id/* drivers/media/usb/gspca/sn9c2028.c 857 */;
	struct sd *cocci_id/* drivers/media/usb/gspca/sn9c2028.c 856 */;
	struct gspca_dev *cocci_id/* drivers/media/usb/gspca/sn9c2028.c 854 */;
	int cocci_id/* drivers/media/usb/gspca/sn9c2028.c 854 */;
	void cocci_id/* drivers/media/usb/gspca/sn9c2028.c 854 */;
	__u8 cocci_id/* drivers/media/usb/gspca/sn9c2028.c 841 */[6];
	u8 *cocci_id/* drivers/media/usb/gspca/sn9c2028.c 59 */;
	const struct v4l2_pix_format cocci_id/* drivers/media/usb/gspca/sn9c2028.c 50 */[];
	struct init_command {
		unsigned char instruction[6];
		unsigned char to_read;
	} cocci_id/* drivers/media/usb/gspca/sn9c2028.c 35 */;
	struct v4l2_ctrl_handler *cocci_id/* drivers/media/usb/gspca/sn9c2028.c 306 */;
	const struct v4l2_ctrl_ops cocci_id/* drivers/media/usb/gspca/sn9c2028.c 299 */;
	struct gspca_dev cocci_id/* drivers/media/usb/gspca/sn9c2028.c 278 */;
	struct v4l2_ctrl *cocci_id/* drivers/media/usb/gspca/sn9c2028.c 275 */;
	struct init_command cocci_id/* drivers/media/usb/gspca/sn9c2028.c 257 */[];
	struct init_command *cocci_id/* drivers/media/usb/gspca/sn9c2028.c 228 */;
	struct sd {
		struct gspca_dev gspca_dev;
		u8 sof_read;
		u16 model;
#define MIN_AVG_LUM 8500
#define MAX_AVG_LUM 10000
		int avg_lum;
		u8 avg_lum_l;
		struct {
			struct v4l2_ctrl *autogain;
			struct v4l2_ctrl *gain;
		};
	} cocci_id/* drivers/media/usb/gspca/sn9c2028.c 19 */;
	struct cam *cocci_id/* drivers/media/usb/gspca/sn9c2028.c 169 */;
	const struct usb_device_id *cocci_id/* drivers/media/usb/gspca/sn9c2028.c 166 */;
	__u8 cocci_id/* drivers/media/usb/gspca/sn9c2028.c 121 */[4];
}
