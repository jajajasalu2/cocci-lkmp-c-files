cocci_test_suite() {
	MPT_FRAME_HDR cocci_id/* drivers/message/fusion/mptbase.c 911 */;
	struct mpt_pci_driver *cocci_id/* drivers/message/fusion/mptbase.c 859 */;
	void __exit cocci_id/* drivers/message/fusion/mptbase.c 8515 */;
	int __init cocci_id/* drivers/message/fusion/mptbase.c 8477 */;
	char cocci_id/* drivers/message/fusion/mptbase.c 8146 */[EVENT_DESCR_STR_SZ];
	union loginfo_type cocci_id/* drivers/message/fusion/mptbase.c 8072 */;
	union loginfo_type {
		u32 loginfo;
		struct {
			u32 subcode:16;
			u32 code:8;
			u32 originator:4;
			u32 bus_type:4;
		} dw;
	} cocci_id/* drivers/message/fusion/mptbase.c 8063 */;
	MPT_RESETHANDLER cocci_id/* drivers/message/fusion/mptbase.c 796 */;
	char *cocci_id/* drivers/message/fusion/mptbase.c 7914 */[];
	MpiEventDataRaid_t *cocci_id/* drivers/message/fusion/mptbase.c 7737 */;
	EventNotificationReply_t *cocci_id/* drivers/message/fusion/mptbase.c 7695 */;
	int *cocci_id/* drivers/message/fusion/mptbase.c 7695 */;
	MPT_EVHANDLER cocci_id/* drivers/message/fusion/mptbase.c 757 */;
	MPT_CALLBACK cocci_id/* drivers/message/fusion/mptbase.c 701 */;
	char cocci_id/* drivers/message/fusion/mptbase.c 6700 */[32];
	struct seq_file *cocci_id/* drivers/message/fusion/mptbase.c 6697 */;
	void cocci_id/* drivers/message/fusion/mptbase.c 6638 */(MPT_ADAPTER *ioc,
								 struct seq_file *m,
								 int showlan);
	char *cocci_id/* drivers/message/fusion/mptbase.c 6460 */;
	long cocci_id/* drivers/message/fusion/mptbase.c 6351 */;
	ConfigExtendedPageHeader_t *cocci_id/* drivers/message/fusion/mptbase.c 6347 */;
	ConfigReply_t *cocci_id/* drivers/message/fusion/mptbase.c 6346 */;
	Config_t *cocci_id/* drivers/message/fusion/mptbase.c 6345 */;
	CONFIGPARMS *cocci_id/* drivers/message/fusion/mptbase.c 6343 */;
	EventAck_t *cocci_id/* drivers/message/fusion/mptbase.c 6305 */;
	MPIDefaultReply_t cocci_id/* drivers/message/fusion/mptbase.c 6278 */;
	EventNotification_t cocci_id/* drivers/message/fusion/mptbase.c 6277 */;
	ManufacturingPage0_t *cocci_id/* drivers/message/fusion/mptbase.c 6230 */;
	IOCPage1_t *cocci_id/* drivers/message/fusion/mptbase.c 6140 */;
	IOCPage4_t *cocci_id/* drivers/message/fusion/mptbase.c 6087 */;
	IOCPage3_t *cocci_id/* drivers/message/fusion/mptbase.c 6028 */;
	IOCPage2_t *cocci_id/* drivers/message/fusion/mptbase.c 5958 */;
	irqreturn_t cocci_id/* drivers/message/fusion/mptbase.c 590 */;
	__le64 cocci_id/* drivers/message/fusion/mptbase.c 5877 */;
	RaidPhysDiskPage1_t *cocci_id/* drivers/message/fusion/mptbase.c 5869 */;
	pRaidPhysDiskPage1_t cocci_id/* drivers/message/fusion/mptbase.c 5805 */;
	pRaidPhysDiskPage0_t cocci_id/* drivers/message/fusion/mptbase.c 5738 */;
	RaidPhysDiskPage0_t *cocci_id/* drivers/message/fusion/mptbase.c 5733 */;
	RaidPhysDiskPage0_t cocci_id/* drivers/message/fusion/mptbase.c 5651 */;
	pRaidVolumePage0_t cocci_id/* drivers/message/fusion/mptbase.c 5649 */;
	struct inactive_raid_component_info *cocci_id/* drivers/message/fusion/mptbase.c 5622 */;
	MpiDeviceInfo_t *cocci_id/* drivers/message/fusion/mptbase.c 5529 */;
	SCSIPortPage2_t *cocci_id/* drivers/message/fusion/mptbase.c 5528 */;
	ATTODeviceInfo_t *cocci_id/* drivers/message/fusion/mptbase.c 5500 */;
	ATTO_SCSIPortPage2_t *cocci_id/* drivers/message/fusion/mptbase.c 5499 */;
	SCSIPortPage0_t *cocci_id/* drivers/message/fusion/mptbase.c 5425 */;
	u8 *cocci_id/* drivers/message/fusion/mptbase.c 5326 */;
	dma_addr_t cocci_id/* drivers/message/fusion/mptbase.c 5299 */;
	IOUnitPage2_t *cocci_id/* drivers/message/fusion/mptbase.c 5298 */;
	CONFIGPARMS cocci_id/* drivers/message/fusion/mptbase.c 5297 */;
	ConfigPageHeader_t cocci_id/* drivers/message/fusion/mptbase.c 5296 */;
	MPT_ADAPTER *cocci_id/* drivers/message/fusion/mptbase.c 5294 */;
	int cocci_id/* drivers/message/fusion/mptbase.c 5293 */;
	SasIoUnitControlRequest_t cocci_id/* drivers/message/fusion/mptbase.c 5106 */;
	MPIHeader_t *cocci_id/* drivers/message/fusion/mptbase.c 5071 */;
	SasIoUnitControlReply_t *cocci_id/* drivers/message/fusion/mptbase.c 5069 */;
	SasIoUnitControlRequest_t *cocci_id/* drivers/message/fusion/mptbase.c 5068 */;
	LANPage1_t cocci_id/* drivers/message/fusion/mptbase.c 5033 */;
	LANPage0_t cocci_id/* drivers/message/fusion/mptbase.c 4988 */;
	LANPage1_t *cocci_id/* drivers/message/fusion/mptbase.c 4956 */;
	LANPage0_t *cocci_id/* drivers/message/fusion/mptbase.c 4954 */;
	volatile MPIDefaultReply_t *cocci_id/* drivers/message/fusion/mptbase.c 4872 */;
	MPIDefaultReply_t *cocci_id/* drivers/message/fusion/mptbase.c 4872 */;
	ulong cocci_id/* drivers/message/fusion/mptbase.c 4508 */;
	void *cocci_id/* drivers/message/fusion/mptbase.c 4508 */;
	u64 cocci_id/* drivers/message/fusion/mptbase.c 4443 */;
	unsigned long cocci_id/* drivers/message/fusion/mptbase.c 4439 */;
	MPT_FRAME_HDR *cocci_id/* drivers/message/fusion/mptbase.c 4438 */;
	MpiExtImageHeader_t *cocci_id/* drivers/message/fusion/mptbase.c 3681 */;
	struct task_struct *cocci_id/* drivers/message/fusion/mptbase.c 365 */;
	MPT_SCSI_HOST *cocci_id/* drivers/message/fusion/mptbase.c 364 */;
	FWUpload_t cocci_id/* drivers/message/fusion/mptbase.c 3624 */;
	FWUploadTCSGE_t cocci_id/* drivers/message/fusion/mptbase.c 3624 */;
	FWUploadTCSGE_t *cocci_id/* drivers/message/fusion/mptbase.c 3583 */;
	FWUploadReply_t *cocci_id/* drivers/message/fusion/mptbase.c 3582 */;
	FWUpload_t *cocci_id/* drivers/message/fusion/mptbase.c 3581 */;
	u8 cocci_id/* drivers/message/fusion/mptbase.c 3580 */[sizeof(FWUploadReply_t)];
	struct work_struct *cocci_id/* drivers/message/fusion/mptbase.c 357 */;
	PortEnable_t cocci_id/* drivers/message/fusion/mptbase.c 3464 */;
	U8 cocci_id/* drivers/message/fusion/mptbase.c 3364 */;
	IOCInit_t cocci_id/* drivers/message/fusion/mptbase.c 3340 */;
	PortFactsReply_t *cocci_id/* drivers/message/fusion/mptbase.c 3258 */;
	PortFacts_t cocci_id/* drivers/message/fusion/mptbase.c 3257 */;
	u16 cocci_id/* drivers/message/fusion/mptbase.c 3161 */;
	IOCFactsReply_t cocci_id/* drivers/message/fusion/mptbase.c 3132 */;
	u16 *cocci_id/* drivers/message/fusion/mptbase.c 3120 */;
	u32 *cocci_id/* drivers/message/fusion/mptbase.c 3119 */;
	u8 cocci_id/* drivers/message/fusion/mptbase.c 3089 */;
	u32 cocci_id/* drivers/message/fusion/mptbase.c 3088 */;
	IOCFactsReply_t *cocci_id/* drivers/message/fusion/mptbase.c 3083 */;
	IOCFacts_t cocci_id/* drivers/message/fusion/mptbase.c 3082 */;
	void cocci_id/* drivers/message/fusion/mptbase.c 2867 */;
	SasIOUnitPage0_t *cocci_id/* drivers/message/fusion/mptbase.c 286 */;
	ConfigExtendedPageHeader_t cocci_id/* drivers/message/fusion/mptbase.c 284 */;
	MpiFwHeader_t *cocci_id/* drivers/message/fusion/mptbase.c 2707 */;
	unsigned int cocci_id/* drivers/message/fusion/mptbase.c 2651 */;
	MPT_DRIVER_CLASS cocci_id/* drivers/message/fusion/mptbase.c 265 */;
	const struct kernel_param *cocci_id/* drivers/message/fusion/mptbase.c 245 */;
	void __exit cocci_id/* drivers/message/fusion/mptbase.c 217 */(void);
	int __init cocci_id/* drivers/message/fusion/mptbase.c 216 */(void);
	pm_message_t cocci_id/* drivers/message/fusion/mptbase.c 2150 */;
	void cocci_id/* drivers/message/fusion/mptbase.c 211 */(MPT_ADAPTER *ioc,
								u32 log_info,
								u8 cb_idx);
	struct workqueue_struct *cocci_id/* drivers/message/fusion/mptbase.c 2091 */;
	void cocci_id/* drivers/message/fusion/mptbase.c 209 */(MPT_ADAPTER *ioc,
								u32 log_info);
	char cocci_id/* drivers/message/fusion/mptbase.c 2088 */[64];
	void cocci_id/* drivers/message/fusion/mptbase.c 208 */(MPT_ADAPTER *ioc,
								u32 ioc_status,
								MPT_FRAME_HDR *mf);
	int cocci_id/* drivers/message/fusion/mptbase.c 206 */(MPT_ADAPTER *ioc,
							       EventNotificationReply_t *evReply,
							       int *evHandlers);
	void cocci_id/* drivers/message/fusion/mptbase.c 204 */(char *buf,
								MPT_ADAPTER *ioc);
	int cocci_id/* drivers/message/fusion/mptbase.c 202 */(struct seq_file *m,
							       void *v);
	int cocci_id/* drivers/message/fusion/mptbase.c 197 */(MPT_ADAPTER *ioc,
							       pIOCInit_t ioc_init);
	int cocci_id/* drivers/message/fusion/mptbase.c 196 */(MPT_ADAPTER *ioc,
							       u8 access_control_value,
							       int sleepFlag);
	int cocci_id/* drivers/message/fusion/mptbase.c 195 */(MPT_ADAPTER *ioc,
							       EventNotificationReply_t *evnp);
	int cocci_id/* drivers/message/fusion/mptbase.c 193 */(MPT_ADAPTER *ioc,
							       u8 EvSwitch,
							       int sleepFlag);
	int cocci_id/* drivers/message/fusion/mptbase.c 188 */(MPT_ADAPTER *ioc,
							       int portnum);
	int cocci_id/* drivers/message/fusion/mptbase.c 187 */(MPT_ADAPTER *ioc,
							       u8 persist_opcode);
	int cocci_id/* drivers/message/fusion/mptbase.c 186 */(MPT_ADAPTER *ioc);
	int cocci_id/* drivers/message/fusion/mptbase.c 182 */(MPT_ADAPTER *ioc,
							       int howlong,
							       int sleepFlag);
	int cocci_id/* drivers/message/fusion/mptbase.c 180 */(MPT_ADAPTER *ioc,
							       u8 reset_type,
							       int sleepFlag);
	int cocci_id/* drivers/message/fusion/mptbase.c 179 */(MPT_ADAPTER *ioc,
							       int ignore,
							       int sleepFlag);
	MPT_ADAPTER cocci_id/* drivers/message/fusion/mptbase.c 1783 */;
	struct proc_dir_entry *cocci_id/* drivers/message/fusion/mptbase.c 1780 */;
	const struct pci_device_id *cocci_id/* drivers/message/fusion/mptbase.c 1772 */;
	struct pci_dev *cocci_id/* drivers/message/fusion/mptbase.c 1772 */;
	int cocci_id/* drivers/message/fusion/mptbase.c 177 */(MPT_ADAPTER *ioc,
							       MpiFwHeader_t *pFwHeader,
							       int sleepFlag);
	int cocci_id/* drivers/message/fusion/mptbase.c 174 */(MPT_ADAPTER *ioc,
							       int sleepFlag);
	SYSIF_REGS __iomem *cocci_id/* drivers/message/fusion/mptbase.c 1738 */;
	int cocci_id/* drivers/message/fusion/mptbase.c 173 */(MPT_ADAPTER *ioc,
							       int portnum,
							       int sleepFlag);
	int cocci_id/* drivers/message/fusion/mptbase.c 172 */(MPT_ADAPTER *ioc,
							       int sleepFlag,
							       int reason);
	int cocci_id/* drivers/message/fusion/mptbase.c 171 */(MPT_ADAPTER *ioc,
							       int force,
							       int sleepFlag);
	void cocci_id/* drivers/message/fusion/mptbase.c 170 */(MPT_ADAPTER *ioc);
	const uint64_t cocci_id/* drivers/message/fusion/mptbase.c 1667 */;
	void cocci_id/* drivers/message/fusion/mptbase.c 166 */(MPT_ADAPTER *ioc,
								struct pci_dev *pdev);
	int cocci_id/* drivers/message/fusion/mptbase.c 165 */(MPT_ADAPTER *ioc,
							       u32 reason,
							       int sleepFlag);
	resource_size_t cocci_id/* drivers/message/fusion/mptbase.c 1646 */;
	u8 __iomem *cocci_id/* drivers/message/fusion/mptbase.c 1644 */;
	int cocci_id/* drivers/message/fusion/mptbase.c 162 */(MPT_ADAPTER *ioc,
							       int reqBytes,
							       u32 *req,
							       int replyBytes,
							       u16 *u16reply,
							       int maxwait,
							       int sleepFlag);
	int cocci_id/* drivers/message/fusion/mptbase.c 160 */(MPT_ADAPTER *ioc,
							       MPT_FRAME_HDR *req,
							       MPT_FRAME_HDR *reply);
	irqreturn_t cocci_id/* drivers/message/fusion/mptbase.c 159 */(int irq,
								       void *bus_id);
	struct mpt_pci_driver *cocci_id/* drivers/message/fusion/mptbase.c 143 */[MPT_MAX_PROTOCOL_DRIVERS];
	MPT_RESETHANDLER cocci_id/* drivers/message/fusion/mptbase.c 142 */[MPT_MAX_PROTOCOL_DRIVERS];
	const char *cocci_id/* drivers/message/fusion/mptbase.c 1406 */;
	MPT_EVHANDLER cocci_id/* drivers/message/fusion/mptbase.c 140 */[MPT_MAX_PROTOCOL_DRIVERS];
	MPT_ADAPTER **cocci_id/* drivers/message/fusion/mptbase.c 1381 */;
	int cocci_id/* drivers/message/fusion/mptbase.c 138 */[MPT_MAX_PROTOCOL_DRIVERS];
	MPT_CALLBACK cocci_id/* drivers/message/fusion/mptbase.c 136 */[MPT_MAX_PROTOCOL_DRIVERS];
	pIOCInit_t cocci_id/* drivers/message/fusion/mptbase.c 1312 */;
	SGEChain64_t *cocci_id/* drivers/message/fusion/mptbase.c 1152 */;
	char cocci_id/* drivers/message/fusion/mptbase.c 114 */[MPT_MAX_PROTOCOL_DRIVERS][MPT_MAX_CALLBACKNAME_LEN + 1];
	SGEChain32_t *cocci_id/* drivers/message/fusion/mptbase.c 1132 */;
	unsigned long long cocci_id/* drivers/message/fusion/mptbase.c 1111 */;
	SGESimple64_t *cocci_id/* drivers/message/fusion/mptbase.c 1073 */;
	SGESimple32_t *cocci_id/* drivers/message/fusion/mptbase.c 1056 */;
	int cocci_id/* drivers/message/fusion/mptbase.c 102 */(const char *val,
							       const struct kernel_param *kp);
}
