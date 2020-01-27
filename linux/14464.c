cocci_test_suite() {
	u32 *cocci_id/* drivers/media/dvb-core/dvb_frontend.c 888 */;
	struct task_struct *cocci_id/* drivers/media/dvb-core/dvb_frontend.c 852 */;
	s32 cocci_id/* drivers/media/dvb-core/dvb_frontend.c 835 */;
	ktime_t *cocci_id/* drivers/media/dvb-core/dvb_frontend.c 833 */;
	bool cocci_id/* drivers/media/dvb-core/dvb_frontend.c 652 */;
	enum dvbfe_algo cocci_id/* drivers/media/dvb-core/dvb_frontend.c 651 */;
	void (*cocci_id/* drivers/media/dvb-core/dvb_frontend.c 3031 */)(struct dvb_frontend *fe);
	struct dvb_frontend_private cocci_id/* drivers/media/dvb-core/dvb_frontend.c 2970 */;
	const struct dvb_device cocci_id/* drivers/media/dvb-core/dvb_frontend.c 2955 */;
	const struct file_operations cocci_id/* drivers/media/dvb-core/dvb_frontend.c 2890 */;
	struct dvb_adapter *cocci_id/* drivers/media/dvb-core/dvb_frontend.c 2729 */;
	struct inode *cocci_id/* drivers/media/dvb-core/dvb_frontend.c 2724 */;
	__poll_t cocci_id/* drivers/media/dvb-core/dvb_frontend.c 2708 */;
	struct poll_table_struct *cocci_id/* drivers/media/dvb-core/dvb_frontend.c 2708 */;
	u8 cocci_id/* drivers/media/dvb-core/dvb_frontend.c 2603 */;
	ktime_t cocci_id/* drivers/media/dvb-core/dvb_frontend.c 2601 */[10];
	ktime_t cocci_id/* drivers/media/dvb-core/dvb_frontend.c 2600 */;
	enum fe_sec_voltage cocci_id/* drivers/media/dvb-core/dvb_frontend.c 2553 */;
	enum fe_sec_tone_mode cocci_id/* drivers/media/dvb-core/dvb_frontend.c 2543 */;
	enum fe_sec_mini_cmd cocci_id/* drivers/media/dvb-core/dvb_frontend.c 2534 */;
	struct dvb_diseqc_master_cmd *cocci_id/* drivers/media/dvb-core/dvb_frontend.c 2519 */;
	enum fe_status *cocci_id/* drivers/media/dvb-core/dvb_frontend.c 2493 */;
	struct dvb_frontend_info *cocci_id/* drivers/media/dvb-core/dvb_frontend.c 2439 */;
	struct dvb_frontend_event *cocci_id/* drivers/media/dvb-core/dvb_frontend.c 242 */;
	struct dvb_fe_events *cocci_id/* drivers/media/dvb-core/dvb_frontend.c 241 */;
	struct dtv_properties *cocci_id/* drivers/media/dvb-core/dvb_frontend.c 2402 */;
	enum fe_status cocci_id/* drivers/media/dvb-core/dvb_frontend.c 237 */;
	struct dtv_property cocci_id/* drivers/media/dvb-core/dvb_frontend.c 2362 */;
	struct dvb_frontend_tune_settings cocci_id/* drivers/media/dvb-core/dvb_frontend.c 2185 */;
	struct dvb_device *cocci_id/* drivers/media/dvb-core/dvb_frontend.c 2162 */;
	unsigned long cocci_id/* drivers/media/dvb-core/dvb_frontend.c 2160 */;
	unsigned int cocci_id/* drivers/media/dvb-core/dvb_frontend.c 2159 */;
	long cocci_id/* drivers/media/dvb-core/dvb_frontend.c 2159 */;
	struct compat_dtv_property cocci_id/* drivers/media/dvb-core/dvb_frontend.c 2149 */;
	void __user *cocci_id/* drivers/media/dvb-core/dvb_frontend.c 2148 */;
	struct compat_dtv_property *cocci_id/* drivers/media/dvb-core/dvb_frontend.c 2077 */;
	struct compat_dtv_properties cocci_id/* drivers/media/dvb-core/dvb_frontend.c 2076 */;
	struct compat_dtv_properties {
		__u32 num;
		compat_uptr_t props;
	} cocci_id/* drivers/media/dvb-core/dvb_frontend.c 2059 */;
	struct compat_dtv_property {
		__u32 cmd;
		__u32 reserved[3];
		union {
			__u32 data;
			struct dtv_fe_stats st;
			struct {
				__u8 data[32];
				__u32 len;
				__u32 reserved1[3];
				compat_uptr_t reserved2;
			} buffer;
		} u;
		int result;
	}__attribute__((packed)) cocci_id/* drivers/media/dvb-core/dvb_frontend.c 2043 */;
	enum dvbv3_emulation_type cocci_id/* drivers/media/dvb-core/dvb_frontend.c 200 */;
	enum dvbv3_emulation_type{DVBV3_UNKNOWN, DVBV3_QPSK, DVBV3_QAM, DVBV3_OFDM, DVBV3_ATSC,} cocci_id/* drivers/media/dvb-core/dvb_frontend.c 192 */;
	void *cocci_id/* drivers/media/dvb-core/dvb_frontend.c 1871 */;
	u32 cocci_id/* drivers/media/dvb-core/dvb_frontend.c 1809 */;
	int cocci_id/* drivers/media/dvb-core/dvb_frontend.c 177 */(struct dvb_frontend *fe,
								    const struct dtv_frontend_properties *c,
								    struct dvb_frontend_parameters *p);
	int cocci_id/* drivers/media/dvb-core/dvb_frontend.c 174 */(struct dvb_frontend *fe,
								    struct dtv_frontend_properties *c,
								    struct dvb_frontend_parameters *p_out);
	void cocci_id/* drivers/media/dvb-core/dvb_frontend.c 173 */(struct dvb_frontend *fe);
	int cocci_id/* drivers/media/dvb-core/dvb_frontend.c 1575 */(struct dvb_frontend *fe);
	struct dvb_frontend cocci_id/* drivers/media/dvb-core/dvb_frontend.c 148 */;
	struct kref *cocci_id/* drivers/media/dvb-core/dvb_frontend.c 145 */;
	struct dvb_frontend_private *cocci_id/* drivers/media/dvb-core/dvb_frontend.c 135 */;
	struct file *cocci_id/* drivers/media/dvb-core/dvb_frontend.c 1341 */;
	struct dtv_property *cocci_id/* drivers/media/dvb-core/dvb_frontend.c 1340 */;
	int cocci_id/* drivers/media/dvb-core/dvb_frontend.c 1335 */(struct file *file,
								     unsigned int cmd,
								     void *parg);
	struct dvb_frontend *cocci_id/* drivers/media/dvb-core/dvb_frontend.c 133 */;
	void cocci_id/* drivers/media/dvb-core/dvb_frontend.c 133 */;
	struct dvb_frontend_parameters *cocci_id/* drivers/media/dvb-core/dvb_frontend.c 1318 */;
	struct dtv_frontend_properties *cocci_id/* drivers/media/dvb-core/dvb_frontend.c 1317 */;
	int cocci_id/* drivers/media/dvb-core/dvb_frontend.c 1316 */;
	void cocci_id/* drivers/media/dvb-core/dvb_frontend.c 130 */(struct dvb_frontend *fe,
								     void (*release)(struct dvb_frontend *fe));
	const struct dtv_frontend_properties *cocci_id/* drivers/media/dvb-core/dvb_frontend.c 1243 */;
	const struct dvb_frontend_parameters *cocci_id/* drivers/media/dvb-core/dvb_frontend.c 1168 */;
	struct dtv_cmds_h cocci_id/* drivers/media/dvb-core/dvb_frontend.c 1080 */[DTV_MAX_COMMAND + 1];
	struct dtv_cmds_h {
		char *name;
		__u32 cmd;
		__u32 set:1;
		__u32 buffer:1;
		__u32 reserved:30;
	} cocci_id/* drivers/media/dvb-core/dvb_frontend.c 1069 */;
	struct dtv_frontend_properties cocci_id/* drivers/media/dvb-core/dvb_frontend.c 1001 */;
	struct dvb_frontend_private {
		struct dvb_device *dvbdev;
		struct dvb_frontend_parameters parameters_out;
		struct dvb_fe_events events;
		struct semaphore sem;
		struct list_head list_head;
		wait_queue_head_t wait_queue;
		struct task_struct *thread;
		unsigned long release_jiffies;
		unsigned int wakeup;
		enum fe_status status;
		unsigned long tune_mode_flags;
		unsigned int delay;
		unsigned int reinitialise;
		int tone;
		int voltage;
		unsigned int state;
		unsigned int bending;
		int lnb_drift;
		unsigned int inversion;
		unsigned int auto_step;
		unsigned int auto_sub_step;
		unsigned int started_auto_step;
		unsigned int min_delay;
		unsigned int max_drift;
		unsigned int step_size;
		int quality;
		unsigned int check_wrapped;
		enum dvbfe_search algo_status;
#if defined(CONFIG_MEDIA_CONTROLLER_DVB)
		struct media_pipeline pipe;
#endif
	} cocci_id/*  1 */;
}
