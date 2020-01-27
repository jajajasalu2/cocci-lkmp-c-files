cocci_test_suite() {
	const struct v4l2_pix_format cocci_id/* drivers/media/usb/gspca/kinect.c 65 */[];
	struct sd {
		struct gspca_dev gspca_dev;
		uint16_t cam_tag;
		uint8_t stream_flag;
		uint8_t obuf[0x400];
		uint8_t ibuf[0x200];
	} cocci_id/* drivers/media/usb/gspca/kinect.c 47 */;
	struct usb_driver cocci_id/* drivers/media/usb/gspca/kinect.c 459 */;
	struct sd cocci_id/* drivers/media/usb/gspca/kinect.c 453 */;
	struct usb_interface *cocci_id/* drivers/media/usb/gspca/kinect.c 449 */;
	const struct usb_device_id cocci_id/* drivers/media/usb/gspca/kinect.c 440 */[];
	const struct sd_desc cocci_id/* drivers/media/usb/gspca/kinect.c 426 */;
	struct cam_hdr {
		uint8_t magic[2];
		__le16 len;
		__le16 cmd;
		__le16 tag;
	} cocci_id/* drivers/media/usb/gspca/kinect.c 39 */;
	uint8_t cocci_id/* drivers/media/usb/gspca/kinect.c 387 */;
	struct pkt_hdr *cocci_id/* drivers/media/usb/gspca/kinect.c 383 */;
	void *cocci_id/* drivers/media/usb/gspca/kinect.c 383 */;
	u8 *cocci_id/* drivers/media/usb/gspca/kinect.c 379 */;
	void cocci_id/* drivers/media/usb/gspca/kinect.c 379 */;
	struct pkt_hdr {
		uint8_t magic[2];
		uint8_t pad;
		uint8_t flag;
		uint8_t unk1;
		uint8_t seq;
		uint8_t unk2;
		uint8_t unk3;
		uint32_t timestamp;
	} cocci_id/* drivers/media/usb/gspca/kinect.c 28 */;
	bool cocci_id/* drivers/media/usb/gspca/kinect.c 26 */;
	struct cam *cocci_id/* drivers/media/usb/gspca/kinect.c 250 */;
	struct sd *cocci_id/* drivers/media/usb/gspca/kinect.c 249 */;
	const struct usb_device_id *cocci_id/* drivers/media/usb/gspca/kinect.c 247 */;
	struct gspca_dev *cocci_id/* drivers/media/usb/gspca/kinect.c 246 */;
	__le16 cocci_id/* drivers/media/usb/gspca/kinect.c 202 */[2];
	uint16_t cocci_id/* drivers/media/usb/gspca/kinect.c 201 */[2];
	struct cam_hdr *cocci_id/* drivers/media/usb/gspca/kinect.c 128 */;
	unsigned int cocci_id/* drivers/media/usb/gspca/kinect.c 121 */;
	uint16_t cocci_id/* drivers/media/usb/gspca/kinect.c 111 */;
	uint8_t *cocci_id/* drivers/media/usb/gspca/kinect.c 111 */;
	struct usb_device *cocci_id/* drivers/media/usb/gspca/kinect.c 111 */;
	int cocci_id/* drivers/media/usb/gspca/kinect.c 111 */;
}
