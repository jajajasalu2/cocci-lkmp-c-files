cocci_test_suite() {
	struct hdmi_hdcp_reg_data cocci_id/* drivers/gpu/drm/msm/hdmi/hdmi_hdcp.c 995 */[];
	u16 *cocci_id/* drivers/gpu/drm/msm/hdmi/hdmi_hdcp.c 864 */;
	struct i2c_msg cocci_id/* drivers/gpu/drm/msm/hdmi/hdmi_hdcp.c 83 */[];
	u8 cocci_id/* drivers/gpu/drm/msm/hdmi/hdmi_hdcp.c 810 */[2];
	u8 *cocci_id/* drivers/gpu/drm/msm/hdmi/hdmi_hdcp.c 79 */;
	u8 cocci_id/* drivers/gpu/drm/msm/hdmi/hdmi_hdcp.c 78 */;
	u16 cocci_id/* drivers/gpu/drm/msm/hdmi/hdmi_hdcp.c 78 */;
	struct hdmi *cocci_id/* drivers/gpu/drm/msm/hdmi/hdmi_hdcp.c 78 */;
	int cocci_id/* drivers/gpu/drm/msm/hdmi/hdmi_hdcp.c 78 */;
	u32 cocci_id/* drivers/gpu/drm/msm/hdmi/hdmi_hdcp.c 694 */[2];
	u8 cocci_id/* drivers/gpu/drm/msm/hdmi/hdmi_hdcp.c 693 */[5];
	unsigned long cocci_id/* drivers/gpu/drm/msm/hdmi/hdmi_hdcp.c 559 */;
	u32 cocci_id/* drivers/gpu/drm/msm/hdmi/hdmi_hdcp.c 558 */;
	struct hdmi_hdcp_ctrl *cocci_id/* drivers/gpu/drm/msm/hdmi/hdmi_hdcp.c 555 */;
	void cocci_id/* drivers/gpu/drm/msm/hdmi/hdmi_hdcp.c 555 */;
	struct hdmi_hdcp_ctrl {
		struct hdmi *hdmi;
		u32 auth_retries;
		bool tz_hdcp;
		enum hdmi_hdcp_state hdcp_state;
		struct work_struct hdcp_auth_work;
		struct work_struct hdcp_reauth_work;
#define AUTH_ABORT_EV 1
#define AUTH_RESULT_RDY_EV 2
		unsigned long auth_event;
		wait_queue_head_t auth_event_queue;
		u32 ksv_fifo_w_index;
		u32 aksv_lsb;
		u32 aksv_msb;
		bool aksv_valid;
		u32 ds_type;
		u32 bksv_lsb;
		u32 bksv_msb;
		u8 dev_count;
		u8 depth;
		u8 ksv_list[5 * 127];
		bool max_cascade_exceeded;
		bool max_dev_exceeded;
	} cocci_id/* drivers/gpu/drm/msm/hdmi/hdmi_hdcp.c 48 */;
	struct hdmi_hdcp_reg_data {
		u32 reg_id;
		u32 off;
		char *name;
		u32 reg_val;
	} cocci_id/* drivers/gpu/drm/msm/hdmi/hdmi_hdcp.c 41 */;
	bool cocci_id/* drivers/gpu/drm/msm/hdmi/hdmi_hdcp.c 361 */;
	enum hdmi_hdcp_state{HDCP_STATE_NO_AKSV, HDCP_STATE_INACTIVE, HDCP_STATE_AUTHENTICATING, HDCP_STATE_AUTHENTICATED, HDCP_STATE_AUTH_FAILED,} cocci_id/* drivers/gpu/drm/msm/hdmi/hdmi_hdcp.c 33 */;
	enum DS_TYPE{DS_UNKNOWN, DS_RECEIVER, DS_REPEATER,} cocci_id/* drivers/gpu/drm/msm/hdmi/hdmi_hdcp.c 27 */;
	struct qcom_scm_hdcp_req cocci_id/* drivers/gpu/drm/msm/hdmi/hdmi_hdcp.c 160 */[QCOM_SCM_HDCP_MAX_REQ_CNT];
	u32 *cocci_id/* drivers/gpu/drm/msm/hdmi/hdmi_hdcp.c 156 */;
	struct hdmi_hdcp_ctrl cocci_id/* drivers/gpu/drm/msm/hdmi/hdmi_hdcp.c 1237 */;
	struct work_struct *cocci_id/* drivers/gpu/drm/msm/hdmi/hdmi_hdcp.c 1234 */;
	u8 cocci_id/* drivers/gpu/drm/msm/hdmi/hdmi_hdcp.c 121 */[HDCP_DDC_WRITE_MAX_BYTE_NUM];
	u32 cocci_id/* drivers/gpu/drm/msm/hdmi/hdmi_hdcp.c 1004 */[ARRAY_SIZE(reg_data)];
	struct hdmi_hdcp_reg_data *cocci_id/* drivers/gpu/drm/msm/hdmi/hdmi_hdcp.c 1002 */;
}
