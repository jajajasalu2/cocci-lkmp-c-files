cocci_test_suite() {
	void cocci_id/* drivers/media/usb/gspca/sonixj.c 91 */(struct work_struct *work);
	enum sensors{SENSOR_ADCM1700, SENSOR_GC0307, SENSOR_HV7131R, SENSOR_MI0360, SENSOR_MI0360B, SENSOR_MO4000, SENSOR_MT9V111, SENSOR_OM6802, SENSOR_OV7630, SENSOR_OV7648, SENSOR_OV7660, SENSOR_PO1030, SENSOR_PO2030N, SENSOR_SOI768, SENSOR_SP80708,} cocci_id/* drivers/media/usb/gspca/sonixj.c 73 */;
	const u8 cocci_id/* drivers/media/usb/gspca/sonixj.c 639 */[2][8];
	const u8 cocci_id/* drivers/media/usb/gspca/sonixj.c 356 */[][8];
	const u8 cocci_id/* drivers/media/usb/gspca/sonixj.c 321 */[17];
	const u8 *cocci_id/* drivers/media/usb/gspca/sonixj.c 302 */[];
	struct usb_driver cocci_id/* drivers/media/usb/gspca/sonixj.c 2969 */;
	struct usb_interface *cocci_id/* drivers/media/usb/gspca/sonixj.c 2962 */;
	const struct usb_device_id cocci_id/* drivers/media/usb/gspca/sonixj.c 2897 */[];
	const struct sd_desc cocci_id/* drivers/media/usb/gspca/sonixj.c 2874 */;
	u8 *cocci_id/* drivers/media/usb/gspca/sonixj.c 2856 */;
	struct gspca_dev cocci_id/* drivers/media/usb/gspca/sonixj.c 2808 */;
	struct v4l2_ctrl *cocci_id/* drivers/media/usb/gspca/sonixj.c 2805 */;
	unsigned int cocci_id/* drivers/media/usb/gspca/sonixj.c 2602 */;
	u8 cocci_id/* drivers/media/usb/gspca/sonixj.c 2574 */;
	int cocci_id/* drivers/media/usb/gspca/sonixj.c 2572 */;
	struct sd *cocci_id/* drivers/media/usb/gspca/sonixj.c 2571 */;
	struct gspca_dev *cocci_id/* drivers/media/usb/gspca/sonixj.c 2569 */;
	void cocci_id/* drivers/media/usb/gspca/sonixj.c 2569 */;
	struct sd {
		struct gspca_dev gspca_dev;
		atomic_t avg_lum;
		struct v4l2_ctrl *brightness;
		struct v4l2_ctrl *contrast;
		struct v4l2_ctrl *saturation;
		struct {
			struct v4l2_ctrl *red_bal;
			struct v4l2_ctrl *blue_bal;
		};
		struct {
			struct v4l2_ctrl *vflip;
			struct v4l2_ctrl *hflip;
		};
		struct v4l2_ctrl *gamma;
		struct v4l2_ctrl *illum;
		struct v4l2_ctrl *sharpness;
		struct v4l2_ctrl *freq;
		u32 exposure;
		struct work_struct work;
		u32 pktsz;
		u16 npkt;
		s8 nchg;
		s8 short_mark;
		u8 quality;
#define QUALITY_MIN 25
#define QUALITY_MAX 90
#define QUALITY_DEF 70
		u8 reg01;
		u8 reg17;
		u8 reg18;
		u8 flags;
		s8 ag_cnt;
#define AG_CNT_START 13
		u8 bridge;
#define BRIDGE_SN9C102P 0
#define BRIDGE_SN9C105 1
#define BRIDGE_SN9C110 2
#define BRIDGE_SN9C120 3
		u8 sensor;
		u8 i2c_addr;
		u8 jpeg_hdr[JPEG_HDR_SZ];
	} cocci_id/* drivers/media/usb/gspca/sonixj.c 22 */;
	u8 cocci_id/* drivers/media/usb/gspca/sonixj.c 2175 */[2];
	struct sd cocci_id/* drivers/media/usb/gspca/sonixj.c 2158 */;
	struct work_struct *cocci_id/* drivers/media/usb/gspca/sonixj.c 2156 */;
	u8 cocci_id/* drivers/media/usb/gspca/sonixj.c 1912 */[17];
	const s16 cocci_id/* drivers/media/usb/gspca/sonixj.c 1867 */[6];
	u8 cocci_id/* drivers/media/usb/gspca/sonixj.c 1866 */[12];
	const s16 *cocci_id/* drivers/media/usb/gspca/sonixj.c 1865 */;
	u8 cocci_id/* drivers/media/usb/gspca/sonixj.c 1848 */[6];
	const u8 cocci_id/* drivers/media/usb/gspca/sonixj.c 1725 */[];
	u8 cocci_id/* drivers/media/usb/gspca/sonixj.c 1712 */[];
	u32 cocci_id/* drivers/media/usb/gspca/sonixj.c 1693 */;
	struct v4l2_ctrl_handler *cocci_id/* drivers/media/usb/gspca/sonixj.c 1620 */;
	const struct v4l2_ctrl_ops cocci_id/* drivers/media/usb/gspca/sonixj.c 1612 */;
	int cocci_id/* drivers/media/usb/gspca/sonixj.c 1610 */(struct v4l2_ctrl *ctrl);
	struct cam *cocci_id/* drivers/media/usb/gspca/sonixj.c 1519 */;
	const struct usb_device_id *cocci_id/* drivers/media/usb/gspca/sonixj.c 1516 */;
	const u8 cocci_id/* drivers/media/usb/gspca/sonixj.c 1362 */[][4][8];
	u16 cocci_id/* drivers/media/usb/gspca/sonixj.c 1361 */;
	const u8 cocci_id/* drivers/media/usb/gspca/sonixj.c 136 */[0x1c];
	const u8 *cocci_id/* drivers/media/usb/gspca/sonixj.c 1326 */[8];
	u8 cocci_id/* drivers/media/usb/gspca/sonixj.c 1297 */[8];
	const u8 *cocci_id/* drivers/media/usb/gspca/sonixj.c 1270 */;
	const u8 *cocci_id/* drivers/media/usb/gspca/sonixj.c 1122 */[][8];
	const struct v4l2_pix_format cocci_id/* drivers/media/usb/gspca/sonixj.c 110 */[];
}
