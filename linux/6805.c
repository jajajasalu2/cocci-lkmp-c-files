cocci_test_suite() {
	const char *cocci_id/* drivers/scsi/device_handler/scsi_dh_alua.c 963 */;
	struct alua_queue_data {
		struct list_head entry;
		activate_complete callback_fn;
		void *callback_data;
	} cocci_id/* drivers/scsi/device_handler/scsi_dh_alua.c 93 */;
	struct alua_dh_data {
		struct list_head node;
		struct alua_port_group __rcu *pg;
		int group_id;
		spinlock_t pg_lock;
		struct scsi_device *sdev;
		int init_error;
		struct mutex init_mutex;
	} cocci_id/* drivers/scsi/device_handler/scsi_dh_alua.c 83 */;
	struct work_struct *cocci_id/* drivers/scsi/device_handler/scsi_dh_alua.c 792 */;
	u16 cocci_id/* drivers/scsi/device_handler/scsi_dh_alua.c 644 */;
	struct alua_port_group {
		struct kref kref;
		struct rcu_head rcu;
		struct list_head node;
		struct list_head dh_list;
		unsigned char device_id_str[256];
		int device_id_len;
		int group_id;
		int tpgs;
		int state;
		int pref;
		int valid_states;
		unsigned flags;
		unsigned char transition_tmo;
		unsigned long expiry;
		unsigned long interval;
		struct delayed_work rtpg_work;
		spinlock_t lock;
		struct list_head rtpg_list;
		struct scsi_device *rtpg_sdev;
	} cocci_id/* drivers/scsi/device_handler/scsi_dh_alua.c 61 */;
	struct workqueue_struct *cocci_id/* drivers/scsi/device_handler/scsi_dh_alua.c 59 */;
	uint cocci_id/* drivers/scsi/device_handler/scsi_dh_alua.c 53 */;
	unsigned int cocci_id/* drivers/scsi/device_handler/scsi_dh_alua.c 512 */;
	unsigned cocci_id/* drivers/scsi/device_handler/scsi_dh_alua.c 511 */;
	unsigned char *cocci_id/* drivers/scsi/device_handler/scsi_dh_alua.c 510 */;
	struct scsi_sense_hdr cocci_id/* drivers/scsi/device_handler/scsi_dh_alua.c 507 */;
	struct scsi_sense_hdr *cocci_id/* drivers/scsi/device_handler/scsi_dh_alua.c 409 */;
	char cocci_id/* drivers/scsi/device_handler/scsi_dh_alua.c 386 */;
	unsigned long cocci_id/* drivers/scsi/device_handler/scsi_dh_alua.c 325 */;
	struct alua_port_group cocci_id/* drivers/scsi/device_handler/scsi_dh_alua.c 215 */;
	char *cocci_id/* drivers/scsi/device_handler/scsi_dh_alua.c 178 */;
	size_t cocci_id/* drivers/scsi/device_handler/scsi_dh_alua.c 178 */;
	unsigned char cocci_id/* drivers/scsi/device_handler/scsi_dh_alua.c 157 */[8];
	u8 cocci_id/* drivers/scsi/device_handler/scsi_dh_alua.c 128 */[MAX_COMMAND_SIZE];
	void __exit cocci_id/* drivers/scsi/device_handler/scsi_dh_alua.c 1191 */;
	int __init cocci_id/* drivers/scsi/device_handler/scsi_dh_alua.c 1174 */;
	struct scsi_device_handler cocci_id/* drivers/scsi/device_handler/scsi_dh_alua.c 1162 */;
	void cocci_id/* drivers/scsi/device_handler/scsi_dh_alua.c 1142 */;
	unsigned char cocci_id/* drivers/scsi/device_handler/scsi_dh_alua.c 1080 */;
	struct kref *cocci_id/* drivers/scsi/device_handler/scsi_dh_alua.c 108 */;
	blk_status_t cocci_id/* drivers/scsi/device_handler/scsi_dh_alua.c 1076 */;
	struct request *cocci_id/* drivers/scsi/device_handler/scsi_dh_alua.c 1076 */;
	void cocci_id/* drivers/scsi/device_handler/scsi_dh_alua.c 106 */(struct scsi_device *sdev,
									  bool force);
	bool cocci_id/* drivers/scsi/device_handler/scsi_dh_alua.c 1053 */;
	bool cocci_id/* drivers/scsi/device_handler/scsi_dh_alua.c 103 */(struct alua_port_group *pg,
									  struct scsi_device *sdev,
									  struct alua_queue_data *qdata,
									  bool force);
	void cocci_id/* drivers/scsi/device_handler/scsi_dh_alua.c 102 */(struct work_struct *work);
	struct alua_port_group *cocci_id/* drivers/scsi/device_handler/scsi_dh_alua.c 1013 */;
	struct alua_queue_data *cocci_id/* drivers/scsi/device_handler/scsi_dh_alua.c 1012 */;
	struct alua_dh_data *cocci_id/* drivers/scsi/device_handler/scsi_dh_alua.c 1010 */;
	activate_complete cocci_id/* drivers/scsi/device_handler/scsi_dh_alua.c 1008 */;
	void *cocci_id/* drivers/scsi/device_handler/scsi_dh_alua.c 1008 */;
	struct scsi_device *cocci_id/* drivers/scsi/device_handler/scsi_dh_alua.c 1007 */;
	int cocci_id/* drivers/scsi/device_handler/scsi_dh_alua.c 1007 */;
}
