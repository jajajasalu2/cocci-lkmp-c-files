cocci_test_suite() {
	enum ov361x{ov361x_2048=0, ov361x_1600, ov361x_1024, ov361x_640, ov361x_320, ov361x_160, ov361x_last,} cocci_id/* drivers/media/usb/gspca/ov534_9.c 97 */;
	enum sensors{SENSOR_OV965x, SENSOR_OV971x, SENSOR_OV562x, SENSOR_OV361x, NSENSORS,} cocci_id/* drivers/media/usb/gspca/ov534_9.c 45 */;
	struct sd {
		struct gspca_dev gspca_dev;
		__u32 last_pts;
		u8 last_fid;
		u8 sensor;
	} cocci_id/* drivers/media/usb/gspca/ov534_9.c 38 */;
	const u8 cocci_id/* drivers/media/usb/gspca/ov534_9.c 365 */[][2];
	struct usb_driver cocci_id/* drivers/media/usb/gspca/ov534_9.c 1809 */;
	struct sd cocci_id/* drivers/media/usb/gspca/ov534_9.c 1805 */;
	struct usb_interface *cocci_id/* drivers/media/usb/gspca/ov534_9.c 1803 */;
	const struct usb_device_id cocci_id/* drivers/media/usb/gspca/ov534_9.c 1793 */[];
	const struct sd_desc cocci_id/* drivers/media/usb/gspca/ov534_9.c 1782 */;
	struct v4l2_ctrl_handler *cocci_id/* drivers/media/usb/gspca/ov534_9.c 1743 */;
	const struct v4l2_ctrl_ops cocci_id/* drivers/media/usb/gspca/ov534_9.c 1736 */;
	struct gspca_dev cocci_id/* drivers/media/usb/gspca/ov534_9.c 1703 */;
	struct v4l2_ctrl *cocci_id/* drivers/media/usb/gspca/ov534_9.c 1700 */;
	__u32 cocci_id/* drivers/media/usb/gspca/ov534_9.c 1631 */;
	u8 *cocci_id/* drivers/media/usb/gspca/ov534_9.c 1628 */;
	const char *cocci_id/* drivers/media/usb/gspca/ov534_9.c 1441 */;
	struct sd *cocci_id/* drivers/media/usb/gspca/ov534_9.c 1399 */;
	const struct usb_device_id *cocci_id/* drivers/media/usb/gspca/ov534_9.c 1391 */;
	const u8 cocci_id/* drivers/media/usb/gspca/ov534_9.c 1344 */[5][2];
	const u8 cocci_id/* drivers/media/usb/gspca/ov534_9.c 1309 */[4];
	s32 cocci_id/* drivers/media/usb/gspca/ov534_9.c 1293 */;
	s8 cocci_id/* drivers/media/usb/gspca/ov534_9.c 1259 */;
	const u8 *cocci_id/* drivers/media/usb/gspca/ov534_9.c 1205 */[2];
	int cocci_id/* drivers/media/usb/gspca/ov534_9.c 1134 */;
	struct usb_device *cocci_id/* drivers/media/usb/gspca/ov534_9.c 1133 */;
	u8 cocci_id/* drivers/media/usb/gspca/ov534_9.c 1131 */;
	u16 cocci_id/* drivers/media/usb/gspca/ov534_9.c 1131 */;
	struct gspca_dev *cocci_id/* drivers/media/usb/gspca/ov534_9.c 1131 */;
	void cocci_id/* drivers/media/usb/gspca/ov534_9.c 1125 */;
	const struct v4l2_pix_format cocci_id/* drivers/media/usb/gspca/ov534_9.c 107 */[];
}
