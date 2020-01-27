cocci_test_suite() {
	void cocci_id/* drivers/media/usb/gspca/stk1135.c 73 */;
	struct usb_driver cocci_id/* drivers/media/usb/gspca/stk1135.c 664 */;
	struct sd cocci_id/* drivers/media/usb/gspca/stk1135.c 660 */;
	struct usb_interface *cocci_id/* drivers/media/usb/gspca/stk1135.c 657 */;
	const struct usb_device_id cocci_id/* drivers/media/usb/gspca/stk1135.c 650 */[];
	const struct sd_desc cocci_id/* drivers/media/usb/gspca/stk1135.c 636 */;
	struct v4l2_frmsizeenum *cocci_id/* drivers/media/usb/gspca/stk1135.c 619 */;
	struct v4l2_format *cocci_id/* drivers/media/usb/gspca/stk1135.c 606 */;
	struct v4l2_ctrl_handler *cocci_id/* drivers/media/usb/gspca/stk1135.c 590 */;
	const struct v4l2_ctrl_ops cocci_id/* drivers/media/usb/gspca/stk1135.c 583 */;
	struct gspca_dev cocci_id/* drivers/media/usb/gspca/stk1135.c 564 */;
	struct v4l2_ctrl *cocci_id/* drivers/media/usb/gspca/stk1135.c 561 */;
	s32 cocci_id/* drivers/media/usb/gspca/stk1135.c 532 */;
	struct stk1135_pkt_header *cocci_id/* drivers/media/usb/gspca/stk1135.c 490 */;
	void *cocci_id/* drivers/media/usb/gspca/stk1135.c 490 */;
	int cocci_id/* drivers/media/usb/gspca/stk1135.c 49 */;
	enum gspca_packet_type cocci_id/* drivers/media/usb/gspca/stk1135.c 489 */;
	bool cocci_id/* drivers/media/usb/gspca/stk1135.c 488 */;
	struct stk1135_pkt_header cocci_id/* drivers/media/usb/gspca/stk1135.c 487 */;
	u8 *cocci_id/* drivers/media/usb/gspca/stk1135.c 483 */;
	struct usb_device *cocci_id/* drivers/media/usb/gspca/stk1135.c 48 */;
	u8 cocci_id/* drivers/media/usb/gspca/stk1135.c 46 */;
	u16 cocci_id/* drivers/media/usb/gspca/stk1135.c 46 */;
	struct gspca_dev *cocci_id/* drivers/media/usb/gspca/stk1135.c 46 */;
	struct sd *cocci_id/* drivers/media/usb/gspca/stk1135.c 386 */;
	char *cocci_id/* drivers/media/usb/gspca/stk1135.c 385 */;
	const struct v4l2_pix_format cocci_id/* drivers/media/usb/gspca/stk1135.c 37 */[];
	struct sd {
		struct gspca_dev gspca_dev;
		u8 pkt_seq;
		u8 sensor_page;
		bool flip_status;
		u8 flip_debounce;
		struct v4l2_ctrl *hflip;
		struct v4l2_ctrl *vflip;
	} cocci_id/* drivers/media/usb/gspca/stk1135.c 24 */;
	const struct sensor_val cocci_id/* drivers/media/usb/gspca/stk1135.c 204 */[];
	struct sensor_val {
		u16 reg;
		u16 val;
	} cocci_id/* drivers/media/usb/gspca/stk1135.c 196 */;
	const struct usb_device_id *cocci_id/* drivers/media/usb/gspca/stk1135.c 103 */;
}
