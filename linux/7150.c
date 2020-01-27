cocci_test_suite() {
	struct v2p_entry *cocci_id/* drivers/xen/xen-scsiback.c 983 */;
	void cocci_id/* drivers/xen/xen-scsiback.c 983 */;
	struct v2p_entry cocci_id/* drivers/xen/xen-scsiback.c 947 */;
	struct scsiback_tpg *cocci_id/* drivers/xen/xen-scsiback.c 901 */;
	struct se_lun *cocci_id/* drivers/xen/xen-scsiback.c 900 */;
	unsigned long long cocci_id/* drivers/xen/xen-scsiback.c 899 */;
	struct ids_tuple *cocci_id/* drivers/xen/xen-scsiback.c 893 */;
	char *cocci_id/* drivers/xen/xen-scsiback.c 893 */;
	struct list_head *cocci_id/* drivers/xen/xen-scsiback.c 877 */;
	struct vscsibk_info {
		struct xenbus_device *dev;
		domid_t domid;
		unsigned int irq;
		struct vscsiif_back_ring ring;
		int ring_error;
		spinlock_t ring_lock;
		atomic_t nr_unreplied_reqs;
		spinlock_t v2p_lock;
		struct list_head v2p_entry_lists;
		wait_queue_head_t waiting_to_free;
	} cocci_id/* drivers/xen/xen-scsiback.c 87 */;
	struct vscsiif_sring *cocci_id/* drivers/xen/xen-scsiback.c 819 */;
	evtchn_port_t cocci_id/* drivers/xen/xen-scsiback.c 816 */;
	grant_ref_t cocci_id/* drivers/xen/xen-scsiback.c 815 */;
	irqreturn_t cocci_id/* drivers/xen/xen-scsiback.c 802 */;
	struct v2p_entry {
		struct ids_tuple v;
		struct scsiback_tpg *tpg;
		unsigned int lun;
		struct kref kref;
		struct list_head l;
	} cocci_id/* drivers/xen/xen-scsiback.c 79 */;
	uint32_t cocci_id/* drivers/xen/xen-scsiback.c 732 */;
	RING_IDX cocci_id/* drivers/xen/xen-scsiback.c 730 */;
	struct vscsiif_request cocci_id/* drivers/xen/xen-scsiback.c 728 */;
	struct ids_tuple {
		unsigned int hst;
		unsigned int chn;
		unsigned int tgt;
		unsigned int lun;
	} cocci_id/* drivers/xen/xen-scsiback.c 72 */;
	struct ids_tuple cocci_id/* drivers/xen/xen-scsiback.c 682 */;
	struct vscsiif_request *cocci_id/* drivers/xen/xen-scsiback.c 678 */;
	struct vscsiif_back_ring *cocci_id/* drivers/xen/xen-scsiback.c 677 */;
	struct vscsibk_pend *cocci_id/* drivers/xen/xen-scsiback.c 676 */;
	struct vscsibk_info *cocci_id/* drivers/xen/xen-scsiback.c 676 */;
	u64 cocci_id/* drivers/xen/xen-scsiback.c 599 */;
	struct scsiback_nexus *cocci_id/* drivers/xen/xen-scsiback.c 597 */;
	enum tcm_tmreq_table cocci_id/* drivers/xen/xen-scsiback.c 594 */;
	struct scatterlist cocci_id/* drivers/xen/xen-scsiback.c 525 */;
	unsigned cocci_id/* drivers/xen/xen-scsiback.c 510 */;
	struct scsiif_request_segment cocci_id/* drivers/xen/xen-scsiback.c 509 */;
	grant_handle_t *cocci_id/* drivers/xen/xen-scsiback.c 483 */;
	struct scatterlist *cocci_id/* drivers/xen/xen-scsiback.c 482 */;
	struct scsiif_request_segment *cocci_id/* drivers/xen/xen-scsiback.c 478 */;
	u32 cocci_id/* drivers/xen/xen-scsiback.c 475 */;
	struct gnttab_map_grant_ref cocci_id/* drivers/xen/xen-scsiback.c 445 */[VSCSI_GRANT_BATCH];
	struct gnttab_map_grant_ref *cocci_id/* drivers/xen/xen-scsiback.c 417 */;
	unsigned int cocci_id/* drivers/xen/xen-scsiback.c 375 */;
	unsigned char *cocci_id/* drivers/xen/xen-scsiback.c 374 */;
	int32_t cocci_id/* drivers/xen/xen-scsiback.c 360 */;
	struct scsi_sense_hdr cocci_id/* drivers/xen/xen-scsiback.c 328 */;
	struct vscsiif_response *cocci_id/* drivers/xen/xen-scsiback.c 326 */;
	uint16_t cocci_id/* drivers/xen/xen-scsiback.c 324 */;
	struct kref *cocci_id/* drivers/xen/xen-scsiback.c 310 */;
	grant_handle_t cocci_id/* drivers/xen/xen-scsiback.c 274 */;
	struct page *cocci_id/* drivers/xen/xen-scsiback.c 272 */[VSCSI_GRANT_BATCH];
	struct gnttab_unmap_grant_ref cocci_id/* drivers/xen/xen-scsiback.c 271 */[VSCSI_GRANT_BATCH];
	struct page cocci_id/* drivers/xen/xen-scsiback.c 239 */;
	unsigned long cocci_id/* drivers/xen/xen-scsiback.c 232 */;
	struct page **cocci_id/* drivers/xen/xen-scsiback.c 230 */;
	int cocci_id/* drivers/xen/xen-scsiback.c 193 */;
	struct page *cocci_id/* drivers/xen/xen-scsiback.c 1878 */;
	void __exit cocci_id/* drivers/xen/xen-scsiback.c 1876 */;
	int __init cocci_id/* drivers/xen/xen-scsiback.c 1849 */;
	struct xenbus_driver cocci_id/* drivers/xen/xen-scsiback.c 1842 */;
	bool cocci_id/* drivers/xen/xen-scsiback.c 184 */;
	const struct xenbus_device_id cocci_id/* drivers/xen/xen-scsiback.c 1837 */[];
	const struct target_core_fabric_ops cocci_id/* drivers/xen/xen-scsiback.c 1801 */;
	unsigned char cocci_id/* drivers/xen/xen-scsiback.c 1620 */[VSCSI_NAMELEN];
	size_t cocci_id/* drivers/xen/xen-scsiback.c 1614 */;
	struct config_item *cocci_id/* drivers/xen/xen-scsiback.c 1592 */;
	ssize_t cocci_id/* drivers/xen/xen-scsiback.c 1592 */;
	struct scsiback_tpg {
		u16 tport_tpgt;
		int tv_tpg_port_count;
		int tv_tpg_fe_count;
		struct list_head tv_tpg_list;
		struct mutex tv_tpg_mutex;
		struct scsiback_nexus *tpg_nexus;
		struct scsiback_tport *tport;
		struct se_portal_group se_tpg;
		char param_alias[VSCSI_NAMELEN];
		struct list_head info_list;
	} cocci_id/* drivers/xen/xen-scsiback.c 159 */;
	struct vscsibk_pend cocci_id/* drivers/xen/xen-scsiback.c 1531 */;
	struct scsiback_nexus cocci_id/* drivers/xen/xen-scsiback.c 1523 */;
	struct scsiback_tpg cocci_id/* drivers/xen/xen-scsiback.c 1504 */;
	struct se_session *cocci_id/* drivers/xen/xen-scsiback.c 1501 */;
	void *cocci_id/* drivers/xen/xen-scsiback.c 1501 */;
	struct se_portal_group *cocci_id/* drivers/xen/xen-scsiback.c 1500 */;
	struct configfs_attribute *cocci_id/* drivers/xen/xen-scsiback.c 1495 */[];
	struct scsiback_tport {
		u8 tport_proto_id;
		u64 tport_wwpn;
		char tport_name[VSCSI_NAMELEN];
		struct se_wwn tport_wwn;
	} cocci_id/* drivers/xen/xen-scsiback.c 148 */;
	struct se_cmd *cocci_id/* drivers/xen/xen-scsiback.c 1451 */;
	struct scsiback_nexus {
		struct se_session *tvn_se_sess;
	} cocci_id/* drivers/xen/xen-scsiback.c 143 */;
	struct se_node_acl *cocci_id/* drivers/xen/xen-scsiback.c 1407 */;
	struct scsiback_tport cocci_id/* drivers/xen/xen-scsiback.c 1371 */;
	struct scsiback_tport *cocci_id/* drivers/xen/xen-scsiback.c 1370 */;
	struct se_wwn *cocci_id/* drivers/xen/xen-scsiback.c 1368 */;
	struct config_group *cocci_id/* drivers/xen/xen-scsiback.c 1315 */;
	struct target_fabric_configfs *cocci_id/* drivers/xen/xen-scsiback.c 1314 */;
	u16 cocci_id/* drivers/xen/xen-scsiback.c 1306 */;
	struct vscsibk_info cocci_id/* drivers/xen/xen-scsiback.c 1241 */;
	const struct xenbus_device_id *cocci_id/* drivers/xen/xen-scsiback.c 1237 */;
	enum xenbus_state cocci_id/* drivers/xen/xen-scsiback.c 1151 */;
	struct vscsibk_pend {
		uint16_t rqid;
		uint8_t cmnd[VSCSIIF_MAX_COMMAND_SIZE];
		uint8_t cmd_len;
		uint8_t sc_data_direction;
		uint16_t n_sg;
		uint16_t n_grants;
		uint32_t data_len;
		uint32_t result;
		struct vscsibk_info *info;
		struct v2p_entry *v2p;
		struct scatterlist *sgl;
		uint8_t sense_buffer[VSCSIIF_SENSE_BUFFERSIZE];
		grant_handle_t grant_handles[VSCSI_MAX_GRANTS];
		struct page *pages[VSCSI_MAX_GRANTS];
		struct se_cmd se_cmd;
		struct completion tmr_done;
	} cocci_id/* drivers/xen/xen-scsiback.c 115 */;
	char **cocci_id/* drivers/xen/xen-scsiback.c 1136 */;
	struct xenbus_device *cocci_id/* drivers/xen/xen-scsiback.c 1063 */;
	char cocci_id/* drivers/xen/xen-scsiback.c 1061 */[64];
	char cocci_id/* drivers/xen/xen-scsiback.c 1060 */[VSCSI_NAMELEN];
	const char *cocci_id/* drivers/xen/xen-scsiback.c 1011 */;
}