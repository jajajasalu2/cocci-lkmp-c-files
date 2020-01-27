cocci_test_suite() {
	size_t cocci_id/* drivers/char/ipmi/ipmi_powernv.c 60 */;
	u8 cocci_id/* drivers/char/ipmi/ipmi_powernv.c 45 */;
	struct ipmi_smi *cocci_id/* drivers/char/ipmi/ipmi_powernv.c 36 */;
	struct platform_driver cocci_id/* drivers/char/ipmi/ipmi_powernv.c 301 */;
	const struct of_device_id cocci_id/* drivers/char/ipmi/ipmi_powernv.c 295 */[];
	u32 cocci_id/* drivers/char/ipmi/ipmi_powernv.c 215 */;
	struct device *cocci_id/* drivers/char/ipmi/ipmi_powernv.c 214 */;
	struct platform_device *cocci_id/* drivers/char/ipmi/ipmi_powernv.c 211 */;
	struct ipmi_smi_powernv *cocci_id/* drivers/char/ipmi/ipmi_powernv.c 205 */;
	irqreturn_t cocci_id/* drivers/char/ipmi/ipmi_powernv.c 203 */;
	void *cocci_id/* drivers/char/ipmi/ipmi_powernv.c 203 */;
	int cocci_id/* drivers/char/ipmi/ipmi_powernv.c 203 */;
	struct ipmi_smi_powernv {
		u64 interface_id;
		struct ipmi_smi *intf;
		unsigned int irq;
		spinlock_t msg_lock;
		struct ipmi_smi_msg *cur_msg;
		struct opal_ipmi_msg *opal_msg;
	} cocci_id/* drivers/char/ipmi/ipmi_powernv.c 20 */;
	const struct ipmi_smi_handlers cocci_id/* drivers/char/ipmi/ipmi_powernv.c 194 */;
	void cocci_id/* drivers/char/ipmi/ipmi_powernv.c 187 */;
	bool cocci_id/* drivers/char/ipmi/ipmi_powernv.c 183 */;
	uint64_t cocci_id/* drivers/char/ipmi/ipmi_powernv.c 115 */;
	unsigned long cocci_id/* drivers/char/ipmi/ipmi_powernv.c 114 */;
	struct ipmi_smi_msg *cocci_id/* drivers/char/ipmi/ipmi_powernv.c 113 */;
	struct opal_ipmi_msg *cocci_id/* drivers/char/ipmi/ipmi_powernv.c 112 */;
}
