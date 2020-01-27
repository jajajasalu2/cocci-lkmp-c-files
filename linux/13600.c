cocci_test_suite() {
	struct ov_i2c_regvals {
		u8 reg;
		u8 val;
	} cocci_id/* drivers/media/usb/gspca/ov519.c 585 */;
	struct ov_regvals {
		u8 reg;
		u8 val;
	} cocci_id/* drivers/media/usb/gspca/ov519.c 581 */;
	struct usb_driver cocci_id/* drivers/media/usb/gspca/ov519.c 5005 */;
	struct sd cocci_id/* drivers/media/usb/gspca/ov519.c 5001 */;
	struct sd {
		struct gspca_dev gspca_dev;
		struct v4l2_ctrl *jpegqual;
		struct v4l2_ctrl *freq;
		struct {
			struct v4l2_ctrl *hflip;
			struct v4l2_ctrl *vflip;
		};
		struct {
			struct v4l2_ctrl *autobright;
			struct v4l2_ctrl *brightness;
		};
		u8 revision;
		u8 packet_nr;
		char bridge;
#define BRIDGE_OV511 0
#define BRIDGE_OV511PLUS 1
#define BRIDGE_OV518 2
#define BRIDGE_OV518PLUS 3
#define BRIDGE_OV519 4
#define BRIDGE_OVFX2 5
#define BRIDGE_W9968CF 6
#define BRIDGE_MASK 7
		char invert_led;
#define BRIDGE_INVERT_LED 8
		char snapshot_pressed;
		char snapshot_needs_reset;
		u8 sif;
#define QUALITY_MIN 50
#define QUALITY_MAX 70
#define QUALITY_DEF 50
		u8 stopped;
		u8 first_frame;
		u8 frame_rate;
		u8 clockdiv;
		s8 sensor;
		u8 sensor_addr;
		u16 sensor_width;
		u16 sensor_height;
		s16 sensor_reg_cache[256];
		u8 jpeg_hdr[JPEG_HDR_SZ];
	} cocci_id/* drivers/media/usb/gspca/ov519.c 50 */;
	const struct usb_device_id cocci_id/* drivers/media/usb/gspca/ov519.c 4962 */[];
	const struct sd_desc cocci_id/* drivers/media/usb/gspca/ov519.c 4943 */;
	struct v4l2_ctrl_handler *cocci_id/* drivers/media/usb/gspca/ov519.c 4874 */;
	const struct v4l2_ctrl_ops cocci_id/* drivers/media/usb/gspca/ov519.c 4866 */;
	struct gspca_dev cocci_id/* drivers/media/usb/gspca/ov519.c 4808 */;
	struct v4l2_ctrl *cocci_id/* drivers/media/usb/gspca/ov519.c 4805 */;
	const struct v4l2_jpegcompression *cocci_id/* drivers/media/usb/gspca/ov519.c 4794 */;
	struct v4l2_jpegcompression *cocci_id/* drivers/media/usb/gspca/ov519.c 4779 */;
	s32 cocci_id/* drivers/media/usb/gspca/ov519.c 4701 */;
	const struct ov_i2c_regvals cocci_id/* drivers/media/usb/gspca/ov519.c 4655 */[][6];
	const u8 cocci_id/* drivers/media/usb/gspca/ov519.c 4615 */[];
	const struct ov_i2c_regvals cocci_id/* drivers/media/usb/gspca/ov519.c 4546 */[][31];
	const struct ov_i2c_regvals cocci_id/* drivers/media/usb/gspca/ov519.c 4499 */[][7];
	u8 *cocci_id/* drivers/media/usb/gspca/ov519.c 4310 */;
	int cocci_id/* drivers/media/usb/gspca/ov519.c 43 */;
	const struct ov_i2c_regvals cocci_id/* drivers/media/usb/gspca/ov519.c 4051 */[];
	const struct ov_i2c_regvals *cocci_id/* drivers/media/usb/gspca/ov519.c 4050 */;
	struct usb_interface *cocci_id/* drivers/media/usb/gspca/ov519.c 3470 */;
	struct usb_host_interface *cocci_id/* drivers/media/usb/gspca/ov519.c 3469 */;
	const struct v4l2_pix_format cocci_id/* drivers/media/usb/gspca/ov519.c 326 */[];
	struct cam *cocci_id/* drivers/media/usb/gspca/ov519.c 3222 */;
	const struct usb_device_id *cocci_id/* drivers/media/usb/gspca/ov519.c 3219 */;
	const u8 cocci_id/* drivers/media/usb/gspca/ov519.c 3173 */[2][6][3];
	const struct ov_i2c_regvals cocci_id/* drivers/media/usb/gspca/ov519.c 3137 */[2][3];
	const struct ov_regvals cocci_id/* drivers/media/usb/gspca/ov519.c 3129 */[2][10];
	unsigned char cocci_id/* drivers/media/usb/gspca/ov519.c 2914 */;
	const unsigned char *cocci_id/* drivers/media/usb/gspca/ov519.c 2913 */;
	const unsigned char cocci_id/* drivers/media/usb/gspca/ov519.c 2876 */[];
	const struct ov_regvals *cocci_id/* drivers/media/usb/gspca/ov519.c 2590 */;
	struct gspca_dev *cocci_id/* drivers/media/usb/gspca/ov519.c 2537 */;
	void cocci_id/* drivers/media/usb/gspca/ov519.c 2529 */(struct sd *sd, u8 slave);
	u8 cocci_id/* drivers/media/usb/gspca/ov519.c 2409 */;
	struct sd *cocci_id/* drivers/media/usb/gspca/ov519.c 2409 */;
	void cocci_id/* drivers/media/usb/gspca/ov519.c 2376 */;
	__le32 *cocci_id/* drivers/media/usb/gspca/ov519.c 2157 */;
	u32 cocci_id/* drivers/media/usb/gspca/ov519.c 2149 */;
	u16 cocci_id/* drivers/media/usb/gspca/ov519.c 2149 */;
	const struct ov_regvals cocci_id/* drivers/media/usb/gspca/ov519.c 1537 */[];
	const struct ctrl_valid cocci_id/* drivers/media/usb/gspca/ov519.c 142 */[];
	struct ctrl_valid {
		unsigned int has_brightness:1;
		unsigned int has_contrast:1;
		unsigned int has_exposure:1;
		unsigned int has_autogain:1;
		unsigned int has_sat:1;
		unsigned int has_hvflip:1;
		unsigned int has_autobright:1;
		unsigned int has_freq:1;
	} cocci_id/* drivers/media/usb/gspca/ov519.c 131 */;
	enum sensors{SEN_OV2610, SEN_OV2610AE, SEN_OV3610, SEN_OV6620, SEN_OV6630, SEN_OV66308AF, SEN_OV7610, SEN_OV7620, SEN_OV7620AE, SEN_OV7640, SEN_OV7648, SEN_OV7660, SEN_OV7670, SEN_OV76BE, SEN_OV8610, SEN_OV9600,} cocci_id/* drivers/media/usb/gspca/ov519.c 106 */;
}
