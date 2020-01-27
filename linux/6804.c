cocci_test_suite() {
	struct rdac_pg_expanded {
		struct rdac_mode_10_hdr hdr;
		u8 page_code;
		u8 subpage_code;
		u8 page_len[2];
		struct rdac_mode_common common;
		u8 lun_table[256];
		u8 reserved3;
		u8 reserved4;
	} cocci_id/* drivers/scsi/device_handler/scsi_dh_rdac.c 94 */;
	void __exit cocci_id/* drivers/scsi/device_handler/scsi_dh_rdac.c 823 */;
	struct rdac_pg_legacy {
		struct rdac_mode_6_hdr hdr;
		u8 page_code;
		u8 page_len;
		struct rdac_mode_common common;
#define MODE6_MAX_LUN 32
		u8 lun_table[MODE6_MAX_LUN];
		u8 reserved2[32];
		u8 reserved3;
		u8 reserved4;
	} cocci_id/* drivers/scsi/device_handler/scsi_dh_rdac.c 82 */;
	int __init cocci_id/* drivers/scsi/device_handler/scsi_dh_rdac.c 799 */;
	struct scsi_device_handler cocci_id/* drivers/scsi/device_handler/scsi_dh_rdac.c 789 */;
	void cocci_id/* drivers/scsi/device_handler/scsi_dh_rdac.c 771 */;
	struct rdac_mode_common {
		u8 controller_serial[16];
		u8 alt_controller_serial[16];
		u8 rdac_mode[2];
		u8 alt_rdac_mode[2];
		u8 quiescence_timeout;
		u8 rdac_options;
	} cocci_id/* drivers/scsi/device_handler/scsi_dh_rdac.c 73 */;
	char cocci_id/* drivers/scsi/device_handler/scsi_dh_rdac.c 729 */[UNIQUE_ID_LEN];
	char cocci_id/* drivers/scsi/device_handler/scsi_dh_rdac.c 728 */[ARRAY_LABEL_LEN];
	struct rdac_mode_10_hdr {
		u16 data_len;
		u8 medium_type;
		u8 device_params;
		u16 reserved;
		u16 block_desc_len;
	} cocci_id/* drivers/scsi/device_handler/scsi_dh_rdac.c 65 */;
	blk_status_t cocci_id/* drivers/scsi/device_handler/scsi_dh_rdac.c 647 */;
	struct request *cocci_id/* drivers/scsi/device_handler/scsi_dh_rdac.c 647 */;
	struct rdac_queue_data *cocci_id/* drivers/scsi/device_handler/scsi_dh_rdac.c 588 */;
	activate_complete cocci_id/* drivers/scsi/device_handler/scsi_dh_rdac.c 586 */;
	void *cocci_id/* drivers/scsi/device_handler/scsi_dh_rdac.c 586 */;
	struct rdac_mode_6_hdr {
		u8 data_len;
		u8 medium_type;
		u8 device_params;
		u8 block_desc_len;
	} cocci_id/* drivers/scsi/device_handler/scsi_dh_rdac.c 58 */;
	u64 cocci_id/* drivers/scsi/device_handler/scsi_dh_rdac.c 539 */;
	struct scsi_sense_hdr cocci_id/* drivers/scsi/device_handler/scsi_dh_rdac.c 537 */;
	unsigned char cocci_id/* drivers/scsi/device_handler/scsi_dh_rdac.c 536 */[MAX_COMMAND_SIZE];
	struct work_struct *cocci_id/* drivers/scsi/device_handler/scsi_dh_rdac.c 527 */;
	struct scsi_sense_hdr *cocci_id/* drivers/scsi/device_handler/scsi_dh_rdac.c 486 */;
	struct c2_inquiry cocci_id/* drivers/scsi/device_handler/scsi_dh_rdac.c 471 */;
	struct c2_inquiry *cocci_id/* drivers/scsi/device_handler/scsi_dh_rdac.c 468 */;
	struct c4_inquiry cocci_id/* drivers/scsi/device_handler/scsi_dh_rdac.c 444 */;
	struct c4_inquiry *cocci_id/* drivers/scsi/device_handler/scsi_dh_rdac.c 441 */;
	struct c9_inquiry cocci_id/* drivers/scsi/device_handler/scsi_dh_rdac.c 396 */;
	unsigned char *cocci_id/* drivers/scsi/device_handler/scsi_dh_rdac.c 395 */;
	struct c9_inquiry *cocci_id/* drivers/scsi/device_handler/scsi_dh_rdac.c 392 */;
	struct scsi_device *cocci_id/* drivers/scsi/device_handler/scsi_dh_rdac.c 388 */;
	struct rdac_dh_data *cocci_id/* drivers/scsi/device_handler/scsi_dh_rdac.c 388 */;
	int cocci_id/* drivers/scsi/device_handler/scsi_dh_rdac.c 388 */;
	struct c8_inquiry cocci_id/* drivers/scsi/device_handler/scsi_dh_rdac.c 369 */;
	struct c8_inquiry *cocci_id/* drivers/scsi/device_handler/scsi_dh_rdac.c 366 */;
	u8 *cocci_id/* drivers/scsi/device_handler/scsi_dh_rdac.c 327 */;
	struct rdac_controller *cocci_id/* drivers/scsi/device_handler/scsi_dh_rdac.c 326 */;
	char *cocci_id/* drivers/scsi/device_handler/scsi_dh_rdac.c 326 */;
	struct rdac_controller cocci_id/* drivers/scsi/device_handler/scsi_dh_rdac.c 320 */;
	struct kref *cocci_id/* drivers/scsi/device_handler/scsi_dh_rdac.c 317 */;
	struct rdac_pg_legacy cocci_id/* drivers/scsi/device_handler/scsi_dh_rdac.c 288 */;
	struct rdac_pg_legacy *cocci_id/* drivers/scsi/device_handler/scsi_dh_rdac.c 286 */;
	struct rdac_pg_expanded cocci_id/* drivers/scsi/device_handler/scsi_dh_rdac.c 276 */;
	struct rdac_pg_expanded *cocci_id/* drivers/scsi/device_handler/scsi_dh_rdac.c 274 */;
	unsigned cocci_id/* drivers/scsi/device_handler/scsi_dh_rdac.c 269 */;
	struct rdac_mode_common *cocci_id/* drivers/scsi/device_handler/scsi_dh_rdac.c 268 */;
	struct list_head *cocci_id/* drivers/scsi/device_handler/scsi_dh_rdac.c 265 */;
	unsigned int cocci_id/* drivers/scsi/device_handler/scsi_dh_rdac.c 264 */;
	void cocci_id/* drivers/scsi/device_handler/scsi_dh_rdac.c 237 */(struct work_struct *work);
	struct workqueue_struct *cocci_id/* drivers/scsi/device_handler/scsi_dh_rdac.c 236 */;
	struct rdac_queue_data {
		struct list_head entry;
		struct rdac_dh_data *h;
		activate_complete callback_fn;
		void *callback_data;
	} cocci_id/* drivers/scsi/device_handler/scsi_dh_rdac.c 227 */;
	const char *cocci_id/* drivers/scsi/device_handler/scsi_dh_rdac.c 221 */[];
	struct rdac_dh_data {
		struct list_head node;
		struct rdac_controller *ctlr;
		struct scsi_device *sdev;
#define UNINITIALIZED_LUN (1 << 8)
			unsigned lun;
#define RDAC_MODE 0
#define RDAC_MODE_AVT 1
#define RDAC_MODE_IOSHIP 2
		unsigned char mode;
#define RDAC_STATE_ACTIVE 0
#define RDAC_STATE_PASSIVE 1
		unsigned char state;
#define RDAC_LUN_UNOWNED 0
#define RDAC_LUN_OWNED 1
		char lun_state;
#define RDAC_PREFERRED 0
#define RDAC_NON_PREFERRED 1
		char preferred;
		union {
			struct c2_inquiry c2;
			struct c4_inquiry c4;
			struct c8_inquiry c8;
			struct c9_inquiry c9;
		} inq;
	} cocci_id/* drivers/scsi/device_handler/scsi_dh_rdac.c 184 */;
	struct c2_inquiry {
		u8 peripheral_info;
		u8 page_code;
		u8 reserved1;
		u8 page_len;
		u8 page_id[4];
		u8 sw_version[3];
		u8 sw_date[3];
		u8 features_enabled;
		u8 max_lun_supported;
		u8 partitions[239];
	} cocci_id/* drivers/scsi/device_handler/scsi_dh_rdac.c 171 */;
	struct rdac_controller {
		u8 array_id[UNIQUE_ID_LEN];
		int use_ms10;
		struct kref kref;
		struct list_head node;
		union {
			struct rdac_pg_legacy legacy;
			struct rdac_pg_expanded expanded;
		} mode_select;
		u8 index;
		u8 array_name[ARRAY_LABEL_LEN];
		struct Scsi_Host *host;
		spinlock_t ms_lock;
		int ms_queued;
		struct work_struct ms_work;
		struct scsi_device *ms_sdev;
		struct list_head ms_head;
		struct list_head dh_list;
	} cocci_id/* drivers/scsi/device_handler/scsi_dh_rdac.c 151 */;
	struct c8_inquiry {
		u8 peripheral_info;
		u8 page_code;
		u8 reserved1;
		u8 page_len;
		u8 page_id[4];
		u8 reserved2[3];
		u8 vol_uniq_id_len;
		u8 vol_uniq_id[16];
		u8 vol_user_label_len;
		u8 vol_user_label[60];
		u8 array_uniq_id_len;
		u8 array_unique_id[UNIQUE_ID_LEN];
		u8 array_user_label_len;
		u8 array_user_label[60];
		u8 lun[8];
	} cocci_id/* drivers/scsi/device_handler/scsi_dh_rdac.c 133 */;
	struct c4_inquiry {
		u8 peripheral_info;
		u8 page_code;
		u8 reserved1;
		u8 page_len;
		u8 page_id[4];
		u8 subsys_id[SUBSYS_ID_LEN];
		u8 revision[4];
		u8 slot_id[SLOT_ID_LEN];
		u8 reserved[2];
	} cocci_id/* drivers/scsi/device_handler/scsi_dh_rdac.c 120 */;
	struct c9_inquiry {
		u8 peripheral_info;
		u8 page_code;
		u8 reserved1;
		u8 page_len;
		u8 page_id[4];
		u8 avte_cvp;
		u8 path_prio;
		u8 reserved2[38];
	} cocci_id/* drivers/scsi/device_handler/scsi_dh_rdac.c 105 */;
}
