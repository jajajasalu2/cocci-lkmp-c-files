cocci_test_suite() {
	const struct v4l2_pix_format cocci_id/* drivers/media/usb/gspca/zc3xx.c 91 */[];
	struct usb_driver cocci_id/* drivers/media/usb/gspca/zc3xx.c 7013 */;
	struct sd cocci_id/* drivers/media/usb/gspca/zc3xx.c 7008 */;
	struct usb_interface *cocci_id/* drivers/media/usb/gspca/zc3xx.c 7005 */;
	const struct usb_device_id cocci_id/* drivers/media/usb/gspca/zc3xx.c 6945 */[];
	const struct sd_desc cocci_id/* drivers/media/usb/gspca/zc3xx.c 6929 */;
	u8 *cocci_id/* drivers/media/usb/gspca/zc3xx.c 6915 */;
	struct v4l2_jpegcompression *cocci_id/* drivers/media/usb/gspca/zc3xx.c 6902 */;
	const struct v4l2_jpegcompression *cocci_id/* drivers/media/usb/gspca/zc3xx.c 6894 */;
	const struct usb_action *cocci_id/* drivers/media/usb/gspca/zc3xx.c 6673 */[SENSOR_MAX][2];
	unsigned cocci_id/* drivers/media/usb/gspca/zc3xx.c 6510 */;
	const u8 cocci_id/* drivers/media/usb/gspca/zc3xx.c 6485 */[SENSOR_MAX];
	struct cam *cocci_id/* drivers/media/usb/gspca/zc3xx.c 6483 */;
	struct v4l2_ctrl_handler *cocci_id/* drivers/media/usb/gspca/zc3xx.c 6418 */;
	const struct v4l2_ctrl_ops cocci_id/* drivers/media/usb/gspca/zc3xx.c 6410 */;
	struct gspca_dev cocci_id/* drivers/media/usb/gspca/zc3xx.c 6341 */;
	struct v4l2_ctrl *cocci_id/* drivers/media/usb/gspca/zc3xx.c 6338 */;
	const struct usb_device_id *cocci_id/* drivers/media/usb/gspca/zc3xx.c 6319 */;
	const struct sensor_by_chipset_revision cocci_id/* drivers/media/usb/gspca/zc3xx.c 6160 */[];
	struct sensor_by_chipset_revision {
		u16 revision;
		u8 internal_sensor_id;
	} cocci_id/* drivers/media/usb/gspca/zc3xx.c 6156 */;
	struct work_struct *cocci_id/* drivers/media/usb/gspca/zc3xx.c 5938 */;
	const struct usb_action *cocci_id/* drivers/media/usb/gspca/zc3xx.c 5816 */[SENSOR_MAX][6];
	const struct usb_action *cocci_id/* drivers/media/usb/gspca/zc3xx.c 5815 */;
	struct sd *cocci_id/* drivers/media/usb/gspca/zc3xx.c 5768 */;
	s32 cocci_id/* drivers/media/usb/gspca/zc3xx.c 5766 */;
	struct gspca_dev *cocci_id/* drivers/media/usb/gspca/zc3xx.c 5766 */;
	const u8 cocci_id/* drivers/media/usb/gspca/zc3xx.c 5721 */[6][16];
	const u8 cocci_id/* drivers/media/usb/gspca/zc3xx.c 5715 */[16];
	u8 cocci_id/* drivers/media/usb/gspca/zc3xx.c 5714 */[16];
	const u8 *cocci_id/* drivers/media/usb/gspca/zc3xx.c 5712 */;
	const u8 cocci_id/* drivers/media/usb/gspca/zc3xx.c 5695 */[][2];
	const u8 *cocci_id/* drivers/media/usb/gspca/zc3xx.c 5664 */[SENSOR_MAX];
	const u8 cocci_id/* drivers/media/usb/gspca/zc3xx.c 5648 */[9];
	u8 cocci_id/* drivers/media/usb/gspca/zc3xx.c 5572 */;
	u16 cocci_id/* drivers/media/usb/gspca/zc3xx.c 5571 */;
	void cocci_id/* drivers/media/usb/gspca/zc3xx.c 5551 */;
	enum sensors{SENSOR_ADCM2700, SENSOR_CS2102, SENSOR_CS2102K, SENSOR_GC0303, SENSOR_GC0305, SENSOR_HDCS2020, SENSOR_HV7131B, SENSOR_HV7131R, SENSOR_ICM105A, SENSOR_MC501CB, SENSOR_MT9V111_1, SENSOR_MT9V111_3, SENSOR_OV7620, SENSOR_OV7630C, SENSOR_PAS106, SENSOR_PAS202B, SENSOR_PB0330, SENSOR_PO2030, SENSOR_TAS5130C, SENSOR_MAX,} cocci_id/* drivers/media/usb/gspca/zc3xx.c 55 */;
	enum bridges{BRIDGE_ZC301, BRIDGE_ZC303,} cocci_id/* drivers/media/usb/gspca/zc3xx.c 51 */;
	const struct usb_action cocci_id/* drivers/media/usb/gspca/zc3xx.c 300 */[];
	struct sd {
		struct gspca_dev gspca_dev;
		struct {
			struct v4l2_ctrl *gamma;
			struct v4l2_ctrl *brightness;
			struct v4l2_ctrl *contrast;
		};
		struct {
			struct v4l2_ctrl *autogain;
			struct v4l2_ctrl *exposure;
		};
		struct v4l2_ctrl *plfreq;
		struct v4l2_ctrl *sharpness;
		struct v4l2_ctrl *jpegqual;
		struct work_struct work;
		u8 reg08;
		u8 bridge;
		u8 sensor;
		u16 chip_revision;
		u8 jpeg_hdr[JPEG_HDR_SZ];
	} cocci_id/* drivers/media/usb/gspca/zc3xx.c 25 */;
	int cocci_id/* drivers/media/usb/gspca/zc3xx.c 19 */;
	struct usb_action {
		u8 req;
		u8 val;
		u16 idx;
	} cocci_id/* drivers/media/usb/gspca/zc3xx.c 124 */;
	u8 cocci_id/* drivers/media/usb/gspca/zc3xx.c 121 */[];
}
