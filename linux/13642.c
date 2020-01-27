cocci_test_suite() {
	const struct v4l2_pix_format cocci_id/* drivers/media/usb/gspca/vc032x.c 85 */[];
	enum sensors{SENSOR_HV7131R, SENSOR_MI0360, SENSOR_MI1310_SOC, SENSOR_MI1320, SENSOR_MI1320_SOC, SENSOR_OV7660, SENSOR_OV7670, SENSOR_PO1200, SENSOR_PO3130NC, SENSOR_POxxxx, NSENSORS,} cocci_id/* drivers/media/usb/gspca/vc032x.c 41 */;
	struct usb_driver cocci_id/* drivers/media/usb/gspca/vc032x.c 3826 */;
	struct sd cocci_id/* drivers/media/usb/gspca/vc032x.c 3822 */;
	struct usb_interface *cocci_id/* drivers/media/usb/gspca/vc032x.c 3819 */;
	const struct usb_device_id cocci_id/* drivers/media/usb/gspca/vc032x.c 3800 */[];
	const struct sd_desc cocci_id/* drivers/media/usb/gspca/vc032x.c 3785 */;
	bool cocci_id/* drivers/media/usb/gspca/vc032x.c 3702 */;
	struct v4l2_ctrl_handler *cocci_id/* drivers/media/usb/gspca/vc032x.c 3701 */;
	enum bridges{BRIDGE_VC0321, BRIDGE_VC0323,} cocci_id/* drivers/media/usb/gspca/vc032x.c 37 */;
	const struct v4l2_ctrl_ops cocci_id/* drivers/media/usb/gspca/vc032x.c 3694 */;
	struct gspca_dev cocci_id/* drivers/media/usb/gspca/vc032x.c 3651 */;
	struct v4l2_ctrl *cocci_id/* drivers/media/usb/gspca/vc032x.c 3648 */;
	u8 *cocci_id/* drivers/media/usb/gspca/vc032x.c 3620 */;
	const u8 *cocci_id/* drivers/media/usb/gspca/vc032x.c 3427 */[][4];
	const u8 *cocci_id/* drivers/media/usb/gspca/vc032x.c 3423 */[4];
	const u8 cocci_id/* drivers/media/usb/gspca/vc032x.c 3371 */[2];
	s32 cocci_id/* drivers/media/usb/gspca/vc032x.c 3369 */;
	const u8 *cocci_id/* drivers/media/usb/gspca/vc032x.c 3322 */[3][4];
	u8 cocci_id/* drivers/media/usb/gspca/vc032x.c 3284 */[2];
	u8 cocci_id/* drivers/media/usb/gspca/vc032x.c 3149 */[NSENSORS];
	struct cam *cocci_id/* drivers/media/usb/gspca/vc032x.c 3146 */;
	struct sd *cocci_id/* drivers/media/usb/gspca/vc032x.c 3130 */;
	const struct usb_device_id *cocci_id/* drivers/media/usb/gspca/vc032x.c 3128 */;
	u16 cocci_id/* drivers/media/usb/gspca/vc032x.c 3088 */;
	int cocci_id/* drivers/media/usb/gspca/vc032x.c 3059 */;
	u8 cocci_id/* drivers/media/usb/gspca/vc032x.c 3056 */;
	const u8 *cocci_id/* drivers/media/usb/gspca/vc032x.c 3056 */;
	struct gspca_dev *cocci_id/* drivers/media/usb/gspca/vc032x.c 3055 */;
	void cocci_id/* drivers/media/usb/gspca/vc032x.c 3055 */;
	const struct sensor_info *cocci_id/* drivers/media/usb/gspca/vc032x.c 3005 */;
	const struct sensor_info cocci_id/* drivers/media/usb/gspca/vc032x.c 2804 */[];
	struct sensor_info {
		s8 sensorId;
		u8 I2cAdd;
		u8 IdAdd;
		u16 VpId;
		u8 m1;
		u8 m2;
		u8 op;
	} cocci_id/* drivers/media/usb/gspca/vc032x.c 2793 */;
	struct sd {
		struct gspca_dev gspca_dev;
		struct {
			struct v4l2_ctrl *hflip;
			struct v4l2_ctrl *vflip;
		};
		u8 image_offset;
		u8 bridge;
		u8 sensor;
		u8 flags;
#define FL_SAMSUNG 0x01
#define FL_HFLIP 0x02
#define FL_VFLIP 0x04
	} cocci_id/* drivers/media/usb/gspca/vc032x.c 21 */;
	const u8 cocci_id/* drivers/media/usb/gspca/vc032x.c 1552 */[][4];
	const u8 cocci_id/* drivers/media/usb/gspca/vc032x.c 1461 */[9];
	const u8 cocci_id/* drivers/media/usb/gspca/vc032x.c 1457 */[17];
}
