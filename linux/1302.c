cocci_test_suite() {
	unsigned char cocci_id/* drivers/usb/storage/sddr09.c 860 */[3];
	unsigned int cocci_id/* drivers/usb/storage/sddr09.c 824 */;
	struct scatterlist *cocci_id/* drivers/usb/storage/sddr09.c 741 */;
	int cocci_id/* drivers/usb/storage/sddr09.c 53 */(struct scsi_cmnd *srb,
							  struct us_data *us);
	unsigned long cocci_id/* drivers/usb/storage/sddr09.c 522 */;
	int cocci_id/* drivers/usb/storage/sddr09.c 52 */(struct us_data *us);
	const int cocci_id/* drivers/usb/storage/sddr09.c 284 */;
	struct sddr09_card_info {
		unsigned long capacity;
		int pagesize;
		int pageshift;
		int blocksize;
		int blockshift;
		int blockmask;
		int *lba_to_pba;
		int *pba_to_lba;
		int lbact;
		int flags;
#define SDDR09_WP 1
	} cocci_id/* drivers/usb/storage/sddr09.c 247 */;
	unsigned char *cocci_id/* drivers/usb/storage/sddr09.c 235 */;
	unsigned char cocci_id/* drivers/usb/storage/sddr09.c 214 */;
	void cocci_id/* drivers/usb/storage/sddr09.c 212 */;
	unsigned char cocci_id/* drivers/usb/storage/sddr09.c 186 */[256];
	struct usb_driver cocci_id/* drivers/usb/storage/sddr09.c 1776 */;
	const struct usb_device_id *cocci_id/* drivers/usb/storage/sddr09.c 1749 */;
	struct usb_interface *cocci_id/* drivers/usb/storage/sddr09.c 1748 */;
	struct scsi_host_template cocci_id/* drivers/usb/storage/sddr09.c 1746 */;
	struct nand_flash_dev *cocci_id/* drivers/usb/storage/sddr09.c 172 */;
	__be16 *cocci_id/* drivers/usb/storage/sddr09.c 1640 */;
	__be32 *cocci_id/* drivers/usb/storage/sddr09.c 1617 */;
	unsigned char cocci_id/* drivers/usb/storage/sddr09.c 1553 */[19];
	unsigned char cocci_id/* drivers/usb/storage/sddr09.c 1548 */[8];
	u8 cocci_id/* drivers/usb/storage/sddr09.c 1500 */;
	struct us_data *cocci_id/* drivers/usb/storage/sddr09.c 1496 */;
	struct scsi_cmnd *cocci_id/* drivers/usb/storage/sddr09.c 1496 */;
	int cocci_id/* drivers/usb/storage/sddr09.c 1496 */;
	struct nand_flash_dev cocci_id/* drivers/usb/storage/sddr09.c 147 */[];
	struct sddr09_card_info cocci_id/* drivers/usb/storage/sddr09.c 1431 */;
	struct sddr09_card_info *cocci_id/* drivers/usb/storage/sddr09.c 1401 */;
	void *cocci_id/* drivers/usb/storage/sddr09.c 1400 */;
	char *cocci_id/* drivers/usb/storage/sddr09.c 125 */;
	char cocci_id/* drivers/usb/storage/sddr09.c 1140 */[256];
	unsigned char cocci_id/* drivers/usb/storage/sddr09.c 1139 */[4];
	const char *cocci_id/* drivers/usb/storage/sddr09.c 1097 */;
	struct nand_flash_dev {
		int model_id;
		int chipshift;
		char pageshift;
		char blockshift;
		char zoneshift;
		char pageadrlen;
	} cocci_id/* drivers/usb/storage/sddr09.c 107 */;
}
