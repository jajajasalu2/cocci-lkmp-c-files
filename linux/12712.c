cocci_test_suite() {
	const u32 *cocci_id/* drivers/firewire/sbp2.c 997 */;
	struct sbp2_logical_unit *cocci_id/* drivers/firewire/sbp2.c 965 */;
	struct sbp2_target *cocci_id/* drivers/firewire/sbp2.c 963 */;
	struct sbp2_login_response cocci_id/* drivers/firewire/sbp2.c 803 */;
	struct scsi_device *cocci_id/* drivers/firewire/sbp2.c 802 */;
	struct sbp2_logical_unit cocci_id/* drivers/firewire/sbp2.c 798 */;
	struct work_struct *cocci_id/* drivers/firewire/sbp2.c 795 */;
	void cocci_id/* drivers/firewire/sbp2.c 793 */(struct work_struct *work);
	struct scsi_lun cocci_id/* drivers/firewire/sbp2.c 758 */;
	u16 cocci_id/* drivers/firewire/sbp2.c 756 */;
	bool cocci_id/* drivers/firewire/sbp2.c 725 */;
	struct Scsi_Host cocci_id/* drivers/firewire/sbp2.c 700 */;
	struct Scsi_Host *cocci_id/* drivers/firewire/sbp2.c 699 */;
	struct fw_transaction *cocci_id/* drivers/firewire/sbp2.c 665 */;
	void *cocci_id/* drivers/firewire/sbp2.c 657 */;
	int cocci_id/* drivers/firewire/sbp2.c 657 */;
	size_t cocci_id/* drivers/firewire/sbp2.c 657 */;
	struct fw_card *cocci_id/* drivers/firewire/sbp2.c 656 */;
	void cocci_id/* drivers/firewire/sbp2.c 656 */;
	__be32 cocci_id/* drivers/firewire/sbp2.c 648 */;
	struct sbp2_management_orb cocci_id/* drivers/firewire/sbp2.c 540 */;
	struct sbp2_management_orb *cocci_id/* drivers/firewire/sbp2.c 539 */;
	struct list_head cocci_id/* drivers/firewire/sbp2.c 515 */;
	struct sbp2_pointer cocci_id/* drivers/firewire/sbp2.c 492 */;
	unsigned long cocci_id/* drivers/firewire/sbp2.c 460 */;
	struct sbp2_status cocci_id/* drivers/firewire/sbp2.c 412 */;
	unsigned long long cocci_id/* drivers/firewire/sbp2.c 407 */;
	struct fw_request *cocci_id/* drivers/firewire/sbp2.c 405 */;
	struct sbp2_orb cocci_id/* drivers/firewire/sbp2.c 400 */;
	struct kref *cocci_id/* drivers/firewire/sbp2.c 398 */;
	const struct {
		u32 firmware_revision;
		u32 model;
		unsigned int workarounds;
	} cocci_id/* drivers/firewire/sbp2.c 329 */[];
	struct sbp2_command_orb {
		struct sbp2_orb base;
		struct {
			struct sbp2_pointer next;
			struct sbp2_pointer data_descriptor;
			__be32 misc;
			u8 command_block[SBP2_MAX_CDB_SIZE];
		} request;
		struct scsi_cmnd *cmd;
		struct sbp2_pointer page_table[SG_ALL]__attribute__((aligned(8)));
		dma_addr_t page_table_bus;
	} cocci_id/* drivers/firewire/sbp2.c 304 */;
	struct sbp2_login_response {
		__be32 misc;
		struct sbp2_pointer command_block_agent;
		__be32 reconnect_hold;
	} cocci_id/* drivers/firewire/sbp2.c 290 */;
	struct sbp2_management_orb {
		struct sbp2_orb base;
		struct {
			struct sbp2_pointer password;
			struct sbp2_pointer response;
			__be32 misc;
			__be32 length;
			struct sbp2_pointer status_fifo;
		} request;
		__be32 response[4];
		dma_addr_t response_bus;
		struct completion done;
		struct sbp2_status status;
	} cocci_id/* drivers/firewire/sbp2.c 275 */;
	struct sbp2_orb {
		struct fw_transaction t;
		struct kref kref;
		dma_addr_t request_bus;
		int rcode;
		void (*callback)(struct sbp2_orb *orb,
				 struct sbp2_status *status);
		struct sbp2_logical_unit *lu;
		struct list_head link;
	} cocci_id/* drivers/firewire/sbp2.c 255 */;
	struct sbp2_pointer {
		__be32 high;
		__be32 low;
	} cocci_id/* drivers/firewire/sbp2.c 250 */;
	struct sbp2_status {
		u32 status;
		u32 orb_low;
		u8 data[24];
	} cocci_id/* drivers/firewire/sbp2.c 244 */;
	const struct sbp2_logical_unit *cocci_id/* drivers/firewire/sbp2.c 179 */;
	const struct device *cocci_id/* drivers/firewire/sbp2.c 179 */;
	const struct sbp2_target *cocci_id/* drivers/firewire/sbp2.c 174 */;
	void __exit cocci_id/* drivers/firewire/sbp2.c 1614 */;
	int __init cocci_id/* drivers/firewire/sbp2.c 1609 */;
	struct device_attribute *cocci_id/* drivers/firewire/sbp2.c 1581 */[];
	struct device_attribute *cocci_id/* drivers/firewire/sbp2.c 1564 */;
	char *cocci_id/* drivers/firewire/sbp2.c 1564 */;
	struct device *cocci_id/* drivers/firewire/sbp2.c 1563 */;
	ssize_t cocci_id/* drivers/firewire/sbp2.c 1563 */;
	struct scsi_cmnd *cocci_id/* drivers/firewire/sbp2.c 1545 */;
	struct sbp2_target {
		struct fw_unit *unit;
		struct list_head lu_list;
		u64 management_agent_address;
		u64 guid;
		int directory_id;
		int node_id;
		int address_high;
		unsigned int workarounds;
		unsigned int mgt_orb_timeout;
		unsigned int max_payload;
		spinlock_t lock;
		int dont_block;
		int blocked;
	} cocci_id/* drivers/firewire/sbp2.c 151 */;
	struct scatterlist *cocci_id/* drivers/firewire/sbp2.c 1384 */;
	struct fw_device *cocci_id/* drivers/firewire/sbp2.c 1339 */;
	struct sbp2_command_orb cocci_id/* drivers/firewire/sbp2.c 1338 */;
	struct sbp2_command_orb *cocci_id/* drivers/firewire/sbp2.c 1337 */;
	struct sbp2_status *cocci_id/* drivers/firewire/sbp2.c 1335 */;
	struct sbp2_orb *cocci_id/* drivers/firewire/sbp2.c 1334 */;
	u8 *cocci_id/* drivers/firewire/sbp2.c 1288 */;
	struct fw_driver cocci_id/* drivers/firewire/sbp2.c 1266 */;
	const struct ieee1394_device_id cocci_id/* drivers/firewire/sbp2.c 1256 */[];
	struct sbp2_logical_unit {
		struct sbp2_target *tgt;
		struct list_head link;
		struct fw_address_handler address_handler;
		struct list_head orb_list;
		u64 command_block_agent_address;
		u16 lun;
		int login_id;
		int generation;
		int retries;
		work_func_t workfn;
		struct delayed_work work;
		bool has_sdev;
		bool blocked;
	} cocci_id/* drivers/firewire/sbp2.c 118 */;
	const struct ieee1394_device_id *cocci_id/* drivers/firewire/sbp2.c 1122 */;
	struct fw_unit *cocci_id/* drivers/firewire/sbp2.c 1122 */;
	void cocci_id/* drivers/firewire/sbp2.c 1120 */(struct fw_unit *unit);
	struct scsi_host_template cocci_id/* drivers/firewire/sbp2.c 1119 */;
	u32 cocci_id/* drivers/firewire/sbp2.c 1084 */;
	unsigned int cocci_id/* drivers/firewire/sbp2.c 1075 */;
	u32 *cocci_id/* drivers/firewire/sbp2.c 1018 */;
	struct fw_csr_iterator cocci_id/* drivers/firewire/sbp2.c 1006 */;
	u64 cocci_id/* drivers/firewire/sbp2.c 1000 */;
}
