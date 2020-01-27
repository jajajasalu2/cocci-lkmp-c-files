cocci_test_suite() {
	u16 cocci_id/* drivers/target/target_core_pr.c 932 */;
	unsigned char cocci_id/* drivers/target/target_core_pr.c 931 */[PR_APTPL_MAX_TPORT_LEN];
	unsigned char cocci_id/* drivers/target/target_core_pr.c 930 */[PR_APTPL_MAX_IPORT_LEN];
	struct se_portal_group *cocci_id/* drivers/target/target_core_pr.c 922 */;
	void cocci_id/* drivers/target/target_core_pr.c 917 */(struct se_device *,
							       struct se_node_acl *,
							       struct t10_pr_registration *,
							       enum register_type,
							       int);
	u8 cocci_id/* drivers/target/target_core_pr.c 833 */;
	struct se_lun_acl *cocci_id/* drivers/target/target_core_pr.c 702 */;
	unsigned char *cocci_id/* drivers/target/target_core_pr.c 695 */;
	u64 cocci_id/* drivers/target/target_core_pr.c 694 */;
	struct se_lun *cocci_id/* drivers/target/target_core_pr.c 692 */;
	void cocci_id/* drivers/target/target_core_pr.c 683 */(struct se_dev_entry *);
	int cocci_id/* drivers/target/target_core_pr.c 682 */(struct se_dev_entry *);
	void cocci_id/* drivers/target/target_core_pr.c 67 */(struct se_device *,
							      struct se_node_acl *,
							      struct t10_pr_registration *,
							      int, int);
	enum preempt_type{PREEMPT, PREEMPT_AND_ABORT,} cocci_id/* drivers/target/target_core_pr.c 62 */;
	enum register_type{REGISTER, REGISTER_AND_IGNORE_EXISTING_KEY, REGISTER_AND_MOVE,} cocci_id/* drivers/target/target_core_pr.c 56 */;
	struct pr_transport_id_holder {
		struct t10_pr_registration *dest_pr_reg;
		struct se_portal_group *dest_tpg;
		struct se_node_acl *dest_node_acl;
		struct se_dev_entry *dest_se_deve;
		struct list_head dest_list;
	} cocci_id/* drivers/target/target_core_pr.c 35 */;
	unsigned char cocci_id/* drivers/target/target_core_pr.c 3158 */;
	unsigned short cocci_id/* drivers/target/target_core_pr.c 3157 */;
	char cocci_id/* drivers/target/target_core_pr.c 2763 */[PR_REG_ISID_ID_LEN];
	enum preempt_type cocci_id/* drivers/target/target_core_pr.c 2759 */;
	struct list_head *cocci_id/* drivers/target/target_core_pr.c 2756 */;
	struct t10_pr_registration cocci_id/* drivers/target/target_core_pr.c 2489 */;
	unsigned char cocci_id/* drivers/target/target_core_pr.c 2054 */[PR_REG_ISID_LEN];
	bool cocci_id/* drivers/target/target_core_pr.c 2046 */;
	loff_t cocci_id/* drivers/target/target_core_pr.c 1972 */;
	u32 cocci_id/* drivers/target/target_core_pr.c 1970 */;
	char *cocci_id/* drivers/target/target_core_pr.c 1969 */;
	struct file *cocci_id/* drivers/target/target_core_pr.c 1967 */;
	struct t10_wwn *cocci_id/* drivers/target/target_core_pr.c 1966 */;
	ssize_t cocci_id/* drivers/target/target_core_pr.c 1873 */;
	unsigned char cocci_id/* drivers/target/target_core_pr.c 1872 */[512];
	struct pr_transport_id_holder cocci_id/* drivers/target/target_core_pr.c 1516 */;
	const unsigned char *cocci_id/* drivers/target/target_core_pr.c 1505 */;
	struct pr_transport_id_holder *cocci_id/* drivers/target/target_core_pr.c 1503 */;
	struct se_session *cocci_id/* drivers/target/target_core_pr.c 1497 */;
	struct se_cmd *cocci_id/* drivers/target/target_core_pr.c 1488 */;
	sense_reason_t cocci_id/* drivers/target/target_core_pr.c 1486 */;
	void cocci_id/* drivers/target/target_core_pr.c 117 */(struct t10_pr_registration *);
	struct t10_pr_registration *cocci_id/* drivers/target/target_core_pr.c 115 */(struct se_device *,
										      struct se_node_acl *,
										      struct se_session *);
	struct se_dev_entry *cocci_id/* drivers/target/target_core_pr.c 1058 */;
	struct t10_reservation *cocci_id/* drivers/target/target_core_pr.c 1057 */;
	const struct target_core_fabric_ops *cocci_id/* drivers/target/target_core_pr.c 1055 */;
	int cocci_id/* drivers/target/target_core_pr.c 1053 */;
	enum register_type cocci_id/* drivers/target/target_core_pr.c 1052 */;
	struct t10_pr_registration *cocci_id/* drivers/target/target_core_pr.c 1051 */;
	struct se_node_acl *cocci_id/* drivers/target/target_core_pr.c 1050 */;
	struct se_device *cocci_id/* drivers/target/target_core_pr.c 1049 */;
	void cocci_id/* drivers/target/target_core_pr.c 1048 */;
}
