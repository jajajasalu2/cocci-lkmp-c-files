cocci_test_suite() {
	u64 cocci_id/* drivers/scsi/ps3rom.c 90 */;
	unsigned char cocci_id/* drivers/scsi/ps3rom.c 88 */;
	struct lv1_atapi_cmnd_block cocci_id/* drivers/scsi/ps3rom.c 87 */;
	struct scsi_cmnd *cocci_id/* drivers/scsi/ps3rom.c 85 */;
	struct ps3_storage_device *cocci_id/* drivers/scsi/ps3rom.c 84 */;
	int cocci_id/* drivers/scsi/ps3rom.c 84 */;
	struct scsi_device *cocci_id/* drivers/scsi/ps3rom.c 64 */;
	enum lv1_atapi_in_out{DIR_WRITE=0, DIR_READ=1,} cocci_id/* drivers/scsi/ps3rom.c 58 */;
	enum lv1_atapi_proto{NON_DATA_PROTO=0, PIO_DATA_IN_PROTO=1, PIO_DATA_OUT_PROTO=2, DMA_PROTO=3,} cocci_id/* drivers/scsi/ps3rom.c 51 */;
	void __exit cocci_id/* drivers/scsi/ps3rom.c 432 */;
	void cocci_id/* drivers/scsi/ps3rom.c 432 */;
	int __init cocci_id/* drivers/scsi/ps3rom.c 427 */;
	struct ps3_system_bus_driver cocci_id/* drivers/scsi/ps3rom.c 418 */;
	struct lv1_atapi_cmnd_block {
		u8 pkt[32];
		u32 pktlen;
		u32 blocks;
		u32 block_size;
		u32 proto;
		u32 in_out;
		u64 buffer;
		u32 arglen;
	} cocci_id/* drivers/scsi/ps3rom.c 40 */;
	struct ps3rom_private cocci_id/* drivers/scsi/ps3rom.c 368 */;
	struct ps3_system_bus_device *cocci_id/* drivers/scsi/ps3rom.c 344 */;
	struct scsi_host_template cocci_id/* drivers/scsi/ps3rom.c 331 */;
	struct ps3rom_private {
		struct ps3_storage_device *dev;
		struct scsi_cmnd *curr_cmd;
	} cocci_id/* drivers/scsi/ps3rom.c 32 */;
	struct ps3rom_private *cocci_id/* drivers/scsi/ps3rom.c 266 */;
	struct Scsi_Host *cocci_id/* drivers/scsi/ps3rom.c 265 */;
	irqreturn_t cocci_id/* drivers/scsi/ps3rom.c 262 */;
	void *cocci_id/* drivers/scsi/ps3rom.c 262 */;
	void (*cocci_id/* drivers/scsi/ps3rom.c 204 */)(struct scsi_cmnd *);
	u32 cocci_id/* drivers/scsi/ps3rom.c 160 */;
	const struct scsi_cmnd *cocci_id/* drivers/scsi/ps3rom.c 148 */;
	unsigned int cocci_id/* drivers/scsi/ps3rom.c 148 */;
}
