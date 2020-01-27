cocci_test_suite() {
	const struct v4l2_pix_format cocci_id/* drivers/media/usb/gspca/dtcs033.c 85 */[];
	const struct dtcs033_usb_requests *cocci_id/* drivers/media/usb/gspca/dtcs033.c 51 */;
	struct usb_device *cocci_id/* drivers/media/usb/gspca/dtcs033.c 29 */;
	const struct dtcs033_usb_requests cocci_id/* drivers/media/usb/gspca/dtcs033.c 289 */[];
	struct usb_driver cocci_id/* drivers/media/usb/gspca/dtcs033.c 268 */;
	struct sd cocci_id/* drivers/media/usb/gspca/dtcs033.c 264 */;
	struct usb_interface *cocci_id/* drivers/media/usb/gspca/dtcs033.c 260 */;
	u8 cocci_id/* drivers/media/usb/gspca/dtcs033.c 26 */;
	const struct usb_device_id cocci_id/* drivers/media/usb/gspca/dtcs033.c 253 */[];
	const struct sd_desc cocci_id/* drivers/media/usb/gspca/dtcs033.c 241 */;
	struct sd *cocci_id/* drivers/media/usb/gspca/dtcs033.c 219 */;
	struct v4l2_ctrl_handler *cocci_id/* drivers/media/usb/gspca/dtcs033.c 218 */;
	struct gspca_dev *cocci_id/* drivers/media/usb/gspca/dtcs033.c 216 */;
	int cocci_id/* drivers/media/usb/gspca/dtcs033.c 216 */;
	const struct v4l2_ctrl_ops cocci_id/* drivers/media/usb/gspca/dtcs033.c 212 */;
	struct gspca_dev cocci_id/* drivers/media/usb/gspca/dtcs033.c 191 */;
	struct v4l2_ctrl *cocci_id/* drivers/media/usb/gspca/dtcs033.c 187 */;
	struct sd {
		struct gspca_dev gspca_dev;
		struct {
			struct v4l2_ctrl *exposure;
			struct v4l2_ctrl *gain;
		};
	} cocci_id/* drivers/media/usb/gspca/dtcs033.c 177 */;
	const u8 cocci_id/* drivers/media/usb/gspca/dtcs033.c 161 */;
	struct dtcs033_usb_requests {
		u8 bRequestType;
		u8 bRequest;
		u16 wValue;
		u16 wIndex;
		u16 wLength;
	} cocci_id/* drivers/media/usb/gspca/dtcs033.c 16 */;
	u16 cocci_id/* drivers/media/usb/gspca/dtcs033.c 152 */;
	s32 cocci_id/* drivers/media/usb/gspca/dtcs033.c 149 */;
	u8 *cocci_id/* drivers/media/usb/gspca/dtcs033.c 126 */;
	void cocci_id/* drivers/media/usb/gspca/dtcs033.c 125 */;
	void cocci_id/* drivers/media/usb/gspca/dtcs033.c 122 */(struct gspca_dev *gspca_dev);
	int cocci_id/* drivers/media/usb/gspca/dtcs033.c 121 */(struct gspca_dev *gspca_dev);
	const struct usb_device_id *cocci_id/* drivers/media/usb/gspca/dtcs033.c 102 */;
}
