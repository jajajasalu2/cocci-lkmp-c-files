cocci_test_suite() {
	resource_size_t cocci_id/* drivers/firmware/arm_scpi.c 930 */;
	struct device_node *cocci_id/* drivers/firmware/arm_scpi.c 905 */;
	struct resource cocci_id/* drivers/firmware/arm_scpi.c 903 */;
	struct platform_device *cocci_id/* drivers/firmware/arm_scpi.c 900 */;
	const struct of_device_id cocci_id/* drivers/firmware/arm_scpi.c 895 */[];
	void *cocci_id/* drivers/firmware/arm_scpi.c 852 */;
	enum scpi_std_cmd{SCPI_CMD_INVALID=0x00, SCPI_CMD_SCPI_READY=0x01, SCPI_CMD_SCPI_CAPABILITIES=0x02, SCPI_CMD_SET_CSS_PWR_STATE=0x03, SCPI_CMD_GET_CSS_PWR_STATE=0x04, SCPI_CMD_SET_SYS_PWR_STATE=0x05, SCPI_CMD_SET_CPU_TIMER=0x06, SCPI_CMD_CANCEL_CPU_TIMER=0x07, SCPI_CMD_DVFS_CAPABILITIES=0x08, SCPI_CMD_GET_DVFS_INFO=0x09, SCPI_CMD_SET_DVFS=0x0a, SCPI_CMD_GET_DVFS=0x0b, SCPI_CMD_GET_DVFS_STAT=0x0c, SCPI_CMD_CLOCK_CAPABILITIES=0x0d, SCPI_CMD_GET_CLOCK_INFO=0x0e, SCPI_CMD_SET_CLOCK_VALUE=0x0f, SCPI_CMD_GET_CLOCK_VALUE=0x10, SCPI_CMD_PSU_CAPABILITIES=0x11, SCPI_CMD_GET_PSU_INFO=0x12, SCPI_CMD_SET_PSU=0x13, SCPI_CMD_GET_PSU=0x14, SCPI_CMD_SENSOR_CAPABILITIES=0x15, SCPI_CMD_SENSOR_INFO=0x16, SCPI_CMD_SENSOR_VALUE=0x17, SCPI_CMD_SENSOR_CFG_PERIODIC=0x18, SCPI_CMD_SENSOR_CFG_BOUNDS=0x19, SCPI_CMD_SENSOR_ASYNC_VALUE=0x1a, SCPI_CMD_SET_DEVICE_PWR_STATE=0x1b, SCPI_CMD_GET_DEVICE_PWR_STATE=0x1c, SCPI_CMD_COUNT,} cocci_id/* drivers/firmware/arm_scpi.c 85 */;
	struct attribute *cocci_id/* drivers/firmware/arm_scpi.c 845 */[];
	struct scpi_drvinfo *cocci_id/* drivers/firmware/arm_scpi.c 836 */;
	struct device_attribute *cocci_id/* drivers/firmware/arm_scpi.c 834 */;
	char *cocci_id/* drivers/firmware/arm_scpi.c 834 */;
	struct device *cocci_id/* drivers/firmware/arm_scpi.c 833 */;
	ssize_t cocci_id/* drivers/firmware/arm_scpi.c 833 */;
	struct scp_capabilities cocci_id/* drivers/firmware/arm_scpi.c 807 */;
	struct scpi_ops *cocci_id/* drivers/firmware/arm_scpi.c 798 */;
	void cocci_id/* drivers/firmware/arm_scpi.c 798 */;
	struct scpi_ops cocci_id/* drivers/firmware/arm_scpi.c 780 */;
	struct dev_pstate_set cocci_id/* drivers/firmware/arm_scpi.c 771 */;
	u8 cocci_id/* drivers/firmware/arm_scpi.c 760 */;
	__le32 *cocci_id/* drivers/firmware/arm_scpi.c 750 */;
	__le64 cocci_id/* drivers/firmware/arm_scpi.c 740 */;
	u64 *cocci_id/* drivers/firmware/arm_scpi.c 737 */;
	struct _scpi_sensor_info cocci_id/* drivers/firmware/arm_scpi.c 724 */;
	struct scpi_sensor_info *cocci_id/* drivers/firmware/arm_scpi.c 721 */;
	u16 *cocci_id/* drivers/firmware/arm_scpi.c 708 */;
	struct scpi_dvfs_info *cocci_id/* drivers/firmware/arm_scpi.c 687 */;
	struct scpi_opp *cocci_id/* drivers/firmware/arm_scpi.c 686 */;
	enum scpi_error_codes{SCPI_SUCCESS=0, SCPI_ERR_PARAM=1, SCPI_ERR_ALIGN=2, SCPI_ERR_SIZE=3, SCPI_ERR_HANDLER=4, SCPI_ERR_ACCESS=5, SCPI_ERR_RANGE=6, SCPI_ERR_TIMEOUT=7, SCPI_ERR_NOMEM=8, SCPI_ERR_PWRSTATE=9, SCPI_ERR_SUPPORT=10, SCPI_ERR_DEVICE=11, SCPI_ERR_BUSY=12, SCPI_ERR_MAX,} cocci_id/* drivers/firmware/arm_scpi.c 67 */;
	struct of_phandle_args cocci_id/* drivers/firmware/arm_scpi.c 654 */;
	struct dvfs_info cocci_id/* drivers/firmware/arm_scpi.c 614 */;
	const struct scpi_opp *cocci_id/* drivers/firmware/arm_scpi.c 605 */;
	const void *cocci_id/* drivers/firmware/arm_scpi.c 603 */;
	struct dvfs_set cocci_id/* drivers/firmware/arm_scpi.c 597 */;
	struct legacy_clk_set_value cocci_id/* drivers/firmware/arm_scpi.c 574 */;
	u16 cocci_id/* drivers/firmware/arm_scpi.c 571 */;
	unsigned long cocci_id/* drivers/firmware/arm_scpi.c 571 */;
	int cocci_id/* drivers/firmware/arm_scpi.c 571 */;
	struct clk_set_value cocci_id/* drivers/firmware/arm_scpi.c 562 */;
	__le32 cocci_id/* drivers/firmware/arm_scpi.c 550 */;
	__le16 cocci_id/* drivers/firmware/arm_scpi.c 536 */;
	struct clk_get_info cocci_id/* drivers/firmware/arm_scpi.c 535 */;
	unsigned long *cocci_id/* drivers/firmware/arm_scpi.c 532 */;
	u32 cocci_id/* drivers/firmware/arm_scpi.c 526 */;
	struct scpi_xfer cocci_id/* drivers/firmware/arm_scpi.c 457 */;
	struct scpi_xfer *cocci_id/* drivers/firmware/arm_scpi.c 448 */;
	struct scpi_chan *cocci_id/* drivers/firmware/arm_scpi.c 448 */;
	struct scpi_shared_mem __iomem *cocci_id/* drivers/firmware/arm_scpi.c 412 */;
	struct scpi_chan cocci_id/* drivers/firmware/arm_scpi.c 411 */;
	struct mbox_client *cocci_id/* drivers/firmware/arm_scpi.c 409 */;
	struct legacy_scpi_shared_mem __iomem *cocci_id/* drivers/firmware/arm_scpi.c 385 */;
	unsigned int cocci_id/* drivers/firmware/arm_scpi.c 382 */;
	int cocci_id/* drivers/firmware/arm_scpi.c 329 */[SCPI_ERR_MAX];
	struct dev_pstate_set {
		__le16 dev_id;
		u8 pstate;
	}__packed cocci_id/* drivers/firmware/arm_scpi.c 322 */;
	struct _scpi_sensor_info {
		__le16 sensor_id;
		u8 class;
		u8 trigger_type;
		char name[20];
	} cocci_id/* drivers/firmware/arm_scpi.c 315 */;
	struct dvfs_set {
		u8 domain;
		u8 index;
	}__packed cocci_id/* drivers/firmware/arm_scpi.c 310 */;
	struct dvfs_info {
		u8 domain;
		u8 opp_count;
		__le16 latency;
		struct {
			__le32 freq;
			__le32 m_volt;
		} opps[MAX_DVFS_OPPS];
	}__packed cocci_id/* drivers/firmware/arm_scpi.c 300 */;
	struct legacy_clk_set_value {
		__le32 rate;
		__le16 id;
		__le16 reserved;
	}__packed cocci_id/* drivers/firmware/arm_scpi.c 294 */;
	struct clk_set_value {
		__le16 id;
		__le16 reserved;
		__le32 rate;
	}__packed cocci_id/* drivers/firmware/arm_scpi.c 288 */;
	struct clk_get_info {
		__le16 id;
		__le16 flags;
		__le32 min_rate;
		__le32 max_rate;
		u8 name[20];
	}__packed cocci_id/* drivers/firmware/arm_scpi.c 280 */;
	struct scp_capabilities {
		__le32 protocol_version;
		__le32 event_version;
		__le32 platform_version;
		__le32 commands[4];
	}__packed cocci_id/* drivers/firmware/arm_scpi.c 273 */;
	struct legacy_scpi_shared_mem {
		__le32 status;
		u8 payload[0];
	}__packed cocci_id/* drivers/firmware/arm_scpi.c 268 */;
	struct scpi_shared_mem {
		__le32 command;
		__le32 status;
		u8 payload[0];
	}__packed cocci_id/* drivers/firmware/arm_scpi.c 262 */;
	struct scpi_drvinfo {
		u32 protocol_version;
		u32 firmware_version;
		bool is_legacy;
		int num_chans;
		int *commands;
	DECLARE_BITMAP(cmd_priority,LEGACY_SCPI_CMD_COUNT)
		;
		atomic_t next_chan;
		struct scpi_ops *scpi_ops;
		struct scpi_chan *channels;
		struct scpi_dvfs_info *dvfs[MAX_DVFS_DOMAINS];
	} cocci_id/* drivers/firmware/arm_scpi.c 245 */;
	struct scpi_chan {
		struct mbox_client cl;
		struct mbox_chan *chan;
		void __iomem *tx_payload;
		void __iomem *rx_payload;
		struct list_head rx_pending;
		struct list_head xfers_list;
		struct scpi_xfer *xfers;
		spinlock_t rx_lock;
		struct mutex xfers_lock;
		u8 token;
	} cocci_id/* drivers/firmware/arm_scpi.c 232 */;
	struct scpi_xfer {
		u32 slot;
		u32 cmd;
		u32 status;
		const void *tx_buf;
		void *rx_buf;
		unsigned int tx_len;
		unsigned int rx_len;
		struct list_head node;
		struct completion done;
	} cocci_id/* drivers/firmware/arm_scpi.c 220 */;
	int cocci_id/* drivers/firmware/arm_scpi.c 205 */[CMD_MAX_COUNT];
	enum scpi_drv_cmds{CMD_SCPI_CAPABILITIES=0, CMD_GET_CLOCK_INFO, CMD_GET_CLOCK_VALUE, CMD_SET_CLOCK_VALUE, CMD_GET_DVFS, CMD_SET_DVFS, CMD_GET_DVFS_INFO, CMD_SENSOR_CAPABILITIES, CMD_SENSOR_INFO, CMD_SENSOR_VALUE, CMD_SET_DEVICE_PWR_STATE, CMD_GET_DEVICE_PWR_STATE, CMD_MAX_COUNT,} cocci_id/* drivers/firmware/arm_scpi.c 174 */;
	int cocci_id/* drivers/firmware/arm_scpi.c 156 */[];
	enum legacy_scpi_std_cmd{LEGACY_SCPI_CMD_INVALID=0x00, LEGACY_SCPI_CMD_SCPI_READY=0x01, LEGACY_SCPI_CMD_SCPI_CAPABILITIES=0x02, LEGACY_SCPI_CMD_EVENT=0x03, LEGACY_SCPI_CMD_SET_CSS_PWR_STATE=0x04, LEGACY_SCPI_CMD_GET_CSS_PWR_STATE=0x05, LEGACY_SCPI_CMD_CFG_PWR_STATE_STAT=0x06, LEGACY_SCPI_CMD_GET_PWR_STATE_STAT=0x07, LEGACY_SCPI_CMD_SYS_PWR_STATE=0x08, LEGACY_SCPI_CMD_L2_READY=0x09, LEGACY_SCPI_CMD_SET_AP_TIMER=0x0a, LEGACY_SCPI_CMD_CANCEL_AP_TIME=0x0b, LEGACY_SCPI_CMD_DVFS_CAPABILITIES=0x0c, LEGACY_SCPI_CMD_GET_DVFS_INFO=0x0d, LEGACY_SCPI_CMD_SET_DVFS=0x0e, LEGACY_SCPI_CMD_GET_DVFS=0x0f, LEGACY_SCPI_CMD_GET_DVFS_STAT=0x10, LEGACY_SCPI_CMD_SET_RTC=0x11, LEGACY_SCPI_CMD_GET_RTC=0x12, LEGACY_SCPI_CMD_CLOCK_CAPABILITIES=0x13, LEGACY_SCPI_CMD_SET_CLOCK_INDEX=0x14, LEGACY_SCPI_CMD_SET_CLOCK_VALUE=0x15, LEGACY_SCPI_CMD_GET_CLOCK_VALUE=0x16, LEGACY_SCPI_CMD_PSU_CAPABILITIES=0x17, LEGACY_SCPI_CMD_SET_PSU=0x18, LEGACY_SCPI_CMD_GET_PSU=0x19, LEGACY_SCPI_CMD_SENSOR_CAPABILITIES=0x1a, LEGACY_SCPI_CMD_SENSOR_INFO=0x1b, LEGACY_SCPI_CMD_SENSOR_VALUE=0x1c, LEGACY_SCPI_CMD_SENSOR_CFG_PERIODIC=0x1d, LEGACY_SCPI_CMD_SENSOR_CFG_BOUNDS=0x1e, LEGACY_SCPI_CMD_SENSOR_ASYNC_VALUE=0x1f, LEGACY_SCPI_CMD_COUNT,} cocci_id/* drivers/firmware/arm_scpi.c 119 */;
	struct platform_driver cocci_id/* drivers/firmware/arm_scpi.c 1025 */;
}
