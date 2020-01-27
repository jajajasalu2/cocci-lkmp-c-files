cocci_test_suite() {
	enum{CLUSTER_ATTR_TCP_PORT=0, CLUSTER_ATTR_BUFFER_SIZE, CLUSTER_ATTR_RSBTBL_SIZE, CLUSTER_ATTR_RECOVER_TIMER, CLUSTER_ATTR_TOSS_SECS, CLUSTER_ATTR_SCAN_SECS, CLUSTER_ATTR_LOG_DEBUG, CLUSTER_ATTR_LOG_INFO, CLUSTER_ATTR_PROTOCOL, CLUSTER_ATTR_TIMEWARN_CS, CLUSTER_ATTR_WAITWARN_US, CLUSTER_ATTR_NEW_RSB_COUNT, CLUSTER_ATTR_RECOVER_CALLBACKS, CLUSTER_ATTR_CLUSTER_NAME,} cocci_id/* fs/dlm/config.c 89 */;
	struct dlm_config_info cocci_id/* fs/dlm/config.c 864 */;
	struct dlm_cluster cocci_id/* fs/dlm/config.c 85 */;
	uint32_t *cocci_id/* fs/dlm/config.c 822 */;
	struct dlm_config_node cocci_id/* fs/dlm/config.c 796 */;
	struct dlm_config_node *cocci_id/* fs/dlm/config.c 780 */;
	struct dlm_config_node **cocci_id/* fs/dlm/config.c 775 */;
	struct dlm_cluster {
		struct config_group group;
		unsigned int cl_tcp_port;
		unsigned int cl_buffer_size;
		unsigned int cl_rsbtbl_size;
		unsigned int cl_recover_timer;
		unsigned int cl_toss_secs;
		unsigned int cl_scan_secs;
		unsigned int cl_log_debug;
		unsigned int cl_log_info;
		unsigned int cl_protocol;
		unsigned int cl_timewarn_cs;
		unsigned int cl_waitwarn_us;
		unsigned int cl_new_rsb_count;
		unsigned int cl_recover_callbacks;
		char cl_cluster_name[DLM_LOCKSPACE_LEN];
	} cocci_id/* fs/dlm/config.c 65 */;
	char cocci_id/* fs/dlm/config.c 629 */[sizeof("AF_INET6	xxxx:xxxx:xxxx:xxxx:xxxx:xxxx:255.255.255.255\n")];
	struct sockaddr_in6 *cocci_id/* fs/dlm/config.c 626 */;
	struct sockaddr_in *cocci_id/* fs/dlm/config.c 625 */;
	struct sockaddr_storage *cocci_id/* fs/dlm/config.c 624 */;
	struct dlm_comm *cocci_id/* fs/dlm/config.c 620 */;
	struct sockaddr_storage cocci_id/* fs/dlm/config.c 596 */;
	struct config_item *cocci_id/* fs/dlm/config.c 55 */(struct config_group *,
							     const char *);
	void cocci_id/* fs/dlm/config.c 547 */;
	int __init cocci_id/* fs/dlm/config.c 540 */;
	struct dlm_clusters cocci_id/* fs/dlm/config.c 529 */;
	void cocci_id/* fs/dlm/config.c 51 */(struct config_item *);
	void cocci_id/* fs/dlm/config.c 50 */(struct config_group *,
					      struct config_item *);
	struct config_group *cocci_id/* fs/dlm/config.c 49 */(struct config_group *,
							      const char *);
	struct dlm_nodes cocci_id/* fs/dlm/config.c 414 */;
	struct dlm_nodes *cocci_id/* fs/dlm/config.c 411 */;
	uint32_t cocci_id/* fs/dlm/config.c 38 */;
	struct config_group *cocci_id/* fs/dlm/config.c 36 */;
	struct dlm_comms cocci_id/* fs/dlm/config.c 351 */;
	struct dlm_spaces cocci_id/* fs/dlm/config.c 350 */;
	struct dlm_comms *cocci_id/* fs/dlm/config.c 347 */;
	struct dlm_spaces *cocci_id/* fs/dlm/config.c 346 */;
	struct dlm_node cocci_id/* fs/dlm/config.c 339 */;
	struct dlm_node *cocci_id/* fs/dlm/config.c 337 */;
	struct dlm_comm cocci_id/* fs/dlm/config.c 334 */;
	struct dlm_space cocci_id/* fs/dlm/config.c 328 */;
	struct dlm_space *cocci_id/* fs/dlm/config.c 326 */;
	const struct config_item_type cocci_id/* fs/dlm/config.c 288 */;
	struct configfs_item_operations cocci_id/* fs/dlm/config.c 252 */;
	struct configfs_group_operations cocci_id/* fs/dlm/config.c 247 */;
	struct dlm_node {
		struct config_item item;
		struct list_head list;
		int nodeid;
		int weight;
		int new;
		int comm_seq;
	} cocci_id/* fs/dlm/config.c 238 */;
	struct dlm_nodes {
		struct config_group ns_group;
	} cocci_id/* fs/dlm/config.c 234 */;
	struct dlm_comm {
		struct config_item item;
		int seq;
		int nodeid;
		int local;
		int addr_count;
		struct sockaddr_storage *addr[DLM_MAX_ADDR_COUNT];
	} cocci_id/* fs/dlm/config.c 225 */;
	struct dlm_comms {
		struct config_group cs_group;
	} cocci_id/* fs/dlm/config.c 221 */;
	struct dlm_space {
		struct config_group group;
		struct list_head members;
		struct mutex members_lock;
		int members_count;
	} cocci_id/* fs/dlm/config.c 214 */;
	struct dlm_spaces {
		struct config_group ss_group;
	} cocci_id/* fs/dlm/config.c 210 */;
	struct dlm_clusters {
		struct configfs_subsystem subsys;
	} cocci_id/* fs/dlm/config.c 206 */;
	enum{NODE_ATTR_NODEID=0, NODE_ATTR_WEIGHT,} cocci_id/* fs/dlm/config.c 201 */;
	enum{COMM_ATTR_NODEID=0, COMM_ATTR_LOCAL, COMM_ATTR_ADDR, COMM_ATTR_ADDR_LIST,} cocci_id/* fs/dlm/config.c 194 */;
	struct configfs_attribute *cocci_id/* fs/dlm/config.c 176 */[];
	unsigned int cocci_id/* fs/dlm/config.c 129 */;
	int *cocci_id/* fs/dlm/config.c 126 */;
	int cocci_id/* fs/dlm/config.c 126 */;
	unsigned int *cocci_id/* fs/dlm/config.c 125 */;
	const char *cocci_id/* fs/dlm/config.c 113 */;
	size_t cocci_id/* fs/dlm/config.c 113 */;
	struct dlm_cluster *cocci_id/* fs/dlm/config.c 108 */;
	struct config_item *cocci_id/* fs/dlm/config.c 106 */;
	char *cocci_id/* fs/dlm/config.c 106 */;
	ssize_t cocci_id/* fs/dlm/config.c 106 */;
}
