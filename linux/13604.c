cocci_test_suite() {
	const struct i2c_reg_u8 *cocci_id/* drivers/media/usb/gspca/sn9c20x.c 999 */;
	const u8 *cocci_id/* drivers/media/usb/gspca/sn9c20x.c 955 */;
	const u8 cocci_id/* drivers/media/usb/gspca/sn9c20x.c 950 */;
	struct usb_device *cocci_id/* drivers/media/usb/gspca/sn9c20x.c 903 */;
	const struct i2c_reg_u8 cocci_id/* drivers/media/usb/gspca/sn9c20x.c 890 */[];
	const struct i2c_reg_u16 cocci_id/* drivers/media/usb/gspca/sn9c20x.c 860 */[];
	const u8 cocci_id/* drivers/media/usb/gspca/sn9c20x.c 653 */[];
	const u16 cocci_id/* drivers/media/usb/gspca/sn9c20x.c 612 */[];
	const u16 cocci_id/* drivers/media/usb/gspca/sn9c20x.c 576 */[][2];
	struct sd {
		struct gspca_dev gspca_dev;
		struct {
			struct v4l2_ctrl *brightness;
			struct v4l2_ctrl *contrast;
			struct v4l2_ctrl *saturation;
			struct v4l2_ctrl *hue;
		};
		struct {
			struct v4l2_ctrl *blue;
			struct v4l2_ctrl *red;
		};
		struct {
			struct v4l2_ctrl *hflip;
			struct v4l2_ctrl *vflip;
		};
		struct v4l2_ctrl *gamma;
		struct {
			struct v4l2_ctrl *autogain;
			struct v4l2_ctrl *exposure;
			struct v4l2_ctrl *gain;
		};
		struct v4l2_ctrl *jpegqual;
		struct work_struct work;
		u32 pktsz;
		u16 npkt;
		s8 nchg;
		u8 fmt;
#define MIN_AVG_LUM 80
#define MAX_AVG_LUM 130
		atomic_t avg_lum;
		u8 old_step;
		u8 older_step;
		u8 exposure_step;
		u8 i2c_addr;
		u8 i2c_intf;
		u8 sensor;
		u8 hstart;
		u8 vstart;
		u8 jpeg_hdr[JPEG_HDR_SZ];
		u8 flags;
	} cocci_id/* drivers/media/usb/gspca/sn9c20x.c 55 */;
	const s16 cocci_id/* drivers/media/usb/gspca/sn9c20x.c 480 */[];
	const struct v4l2_pix_format cocci_id/* drivers/media/usb/gspca/sn9c20x.c 265 */[];
	struct usb_driver cocci_id/* drivers/media/usb/gspca/sn9c20x.c 2377 */;
	const struct usb_device_id cocci_id/* drivers/media/usb/gspca/sn9c20x.c 2326 */[];
	const struct sd_desc cocci_id/* drivers/media/usb/gspca/sn9c20x.c 2300 */;
	struct sd cocci_id/* drivers/media/usb/gspca/sn9c20x.c 2153 */;
	struct work_struct *cocci_id/* drivers/media/usb/gspca/sn9c20x.c 2151 */;
	s16 cocci_id/* drivers/media/usb/gspca/sn9c20x.c 2078 */;
	s32 cocci_id/* drivers/media/usb/gspca/sn9c20x.c 2075 */;
	u16 cocci_id/* drivers/media/usb/gspca/sn9c20x.c 2072 */;
	u32 cocci_id/* drivers/media/usb/gspca/sn9c20x.c 1938 */;
	struct usb_interface *cocci_id/* drivers/media/usb/gspca/sn9c20x.c 1937 */;
	u8 cocci_id/* drivers/media/usb/gspca/sn9c20x.c 1881 */;
	struct sd *cocci_id/* drivers/media/usb/gspca/sn9c20x.c 1880 */;
	struct gspca_dev *cocci_id/* drivers/media/usb/gspca/sn9c20x.c 1878 */;
	int cocci_id/* drivers/media/usb/gspca/sn9c20x.c 1878 */;
	void cocci_id/* drivers/media/usb/gspca/sn9c20x.c 1878 */;
	u8 cocci_id/* drivers/media/usb/gspca/sn9c20x.c 1787 */[9];
	struct v4l2_ctrl_handler *cocci_id/* drivers/media/usb/gspca/sn9c20x.c 1713 */;
	const struct v4l2_ctrl_ops cocci_id/* drivers/media/usb/gspca/sn9c20x.c 1706 */;
	struct gspca_dev cocci_id/* drivers/media/usb/gspca/sn9c20x.c 1659 */;
	struct v4l2_ctrl *cocci_id/* drivers/media/usb/gspca/sn9c20x.c 1656 */;
	struct cam *cocci_id/* drivers/media/usb/gspca/sn9c20x.c 1616 */;
	const struct usb_device_id *cocci_id/* drivers/media/usb/gspca/sn9c20x.c 1613 */;
	struct v4l2_dbg_chip_info *cocci_id/* drivers/media/usb/gspca/sn9c20x.c 1602 */;
	const struct v4l2_dbg_register *cocci_id/* drivers/media/usb/gspca/sn9c20x.c 1579 */;
	struct v4l2_dbg_register *cocci_id/* drivers/media/usb/gspca/sn9c20x.c 1553 */;
	u8 cocci_id/* drivers/media/usb/gspca/sn9c20x.c 1332 */[17];
	u8 cocci_id/* drivers/media/usb/gspca/sn9c20x.c 1295 */[21];
	const struct dmi_system_id cocci_id/* drivers/media/usb/gspca/sn9c20x.c 117 */[];
	struct i2c_reg_u16 {
		u8 reg;
		u16 val;
	} cocci_id/* drivers/media/usb/gspca/sn9c20x.c 112 */;
	struct i2c_reg_u8 {
		u8 reg;
		u8 val;
	} cocci_id/* drivers/media/usb/gspca/sn9c20x.c 107 */;
	u16 *cocci_id/* drivers/media/usb/gspca/sn9c20x.c 1058 */;
	void cocci_id/* drivers/media/usb/gspca/sn9c20x.c 105 */(struct work_struct *work);
	u8 cocci_id/* drivers/media/usb/gspca/sn9c20x.c 1040 */[8];
	u8 *cocci_id/* drivers/media/usb/gspca/sn9c20x.c 1037 */;
	const struct i2c_reg_u16 *cocci_id/* drivers/media/usb/gspca/sn9c20x.c 1029 */;
}
