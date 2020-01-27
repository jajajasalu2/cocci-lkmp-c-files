cocci_test_suite() {
	struct v4l2_ctrl_handler *cocci_id/* drivers/media/usb/gspca/t613.c 948 */;
	const struct v4l2_ctrl_ops cocci_id/* drivers/media/usb/gspca/t613.c 940 */;
	s32 cocci_id/* drivers/media/usb/gspca/t613.c 863 */;
	struct sd *cocci_id/* drivers/media/usb/gspca/t613.c 862 */;
	struct gspca_dev cocci_id/* drivers/media/usb/gspca/t613.c 861 */;
	struct v4l2_ctrl *cocci_id/* drivers/media/usb/gspca/t613.c 858 */;
	struct additional_sensor_data {
		const u8 n3[6];
		const u8 *n4,n4sz;
		const u8 reg80,reg8e;
		const u8 nset8[6];
		const u8 data1[10];
		const u8 data2[9];
		const u8 data3[9];
		const u8 data5[6];
		const u8 stream[4];
	} cocci_id/* drivers/media/usb/gspca/t613.c 81 */;
	u8 cocci_id/* drivers/media/usb/gspca/t613.c 742 */[];
	const struct additional_sensor_data *cocci_id/* drivers/media/usb/gspca/t613.c 569 */;
	u8 cocci_id/* drivers/media/usb/gspca/t613.c 492 */[8];
	const struct v4l2_pix_format cocci_id/* drivers/media/usb/gspca/t613.c 48 */[];
	u8 cocci_id/* drivers/media/usb/gspca/t613.c 450 */[4];
	struct cam *cocci_id/* drivers/media/usb/gspca/t613.c 440 */;
	const struct usb_device_id *cocci_id/* drivers/media/usb/gspca/t613.c 438 */;
	enum sensors{SENSOR_OM6802, SENSOR_OTHER, SENSOR_TAS5130A, SENSOR_LT168G,} cocci_id/* drivers/media/usb/gspca/t613.c 41 */;
	u8 cocci_id/* drivers/media/usb/gspca/t613.c 383 */[6];
	u8 cocci_id/* drivers/media/usb/gspca/t613.c 382 */;
	const u8 *cocci_id/* drivers/media/usb/gspca/t613.c 381 */;
	int cocci_id/* drivers/media/usb/gspca/t613.c 380 */;
	struct gspca_dev *cocci_id/* drivers/media/usb/gspca/t613.c 378 */;
	void cocci_id/* drivers/media/usb/gspca/t613.c 378 */;
	u8 *cocci_id/* drivers/media/usb/gspca/t613.c 329 */;
	u16 cocci_id/* drivers/media/usb/gspca/t613.c 294 */;
	const u8 cocci_id/* drivers/media/usb/gspca/t613.c 284 */[][8];
	struct sd {
		struct gspca_dev gspca_dev;
		struct v4l2_ctrl *freq;
		struct {
			struct v4l2_ctrl *awb;
			struct v4l2_ctrl *gain;
			struct v4l2_ctrl *red_balance;
			struct v4l2_ctrl *blue_balance;
		};
		u8 sensor;
		u8 button_pressed;
	} cocci_id/* drivers/media/usb/gspca/t613.c 28 */;
	const u8 cocci_id/* drivers/media/usb/gspca/t613.c 232 */[GAMMA_MAX + 1][17];
	const u8 cocci_id/* drivers/media/usb/gspca/t613.c 221 */[MAX_EFFECTS][6];
	const struct additional_sensor_data cocci_id/* drivers/media/usb/gspca/t613.c 135 */[];
	const u8 cocci_id/* drivers/media/usb/gspca/t613.c 123 */[];
	struct usb_driver cocci_id/* drivers/media/usb/gspca/t613.c 1029 */;
	struct sd cocci_id/* drivers/media/usb/gspca/t613.c 1025 */;
	struct usb_interface *cocci_id/* drivers/media/usb/gspca/t613.c 1022 */;
	const struct usb_device_id cocci_id/* drivers/media/usb/gspca/t613.c 1015 */[];
	const struct sd_desc cocci_id/* drivers/media/usb/gspca/t613.c 1001 */;
}
