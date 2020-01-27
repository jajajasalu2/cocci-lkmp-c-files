cocci_test_suite() {
	struct hv_host_device *cocci_id/* drivers/scsi/storvsc_drv.c 929 */;
	void (*cocci_id/* drivers/scsi/storvsc_drv.c 928 */)(struct work_struct *work);
	u8 cocci_id/* drivers/scsi/storvsc_drv.c 925 */;
	struct hv_fc_wwn_packet {
		u8 primary_active;
		u8 reserved1[3];
		u8 primary_port_wwn[8];
		u8 primary_node_wwn[8];
		u8 secondary_port_wwn[8];
		u8 secondary_node_wwn[8];
	} cocci_id/* drivers/scsi/storvsc_drv.c 84 */;
	struct vstor_packet *cocci_id/* drivers/scsi/storvsc_drv.c 731 */;
	struct storvsc_device *cocci_id/* drivers/scsi/storvsc_drv.c 730 */;
	void cocci_id/* drivers/scsi/storvsc_drv.c 730 */;
	unsigned long cocci_id/* drivers/scsi/storvsc_drv.c 701 */;
	struct vstor_packet cocci_id/* drivers/scsi/storvsc_drv.c 699 */;
	struct storvsc_cmd_request cocci_id/* drivers/scsi/storvsc_drv.c 692 */;
	struct storvsc_cmd_request *cocci_id/* drivers/scsi/storvsc_drv.c 661 */;
	struct device *cocci_id/* drivers/scsi/storvsc_drv.c 658 */;
	void *cocci_id/* drivers/scsi/storvsc_drv.c 641 */;
	enum vstor_packet_operation{VSTOR_OPERATION_COMPLETE_IO=1, VSTOR_OPERATION_REMOVE_DEVICE=2, VSTOR_OPERATION_EXECUTE_SRB=3, VSTOR_OPERATION_RESET_LUN=4, VSTOR_OPERATION_RESET_ADAPTER=5, VSTOR_OPERATION_RESET_BUS=6, VSTOR_OPERATION_BEGIN_INITIALIZATION=7, VSTOR_OPERATION_END_INITIALIZATION=8, VSTOR_OPERATION_QUERY_PROTOCOL_VERSION=9, VSTOR_OPERATION_QUERY_PROPERTIES=10, VSTOR_OPERATION_ENUMERATE_BUS=11, VSTOR_OPERATION_FCHBA_DATA=12, VSTOR_OPERATION_CREATE_SUB_CHANNELS=13, VSTOR_OPERATION_MAXIMUM=13,} cocci_id/* drivers/scsi/storvsc_drv.c 63 */;
	struct vmstorage_channel_properties cocci_id/* drivers/scsi/storvsc_drv.c 629 */;
	struct hv_device *cocci_id/* drivers/scsi/storvsc_drv.c 601 */;
	struct hv_host_device cocci_id/* drivers/scsi/storvsc_drv.c 517 */;
	struct storvsc_scan_work cocci_id/* drivers/scsi/storvsc_drv.c 500 */;
	struct storvsc_scan_work *cocci_id/* drivers/scsi/storvsc_drv.c 497 */;
	struct work_struct *cocci_id/* drivers/scsi/storvsc_drv.c 495 */;
	struct storvsc_scan_work {
		struct work_struct work;
		struct Scsi_Host *host;
		u8 lun;
		u8 tgt_id;
	} cocci_id/* drivers/scsi/storvsc_drv.c 488 */;
	struct hv_host_device {
		struct hv_device *dev;
		unsigned int port;
		unsigned char path;
		unsigned char target;
		struct workqueue_struct *handle_error_wq;
		struct work_struct host_scan_work;
		struct Scsi_Host *host;
	} cocci_id/* drivers/scsi/storvsc_drv.c 478 */;
	struct storvsc_cmd_request {
		struct scsi_cmnd *cmd;
		struct hv_device *device;
		struct completion wait_event;
		struct vmbus_channel_packet_multipage_buffer mpb;
		struct vmbus_packet_mpb_array *payload;
		u32 payload_sz;
		struct vstor_packet vstor_packet;
	} cocci_id/* drivers/scsi/storvsc_drv.c 416 */;
	void cocci_id/* drivers/scsi/storvsc_drv.c 402 */(void *context);
	struct scsi_transport_template *cocci_id/* drivers/scsi/storvsc_drv.c 399 */;
	int cocci_id/* drivers/scsi/storvsc_drv.c 378 */(struct scsi_device *sdev,
							 int queue_depth);
	u32 cocci_id/* drivers/scsi/storvsc_drv.c 377 */;
	enum storvsc_request_type{WRITE_TYPE=0, READ_TYPE, UNKNOWN_TYPE,} cocci_id/* drivers/scsi/storvsc_drv.c 352 */;
	struct vstor_packet {
		enum vstor_packet_operation operation;
		u32 flags;
		u32 status;
		union {
			struct vmscsi_request vm_srb;
			struct vmstorage_channel_properties storage_channel_properties;
			struct vmstorage_protocol_version version;
			struct hv_fc_wwn_packet wwn_packet;
			u16 sub_channel_count;
			u8 buffer[0x34];
		};
	}__packed cocci_id/* drivers/scsi/storvsc_drv.c 307 */;
	struct vmstorage_protocol_version {
		u16 major_minor;
		u16 revision;
	}__packed cocci_id/* drivers/scsi/storvsc_drv.c 289 */;
	struct vmstorage_channel_properties {
		u32 reserved;
		u16 max_channel_cnt;
		u16 reserved1;
		u32 flags;
		u32 max_transfer_bytes;
		u64 reserved2;
	}__packed cocci_id/* drivers/scsi/storvsc_drv.c 277 */;
	const struct vmstor_protocol cocci_id/* drivers/scsi/storvsc_drv.c 241 */[];
	struct vmstor_protocol {
		int protocol_version;
		int sense_buffer_size;
		int vmscsi_size_delta;
	} cocci_id/* drivers/scsi/storvsc_drv.c 234 */;
	struct vmscsi_win8_extension cocci_id/* drivers/scsi/storvsc_drv.c 229 */;
	void __exit cocci_id/* drivers/scsi/storvsc_drv.c 2028 */;
	u64 cocci_id/* drivers/scsi/storvsc_drv.c 2008 */;
	int __init cocci_id/* drivers/scsi/storvsc_drv.c 1995 */;
	struct fc_function_template cocci_id/* drivers/scsi/storvsc_drv.c 1989 */;
	struct hv_driver cocci_id/* drivers/scsi/storvsc_drv.c 1976 */;
	struct scsi_device *cocci_id/* drivers/scsi/storvsc_drv.c 1916 */;
	struct vmscsi_request {
		u16 length;
		u8 srb_status;
		u8 scsi_status;
		u8 port_number;
		u8 path_id;
		u8 target_id;
		u8 lun;
		u8 cdb_length;
		u8 sense_info_length;
		u8 data_in;
		u8 reserved;
		u32 data_transfer_length;
		union {
			u8 cdb[STORVSC_MAX_CMD_LEN];
			u8 sense_data[STORVSC_SENSE_BUFFER_SIZE];
			u8 reserved_array[STORVSC_MAX_BUF_LEN_WITH_PADDING];
		};
		struct vmscsi_win8_extension win8_extension;
	}__attribute((packed)) cocci_id/* drivers/scsi/storvsc_drv.c 190 */;
	struct fc_rport_identifiers cocci_id/* drivers/scsi/storvsc_drv.c 1875 */;
	struct storvsc_device cocci_id/* drivers/scsi/storvsc_drv.c 1794 */;
	struct vmscsi_win8_extension {
		u16 reserve;
		u8 queue_tag;
		u8 queue_action;
		u32 srb_flags;
		u32 time_out_value;
		u32 queue_sort_ey;
	}__packed cocci_id/* drivers/scsi/storvsc_drv.c 178 */;
	const struct hv_vmbus_device_id *cocci_id/* drivers/scsi/storvsc_drv.c 1738 */;
	const struct {
		guid_t guid;
	} cocci_id/* drivers/scsi/storvsc_drv.c 1730 */;
	const struct hv_vmbus_device_id cocci_id/* drivers/scsi/storvsc_drv.c 1711 */[];
	enum{SCSI_GUID, IDE_GUID, SFC_GUID,} cocci_id/* drivers/scsi/storvsc_drv.c 1705 */;
	struct scsi_host_template cocci_id/* drivers/scsi/storvsc_drv.c 1683 */;
	bool cocci_id/* drivers/scsi/storvsc_drv.c 167 */;
	int cocci_id/* drivers/scsi/storvsc_drv.c 167 */;
	struct vmbus_packet_mpb_array cocci_id/* drivers/scsi/storvsc_drv.c 1649 */;
	struct vmbus_packet_mpb_array *cocci_id/* drivers/scsi/storvsc_drv.c 1569 */;
	unsigned int cocci_id/* drivers/scsi/storvsc_drv.c 1566 */;
	struct scatterlist *cocci_id/* drivers/scsi/storvsc_drv.c 1565 */;
	enum blk_eh_timer_return cocci_id/* drivers/scsi/storvsc_drv.c 1527 */;
	sector_t cocci_id/* drivers/scsi/storvsc_drv.c 1449 */;
	int *cocci_id/* drivers/scsi/storvsc_drv.c 1449 */;
	struct block_device *cocci_id/* drivers/scsi/storvsc_drv.c 1448 */;
	struct vmscsi_request cocci_id/* drivers/scsi/storvsc_drv.c 1369 */;
	unsigned char cocci_id/* drivers/scsi/storvsc_drv.c 127 */;
	const struct cpumask *cocci_id/* drivers/scsi/storvsc_drv.c 1248 */;
	u16 cocci_id/* drivers/scsi/storvsc_drv.c 1244 */;
	struct vmbus_channel *cocci_id/* drivers/scsi/storvsc_drv.c 1243 */;
	const struct vmpacket_descriptor *cocci_id/* drivers/scsi/storvsc_drv.c 1153 */;
	struct vmbus_channel_packet_multipage_buffer cocci_id/* drivers/scsi/storvsc_drv.c 1047 */;
	struct Scsi_Host *cocci_id/* drivers/scsi/storvsc_drv.c 1008 */;
	struct vmscsi_request *cocci_id/* drivers/scsi/storvsc_drv.c 1006 */;
	struct scsi_sense_hdr cocci_id/* drivers/scsi/storvsc_drv.c 1005 */;
	struct scsi_cmnd *cocci_id/* drivers/scsi/storvsc_drv.c 1004 */;
	struct storvsc_device {
		struct hv_device *device;
		bool destroy;
		bool drain_notify;
		atomic_t num_outstanding_req;
		struct Scsi_Host *host;
		wait_queue_head_t waiting_to_drain;
		unsigned int port_number;
		unsigned char path_id;
		unsigned char target_id;
		u32 max_transfer_bytes;
		u16 num_sc;
		struct vmbus_channel **stor_chns;
		struct cpumask alloced_cpus;
		struct storvsc_cmd_request init_request;
		struct storvsc_cmd_request reset_request;
		u64 node_name;
		u64 port_name;
#if IS_ENABLED(CONFIG_SCSI_FC_ATTRS)
		struct fc_rport *rport;
#endif
	} cocci_id/*  1 */;
}
