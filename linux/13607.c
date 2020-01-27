cocci_test_suite() {
	u8 *cocci_id/* drivers/media/usb/gspca/topro.c 944 */;
	struct usb_driver cocci_id/* drivers/media/usb/gspca/topro.c 4956 */;
	struct sd cocci_id/* drivers/media/usb/gspca/topro.c 4952 */;
	struct usb_interface *cocci_id/* drivers/media/usb/gspca/topro.c 4949 */;
	const struct usb_device_id cocci_id/* drivers/media/usb/gspca/topro.c 4941 */[];
	const struct sd_desc cocci_id/* drivers/media/usb/gspca/topro.c 4925 */;
	struct v4l2_ctrl_handler *cocci_id/* drivers/media/usb/gspca/topro.c 4882 */;
	const struct v4l2_ctrl_ops cocci_id/* drivers/media/usb/gspca/topro.c 4875 */;
	struct gspca_dev cocci_id/* drivers/media/usb/gspca/topro.c 4839 */;
	struct v4l2_ctrl *cocci_id/* drivers/media/usb/gspca/topro.c 4836 */;
	struct v4l2_jpegcompression *cocci_id/* drivers/media/usb/gspca/topro.c 4823 */;
	const struct v4l2_jpegcompression *cocci_id/* drivers/media/usb/gspca/topro.c 4812 */;
	struct v4l2_fract *cocci_id/* drivers/media/usb/gspca/topro.c 4768 */;
	struct v4l2_captureparm *cocci_id/* drivers/media/usb/gspca/topro.c 4767 */;
	struct v4l2_streamparm *cocci_id/* drivers/media/usb/gspca/topro.c 4764 */;
	const u8 cocci_id/* drivers/media/usb/gspca/topro.c 429 */[17][130];
	struct cmd {
		u8 reg;
		u8 val;
	} cocci_id/* drivers/media/usb/gspca/topro.c 424 */;
	const struct cmd cocci_id/* drivers/media/usb/gspca/topro.c 4164 */[];
	struct sd *cocci_id/* drivers/media/usb/gspca/topro.c 4163 */;
	const struct usb_device_id *cocci_id/* drivers/media/usb/gspca/topro.c 4001 */;
	s32 cocci_id/* drivers/media/usb/gspca/topro.c 3967 */;
	const u8 cocci_id/* drivers/media/usb/gspca/topro.c 21 */[];
	const struct framerates cocci_id/* drivers/media/usb/gspca/topro.c 168 */[];
	const u8 cocci_id/* drivers/media/usb/gspca/topro.c 156 */[17];
	const u8 cocci_id/* drivers/media/usb/gspca/topro.c 1494 */[NGAMMA][3][1024];
	const u8 cocci_id/* drivers/media/usb/gspca/topro.c 1479 */[NSENSORS][18];
	const u8 cocci_id/* drivers/media/usb/gspca/topro.c 1474 */[18];
	const struct v4l2_pix_format cocci_id/* drivers/media/usb/gspca/topro.c 140 */[];
	enum sensors{SENSOR_CX0342, SENSOR_SOI763A, NSENSORS,} cocci_id/* drivers/media/usb/gspca/topro.c 134 */;
	enum bridges{BRIDGE_TP6800, BRIDGE_TP6810,} cocci_id/* drivers/media/usb/gspca/topro.c 129 */;
	struct sd {
		struct gspca_dev gspca_dev;
		struct v4l2_ctrl *jpegqual;
		struct v4l2_ctrl *sharpness;
		struct v4l2_ctrl *gamma;
		struct v4l2_ctrl *blue;
		struct v4l2_ctrl *red;
		u8 framerate;
		u8 quality;
		s8 ag_cnt;
#define AG_CNT_START 13
		u8 bridge;
		u8 sensor;
		u8 jpeg_hdr[JPEG_HDR_SZ];
	} cocci_id/* drivers/media/usb/gspca/topro.c 110 */;
	struct usb_device *cocci_id/* drivers/media/usb/gspca/topro.c 1074 */;
	int cocci_id/* drivers/media/usb/gspca/topro.c 1072 */;
	const u8 *cocci_id/* drivers/media/usb/gspca/topro.c 1071 */;
	u8 cocci_id/* drivers/media/usb/gspca/topro.c 1070 */;
	struct gspca_dev *cocci_id/* drivers/media/usb/gspca/topro.c 1069 */;
	void cocci_id/* drivers/media/usb/gspca/topro.c 1069 */;
	const struct cmd *cocci_id/* drivers/media/usb/gspca/topro.c 1038 */;
}
