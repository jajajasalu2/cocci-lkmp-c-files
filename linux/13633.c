cocci_test_suite() {
	const struct v4l2_ctrl_ops cocci_id/* drivers/media/usb/gspca/sonixb.c 993 */;
	struct gspca_dev cocci_id/* drivers/media/usb/gspca/sonixb.c 956 */;
	struct v4l2_ctrl *cocci_id/* drivers/media/usb/gspca/sonixb.c 953 */;
	const __u8 cocci_id/* drivers/media/usb/gspca/sonixb.c 946 */;
	struct cam *cocci_id/* drivers/media/usb/gspca/sonixb.c 920 */;
	const struct usb_device_id *cocci_id/* drivers/media/usb/gspca/sonixb.c 917 */;
	s32 cocci_id/* drivers/media/usb/gspca/sonixb.c 908 */;
	int cocci_id/* drivers/media/usb/gspca/sonixb.c 878 */;
	struct sd *cocci_id/* drivers/media/usb/gspca/sonixb.c 877 */;
	struct gspca_dev *cocci_id/* drivers/media/usb/gspca/sonixb.c 875 */;
	void cocci_id/* drivers/media/usb/gspca/sonixb.c 875 */;
	struct sensor_data {
		const __u8 *bridge_init;
		sensor_init_t *sensor_init;
		int sensor_init_size;
		int flags;
		__u8 sensor_addr;
	} cocci_id/* drivers/media/usb/gspca/sonixb.c 82 */;
	const __u8 cocci_id/* drivers/media/usb/gspca/sonixb.c 80 */[8];
	u8 cocci_id/* drivers/media/usb/gspca/sonixb.c 699 */;
	u16 cocci_id/* drivers/media/usb/gspca/sonixb.c 687 */;
	u8 cocci_id/* drivers/media/usb/gspca/sonixb.c 670 */[2];
	u8 cocci_id/* drivers/media/usb/gspca/sonixb.c 667 */[3];
	__u8 cocci_id/* drivers/media/usb/gspca/sonixb.c 540 */[];
	const u8 *cocci_id/* drivers/media/usb/gspca/sonixb.c 491 */;
	struct sd {
		struct gspca_dev gspca_dev;
		struct v4l2_ctrl *brightness;
		struct v4l2_ctrl *plfreq;
		atomic_t avg_lum;
		int prev_avg_lum;
		int exposure_knee;
		int header_read;
		u8 header[12];
		unsigned char autogain_ignore_frames;
		unsigned char frames_to_drop;
		__u8 bridge;
#define BRIDGE_101 0
#define BRIDGE_102 0
#define BRIDGE_103 1
		__u8 sensor;
#define SENSOR_HV7131D 0
#define SENSOR_HV7131R 1
#define SENSOR_OV6650 2
#define SENSOR_OV7630 3
#define SENSOR_PAS106 4
#define SENSOR_PAS202 5
#define SENSOR_TAS5110C 6
#define SENSOR_TAS5110D 7
#define SENSOR_TAS5130CXX 8
		__u8 reg11;
	} cocci_id/* drivers/media/usb/gspca/sonixb.c 47 */;
	const __u8 *cocci_id/* drivers/media/usb/gspca/sonixb.c 466 */;
	__u16 cocci_id/* drivers/media/usb/gspca/sonixb.c 436 */;
	const struct sensor_data cocci_id/* drivers/media/usb/gspca/sonixb.c 422 */[];
	const __u8 cocci_id/* drivers/media/usb/gspca/sonixb.c 180 */[][8];
	const __u8 cocci_id/* drivers/media/usb/gspca/sonixb.c 174 */[];
	struct usb_driver cocci_id/* drivers/media/usb/gspca/sonixb.c 1457 */;
	struct sd cocci_id/* drivers/media/usb/gspca/sonixb.c 1453 */;
	struct usb_interface *cocci_id/* drivers/media/usb/gspca/sonixb.c 1450 */;
	const struct usb_device_id cocci_id/* drivers/media/usb/gspca/sonixb.c 1417 */[];
	const struct v4l2_pix_format cocci_id/* drivers/media/usb/gspca/sonixb.c 141 */[];
	const struct sd_desc cocci_id/* drivers/media/usb/gspca/sonixb.c 1398 */;
	u8 *cocci_id/* drivers/media/usb/gspca/sonixb.c 1244 */;
	__u8 cocci_id/* drivers/media/usb/gspca/sonixb.c 1093 */[0x31];
	struct v4l2_ctrl_handler *cocci_id/* drivers/media/usb/gspca/sonixb.c 1001 */;
}
