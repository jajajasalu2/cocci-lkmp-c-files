cocci_test_suite() {
	const u8 cocci_id/* drivers/media/usb/gspca/nw80x.c 711 */[];
	const u8 cocci_id/* drivers/media/usb/gspca/nw80x.c 59 */[NWEBCAMS];
	enum webcams{Generic800, SpaceCam, SpaceCam2, Cvideopro, Dlink350c, DS3303u, Kr651us, Kritter, Mustek300, Proscope, Twinkle, DvcV6, P35u, Generic802, NWEBCAMS,} cocci_id/* drivers/media/usb/gspca/nw80x.c 41 */;
	enum bridges{BRIDGE_NW800, BRIDGE_NW801, BRIDGE_NW802,} cocci_id/* drivers/media/usb/gspca/nw80x.c 36 */;
	struct sd {
		struct gspca_dev gspca_dev;
		u32 ae_res;
		s8 ag_cnt;
#define AG_CNT_START 13
		u8 exp_too_low_cnt;
		u8 exp_too_high_cnt;
		u8 bridge;
		u8 webcam;
	} cocci_id/* drivers/media/usb/gspca/nw80x.c 23 */;
	struct usb_driver cocci_id/* drivers/media/usb/gspca/nw80x.c 2077 */;
	struct sd cocci_id/* drivers/media/usb/gspca/nw80x.c 2073 */;
	struct usb_interface *cocci_id/* drivers/media/usb/gspca/nw80x.c 2070 */;
	const struct usb_device_id cocci_id/* drivers/media/usb/gspca/nw80x.c 2055 */[];
	const struct sd_desc cocci_id/* drivers/media/usb/gspca/nw80x.c 2043 */;
	struct v4l2_ctrl_handler *cocci_id/* drivers/media/usb/gspca/nw80x.c 2002 */;
	const struct v4l2_ctrl_ops cocci_id/* drivers/media/usb/gspca/nw80x.c 1995 */;
	struct gspca_dev cocci_id/* drivers/media/usb/gspca/nw80x.c 1966 */;
	struct v4l2_ctrl *cocci_id/* drivers/media/usb/gspca/nw80x.c 1963 */;
	int cocci_id/* drivers/media/usb/gspca/nw80x.c 1938 */;
	struct sd *cocci_id/* drivers/media/usb/gspca/nw80x.c 1937 */;
	struct gspca_dev *cocci_id/* drivers/media/usb/gspca/nw80x.c 1935 */;
	void cocci_id/* drivers/media/usb/gspca/nw80x.c 1935 */;
	u8 *cocci_id/* drivers/media/usb/gspca/nw80x.c 1916 */;
	unsigned cocci_id/* drivers/media/usb/gspca/nw80x.c 1737 */;
	const struct usb_device_id *cocci_id/* drivers/media/usb/gspca/nw80x.c 1733 */;
	u16 cocci_id/* drivers/media/usb/gspca/nw80x.c 1719 */;
	s32 cocci_id/* drivers/media/usb/gspca/nw80x.c 1691 */;
	u8 cocci_id/* drivers/media/usb/gspca/nw80x.c 1596 */[2];
	const u8 *cocci_id/* drivers/media/usb/gspca/nw80x.c 1593 */;
	u8 cocci_id/* drivers/media/usb/gspca/nw80x.c 1592 */;
	struct usb_device *cocci_id/* drivers/media/usb/gspca/nw80x.c 1562 */;
	const u8 *cocci_id/* drivers/media/usb/gspca/nw80x.c 1508 */[];
	const struct v4l2_pix_format cocci_id/* drivers/media/usb/gspca/nw80x.c 133 */[];
}
