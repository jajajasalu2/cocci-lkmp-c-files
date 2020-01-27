cocci_test_suite() {
	struct ds_reg_nack {
		struct ds_msg_tag tag;
		__u64 handle;
		__u16 major;
	} cocci_id/* arch/sparc/kernel/ds.c 99 */;
	struct ds_queue_entry {
		struct list_head list;
		struct ds_info *dp;
		int req_len;
		int __pad;
		u64 req[0];
	} cocci_id/* arch/sparc/kernel/ds.c 987 */;
	struct ds_data_nack cocci_id/* arch/sparc/kernel/ds.c 971 */;
	u64 cocci_id/* arch/sparc/kernel/ds.c 969 */;
	struct ds_reg_nack *cocci_id/* arch/sparc/kernel/ds.c 950 */;
	struct ds_reg_ack *cocci_id/* arch/sparc/kernel/ds.c 938 */;
	struct ds_reg_ack {
		struct ds_msg_tag tag;
		__u64 handle;
		__u16 minor;
	} cocci_id/* arch/sparc/kernel/ds.c 93 */;
	struct ds_reg_req cocci_id/* arch/sparc/kernel/ds.c 904 */;
	struct {
		struct ds_reg_req req;
		u8 id_buf[256];
	} cocci_id/* arch/sparc/kernel/ds.c 890 */;
	struct ds_reg_req {
		struct ds_msg_tag tag;
		__u64 handle;
		__u16 major;
		__u16 minor;
		char svc_id[0];
	} cocci_id/* arch/sparc/kernel/ds.c 85 */;
	char cocci_id/* arch/sparc/kernel/ds.c 843 */[256]__attribute__((aligned(32)));
	struct ds_var_set_msg cocci_id/* arch/sparc/kernel/ds.c 806 */;
	struct ds_ver_nack {
		struct ds_msg_tag tag;
		__u16 major;
	} cocci_id/* arch/sparc/kernel/ds.c 80 */;
	char *cocci_id/* arch/sparc/kernel/ds.c 782 */;
	union {
		struct {
			struct ds_data data;
			struct ds_var_set_msg msg;
		} header;
		char all[512];
	} cocci_id/* arch/sparc/kernel/ds.c 775 */;
	struct ds_ver_ack {
		struct ds_msg_tag tag;
		__u16 minor;
	} cocci_id/* arch/sparc/kernel/ds.c 75 */;
	struct ds_var_resp *cocci_id/* arch/sparc/kernel/ds.c 731 */;
	struct ds_var_resp {
		struct ds_var_hdr hdr;
		__u32 result;
#define DS_VAR_SUCCESS 0x00
#define DS_VAR_NO_SPACE 0x01
#define DS_VAR_INVALID_VAR 0x02
#define DS_VAR_INVALID_VAL 0x03
#define DS_VAR_NOT_PRESENT 0x04
	} cocci_id/* arch/sparc/kernel/ds.c 712 */;
	struct ds_var_delete_msg {
		struct ds_var_hdr hdr;
		char name[0];
	} cocci_id/* arch/sparc/kernel/ds.c 707 */;
	struct ds_var_set_msg {
		struct ds_var_hdr hdr;
		char name_and_value[0];
	} cocci_id/* arch/sparc/kernel/ds.c 702 */;
	struct ds_ver_req {
		struct ds_msg_tag tag;
		struct ds_version ver;
	} cocci_id/* arch/sparc/kernel/ds.c 70 */;
	struct ds_var_hdr {
		__u32 type;
#define DS_VAR_SET_REQ 0x00
#define DS_VAR_DELETE_REQ 0x01
#define DS_VAR_SET_RESP 0x02
#define DS_VAR_DELETE_RESP 0x03
	} cocci_id/* arch/sparc/kernel/ds.c 694 */;
	struct ds_pri_msg *cocci_id/* arch/sparc/kernel/ds.c 686 */;
	struct ds_pri_msg {
		__u64 req_num;
		__u64 type;
#define DS_PRI_REQUEST 0x00
#define DS_PRI_DATA 0x01
#define DS_PRI_UPDATE 0x02
	} cocci_id/* arch/sparc/kernel/ds.c 673 */;
	struct ds_version {
		__u16 major;
		__u16 minor;
	} cocci_id/* arch/sparc/kernel/ds.c 65 */;
	unsigned int cocci_id/* arch/sparc/kernel/ds.c 638 */;
	cpumask_t cocci_id/* arch/sparc/kernel/ds.c 637 */;
	u32 *cocci_id/* arch/sparc/kernel/ds.c 635 */;
	__u32 cocci_id/* arch/sparc/kernel/ds.c 560 */;
	unsigned long cocci_id/* arch/sparc/kernel/ds.c 538 */;
	cpumask_t *cocci_id/* arch/sparc/kernel/ds.c 534 */;
	struct dr_cpu_resp_entry *cocci_id/* arch/sparc/kernel/ds.c 490 */;
	u32 cocci_id/* arch/sparc/kernel/ds.c 488 */;
	struct dr_cpu_resp_entry cocci_id/* arch/sparc/kernel/ds.c 483 */;
	struct ds_msg_tag cocci_id/* arch/sparc/kernel/ds.c 443 */;
	struct dr_cpu_tag cocci_id/* arch/sparc/kernel/ds.c 441 */;
	struct ds_data cocci_id/* arch/sparc/kernel/ds.c 440 */;
	int cocci_id/* arch/sparc/kernel/ds.c 431 */;
	struct {
		struct ds_data data;
		struct dr_cpu_tag tag;
	} cocci_id/* arch/sparc/kernel/ds.c 427 */;
	struct dr_cpu_tag *cocci_id/* arch/sparc/kernel/ds.c 426 */;
	struct ds_data *cocci_id/* arch/sparc/kernel/ds.c 424 */;
	struct ds_cap_state *cocci_id/* arch/sparc/kernel/ds.c 423 */;
	struct ds_info *cocci_id/* arch/sparc/kernel/ds.c 422 */;
	void cocci_id/* arch/sparc/kernel/ds.c 422 */;
	struct ds_msg_tag {
		__u32 type;
#define DS_INIT_REQ 0x00
#define DS_INIT_ACK 0x01
#define DS_INIT_NACK 0x02
#define DS_REG_REQ 0x03
#define DS_REG_ACK 0x04
#define DS_REG_NACK 0x05
#define DS_UNREG_REQ 0x06
#define DS_UNREG_ACK 0x07
#define DS_UNREG_NACK 0x08
#define DS_DATA 0x09
#define DS_NACK 0x0a
		__u32 len;
	} cocci_id/* arch/sparc/kernel/ds.c 41 */;
	struct dr_cpu_resp_entry {
		__u32 cpu;
		__u32 result;
#define DR_CPU_RES_OK 0x00
#define DR_CPU_RES_FAILURE 0x01
#define DR_CPU_RES_BLOCKED 0x02
#define DR_CPU_RES_CPU_NOT_RESPONDING 0x03
#define DR_CPU_RES_NOT_IN_MD 0x04
		__u32 stat;
#define DR_CPU_STAT_NOT_PRESENT 0x00
#define DR_CPU_STAT_UNCONFIGURED 0x01
#define DR_CPU_STAT_CONFIGURED 0x02
		__u32 str_off;
	} cocci_id/* arch/sparc/kernel/ds.c 405 */;
	struct dr_cpu_tag {
		__u64 req_num;
		__u32 type;
#define DR_CPU_CONFIGURE 0x43
#define DR_CPU_UNCONFIGURE 0x55
#define DR_CPU_FORCE_UNCONFIGURE 0x46
#define DR_CPU_STATUS 0x53
#define DR_CPU_OK 0x6f
#define DR_CPU_ERROR 0x65
		__u32 num_records;
	} cocci_id/* arch/sparc/kernel/ds.c 390 */;
	struct {
		struct ds_data data;
		struct ds_panic_res res;
	} cocci_id/* arch/sparc/kernel/ds.c 366 */;
	struct ds_panic_req *cocci_id/* arch/sparc/kernel/ds.c 365 */;
	struct ds_panic_res {
		__u64 req_num;
		__u32 result;
		char reason[1];
	} cocci_id/* arch/sparc/kernel/ds.c 353 */;
	struct ds_panic_req {
		__u64 req_num;
	} cocci_id/* arch/sparc/kernel/ds.c 349 */;
	char cocci_id/* arch/sparc/kernel/ds.c 34 */[];
	struct {
		struct ds_data data;
		struct ds_shutdown_res res;
	} cocci_id/* arch/sparc/kernel/ds.c 326 */;
	struct ds_shutdown_req *cocci_id/* arch/sparc/kernel/ds.c 325 */;
	struct ds_shutdown_res {
		__u64 req_num;
		__u32 result;
		char reason[1];
	} cocci_id/* arch/sparc/kernel/ds.c 313 */;
	struct ds_shutdown_req {
		__u64 req_num;
		__u32 ms_delay;
	} cocci_id/* arch/sparc/kernel/ds.c 308 */;
	struct {
		struct ds_data data;
		struct ds_md_update_res res;
	} cocci_id/* arch/sparc/kernel/ds.c 287 */;
	struct ds_md_update_req *cocci_id/* arch/sparc/kernel/ds.c 286 */;
	struct ds_md_update_res {
		__u64 req_num;
		__u32 result;
	} cocci_id/* arch/sparc/kernel/ds.c 275 */;
	struct ds_md_update_req {
		__u64 req_num;
	} cocci_id/* arch/sparc/kernel/ds.c 271 */;
	struct ldc_channel *cocci_id/* arch/sparc/kernel/ds.c 244 */;
	void *cocci_id/* arch/sparc/kernel/ds.c 244 */;
	const char *cocci_id/* arch/sparc/kernel/ds.c 231 */;
	struct ds_info {
		struct ldc_channel *lp;
		u8 hs_state;
#define DS_HS_START 0x01
#define DS_HS_DONE 0x02
		u64 id;
		void *rcv_buf;
		int rcv_buf_len;
		struct ds_cap_state *ds_states;
		int num_ds_states;
		struct ds_info *next;
	} cocci_id/* arch/sparc/kernel/ds.c 202 */;
	struct ds_cap_state cocci_id/* arch/sparc/kernel/ds.c 167 */[];
	void cocci_id/* arch/sparc/kernel/ds.c 152 */(struct ds_info *dp, struct ds_cap_state *cp, void *buf, int len);
	struct ds_cap_state {
		__u64 handle;
		void (*data)(struct ds_info *dp, struct ds_cap_state *cp, void *buf, int len);
		const char *service_id;
		u8 state;
#define CAP_STATE_UNKNOWN 0x00
#define CAP_STATE_REG_SENT 0x01
#define CAP_STATE_REGISTERED 0x02
	} cocci_id/* arch/sparc/kernel/ds.c 132 */;
	struct ds_info cocci_id/* arch/sparc/kernel/ds.c 131 */;
	int __init cocci_id/* arch/sparc/kernel/ds.c 1258 */;
	struct vio_driver cocci_id/* arch/sparc/kernel/ds.c 1251 */;
	struct ds_data_nack {
		struct ds_msg_tag tag;
		__u64 handle;
		__u64 result;
	} cocci_id/* arch/sparc/kernel/ds.c 125 */;
	const struct vio_device_id cocci_id/* arch/sparc/kernel/ds.c 1244 */[];
	struct ds_data {
		struct ds_msg_tag tag;
		__u64 handle;
	} cocci_id/* arch/sparc/kernel/ds.c 120 */;
	const u64 *cocci_id/* arch/sparc/kernel/ds.c 1169 */;
	struct mdesc_handle *cocci_id/* arch/sparc/kernel/ds.c 1166 */;
	struct ldc_channel_config cocci_id/* arch/sparc/kernel/ds.c 1161 */;
	const struct vio_device_id *cocci_id/* arch/sparc/kernel/ds.c 1158 */;
	struct vio_dev *cocci_id/* arch/sparc/kernel/ds.c 1158 */;
	struct ds_unreg_nack {
		struct ds_msg_tag tag;
		__u64 handle;
	} cocci_id/* arch/sparc/kernel/ds.c 115 */;
	struct ds_unreg_ack {
		struct ds_msg_tag tag;
		__u64 handle;
	} cocci_id/* arch/sparc/kernel/ds.c 110 */;
	struct ds_ver_req cocci_id/* arch/sparc/kernel/ds.c 1067 */;
	struct ds_queue_entry cocci_id/* arch/sparc/kernel/ds.c 1052 */;
	struct ds_queue_entry *cocci_id/* arch/sparc/kernel/ds.c 1050 */;
	struct ds_unreg_req {
		struct ds_msg_tag tag;
		__u64 handle;
	} cocci_id/* arch/sparc/kernel/ds.c 105 */;
	struct ds_msg_tag *cocci_id/* arch/sparc/kernel/ds.c 1047 */;
	void *__unused cocci_id/* arch/sparc/kernel/ds.c 1028 */;
}
