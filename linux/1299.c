cocci_test_suite() {
	struct freecom_status {
		u8 Status;
		u8 Reason;
		__le16 Count;
		u8 Pad[60];
	} cocci_id/* drivers/usb/storage/freecom.c 69 */;
	struct freecom_ide_in {
		u8 Type;
		u8 Pad[63];
	} cocci_id/* drivers/usb/storage/freecom.c 64 */;
	struct freecom_ide_out {
		u8 Type;
		u8 Pad;
		__le16 Value;
		u8 Pad2[60];
	} cocci_id/* drivers/usb/storage/freecom.c 57 */;
	struct usb_driver cocci_id/* drivers/usb/storage/freecom.c 565 */;
	struct us_data *cocci_id/* drivers/usb/storage/freecom.c 547 */;
	const struct usb_device_id *cocci_id/* drivers/usb/storage/freecom.c 545 */;
	struct usb_interface *cocci_id/* drivers/usb/storage/freecom.c 544 */;
	int cocci_id/* drivers/usb/storage/freecom.c 544 */;
	struct scsi_host_template cocci_id/* drivers/usb/storage/freecom.c 542 */;
	struct freecom_xfer_wrap {
		u8 Type;
		u8 Timeout;
		__le32 Count;
		u8 Pad[58];
	}__attribute__((packed)) cocci_id/* drivers/usb/storage/freecom.c 50 */;
	unsigned char *cocci_id/* drivers/usb/storage/freecom.c 494 */;
	char cocci_id/* drivers/usb/storage/freecom.c 492 */[80];
	void cocci_id/* drivers/usb/storage/freecom.c 490 */;
	char *cocci_id/* drivers/usb/storage/freecom.c 443 */;
	struct freecom_cb_wrap {
		u8 Type;
		u8 Timeout;
		u8 Atapi[12];
		u8 Filler[50];
	} cocci_id/* drivers/usb/storage/freecom.c 43 */;
	void cocci_id/* drivers/usb/storage/freecom.c 35 */(struct us_data *us,
							    void *ibuffer,
							    int length);
	void *cocci_id/* drivers/usb/storage/freecom.c 271 */;
	struct freecom_status *cocci_id/* drivers/usb/storage/freecom.c 224 */;
	struct freecom_cb_wrap *cocci_id/* drivers/usb/storage/freecom.c 223 */;
	int unsigned cocci_id/* drivers/usb/storage/freecom.c 186 */;
	struct freecom_xfer_wrap *cocci_id/* drivers/usb/storage/freecom.c 155 */;
	unsigned int cocci_id/* drivers/usb/storage/freecom.c 153 */;
	struct scsi_cmnd *cocci_id/* drivers/usb/storage/freecom.c 152 */;
	int cocci_id/* drivers/usb/storage/freecom.c 110 */(struct us_data *us);
}
