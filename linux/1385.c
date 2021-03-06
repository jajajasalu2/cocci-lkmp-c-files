cocci_test_suite() {
	u8 cocci_id/* drivers/usb/typec/tcpm/fusb302.c 957 */[40];
	const struct pd_message *cocci_id/* drivers/usb/typec/tcpm/fusb302.c 954 */;
	enum typec_port_type cocci_id/* drivers/usb/typec/tcpm/fusb302.c 913 */;
	enum typec_role cocci_id/* drivers/usb/typec/tcpm/fusb302.c 882 */;
	enum typec_data_role cocci_id/* drivers/usb/typec/tcpm/fusb302.c 882 */;
	struct fusb302_chip {
		struct device *dev;
		struct i2c_client *i2c_client;
		struct tcpm_port *tcpm_port;
		struct tcpc_dev tcpc_dev;
		struct regulator *vbus;
		spinlock_t irq_lock;
		struct work_struct irq_work;
		bool irq_suspended;
		bool irq_while_suspended;
		int gpio_int_n;
		int gpio_int_n_irq;
		struct extcon_dev *extcon;
		struct workqueue_struct *wq;
		struct delayed_work bc_lvl_handler;
		struct mutex lock;
		enum toggling_mode toggling_mode;
		enum src_current_status src_current_status;
		bool intr_togdone;
		bool intr_bc_lvl;
		bool intr_comp_chng;
		bool vconn_on;
		bool vbus_on;
		bool charge_on;
		bool vbus_present;
		enum typec_cc_polarity cc_polarity;
		enum typec_cc_status cc1;
		enum typec_cc_status cc2;
		u32 snk_pdo[PDO_MAX_OBJECTS];
#ifdef CONFIG_DEBUG_FS
		struct dentry *dentry;
		struct mutex logbuffer_lock;
		int logbuffer_head;
		int logbuffer_tail;
		u8 *logbuffer[LOG_BUFFER_ENTRIES];
#endif
	} cocci_id/* drivers/usb/typec/tcpm/fusb302.c 74 */;
	const u8 cocci_id/* drivers/usb/typec/tcpm/fusb302.c 59 */[];
	const enum src_current_status cocci_id/* drivers/usb/typec/tcpm/fusb302.c 588 */[];
	enum src_current_status{SRC_CURRENT_DEFAULT, SRC_CURRENT_MEDIUM, SRC_CURRENT_HIGH,} cocci_id/* drivers/usb/typec/tcpm/fusb302.c 53 */;
	enum src_current_status cocci_id/* drivers/usb/typec/tcpm/fusb302.c 469 */;
	enum toggling_mode{TOGGLING_MODE_OFF, TOGGLING_MODE_DRP, TOGGLING_MODE_SNK, TOGGLING_MODE_SRC,} cocci_id/* drivers/usb/typec/tcpm/fusb302.c 46 */;
	u8 *cocci_id/* drivers/usb/typec/tcpm/fusb302.c 278 */;
	const u8 *cocci_id/* drivers/usb/typec/tcpm/fusb302.c 248 */;
	const struct fusb302_chip *cocci_id/* drivers/usb/typec/tcpm/fusb302.c 230 */;
	char cocci_id/* drivers/usb/typec/tcpm/fusb302.c 212 */[NAME_MAX];
	struct seq_file *cocci_id/* drivers/usb/typec/tcpm/fusb302.c 191 */;
	void *cocci_id/* drivers/usb/typec/tcpm/fusb302.c 191 */;
	struct i2c_driver cocci_id/* drivers/usb/typec/tcpm/fusb302.c 1841 */;
	const struct dev_pm_ops cocci_id/* drivers/usb/typec/tcpm/fusb302.c 1836 */;
	const struct i2c_device_id cocci_id/* drivers/usb/typec/tcpm/fusb302.c 1830 */[];
	const struct of_device_id cocci_id/* drivers/usb/typec/tcpm/fusb302.c 1824 */[];
	struct i2c_adapter *cocci_id/* drivers/usb/typec/tcpm/fusb302.c 1688 */;
	const struct i2c_device_id *cocci_id/* drivers/usb/typec/tcpm/fusb302.c 1685 */;
	struct i2c_client *cocci_id/* drivers/usb/typec/tcpm/fusb302.c 1684 */;
	struct fwnode_handle *cocci_id/* drivers/usb/typec/tcpm/fusb302.c 1673 */;
	struct device *cocci_id/* drivers/usb/typec/tcpm/fusb302.c 1673 */;
	const struct property_entry cocci_id/* drivers/usb/typec/tcpm/fusb302.c 1663 */[];
	const u32 cocci_id/* drivers/usb/typec/tcpm/fusb302.c 1659 */[];
	struct device_node *cocci_id/* drivers/usb/typec/tcpm/fusb302.c 1621 */;
	struct pd_message cocci_id/* drivers/usb/typec/tcpm/fusb302.c 1498 */;
	bool cocci_id/* drivers/usb/typec/tcpm/fusb302.c 1493 */;
	irqreturn_t cocci_id/* drivers/usb/typec/tcpm/fusb302.c 1466 */;
	u8 cocci_id/* drivers/usb/typec/tcpm/fusb302.c 1418 */[4];
	struct pd_message *cocci_id/* drivers/usb/typec/tcpm/fusb302.c 1414 */;
	unsigned long cocci_id/* drivers/usb/typec/tcpm/fusb302.c 140 */;
	u64 cocci_id/* drivers/usb/typec/tcpm/fusb302.c 139 */;
	char cocci_id/* drivers/usb/typec/tcpm/fusb302.c 138 */[LOG_BUFFER_ENTRY_SIZE];
	va_list cocci_id/* drivers/usb/typec/tcpm/fusb302.c 136 */;
	const char *cocci_id/* drivers/usb/typec/tcpm/fusb302.c 135 */;
	struct fusb302_chip *cocci_id/* drivers/usb/typec/tcpm/fusb302.c 135 */;
	void cocci_id/* drivers/usb/typec/tcpm/fusb302.c 135 */;
	enum toggling_mode cocci_id/* drivers/usb/typec/tcpm/fusb302.c 1300 */;
	enum typec_cc_status *cocci_id/* drivers/usb/typec/tcpm/fusb302.c 1236 */;
	enum typec_cc_polarity cocci_id/* drivers/usb/typec/tcpm/fusb302.c 1235 */;
	const char *const cocci_id/* drivers/usb/typec/tcpm/fusb302.c 1125 */[];
	struct tcpc_dev *cocci_id/* drivers/usb/typec/tcpm/fusb302.c 1109 */;
	enum typec_cc_status cocci_id/* drivers/usb/typec/tcpm/fusb302.c 1068 */;
	u8 cocci_id/* drivers/usb/typec/tcpm/fusb302.c 1066 */;
	int cocci_id/* drivers/usb/typec/tcpm/fusb302.c 1065 */;
	struct fusb302_chip cocci_id/* drivers/usb/typec/tcpm/fusb302.c 1063 */;
	struct work_struct *cocci_id/* drivers/usb/typec/tcpm/fusb302.c 1061 */;
	enum tcpm_transmit_type cocci_id/* drivers/usb/typec/tcpm/fusb302.c 1019 */;
}
