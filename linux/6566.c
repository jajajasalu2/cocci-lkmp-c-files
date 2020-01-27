cocci_test_suite() {
	struct sis_base_struct {
		__le32 revision;
		__le32 flags;
		__le32 error_buffer_paddr_low;
		__le32 error_buffer_paddr_high;
		__le32 error_buffer_element_length;
		__le32 error_buffer_num_elements;
	} cocci_id/* drivers/scsi/smartpqi/smartpqi_sis.c 63 */;
	struct sis_base_struct cocci_id/* drivers/scsi/smartpqi/smartpqi_sis.c 425 */;
	void __attribute__((unused)) cocci_id/* drivers/scsi/smartpqi/smartpqi_sis.c 423 */;
	struct pqi_ctrl_info *cocci_id/* drivers/scsi/smartpqi/smartpqi_sis.c 382 */;
	void cocci_id/* drivers/scsi/smartpqi/smartpqi_sis.c 382 */;
	u64 cocci_id/* drivers/scsi/smartpqi/smartpqi_sis.c 321 */;
	dma_addr_t cocci_id/* drivers/scsi/smartpqi/smartpqi_sis.c 292 */;
	unsigned long cocci_id/* drivers/scsi/smartpqi/smartpqi_sis.c 291 */;
	struct sis_base_struct *cocci_id/* drivers/scsi/smartpqi/smartpqi_sis.c 289 */;
	void *cocci_id/* drivers/scsi/smartpqi/smartpqi_sis.c 288 */;
	struct sis_sync_cmd_params cocci_id/* drivers/scsi/smartpqi/smartpqi_sis.c 238 */;
	u32 cocci_id/* drivers/scsi/smartpqi/smartpqi_sis.c 236 */;
	int cocci_id/* drivers/scsi/smartpqi/smartpqi_sis.c 233 */;
	unsigned int cocci_id/* drivers/scsi/smartpqi/smartpqi_sis.c 161 */;
	struct pqi_ctrl_registers __iomem *cocci_id/* drivers/scsi/smartpqi/smartpqi_sis.c 160 */;
	struct sis_sync_cmd_params *cocci_id/* drivers/scsi/smartpqi/smartpqi_sis.c 158 */;
	struct sis_sync_cmd_params {
		u32 mailbox[6];
	} cocci_id/* drivers/scsi/smartpqi/smartpqi_sis.c 153 */;
	bool cocci_id/* drivers/scsi/smartpqi/smartpqi_sis.c 126 */;
}
