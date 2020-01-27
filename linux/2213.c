cocci_test_suite() {
	int *cocci_id/* drivers/target/target_core_transport.c 941 */;
	struct t10_alua_lu_gp_member cocci_id/* drivers/target/target_core_transport.c 93 */;
	struct se_device cocci_id/* drivers/target/target_core_transport.c 893 */;
	void cocci_id/* drivers/target/target_core_transport.c 889 */(struct se_cmd *cmd);
	struct se_device *cocci_id/* drivers/target/target_core_transport.c 874 */;
	struct t10_alua_lu_gp cocci_id/* drivers/target/target_core_transport.c 85 */;
	u8 cocci_id/* drivers/target/target_core_transport.c 817 */;
	struct se_cmd cocci_id/* drivers/target/target_core_transport.c 791 */;
	struct work_struct *cocci_id/* drivers/target/target_core_transport.c 789 */;
	struct t10_pr_registration cocci_id/* drivers/target/target_core_transport.c 77 */;
	struct se_ua cocci_id/* drivers/target/target_core_transport.c 70 */;
	struct se_session cocci_id/* drivers/target/target_core_transport.c 62 */;
	int cocci_id/* drivers/target/target_core_transport.c 59 */;
	void cocci_id/* drivers/target/target_core_transport.c 57 */(struct work_struct *work);
	void cocci_id/* drivers/target/target_core_transport.c 55 */(struct se_cmd *cmd,
								     struct se_device *dev,
								     int err,
								     bool write_pending);
	void cocci_id/* drivers/target/target_core_transport.c 54 */(struct se_cmd *cmd,
								     sense_reason_t reason);
	struct se_node_acl cocci_id/* drivers/target/target_core_transport.c 488 */;
	struct kref *cocci_id/* drivers/target/target_core_transport.c 485 */;
	ssize_t cocci_id/* drivers/target/target_core_transport.c 461 */;
	struct kmem_cache *cocci_id/* drivers/target/target_core_transport.c 44 */;
	struct workqueue_struct *cocci_id/* drivers/target/target_core_transport.c 43 */;
	int (*cocci_id/* drivers/target/target_core_transport.c 421 */)(struct se_portal_group *,
									struct se_session *,
									void *);
	enum target_prot_op cocci_id/* drivers/target/target_core_transport.c 419 */;
	unsigned long cocci_id/* drivers/target/target_core_transport.c 347 */;
	unsigned char cocci_id/* drivers/target/target_core_transport.c 346 */[PR_REG_ISID_LEN];
	const struct target_core_fabric_ops *cocci_id/* drivers/target/target_core_transport.c 345 */;
	void *cocci_id/* drivers/target/target_core_transport.c 343 */;
	struct se_session *cocci_id/* drivers/target/target_core_transport.c 342 */;
	struct se_node_acl *cocci_id/* drivers/target/target_core_transport.c 341 */;
	struct se_portal_group *cocci_id/* drivers/target/target_core_transport.c 340 */;
	u8 *cocci_id/* drivers/target/target_core_transport.c 3203 */;
	const struct sense_info *cocci_id/* drivers/target/target_core_transport.c 3202 */;
	const struct sense_info cocci_id/* drivers/target/target_core_transport.c 3042 */[];
	struct sense_info {
		u8 key;
		u8 asc;
		u8 ascq;
		bool add_sector_info;
	} cocci_id/* drivers/target/target_core_transport.c 3035 */;
	bool *cocci_id/* drivers/target/target_core_transport.c 2968 */;
	unsigned long *cocci_id/* drivers/target/target_core_transport.c 2968 */;
	struct se_lun *cocci_id/* drivers/target/target_core_transport.c 2960 */;
	struct se_tmr_req *cocci_id/* drivers/target/target_core_transport.c 2898 */;
	const u8 *cocci_id/* drivers/target/target_core_transport.c 2897 */;
	enum tcm_tmreq_table cocci_id/* drivers/target/target_core_transport.c 2879 */;
	char *cocci_id/* drivers/target/target_core_transport.c 2848 */;
	char **cocci_id/* drivers/target/target_core_transport.c 2846 */;
	enum transport_state_table cocci_id/* drivers/target/target_core_transport.c 2828 */;
	const char *cocci_id/* drivers/target/target_core_transport.c 2828 */;
	enum dma_data_direction cocci_id/* drivers/target/target_core_transport.c 2816 */;
	struct completion *cocci_id/* drivers/target/target_core_transport.c 2780 */;
	bool cocci_id/* drivers/target/target_core_transport.c 2646 */(struct se_cmd *,
								       bool,
								       bool *,
								       bool *,
								       unsigned long *flags);
	gfp_t cocci_id/* drivers/target/target_core_transport.c 2507 */;
	struct scatterlist **cocci_id/* drivers/target/target_core_transport.c 2504 */;
	unsigned int *cocci_id/* drivers/target/target_core_transport.c 2504 */;
	struct page **cocci_id/* drivers/target/target_core_transport.c 2455 */;
	struct scatterlist *cocci_id/* drivers/target/target_core_transport.c 2397 */;
	typeof(*sess) cocci_id/* drivers/target/target_core_transport.c 216 */;
	struct percpu_ref *cocci_id/* drivers/target/target_core_transport.c 214 */;
	sense_reason_t cocci_id/* drivers/target/target_core_transport.c 1916 */;
	bool cocci_id/* drivers/target/target_core_transport.c 1914 */;
	struct se_cmd *cocci_id/* drivers/target/target_core_transport.c 1914 */;
	void cocci_id/* drivers/target/target_core_transport.c 1914 */;
	unsigned char cocci_id/* drivers/target/target_core_transport.c 1756 */;
	u32 cocci_id/* drivers/target/target_core_transport.c 174 */;
	scsi_index_t cocci_id/* drivers/target/target_core_transport.c 174 */;
	u64 *cocci_id/* drivers/target/target_core_transport.c 1715 */;
	u64 cocci_id/* drivers/target/target_core_transport.c 1714 */;
	u32 cocci_id/* drivers/target/target_core_transport.c 169 */[SCSI_INDEX_TYPE_MAX];
	unsigned char *cocci_id/* drivers/target/target_core_transport.c 1395 */;
	unsigned int cocci_id/* drivers/target/target_core_transport.c 1214 */;
	struct t10_alua_lba_map_member cocci_id/* drivers/target/target_core_transport.c 119 */;
	const char cocci_id/* drivers/target/target_core_transport.c 1178 */[];
	struct t10_alua_lba_map cocci_id/* drivers/target/target_core_transport.c 110 */;
	unsigned char cocci_id/* drivers/target/target_core_transport.c 1030 */[VPD_TMP_BUF_SIZE];
	struct t10_vpd *cocci_id/* drivers/target/target_core_transport.c 1026 */;
	struct t10_alua_tg_pt_gp cocci_id/* drivers/target/target_core_transport.c 101 */;
}
