cocci_test_suite() {
	const struct ucbus_write_cmd cocci_id/* drivers/media/usb/gspca/sq930x.c 89 */[];
	const struct cap_s *cocci_id/* drivers/media/usb/gspca/sq930x.c 880 */;
	struct i2c_write_cmd {
		u8 reg;
		u16 val;
	} cocci_id/* drivers/media/usb/gspca/sq930x.c 84 */;
	struct cam *cocci_id/* drivers/media/usb/gspca/sq930x.c 809 */;
	const struct usb_device_id *cocci_id/* drivers/media/usb/gspca/sq930x.c 806 */;
	struct ucbus_write_cmd {
		u16 bw_addr;
		u8 bw_data;
	} cocci_id/* drivers/media/usb/gspca/sq930x.c 80 */;
	u8 cocci_id/* drivers/media/usb/gspca/sq930x.c 756 */[15];
	s32 cocci_id/* drivers/media/usb/gspca/sq930x.c 750 */;
	struct ucbus_write_cmd cocci_id/* drivers/media/usb/gspca/sq930x.c 742 */[2];
	const u8 cocci_id/* drivers/media/usb/gspca/sq930x.c 671 */[][7];
	const u8 cocci_id/* drivers/media/usb/gspca/sq930x.c 630 */[];
	const struct sensor_s *cocci_id/* drivers/media/usb/gspca/sq930x.c 629 */;
	int cocci_id/* drivers/media/usb/gspca/sq930x.c 628 */;
	struct gspca_dev *cocci_id/* drivers/media/usb/gspca/sq930x.c 625 */;
	const struct ucbus_write_cmd cocci_id/* drivers/media/usb/gspca/sq930x.c 616 */;
	struct sd *cocci_id/* drivers/media/usb/gspca/sq930x.c 614 */;
	void cocci_id/* drivers/media/usb/gspca/sq930x.c 614 */;
	const u8 *cocci_id/* drivers/media/usb/gspca/sq930x.c 605 */;
	u16 cocci_id/* drivers/media/usb/gspca/sq930x.c 584 */;
	const struct ucbus_write_cmd *cocci_id/* drivers/media/usb/gspca/sq930x.c 525 */;
	u8 *cocci_id/* drivers/media/usb/gspca/sq930x.c 486 */;
	const struct i2c_write_cmd *cocci_id/* drivers/media/usb/gspca/sq930x.c 480 */;
	struct v4l2_pix_format cocci_id/* drivers/media/usb/gspca/sq930x.c 47 */[];
	enum sensors{SENSOR_ICX098BQ, SENSOR_LZ24BP, SENSOR_MI0360, SENSOR_MT9V111, SENSOR_OV7660, SENSOR_OV9630,} cocci_id/* drivers/media/usb/gspca/sq930x.c 38 */;
	const struct sensor_s cocci_id/* drivers/media/usb/gspca/sq930x.c 343 */[];
	struct sensor_s {
		const char *name;
		u8 i2c_addr;
		u8 i2c_dum;
		u8 gpio[5];
		u8 cmd_len;
		const struct ucbus_write_cmd *cmd;
	} cocci_id/* drivers/media/usb/gspca/sq930x.c 334 */;
	const struct cap_s {
		u8 cc_sizeid;
		u8 cc_bytes[32];
	} cocci_id/* drivers/media/usb/gspca/sq930x.c 280 */[4][2];
	struct sd {
		struct gspca_dev gspca_dev;
		struct {
			struct v4l2_ctrl *exposure;
			struct v4l2_ctrl *gain;
		};
		u8 do_ctrl;
		u8 gpio[2];
		u8 sensor;
		u8 type;
#define Generic 0
#define Creative_live_motion 1
	} cocci_id/* drivers/media/usb/gspca/sq930x.c 23 */;
	const struct i2c_write_cmd cocci_id/* drivers/media/usb/gspca/sq930x.c 198 */[];
	struct usb_driver cocci_id/* drivers/media/usb/gspca/sq930x.c 1144 */;
	struct sd cocci_id/* drivers/media/usb/gspca/sq930x.c 1140 */;
	struct usb_interface *cocci_id/* drivers/media/usb/gspca/sq930x.c 1137 */;
	const struct usb_device_id cocci_id/* drivers/media/usb/gspca/sq930x.c 1124 */[];
	const struct sd_desc cocci_id/* drivers/media/usb/gspca/sq930x.c 1108 */;
	struct v4l2_ctrl_handler *cocci_id/* drivers/media/usb/gspca/sq930x.c 1089 */;
	const struct v4l2_ctrl_ops cocci_id/* drivers/media/usb/gspca/sq930x.c 1083 */;
	struct gspca_dev cocci_id/* drivers/media/usb/gspca/sq930x.c 1067 */;
	struct v4l2_ctrl *cocci_id/* drivers/media/usb/gspca/sq930x.c 1064 */;
}
