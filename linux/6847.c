cocci_test_suite() {
	struct atto_hba_scsi_pass_thru *cocci_id/* drivers/scsi/esas2r/esas2r_ioctl.c 982 */;
	struct atto_hba_trace *cocci_id/* drivers/scsi/esas2r/esas2r_ioctl.c 914 */;
	u64 cocci_id/* drivers/scsi/esas2r/esas2r_ioctl.c 888 */;
	struct atto_hba_get_adapter_address *cocci_id/* drivers/scsi/esas2r/esas2r_ioctl.c 870 */;
	struct atto_hba_get_adapter_info *cocci_id/* drivers/scsi/esas2r/esas2r_ioctl.c 758 */;
	struct esas2r_buffered_ioctl {
		struct esas2r_adapter *a;
		void *ioctl;
		u32 length;
		u32 control_code;
		u32 offset;
		BUFFERED_IOCTL_CALLBACK callback;
		void *context;
		BUFFERED_IOCTL_DONE_CALLBACK done_callback;
		void *done_context;
	} cocci_id/* drivers/scsi/esas2r/esas2r_ioctl.c 67 */;
	union atto_ioctl_csmi cocci_id/* drivers/scsi/esas2r/esas2r_ioctl.c 654 */;
	struct esas2r_buffered_ioctl cocci_id/* drivers/scsi/esas2r/esas2r_ioctl.c 648 */;
	void (*cocci_id/* drivers/scsi/esas2r/esas2r_ioctl.c 64 */)(struct esas2r_adapter *,
								    struct esas2r_request *,
								    void *);
	int (*cocci_id/* drivers/scsi/esas2r/esas2r_ioctl.c 60 */)(struct esas2r_adapter *,
								   struct esas2r_request *,
								   struct esas2r_sg_context *,
								   void *);
	struct pci_dev *cocci_id/* drivers/scsi/esas2r/esas2r_ioctl.c 57 */;
	u64 *cocci_id/* drivers/scsi/esas2r/esas2r_ioctl.c 538 */;
	struct atto_csmi_get_scsi_addr *cocci_id/* drivers/scsi/esas2r/esas2r_ioctl.c 525 */;
	struct atto_csmi_get_cntlr_sts *cocci_id/* drivers/scsi/esas2r/esas2r_ioctl.c 486 */;
	struct atto_csmi_get_cntlr_cfg *cocci_id/* drivers/scsi/esas2r/esas2r_ioctl.c 440 */;
	struct atto_csmi_get_driver_info *cocci_id/* drivers/scsi/esas2r/esas2r_ioctl.c 430 */;
	struct atto_csmi_task_mgmt *cocci_id/* drivers/scsi/esas2r/esas2r_ioctl.c 411 */;
	struct atto_csmi_get_dev_addr *cocci_id/* drivers/scsi/esas2r/esas2r_ioctl.c 405 */;
	unsigned long cocci_id/* drivers/scsi/esas2r/esas2r_ioctl.c 402 */;
	struct esas2r_target *cocci_id/* drivers/scsi/esas2r/esas2r_ioctl.c 401 */;
	u8 cocci_id/* drivers/scsi/esas2r/esas2r_ioctl.c 397 */;
	union atto_ioctl_csmi *cocci_id/* drivers/scsi/esas2r/esas2r_ioctl.c 395 */;
	struct atto_csmi *cocci_id/* drivers/scsi/esas2r/esas2r_ioctl.c 394 */;
	struct esas2r_sg_context *cocci_id/* drivers/scsi/esas2r/esas2r_ioctl.c 392 */;
	void *cocci_id/* drivers/scsi/esas2r/esas2r_ioctl.c 392 */;
	bool cocci_id/* drivers/scsi/esas2r/esas2r_ioctl.c 374 */;
	struct scsi_lun cocci_id/* drivers/scsi/esas2r/esas2r_ioctl.c 374 */;
	struct atto_vda_ioctl_req *cocci_id/* drivers/scsi/esas2r/esas2r_ioctl.c 348 */;
	u16 cocci_id/* drivers/scsi/esas2r/esas2r_ioctl.c 346 */;
	struct atto_ioctl_smp cocci_id/* drivers/scsi/esas2r/esas2r_ioctl.c 320 */;
	struct atto_ioctl_smp *cocci_id/* drivers/scsi/esas2r/esas2r_ioctl.c 312 */;
	struct esas2r_buffered_ioctl *cocci_id/* drivers/scsi/esas2r/esas2r_ioctl.c 205 */;
	struct esas2r_ioctl_fs cocci_id/* drivers/scsi/esas2r/esas2r_ioctl.c 2032 */;
	const char *cocci_id/* drivers/scsi/esas2r/esas2r_ioctl.c 2026 */;
	struct esas2r_request *cocci_id/* drivers/scsi/esas2r/esas2r_ioctl.c 199 */;
	void cocci_id/* drivers/scsi/esas2r/esas2r_ioctl.c 198 */;
	struct esas2r_ioctl_fs *cocci_id/* drivers/scsi/esas2r/esas2r_ioctl.c 1955 */;
	struct esas2r_sg_context cocci_id/* drivers/scsi/esas2r/esas2r_ioctl.c 1954 */;
	long cocci_id/* drivers/scsi/esas2r/esas2r_ioctl.c 1947 */;
	struct atto_ioctl_vda *cocci_id/* drivers/scsi/esas2r/esas2r_ioctl.c 1832 */;
	dma_addr_t cocci_id/* drivers/scsi/esas2r/esas2r_ioctl.c 171 */;
	struct esas2r_flash_img_v0 cocci_id/* drivers/scsi/esas2r/esas2r_ioctl.c 1668 */;
	dma_addr_t *cocci_id/* drivers/scsi/esas2r/esas2r_ioctl.c 1553 */;
	size_t cocci_id/* drivers/scsi/esas2r/esas2r_ioctl.c 1552 */;
	u8 *cocci_id/* drivers/scsi/esas2r/esas2r_ioctl.c 1551 */;
	u32 cocci_id/* drivers/scsi/esas2r/esas2r_ioctl.c 1545 */;
	struct esas2r_adapter *cocci_id/* drivers/scsi/esas2r/esas2r_ioctl.c 1545 */;
	int cocci_id/* drivers/scsi/esas2r/esas2r_ioctl.c 1545 */;
	struct scsi_device *cocci_id/* drivers/scsi/esas2r/esas2r_ioctl.c 1528 */;
	void __user *cocci_id/* drivers/scsi/esas2r/esas2r_ioctl.c 1528 */;
	unsigned int cocci_id/* drivers/scsi/esas2r/esas2r_ioctl.c 1528 */;
	struct atto_ioctl_vda cocci_id/* drivers/scsi/esas2r/esas2r_ioctl.c 1458 */;
	PGETPHYSADDR cocci_id/* drivers/scsi/esas2r/esas2r_ioctl.c 144 */;
	struct esas2r_sas_nvram *cocci_id/* drivers/scsi/esas2r/esas2r_ioctl.c 1407 */;
	struct esas2r_sas_nvram cocci_id/* drivers/scsi/esas2r/esas2r_ioctl.c 1392 */;
	char *cocci_id/* drivers/scsi/esas2r/esas2r_ioctl.c 1355 */;
	struct atto_express_ioctl cocci_id/* drivers/scsi/esas2r/esas2r_ioctl.c 1288 */;
	struct atto_express_ioctl *cocci_id/* drivers/scsi/esas2r/esas2r_ioctl.c 1275 */;
	struct esas2r_flash_img cocci_id/* drivers/scsi/esas2r/esas2r_ioctl.c 127 */;
	struct atto_ioctl cocci_id/* drivers/scsi/esas2r/esas2r_ioctl.c 1238 */;
	struct atto_ioctl *cocci_id/* drivers/scsi/esas2r/esas2r_ioctl.c 1230 */;
	struct atto_hba_get_device_info *cocci_id/* drivers/scsi/esas2r/esas2r_ioctl.c 1156 */;
	struct atto_hba_adap_ctrl *cocci_id/* drivers/scsi/esas2r/esas2r_ioctl.c 1118 */;
	struct esas2r_flash_img *cocci_id/* drivers/scsi/esas2r/esas2r_ioctl.c 109 */;
	struct atto_hba_get_device_address *cocci_id/* drivers/scsi/esas2r/esas2r_ioctl.c 1059 */;
	struct atto_hba_scsi_pass_thru cocci_id/* drivers/scsi/esas2r/esas2r_ioctl.c 1009 */;
}
