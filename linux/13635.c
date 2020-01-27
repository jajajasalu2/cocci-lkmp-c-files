cocci_test_suite() {
	struct sd *cocci_id/* drivers/media/usb/gspca/ov534.c 996 */;
	s32 cocci_id/* drivers/media/usb/gspca/ov534.c 994 */;
	struct gspca_dev *cocci_id/* drivers/media/usb/gspca/ov534.c 994 */;
	u8 cocci_id/* drivers/media/usb/gspca/ov534.c 904 */[][6];
	s16 cocci_id/* drivers/media/usb/gspca/ov534.c 870 */;
	void cocci_id/* drivers/media/usb/gspca/ov534.c 83 */(struct gspca_dev *gspca_dev);
	const struct rate_s cocci_id/* drivers/media/usb/gspca/ov534.c 820 */[];
	int cocci_id/* drivers/media/usb/gspca/ov534.c 82 */(struct gspca_dev *gspca_dev);
	const struct rate_s *cocci_id/* drivers/media/usb/gspca/ov534.c 819 */;
	struct rate_s {
		u8 fps;
		u8 r11;
		u8 r0d;
		u8 re5;
	} cocci_id/* drivers/media/usb/gspca/ov534.c 813 */;
	const u8 *cocci_id/* drivers/media/usb/gspca/ov534.c 785 */[2];
	enum sensors{SENSOR_OV767x, SENSOR_OV772x, NSENSORS,} cocci_id/* drivers/media/usb/gspca/ov534.c 76 */;
	struct usb_device *cocci_id/* drivers/media/usb/gspca/ov534.c 681 */;
	u16 cocci_id/* drivers/media/usb/gspca/ov534.c 679 */;
	void cocci_id/* drivers/media/usb/gspca/ov534.c 658 */;
	struct sd {
		struct gspca_dev gspca_dev;
		struct v4l2_ctrl_handler ctrl_handler;
		struct v4l2_ctrl *hue;
		struct v4l2_ctrl *saturation;
		struct v4l2_ctrl *brightness;
		struct v4l2_ctrl *contrast;
		struct {
			struct v4l2_ctrl *autogain;
			struct v4l2_ctrl *gain;
		};
		struct v4l2_ctrl *autowhitebalance;
		struct {
			struct v4l2_ctrl *autoexposure;
			struct v4l2_ctrl *exposure;
		};
		struct v4l2_ctrl *sharpness;
		struct v4l2_ctrl *hflip;
		struct v4l2_ctrl *vflip;
		struct v4l2_ctrl *plfreq;
		__u32 last_pts;
		u16 last_fid;
		u8 frame_rate;
		u8 sensor;
	} cocci_id/* drivers/media/usb/gspca/ov534.c 48 */;
	struct usb_driver cocci_id/* drivers/media/usb/gspca/ov534.c 1596 */;
	struct usb_interface *cocci_id/* drivers/media/usb/gspca/ov534.c 1590 */;
	const struct usb_device_id cocci_id/* drivers/media/usb/gspca/ov534.c 1581 */[];
	const struct sd_desc cocci_id/* drivers/media/usb/gspca/ov534.c 1568 */;
	struct v4l2_fract *cocci_id/* drivers/media/usb/gspca/ov534.c 1539 */;
	struct v4l2_captureparm *cocci_id/* drivers/media/usb/gspca/ov534.c 1538 */;
	struct v4l2_streamparm *cocci_id/* drivers/media/usb/gspca/ov534.c 1536 */;
	const u8 cocci_id/* drivers/media/usb/gspca/ov534.c 146 */[][2];
	__u32 cocci_id/* drivers/media/usb/gspca/ov534.c 1459 */;
	u8 *cocci_id/* drivers/media/usb/gspca/ov534.c 1456 */;
	struct reg_array {
		const u8 *val[2];
		int len;
	} cocci_id/* drivers/media/usb/gspca/ov534.c 141 */;
	const struct reg_array cocci_id/* drivers/media/usb/gspca/ov534.c 1374 */[NSENSORS][4];
	const struct reg_array cocci_id/* drivers/media/usb/gspca/ov534.c 1317 */[NSENSORS];
	const struct framerates cocci_id/* drivers/media/usb/gspca/ov534.c 122 */[];
	struct v4l2_ctrl_handler *cocci_id/* drivers/media/usb/gspca/ov534.c 1207 */;
	const struct v4l2_ctrl_ops cocci_id/* drivers/media/usb/gspca/ov534.c 1199 */;
	const u8 cocci_id/* drivers/media/usb/gspca/ov534.c 119 */[];
	struct sd cocci_id/* drivers/media/usb/gspca/ov534.c 1125 */;
	struct v4l2_ctrl *cocci_id/* drivers/media/usb/gspca/ov534.c 1123 */;
	int cocci_id/* drivers/media/usb/gspca/ov534.c 1123 */;
	struct cam *cocci_id/* drivers/media/usb/gspca/ov534.c 1111 */;
	const struct usb_device_id *cocci_id/* drivers/media/usb/gspca/ov534.c 1108 */;
	const struct v4l2_pix_format cocci_id/* drivers/media/usb/gspca/ov534.c 108 */[];
	u8 cocci_id/* drivers/media/usb/gspca/ov534.c 1002 */;
}
