cocci_test_suite() {
	struct report_lun_header cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 999 */;
	struct report_log_lun_extended *cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 997 */;
	struct report_log_lun_extended **cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 992 */;
	struct report_phys_lun_extended **cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 991 */;
	struct {
		enum pqi_lockup_action action;
		char *name;
	} cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 95 */[];
	enum pqi_lockup_action cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 93 */;
	struct report_lun_header *cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 922 */;
	struct bmic_identify_physical_device cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 8940 */;
	struct bmic_identify_controller cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 8927 */;
	struct pqi_task_management_response cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 8913 */;
	struct pqi_task_management_request cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 8891 */;
	struct pqi_event_response cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 8865 */;
	struct pqi_device_capability cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 8819 */;
	struct pqi_iu_layer_descriptor cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 8813 */;
	struct pqi_io_response cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 8785 */;
	enum pqi_lockup_action{NONE, REBOOT, PANIC,} cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 87 */;
	struct pqi_device_registers cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 8593 */;
	struct pqi_aio_error_info cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 8553 */;
	struct pqi_iu_header cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 8543 */;
	void __attribute__((unused)) cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 8524 */;
	void __exit cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 8515 */;
	atomic_t cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 85 */;
	int __init cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 8495 */;
	struct pci_driver cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 8483 */;
	struct tm cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 831 */;
	struct scsi_transport_template *cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 83 */;
	time64_t cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 829 */;
	struct bmic_host_wellness_time *cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 827 */;
	const struct pci_device_id cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 8125 */[];
	struct bmic_host_wellness_time {
		u8 start_tag[4];
		u8 time_tag[2];
		__le16 time_length;
		u8 time[8];
		u8 dont_write_tag[2];
		u8 end_tag[2];
	} cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 812 */;
	pm_message_t cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 8062 */;
	const struct pci_device_id *cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 7903 */;
	struct work_struct *cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 7866 */;
	struct pqi_raid_error_info cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 7823 */;
	struct pqi_ofa_memory cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 7787 */;
	struct bmic_host_wellness_driver_version *cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 778 */;
	int cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 77 */(struct pqi_ctrl_info *ctrl_info,
								   struct pqi_scsi_dev *device,
								   unsigned long timeout_secs);
	struct pqi_ofa_memory *cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 7636 */;
	struct bmic_host_wellness_driver_version {
		u8 start_tag[4];
		u8 driver_version_tag[2];
		__le16 driver_version_length;
		char driver_version[32];
		u8 dont_write_tag[2];
		u8 end_tag[2];
	} cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 763 */;
	struct pqi_ctrl_info cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 7512 */;
	struct pqi_ctrl_registers cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 7462 */;
	struct bmic_diag_options *cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 732 */;
	void cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 73 */(struct pqi_ctrl_info *ctrl_info,
								    u32 bytes_requested);
	struct pqi_raid_error_info *cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 721 */;
	struct bmic_csmi_smp_passthru_buffer *cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 720 */;
	int cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 72 */(struct pqi_ctrl_info *ctrl_info);
	struct pqi_config_table_soft_reset cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 7023 */;
	struct pqi_config_table_heartbeat cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 7016 */;
	void cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 70 */(struct pqi_ctrl_info *ctrl_info);
	struct pqi_config_table_section_info cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 6970 */;
	struct pqi_config_table_section_header *cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 6969 */;
	struct pqi_config_table *cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 6968 */;
	struct bmic_flush_cache *cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 696 */;
	enum bmic_flush_cache_shutdown_event cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 693 */;
	struct pqi_config_table_section_info *cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 6882 */;
	struct pqi_firmware_feature cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 6853 */[];
	struct pqi_firmware_feature *cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 6824 */;
	struct pqi_firmware_feature {
		char *feature_name;
		unsigned int feature_bit;
		bool supported;
		bool enabled;
		void (*feature_status)(struct pqi_ctrl_info *ctrl_info,
				       struct pqi_firmware_feature *firmware_feature);
	} cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 6795 */;
	struct pqi_config_table_firmware_features *cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 6775 */;
	struct pqi_vendor_general_request cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 6756 */;
	struct pqi_config_table_firmware_features cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 6733 */;
	u8 __iomem *cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 6727 */;
	enum dma_data_direction cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 670 */;
	struct pqi_config_table_section_info {
		struct pqi_ctrl_info *ctrl_info;
		void *section;
		u32 section_offset;
		void __iomem *section_iomem_addr;
	} cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 6699 */;
	struct bmic_identify_controller *cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 6667 */;
	struct bmic_sense_subsystem_info *cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 6644 */;
	union pqi_reset_register cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 6615 */;
	int cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 66 */(struct pqi_ctrl_info *ctrl_info,
								   struct scsi_cmnd *scmd,
								   u32 aio_handle,
								   u8 *cdb,
								   unsigned int cdb_length,
								   struct pqi_queue_group *queue_group,
								   struct pqi_encryption_info *encryption_info,
								   bool raid_bypass);
	struct scsi_host_template cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 6493 */;
	struct device_attribute *cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 6483 */[];
	u8 cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 6327 */[2];
	int cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 63 */(struct pqi_ctrl_info *ctrl_info,
								   struct pqi_iu_header *request,
								   unsigned int flags,
								   struct pqi_raid_error_info *error_info,
								   unsigned long timeout_msecs);
	u8 cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 6291 */[8];
	char cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 6211 */[32];
	DRIVER_VERSION cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 6137 */;
	struct device_attribute *cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 6134 */;
	void cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 60 */(struct pqi_ctrl_info *ctrl_info,
								    struct pqi_queue_group *queue_group,
								    enum pqi_io_path path,
								    struct pqi_io_request *io_request);
	struct ciss_error_info cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 5955 */;
	IOCTL_Command_struct cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 5952 */;
	void cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 59 */(struct Scsi_Host *shost);
	struct ciss_error_info *cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 5884 */;
	struct ciss_error_info {
		u8 scsi_status;
		int command_status;
		size_t sense_data_length;
	} cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 5877 */;
	void __user *cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 5861 */;
	cciss_pci_info_struct cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 5840 */;
	struct pci_dev *cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 5837 */;
	u16 cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 581 */;
	struct sas_rphy *cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 5787 */;
	struct scsi_target *cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 5786 */;
	struct Scsi_Host *cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 5747 */;
	unsigned long cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 5702 */;
	unsigned int cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 5701 */;
	struct pqi_scsi_dev *cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 5698 */;
	struct pqi_ctrl_info *cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 5697 */;
	int cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 5697 */;
	struct pqi_task_management_request *cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 5658 */;
	struct completion *cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 5622 */;
	void cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 56 */(struct work_struct *work);
	struct pqi_raid_path_request cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 5240 */;
	struct pqi_aio_path_request *cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 5231 */;
	struct pqi_encryption_info *cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 5227 */;
	struct pqi_queue_group *cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 5226 */;
	u32 cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 5225 */;
	u8 *cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 5225 */;
	struct scsi_cmnd *cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 5202 */;
	void *cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 5200 */;
	struct pqi_io_request cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 5147 */;
	bool cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 5075 */;
	struct pqi_io_request *cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 5075 */;
	u64 cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 4903 */;
	struct pqi_aio_path_request cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 4880 */;
	struct pqi_sg_descriptor *cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 4874 */;
	struct scatterlist *cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 4873 */;
	struct pqi_sg_descriptor cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 4725 */;
	enum dma_data_direction *cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 467 */;
	u8 cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 465 */;
	struct pqi_raid_path_request *cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 465 */;
	struct device *cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 4639 */;
	dma_addr_t cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 4638 */;
	struct pqi_general_management_request cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 4510 */;
	struct pqi_event_descriptor *cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 4509 */;
	struct pqi_event_config *cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 4508 */;
	struct pqi_event_descriptor cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 4501 */;
	struct pqi_event_config cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 4500 */;
	struct pqi_general_admin_response cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 4293 */;
	struct pqi_general_admin_request cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 4292 */;
	struct pqi_event_queue *cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 4291 */;
	struct pqi_iu_layer_descriptor *cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 4174 */;
	struct pqi_device_capability *cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 4173 */;
	struct pqi_iu_header *cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 3903 */;
	enum pqi_io_path cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 3891 */;
	struct pqi_general_admin_response *cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 3854 */;
	struct pqi_general_admin_request *cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 3827 */;
	void __iomem *cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 3765 */;
	pqi_index_t __iomem *cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 3749 */;
	struct pqi_admin_queues_aligned cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 3727 */;
	struct pqi_admin_queues *cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 3725 */;
	struct pqi_admin_queues_aligned *cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 3724 */;
	size_t cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 3723 */;
	pqi_index_t cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 3583 */;
	irqreturn_t cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 3450 */;
	enum pqi_irq_mode cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 3376 */;
	volatile void __iomem *cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 3361 */;
	struct pqi_device_registers __iomem *cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 3360 */;
	struct pqi_event_response *cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 3287 */;
	struct timer_list *cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 3219 */;
	enum pqi_soft_reset_status cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 3148 */;
	struct pqi_event_acknowledge_request cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 3065 */;
	struct pqi_event *cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 3063 */;
	void cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 3062 */;
	struct pqi_event_acknowledge_request *cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 3017 */;
	struct pqi_vendor_general_response *cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 2957 */;
	struct pqi_io_response *cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 2925 */;
	struct pqi_task_management_response *cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 2898 */;
	struct pqi_aio_error_info *cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 2799 */;
	struct scsi_sense_hdr cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 2702 */;
	struct pqi_encryption_info cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 2318 */;
	u8 cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 2314 */[16];
	enum pqi_ctrl_mode cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 231 */;
	struct pqi_scsi_dev cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 2172 */;
	struct report_log_lun_extended_entry *cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 1967 */;
	struct report_phys_lun_extended_entry *cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 1966 */;
	struct report_phys_lun_extended *cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 1964 */;
	struct scsi_device *cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 194 */;
	struct pqi_scsi_dev *cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 1756 */[];
	u32 *cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 1631 */;
	char cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 1611 */[PQI_DEV_INFO_BUFFER_LENGTH];
	ssize_t cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 1610 */;
	char *cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 1608 */;
	char *cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 160 */[];
	const char *cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 1597 */;
	struct pqi_scsi_dev **cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 1576 */;
	enum pqi_find_result cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 1574 */;
	enum pqi_find_result{DEVICE_NOT_FOUND, DEVICE_CHANGED, DEVICE_SAME,} cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 1568 */;
	char cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 1394 */[sizeof(unknown_state_str) + 10];
	const char cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 1392 */[];
	struct bmic_identify_physical_device *cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 1358 */;
	struct ciss_vpd_logical_volume_status cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 1287 */;
	struct ciss_vpd_logical_volume_status *cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 1273 */;
	struct raid_map *cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 1176 */;
	struct raid_map cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 1132 */;
	unsigned int cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 113 */[];
	struct report_log_lun_extended_entry cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 1040 */;
	struct report_log_lun_extended cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 1031 */;
	void **cocci_id/* drivers/scsi/smartpqi/smartpqi_init.c 1001 */;
}
