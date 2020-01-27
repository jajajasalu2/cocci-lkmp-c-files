cocci_test_suite() {
	struct usb_driver cocci_id/* drivers/media/usb/gspca/spca500.c 967 */;
	struct sd cocci_id/* drivers/media/usb/gspca/spca500.c 963 */;
	struct usb_interface *cocci_id/* drivers/media/usb/gspca/spca500.c 960 */;
	const struct usb_device_id cocci_id/* drivers/media/usb/gspca/spca500.c 939 */[];
	const struct sd_desc cocci_id/* drivers/media/usb/gspca/spca500.c 928 */;
	struct v4l2_ctrl_handler *cocci_id/* drivers/media/usb/gspca/spca500.c 909 */;
	const struct v4l2_ctrl_ops cocci_id/* drivers/media/usb/gspca/spca500.c 903 */;
	struct gspca_dev cocci_id/* drivers/media/usb/gspca/spca500.c 882 */;
	struct v4l2_ctrl *cocci_id/* drivers/media/usb/gspca/spca500.c 879 */;
	s32 cocci_id/* drivers/media/usb/gspca/spca500.c 863 */;
	__u8 cocci_id/* drivers/media/usb/gspca/spca500.c 825 */[];
	u8 *cocci_id/* drivers/media/usb/gspca/spca500.c 820 */;
	__u8 cocci_id/* drivers/media/usb/gspca/spca500.c 595 */;
	const struct v4l2_pix_format cocci_id/* drivers/media/usb/gspca/spca500.c 58 */[];
	struct cam *cocci_id/* drivers/media/usb/gspca/spca500.c 562 */;
	struct sd *cocci_id/* drivers/media/usb/gspca/spca500.c 561 */;
	const struct usb_device_id *cocci_id/* drivers/media/usb/gspca/spca500.c 559 */;
	unsigned int cocci_id/* drivers/media/usb/gspca/spca500.c 391 */;
	int cocci_id/* drivers/media/usb/gspca/spca500.c 334 */;
	__u16 cocci_id/* drivers/media/usb/gspca/spca500.c 305 */;
	struct gspca_dev *cocci_id/* drivers/media/usb/gspca/spca500.c 304 */;
	void cocci_id/* drivers/media/usb/gspca/spca500.c 304 */;
	const __u8 cocci_id/* drivers/media/usb/gspca/spca500.c 239 */[2][64];
	struct sd {
		struct gspca_dev gspca_dev;
		char subtype;
#define AgfaCl20 0
#define AiptekPocketDV 1
#define BenqDC1016 2
#define CreativePCCam300 3
#define DLinkDSC350 4
#define Gsmartmini 5
#define IntelPocketPCCamera 6
#define KodakEZ200 7
#define LogitechClickSmart310 8
#define LogitechClickSmart510 9
#define LogitechTraveler 10
#define MustekGsmart300 11
#define Optimedia 12
#define PalmPixDC85 13
#define ToptroIndus 14
		u8 jpeg_hdr[JPEG_HDR_SZ];
	} cocci_id/* drivers/media/usb/gspca/spca500.c 22 */;
	const __u16 cocci_id/* drivers/media/usb/gspca/spca500.c 110 */[][3];
}
