cocci_test_suite() {
	int cocci_id/* drivers/message/fusion/mptscsih.c 97 */(MPT_SCSI_HOST *hd,
							       u8 type,
							       u8 channel,
							       u8 id, u64 lun,
							       int ctx2abort,
							       ulong timeout);
	void cocci_id/* drivers/message/fusion/mptscsih.c 95 */(struct scsi_cmnd *sc,
								MPT_SCSI_HOST *hd,
								MPT_FRAME_HDR *mf,
								SCSIIOReply_t *pScsiReply);
	void cocci_id/* drivers/message/fusion/mptscsih.c 94 */(MPT_ADAPTER *ioc,
								int req_idx);
	int cocci_id/* drivers/message/fusion/mptscsih.c 92 */(MPT_ADAPTER *ioc,
							       struct scsi_cmnd *SCpnt,
							       SCSIIORequest_t *pReq,
							       int req_idx);
	void cocci_id/* drivers/message/fusion/mptscsih.c 89 */(struct scsi_cmnd *sc,
								SCSIIOReply_t *pScsiReply,
								SCSIIORequest_t *pScsiReq);
	int cocci_id/* drivers/message/fusion/mptscsih.c 88 */(MPT_ADAPTER *ioc,
							       MPT_FRAME_HDR *mf,
							       MPT_FRAME_HDR *r);
	int cocci_id/* drivers/message/fusion/mptscsih.c 87 */(MPT_ADAPTER *ioc,
							       struct scsi_cmnd *scmd);
	void cocci_id/* drivers/message/fusion/mptscsih.c 86 */(MPT_ADAPTER *ioc,
								int i,
								struct scsi_cmnd *scmd);
	struct scsi_cmnd *cocci_id/* drivers/message/fusion/mptscsih.c 84 */(MPT_ADAPTER *ioc,
									     int i);
	MPIHeader_t *cocci_id/* drivers/message/fusion/mptscsih.c 613 */;
	SEPRequest_t *cocci_id/* drivers/message/fusion/mptscsih.c 396 */;
	U32 cocci_id/* drivers/message/fusion/mptscsih.c 393 */;
	u8 cocci_id/* drivers/message/fusion/mptscsih.c 326 */;
	struct device_attribute *cocci_id/* drivers/message/fusion/mptscsih.c 3221 */[];
	const char *cocci_id/* drivers/message/fusion/mptscsih.c 3203 */;
	size_t cocci_id/* drivers/message/fusion/mptscsih.c 3203 */;
	struct Scsi_Host *cocci_id/* drivers/message/fusion/mptscsih.c 3143 */;
	struct device_attribute *cocci_id/* drivers/message/fusion/mptscsih.c 3141 */;
	struct device *cocci_id/* drivers/message/fusion/mptscsih.c 3140 */;
	ssize_t cocci_id/* drivers/message/fusion/mptscsih.c 3139 */;
	u32 *cocci_id/* drivers/message/fusion/mptscsih.c 313 */;
	INTERNAL_CMD cocci_id/* drivers/message/fusion/mptscsih.c 3012 */;
	char cocci_id/* drivers/message/fusion/mptscsih.c 2783 */[];
	char cocci_id/* drivers/message/fusion/mptscsih.c 2782 */;
	INTERNAL_CMD *cocci_id/* drivers/message/fusion/mptscsih.c 2776 */;
	u16 cocci_id/* drivers/message/fusion/mptscsih.c 2679 */;
	MpiRaidActionReply_t *cocci_id/* drivers/message/fusion/mptscsih.c 2677 */;
	EventNotificationReply_t *cocci_id/* drivers/message/fusion/mptscsih.c 2581 */;
	unsigned long cocci_id/* drivers/message/fusion/mptscsih.c 2528 */;
	MPT_ADAPTER *cocci_id/* drivers/message/fusion/mptscsih.c 2526 */;
	struct scsi_cmnd *cocci_id/* drivers/message/fusion/mptscsih.c 2526 */;
	int cocci_id/* drivers/message/fusion/mptscsih.c 2525 */;
	u8 *cocci_id/* drivers/message/fusion/mptscsih.c 2419 */;
	SCSIIOReply_t *cocci_id/* drivers/message/fusion/mptscsih.c 2406 */;
	void cocci_id/* drivers/message/fusion/mptscsih.c 2405 */;
	struct scsi_target *cocci_id/* drivers/message/fusion/mptscsih.c 2317 */;
	VirtTarget *cocci_id/* drivers/message/fusion/mptscsih.c 2316 */;
	SCSIIORequest_t cocci_id/* drivers/message/fusion/mptscsih.c 218 */;
	RaidPhysDiskPage1_t cocci_id/* drivers/message/fusion/mptscsih.c 2153 */;
	RaidPhysDiskPage1_t *cocci_id/* drivers/message/fusion/mptscsih.c 2128 */;
	struct inactive_raid_component_info *cocci_id/* drivers/message/fusion/mptscsih.c 2126 */;
	sector_t cocci_id/* drivers/message/fusion/mptscsih.c 2086 */;
	int cocci_id/* drivers/message/fusion/mptscsih.c 2086 */[];
	struct scsi_device *cocci_id/* drivers/message/fusion/mptscsih.c 2085 */;
	struct block_device *cocci_id/* drivers/message/fusion/mptscsih.c 2085 */;
	dma_addr_t cocci_id/* drivers/message/fusion/mptscsih.c 194 */;
	u32 cocci_id/* drivers/message/fusion/mptscsih.c 190 */;
	struct scatterlist *cocci_id/* drivers/message/fusion/mptscsih.c 184 */;
	char *cocci_id/* drivers/message/fusion/mptscsih.c 182 */;
	SCSIIORequest_t *cocci_id/* drivers/message/fusion/mptscsih.c 180 */;
	VirtDevice *cocci_id/* drivers/message/fusion/mptscsih.c 1689 */;
	SCSITaskMgmtReply_t *cocci_id/* drivers/message/fusion/mptscsih.c 1633 */;
	SCSITaskMgmt_t cocci_id/* drivers/message/fusion/mptscsih.c 1608 */;
	struct scsi_lun *cocci_id/* drivers/message/fusion/mptscsih.c 1588 */;
	SCSITaskMgmt_t *cocci_id/* drivers/message/fusion/mptscsih.c 1517 */;
	MPT_FRAME_HDR *cocci_id/* drivers/message/fusion/mptscsih.c 1516 */;
	ulong cocci_id/* drivers/message/fusion/mptscsih.c 1514 */;
	u64 cocci_id/* drivers/message/fusion/mptscsih.c 1513 */;
	MPT_SCSI_HOST *cocci_id/* drivers/message/fusion/mptscsih.c 1513 */;
	MPT_FRAME_HDR cocci_id/* drivers/message/fusion/mptscsih.c 147 */;
	int *cocci_id/* drivers/message/fusion/mptscsih.c 134 */;
	struct seq_file *cocci_id/* drivers/message/fusion/mptscsih.c 1285 */;
	pm_message_t cocci_id/* drivers/message/fusion/mptscsih.c 1228 */;
	void *cocci_id/* drivers/message/fusion/mptscsih.c 1189 */;
	int cocci_id/* drivers/message/fusion/mptscsih.c 118 */(struct pci_dev *pdev);
	struct pci_dev *cocci_id/* drivers/message/fusion/mptscsih.c 1174 */;
	int cocci_id/* drivers/message/fusion/mptscsih.c 117 */(struct pci_dev *pdev,
								pm_message_t state);
	long cocci_id/* drivers/message/fusion/mptscsih.c 1148 */;
	void cocci_id/* drivers/message/fusion/mptscsih.c 114 */(struct pci_dev *);
	int cocci_id/* drivers/message/fusion/mptscsih.c 111 */(MPT_ADAPTER *ioc,
								u8 type,
								SCSITaskMgmtReply_t *pScsiTmReply);
	void cocci_id/* drivers/message/fusion/mptscsih.c 109 */(MPT_SCSI_HOST *hd,
								 VirtDevice *vdevice);
	struct scsi_lun cocci_id/* drivers/message/fusion/mptscsih.c 1084 */;
	int cocci_id/* drivers/message/fusion/mptscsih.c 108 */(MPT_SCSI_HOST *hd,
								INTERNAL_CMD *iocmd);
	unsigned char *cocci_id/* drivers/message/fusion/mptscsih.c 1051 */;
	int cocci_id/* drivers/message/fusion/mptscsih.c 105 */(MPT_ADAPTER *ioc,
								MPT_FRAME_HDR *req,
								MPT_FRAME_HDR *reply);
	void cocci_id/* drivers/message/fusion/mptscsih.c 103 */(MPT_ADAPTER *ioc,
								 u8 response_code);
	int cocci_id/* drivers/message/fusion/mptscsih.c 101 */(MPT_ADAPTER *ioc,
								EventNotificationReply_t *pEvReply);
	int cocci_id/* drivers/message/fusion/mptscsih.c 100 */(MPT_ADAPTER *ioc,
								int post_reset);
}
