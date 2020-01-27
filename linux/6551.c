cocci_test_suite() {
	void (*cocci_id/* drivers/scsi/dc395x.c 979 */)(struct scsi_cmnd *);
	struct scatterlist *cocci_id/* drivers/scsi/dc395x.c 914 */;
	enum dma_data_direction cocci_id/* drivers/scsi/dc395x.c 882 */;
	struct timer_list *cocci_id/* drivers/scsi/dc395x.c 837 */;
	typeof(*start) cocci_id/* drivers/scsi/dc395x.c 800 */;
	struct list_head *cocci_id/* drivers/scsi/dc395x.c 707 */;
	char cocci_id/* drivers/scsi/dc395x.c 623 */[];
	bool cocci_id/* drivers/scsi/dc395x.c 550 */;
	struct ParameterData cocci_id/* drivers/scsi/dc395x.c 494 */[];
	struct ParameterData {
		int value;
		int min;
		int max;
		int def;
		int safe;
	} cocci_id/* drivers/scsi/dc395x.c 487 */;
	void __exit cocci_id/* drivers/scsi/dc395x.c 4780 */;
	int __init cocci_id/* drivers/scsi/dc395x.c 4771 */;
	struct pci_driver cocci_id/* drivers/scsi/dc395x.c 4758 */;
	struct pci_device_id cocci_id/* drivers/scsi/dc395x.c 4746 */[];
	struct AdapterCtlBlk cocci_id/* drivers/scsi/dc395x.c 4689 */;
	const struct pci_device_id *cocci_id/* drivers/scsi/dc395x.c 4666 */;
	struct pci_dev *cocci_id/* drivers/scsi/dc395x.c 4666 */;
	struct scsi_host_template cocci_id/* drivers/scsi/dc395x.c 4619 */;
	u16 cocci_id/* drivers/scsi/dc395x.c 451 */[];
	struct seq_file *cocci_id/* drivers/scsi/dc395x.c 4509 */;
	u8 cocci_id/* drivers/scsi/dc395x.c 450 */[];
	u32 cocci_id/* drivers/scsi/dc395x.c 4396 */;
	unsigned int cocci_id/* drivers/scsi/dc395x.c 4396 */;
	unsigned long cocci_id/* drivers/scsi/dc395x.c 4395 */;
	struct NvRamType *cocci_id/* drivers/scsi/dc395x.c 4344 */;
	struct Scsi_Host *cocci_id/* drivers/scsi/dc395x.c 4306 */;
	struct SGentry *cocci_id/* drivers/scsi/dc395x.c 4162 */;
	unsigned cocci_id/* drivers/scsi/dc395x.c 4161 */;
	const unsigned cocci_id/* drivers/scsi/dc395x.c 4156 */;
	u32 *cocci_id/* drivers/scsi/dc395x.c 4062 */;
	void *cocci_id/* drivers/scsi/dc395x.c 406 */[];
	u16 cocci_id/* drivers/scsi/dc395x.c 4059 */;
	u16 *cocci_id/* drivers/scsi/dc395x.c 4058 */;
	void cocci_id/* drivers/scsi/dc395x.c 398 */(struct timer_list *t);
	void cocci_id/* drivers/scsi/dc395x.c 396 */(struct AdapterCtlBlk *acb,
						     struct DeviceCtlBlk *dcb);
	void cocci_id/* drivers/scsi/dc395x.c 394 */(struct AdapterCtlBlk *acb,
						     struct DeviceCtlBlk *dcb,
						     struct ScsiReqBlk *srb);
	void cocci_id/* drivers/scsi/dc395x.c 386 */(struct AdapterCtlBlk *acb,
						     u8 did_code,
						     struct scsi_cmnd *cmd,
						     u8 force);
	void cocci_id/* drivers/scsi/dc395x.c 384 */(struct scsi_cmnd *cmd,
						     struct DeviceCtlBlk *dcb,
						     struct ScsiReqBlk *srb);
	u8 cocci_id/* drivers/scsi/dc395x.c 380 */(struct AdapterCtlBlk *acb,
						   struct DeviceCtlBlk *dcb,
						   struct ScsiReqBlk *srb);
	struct scsi_device *cocci_id/* drivers/scsi/dc395x.c 3794 */;
	void cocci_id/* drivers/scsi/dc395x.c 378 */(struct AdapterCtlBlk *acb);
	void cocci_id/* drivers/scsi/dc395x.c 376 */(struct AdapterCtlBlk *acb,
						     struct ScsiReqBlk *srb,
						     u16 io_dir);
	void cocci_id/* drivers/scsi/dc395x.c 373 */(struct AdapterCtlBlk *acb,
						     struct ScsiReqBlk *srb);
	struct DeviceCtlBlk *cocci_id/* drivers/scsi/dc395x.c 3692 */;
	void cocci_id/* drivers/scsi/dc395x.c 3691 */;
	struct DeviceCtlBlk cocci_id/* drivers/scsi/dc395x.c 3629 */;
	void cocci_id/* drivers/scsi/dc395x.c 348 */(struct AdapterCtlBlk *acb,
						     struct ScsiReqBlk *srb,
						     u16 *pscsi_status);
	struct ScsiInqData cocci_id/* drivers/scsi/dc395x.c 3361 */;
	unsigned int *cocci_id/* drivers/scsi/dc395x.c 3270 */;
	struct ScsiInqData *cocci_id/* drivers/scsi/dc395x.c 3156 */;
	struct AdapterCtlBlk {
		struct Scsi_Host *scsi_host;
		unsigned long io_port_base;
		unsigned long io_port_len;
		struct list_head dcb_list;
		struct DeviceCtlBlk *dcb_run_robin;
		struct DeviceCtlBlk *active_dcb;
		struct list_head srb_free_list;
		struct ScsiReqBlk *tmp_srb;
		struct timer_list waiting_timer;
		struct timer_list selto_timer;
		unsigned long last_reset;
		u16 srb_count;
		u8 sel_timeout;
		unsigned int irq_level;
		u8 tag_max_num;
		u8 acb_flag;
		u8 gmode2;
		u8 config;
		u8 lun_chk;
		u8 scan_devices;
		u8 hostid_bit;
		u8 dcb_map[DC395x_MAX_SCSI_ID];
		struct DeviceCtlBlk *children[DC395x_MAX_SCSI_ID][32];
		struct pci_dev *dev;
		u8 msg_len;
		struct ScsiReqBlk srb_array[DC395x_MAX_SRB_CNT];
		struct ScsiReqBlk srb;
		struct NvRamType eeprom;
	} cocci_id/* drivers/scsi/dc395x.c 296 */;
	struct DeviceCtlBlk {
		struct list_head list;
		struct AdapterCtlBlk *acb;
		struct list_head srb_going_list;
		struct list_head srb_waiting_list;
		struct ScsiReqBlk *active_srb;
		u32 tag_mask;
		u16 max_command;
		u8 target_id;
		u8 target_lun;
		u8 identify_msg;
		u8 dev_mode;
		u8 inquiry7;
		u8 sync_mode;
		u8 min_nego_period;
		u8 sync_period;
		u8 sync_offset;
		u8 flag;
		u8 dev_type;
		u8 init_tcq_flag;
	} cocci_id/* drivers/scsi/dc395x.c 269 */;
	struct SGentry cocci_id/* drivers/scsi/dc395x.c 2340 */;
	struct ScsiReqBlk {
		struct list_head list;
		struct DeviceCtlBlk *dcb;
		struct scsi_cmnd *cmd;
		struct SGentry *segment_x;
		dma_addr_t sg_bus_addr;
		u8 sg_count;
		u8 sg_index;
		size_t total_xfer_length;
		size_t request_length;
		size_t xferred;
		u16 state;
		u8 msgin_buf[6];
		u8 msgout_buf[6];
		u8 adapter_status;
		u8 target_status;
		u8 msg_count;
		u8 end_message;
		u8 tag_number;
		u8 status;
		u8 retry_count;
		u8 flag;
		u8 scsi_phase;
	} cocci_id/* drivers/scsi/dc395x.c 228 */;
	unsigned char *cocci_id/* drivers/scsi/dc395x.c 2173 */;
	size_t cocci_id/* drivers/scsi/dc395x.c 2159 */;
	const int cocci_id/* drivers/scsi/dc395x.c 2041 */;
	long cocci_id/* drivers/scsi/dc395x.c 2039 */;
	struct NvRamType {
		u8 sub_vendor_id[2];
		u8 sub_sys_id[2];
		u8 sub_class;
		u8 vendor_id[2];
		u8 device_id[2];
		u8 reserved;
		struct NVRamTarget target[DC395x_MAX_SCSI_ID];
		u8 scsi_id;
		u8 channel_cfg;
		u8 delay_time;
		u8 max_tag;
		u8 reserved0;
		u8 boot_target;
		u8 boot_lun;
		u8 reserved1;
		u16 reserved2[22];
		u16 cksum;
	} cocci_id/* drivers/scsi/dc395x.c 202 */;
	struct NVRamTarget {
		u8 cfg0;
		u8 period;
		u8 cfg2;
		u8 cfg3;
	} cocci_id/* drivers/scsi/dc395x.c 195 */;
	struct SGentry {
		u32 address;
		u32 length;
	} cocci_id/* drivers/scsi/dc395x.c 189 */;
	irqreturn_t cocci_id/* drivers/scsi/dc395x.c 1700 */;
	void *cocci_id/* drivers/scsi/dc395x.c 1700 */;
	void (*cocci_id/* drivers/scsi/dc395x.c 1604 */)(struct AdapterCtlBlk *,
							 struct ScsiReqBlk *,
							 u16 *);
	u8 *cocci_id/* drivers/scsi/dc395x.c 1303 */;
	struct ScsiReqBlk *cocci_id/* drivers/scsi/dc395x.c 1301 */;
	u8 cocci_id/* drivers/scsi/dc395x.c 1202 */;
	struct AdapterCtlBlk *cocci_id/* drivers/scsi/dc395x.c 1198 */;
	struct scsi_cmnd *cocci_id/* drivers/scsi/dc395x.c 1196 */;
	int cocci_id/* drivers/scsi/dc395x.c 1196 */;
	char *cocci_id/* drivers/scsi/dc395x.c 1154 */;
	struct ScsiReqBlk cocci_id/* drivers/scsi/dc395x.c 1019 */;
}
