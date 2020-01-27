cocci_test_suite() {
	struct scatterlist *cocci_id/* drivers/usb/storage/alauda.c 917 */;
	unsigned long cocci_id/* drivers/usb/storage/alauda.c 906 */;
	struct alauda_media_info {
		unsigned long capacity;
		unsigned int pagesize;
		unsigned int blocksize;
		unsigned int uzonesize;
		unsigned int zonesize;
		unsigned int blockmask;
		unsigned char pageshift;
		unsigned char blockshift;
		unsigned char zoneshift;
		u16 **lba_to_pba;
		u16 **pba_to_lba;
	} cocci_id/* drivers/usb/storage/alauda.c 85 */;
	u16 cocci_id/* drivers/usb/storage/alauda.c 692 */;
	unsigned int cocci_id/* drivers/usb/storage/alauda.c 682 */;
	void cocci_id/* drivers/usb/storage/alauda.c 682 */;
	u16 *cocci_id/* drivers/usb/storage/alauda.c 544 */;
	struct alauda_media_info *cocci_id/* drivers/usb/storage/alauda.c 541 */;
	unsigned char cocci_id/* drivers/usb/storage/alauda.c 497 */[3];
	unsigned char cocci_id/* drivers/usb/storage/alauda.c 493 */[];
	unsigned char cocci_id/* drivers/usb/storage/alauda.c 455 */[2];
	struct alauda_info *cocci_id/* drivers/usb/storage/alauda.c 454 */;
	unsigned char *cocci_id/* drivers/usb/storage/alauda.c 347 */;
	unsigned char cocci_id/* drivers/usb/storage/alauda.c 332 */;
	struct us_data *cocci_id/* drivers/usb/storage/alauda.c 330 */;
	int cocci_id/* drivers/usb/storage/alauda.c 330 */;
	unsigned char cocci_id/* drivers/usb/storage/alauda.c 216 */[256];
	struct alauda_card_info *cocci_id/* drivers/usb/storage/alauda.c 201 */;
	struct alauda_card_info cocci_id/* drivers/usb/storage/alauda.c 175 */[];
	struct alauda_card_info {
		unsigned char id;
		unsigned char chipshift;
		unsigned char pageshift;
		unsigned char blockshift;
		unsigned char zoneshift;
	} cocci_id/* drivers/usb/storage/alauda.c 167 */;
	struct usb_driver cocci_id/* drivers/usb/storage/alauda.c 1250 */;
	const struct usb_device_id *cocci_id/* drivers/usb/storage/alauda.c 1230 */;
	struct usb_interface *cocci_id/* drivers/usb/storage/alauda.c 1229 */;
	struct scsi_host_template cocci_id/* drivers/usb/storage/alauda.c 1227 */;
	int cocci_id/* drivers/usb/storage/alauda.c 121 */(struct us_data *us);
	__be32 *cocci_id/* drivers/usb/storage/alauda.c 1156 */;
	unsigned char cocci_id/* drivers/usb/storage/alauda.c 1125 */[36];
	struct scsi_cmnd *cocci_id/* drivers/usb/storage/alauda.c 1120 */;
	struct alauda_info cocci_id/* drivers/usb/storage/alauda.c 1106 */;
	struct usb_host_interface *cocci_id/* drivers/usb/storage/alauda.c 1103 */;
	void *cocci_id/* drivers/usb/storage/alauda.c 1080 */;
	struct alauda_info {
		struct alauda_media_info port[2];
		int wr_ep;
		unsigned char sense_key;
		unsigned long sense_asc;
		unsigned long sense_ascq;
	} cocci_id/* drivers/usb/storage/alauda.c 101 */;
}
