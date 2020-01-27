cocci_test_suite() {
	struct ib_sa_query cocci_id/* drivers/infiniband/core/sa_query.c 986 */;
	struct work_struct *cocci_id/* drivers/infiniband/core/sa_query.c 975 */;
	struct ib_path_rec_data *cocci_id/* drivers/infiniband/core/sa_query.c 929 */;
	struct ib_sa_mad *cocci_id/* drivers/infiniband/core/sa_query.c 927 */;
	void cocci_id/* drivers/infiniband/core/sa_query.c 920 */(struct ib_mad_agent *agent,
								  struct ib_mad_send_wc *mad_send_wc);
	struct ib_sa_port {
		struct ib_mad_agent *agent;
		struct ib_sa_sm_ah *sm_ah;
		struct work_struct update_task;
		struct ib_sa_classport_cache classport_info;
		struct delayed_work ib_cpi_work;
		spinlock_t classport_lock;
		spinlock_t ah_lock;
		u8 port_num;
	} cocci_id/* drivers/infiniband/core/sa_query.c 90 */;
	u32 cocci_id/* drivers/infiniband/core/sa_query.c 873 */;
	struct ib_sa_classport_cache {
		bool valid;
		int retry_cnt;
		struct rdma_class_port_info data;
	} cocci_id/* drivers/infiniband/core/sa_query.c 84 */;
	struct rdma_ls_resolve_header cocci_id/* drivers/infiniband/core/sa_query.c 827 */;
	u16 cocci_id/* drivers/infiniband/core/sa_query.c 815 */;
	struct rdma_nla_ls_gid cocci_id/* drivers/infiniband/core/sa_query.c 809 */;
	u64 cocci_id/* drivers/infiniband/core/sa_query.c 807 */;
	ib_sa_comp_mask cocci_id/* drivers/infiniband/core/sa_query.c 802 */;
	struct rdma_class_port_info {
		enum rdma_class_port_info_type type;
		union {
			struct ib_class_port_info ib;
			struct opa_class_port_info opa;
		};
	} cocci_id/* drivers/infiniband/core/sa_query.c 76 */;
	struct rdma_ls_resolve_header *cocci_id/* drivers/infiniband/core/sa_query.c 757 */;
	const struct ib_field cocci_id/* drivers/infiniband/core/sa_query.c 716 */[];
	enum rdma_class_port_info_type{RDMA_CLASS_PORT_INFO_IB, RDMA_CLASS_PORT_INFO_OPA,} cocci_id/* drivers/infiniband/core/sa_query.c 71 */;
	struct ib_sa_sm_ah {
		struct ib_ah *ah;
		struct kref ref;
		u16 pkey_index;
		u8 src_path_mask;
	} cocci_id/* drivers/infiniband/core/sa_query.c 64 */;
	typeof(*sa_dev) cocci_id/* drivers/infiniband/core/sa_query.c 2297 */;
	struct ib_event *cocci_id/* drivers/infiniband/core/sa_query.c 2287 */;
	struct ib_event_handler *cocci_id/* drivers/infiniband/core/sa_query.c 2286 */;
	struct ib_mad_recv_wc *cocci_id/* drivers/infiniband/core/sa_query.c 2195 */;
	struct ib_mad_send_wc *cocci_id/* drivers/infiniband/core/sa_query.c 2162 */;
	struct ib_sa_port cocci_id/* drivers/infiniband/core/sa_query.c 2111 */;
	struct ib_sa_query **cocci_id/* drivers/infiniband/core/sa_query.c 2058 */;
	void (*cocci_id/* drivers/infiniband/core/sa_query.c 2056 */)(void *context);
	struct ib_class_port_info cocci_id/* drivers/infiniband/core/sa_query.c 2026 */;
	struct opa_class_port_info cocci_id/* drivers/infiniband/core/sa_query.c 2007 */;
	struct ib_sa_classport_cache *cocci_id/* drivers/infiniband/core/sa_query.c 2003 */;
	struct ib_sa_classport_info_query cocci_id/* drivers/infiniband/core/sa_query.c 2002 */;
	struct ib_sa_classport_info_query *cocci_id/* drivers/infiniband/core/sa_query.c 2001 */;
	struct ib_classport_info_context *cocci_id/* drivers/infiniband/core/sa_query.c 1991 */;
	void *cocci_id/* drivers/infiniband/core/sa_query.c 1989 */;
	struct ib_classport_info_context {
		struct completion done;
		struct ib_sa_query *sa_query;
	} cocci_id/* drivers/infiniband/core/sa_query.c 1984 */;
	struct ib_sa_guidinfo_query *cocci_id/* drivers/infiniband/core/sa_query.c 1895 */;
	void (*cocci_id/* drivers/infiniband/core/sa_query.c 1889 */)(int status,
								      struct ib_sa_guidinfo_rec *resp,
								      void *context);
	struct ib_sa_guidinfo_rec *cocci_id/* drivers/infiniband/core/sa_query.c 1886 */;
	struct ib_sa_client *cocci_id/* drivers/infiniband/core/sa_query.c 1884 */;
	struct ib_sa_guidinfo_rec cocci_id/* drivers/infiniband/core/sa_query.c 1870 */;
	struct ib_sa_guidinfo_query cocci_id/* drivers/infiniband/core/sa_query.c 1867 */;
	struct ib_client cocci_id/* drivers/infiniband/core/sa_query.c 180 */;
	void (*cocci_id/* drivers/infiniband/core/sa_query.c 1798 */)(int status,
								      struct ib_sa_mcmember_rec *resp,
								      void *context);
	struct ib_sa_mcmember_rec *cocci_id/* drivers/infiniband/core/sa_query.c 1795 */;
	void cocci_id/* drivers/infiniband/core/sa_query.c 178 */(struct ib_device *device,
								  void *client_data);
	struct ib_sa_mcmember_rec cocci_id/* drivers/infiniband/core/sa_query.c 1778 */;
	struct ib_sa_mcmember_query cocci_id/* drivers/infiniband/core/sa_query.c 1775 */;
	struct ib_sa_mcmember_query *cocci_id/* drivers/infiniband/core/sa_query.c 1774 */;
	void cocci_id/* drivers/infiniband/core/sa_query.c 177 */(struct ib_device *device);
	void (*cocci_id/* drivers/infiniband/core/sa_query.c 1701 */)(int status,
								      struct ib_sa_service_rec *resp,
								      void *context);
	struct ib_sa_service_rec *cocci_id/* drivers/infiniband/core/sa_query.c 1698 */;
	struct ib_sa_service_rec cocci_id/* drivers/infiniband/core/sa_query.c 1655 */;
	struct ib_sa_service_query cocci_id/* drivers/infiniband/core/sa_query.c 1652 */;
	struct ib_sa_service_query *cocci_id/* drivers/infiniband/core/sa_query.c 1651 */;
	struct ib_path_rec_data cocci_id/* drivers/infiniband/core/sa_query.c 164 */;
	const struct nla_policy cocci_id/* drivers/infiniband/core/sa_query.c 162 */[LS_NLA_TYPE_MAX];
	struct delayed_work cocci_id/* drivers/infiniband/core/sa_query.c 161 */;
	struct workqueue_struct *cocci_id/* drivers/infiniband/core/sa_query.c 160 */;
	atomic_t cocci_id/* drivers/infiniband/core/sa_query.c 159 */;
	enum opa_pr_supported cocci_id/* drivers/infiniband/core/sa_query.c 1558 */;
	void (*cocci_id/* drivers/infiniband/core/sa_query.c 1547 */)(int status,
								      struct sa_path_rec *resp,
								      void *context);
	struct ib_sa_mcmember_query {
		void (*callback)(int, struct ib_sa_mcmember_rec *, void *);
		void *context;
		struct ib_sa_query sa_query;
	} cocci_id/* drivers/infiniband/core/sa_query.c 151 */;
	struct sa_path_rec cocci_id/* drivers/infiniband/core/sa_query.c 1479 */;
	struct ib_sa_path_query cocci_id/* drivers/infiniband/core/sa_query.c 1476 */;
	struct ib_sa_path_query *cocci_id/* drivers/infiniband/core/sa_query.c 1475 */;
	struct ib_port_attr cocci_id/* drivers/infiniband/core/sa_query.c 1457 */;
	struct ib_sa_classport_info_query {
		void (*callback)(void *);
		void *context;
		struct ib_sa_query sa_query;
	} cocci_id/* drivers/infiniband/core/sa_query.c 145 */;
	enum opa_pr_supported{PR_NOT_SUPPORTED, PR_OPA_SUPPORTED, PR_IB_SUPPORTED,} cocci_id/* drivers/infiniband/core/sa_query.c 1439 */;
	bool cocci_id/* drivers/infiniband/core/sa_query.c 1414 */;
	struct ib_sa_guidinfo_query {
		void (*callback)(int, struct ib_sa_guidinfo_rec *, void *);
		void *context;
		struct ib_sa_query sa_query;
	} cocci_id/* drivers/infiniband/core/sa_query.c 139 */;
	void cocci_id/* drivers/infiniband/core/sa_query.c 1335 */;
	struct ib_sa_path_query {
		void (*callback)(int, struct sa_path_rec *, void *);
		void *context;
		struct ib_sa_query sa_query;
		struct sa_path_rec *conv_pr;
	} cocci_id/* drivers/infiniband/core/sa_query.c 132 */;
	unsigned long cocci_id/* drivers/infiniband/core/sa_query.c 1298 */;
	struct rdma_ah_attr cocci_id/* drivers/infiniband/core/sa_query.c 1297 */;
	gfp_t cocci_id/* drivers/infiniband/core/sa_query.c 1295 */;
	struct ib_sa_query *cocci_id/* drivers/infiniband/core/sa_query.c 1295 */;
	int cocci_id/* drivers/infiniband/core/sa_query.c 1295 */;
	const struct ib_gid_attr *cocci_id/* drivers/infiniband/core/sa_query.c 1261 */;
	struct rdma_ah_attr *cocci_id/* drivers/infiniband/core/sa_query.c 1260 */;
	struct ib_sa_service_query {
		void (*callback)(int, struct ib_sa_service_rec *, void *);
		void *context;
		struct ib_sa_query sa_query;
	} cocci_id/* drivers/infiniband/core/sa_query.c 126 */;
	struct sa_path_rec *cocci_id/* drivers/infiniband/core/sa_query.c 1259 */;
	enum ib_gid_type cocci_id/* drivers/infiniband/core/sa_query.c 1225 */;
	struct ib_sa_port *cocci_id/* drivers/infiniband/core/sa_query.c 1204 */;
	struct ib_sa_device *cocci_id/* drivers/infiniband/core/sa_query.c 1203 */;
	u8 cocci_id/* drivers/infiniband/core/sa_query.c 1201 */;
	struct ib_device *cocci_id/* drivers/infiniband/core/sa_query.c 1201 */;
	struct ib_mad_agent *cocci_id/* drivers/infiniband/core/sa_query.c 1179 */;
	struct ib_sa_sm_ah cocci_id/* drivers/infiniband/core/sa_query.c 1147 */;
	struct ib_sa_sm_ah *cocci_id/* drivers/infiniband/core/sa_query.c 1147 */;
	struct kref *cocci_id/* drivers/infiniband/core/sa_query.c 1145 */;
	struct ib_mad_send_wc cocci_id/* drivers/infiniband/core/sa_query.c 1097 */;
	struct ib_mad_send_buf *cocci_id/* drivers/infiniband/core/sa_query.c 1096 */;
	struct netlink_ext_ack *cocci_id/* drivers/infiniband/core/sa_query.c 1092 */;
	struct nlmsghdr *cocci_id/* drivers/infiniband/core/sa_query.c 1091 */;
	struct sk_buff *cocci_id/* drivers/infiniband/core/sa_query.c 1090 */;
	const struct nlmsghdr *cocci_id/* drivers/infiniband/core/sa_query.c 1074 */;
	struct ib_sa_query {
		void (*callback)(struct ib_sa_query *, int,
				 struct ib_sa_mad *);
		void (*release)(struct ib_sa_query *);
		struct ib_sa_client *client;
		struct ib_sa_port *port;
		struct ib_mad_send_buf *mad_buf;
		struct ib_sa_sm_ah *sm_ah;
		int id;
		u32 flags;
		struct list_head list;
		u32 seq;
		unsigned long timeout;
		u8 path_use;
	} cocci_id/* drivers/infiniband/core/sa_query.c 107 */;
	int *cocci_id/* drivers/infiniband/core/sa_query.c 1036 */;
	struct nlattr *cocci_id/* drivers/infiniband/core/sa_query.c 1023 */[LS_NLA_TYPE_MAX];
	long cocci_id/* drivers/infiniband/core/sa_query.c 1022 */;
	const struct nlattr *cocci_id/* drivers/infiniband/core/sa_query.c 1019 */;
	struct ib_sa_device {
		int start_port,end_port;
		struct ib_event_handler event_handler;
		struct ib_sa_port port[0];
	} cocci_id/* drivers/infiniband/core/sa_query.c 101 */;
}
