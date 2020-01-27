cocci_test_suite() {
	const struct usb_device_id cocci_id/* drivers/media/usb/gspca/sunplus.c 984 */[];
	const struct sd_desc cocci_id/* drivers/media/usb/gspca/sunplus.c 970 */;
	struct v4l2_ctrl_handler *cocci_id/* drivers/media/usb/gspca/sunplus.c 949 */;
	const struct v4l2_ctrl_ops cocci_id/* drivers/media/usb/gspca/sunplus.c 943 */;
	struct gspca_dev cocci_id/* drivers/media/usb/gspca/sunplus.c 918 */;
	struct v4l2_ctrl *cocci_id/* drivers/media/usb/gspca/sunplus.c 915 */;
	u8 cocci_id/* drivers/media/usb/gspca/sunplus.c 827 */[];
	u8 *cocci_id/* drivers/media/usb/gspca/sunplus.c 822 */;
	struct cam *cocci_id/* drivers/media/usb/gspca/sunplus.c 577 */;
	const struct usb_device_id *cocci_id/* drivers/media/usb/gspca/sunplus.c 574 */;
	const struct v4l2_pix_format cocci_id/* drivers/media/usb/gspca/sunplus.c 57 */[];
	int cocci_id/* drivers/media/usb/gspca/sunplus.c 548 */;
	struct sd *cocci_id/* drivers/media/usb/gspca/sunplus.c 547 */;
	struct gspca_dev *cocci_id/* drivers/media/usb/gspca/sunplus.c 545 */;
	void cocci_id/* drivers/media/usb/gspca/sunplus.c 545 */;
	s32 cocci_id/* drivers/media/usb/gspca/sunplus.c 518 */;
	u8 cocci_id/* drivers/media/usb/gspca/sunplus.c 355 */[6];
	const struct cmd *cocci_id/* drivers/media/usb/gspca/sunplus.c 315 */;
	struct usb_device *cocci_id/* drivers/media/usb/gspca/sunplus.c 295 */;
	u16 cocci_id/* drivers/media/usb/gspca/sunplus.c 236 */;
	u8 cocci_id/* drivers/media/usb/gspca/sunplus.c 235 */;
	struct sd {
		struct gspca_dev gspca_dev;
		bool autogain;
		u8 bridge;
#define BRIDGE_SPCA504 0
#define BRIDGE_SPCA504B 1
#define BRIDGE_SPCA504C 2
#define BRIDGE_SPCA533 3
#define BRIDGE_SPCA536 4
		u8 subtype;
#define AiptekMiniPenCam13 1
#define LogitechClickSmart420 2
#define LogitechClickSmart820 3
#define MegapixV4 4
#define MegaImageVI 5
		u8 jpeg_hdr[JPEG_HDR_SZ];
	} cocci_id/* drivers/media/usb/gspca/sunplus.c 23 */;
	const u8 cocci_id/* drivers/media/usb/gspca/sunplus.c 186 */[2][64];
	const struct cmd cocci_id/* drivers/media/usb/gspca/sunplus.c 149 */[];
	struct usb_driver cocci_id/* drivers/media/usb/gspca/sunplus.c 1057 */;
	struct sd cocci_id/* drivers/media/usb/gspca/sunplus.c 1053 */;
	struct usb_interface *cocci_id/* drivers/media/usb/gspca/sunplus.c 1050 */;
	struct cmd {
		u8 req;
		u16 val;
		u16 idx;
	} cocci_id/* drivers/media/usb/gspca/sunplus.c 105 */;
}
