cocci_test_suite() {
	bool cocci_id/* drivers/spmi/spmi-pmic-arb.c 879 */;
	enum pmic_arb_channel{PMIC_ARB_CHANNEL_RW, PMIC_ARB_CHANNEL_OBS,} cocci_id/* drivers/spmi/spmi-pmic-arb.c 87 */;
	struct apid_data *cocci_id/* drivers/spmi/spmi-pmic-arb.c 830 */;
	enum pmic_arb_channel cocci_id/* drivers/spmi/spmi-pmic-arb.c 823 */;
	u32 *cocci_id/* drivers/spmi/spmi-pmic-arb.c 776 */;
	irq_hw_number_t cocci_id/* drivers/spmi/spmi-pmic-arb.c 759 */;
	struct irq_fwspec *cocci_id/* drivers/spmi/spmi-pmic-arb.c 758 */;
	void *cocci_id/* drivers/spmi/spmi-pmic-arb.c 755 */;
	irq_flow_handler_t cocci_id/* drivers/spmi/spmi-pmic-arb.c 739 */;
	unsigned int *cocci_id/* drivers/spmi/spmi-pmic-arb.c 694 */;
	unsigned long *cocci_id/* drivers/spmi/spmi-pmic-arb.c 693 */;
	struct irq_chip cocci_id/* drivers/spmi/spmi-pmic-arb.c 680 */;
	struct irq_domain *cocci_id/* drivers/spmi/spmi-pmic-arb.c 661 */;
	enum pmic_arb_cmd_op_code{PMIC_ARB_OP_EXT_WRITEL=0, PMIC_ARB_OP_EXT_READL=1, PMIC_ARB_OP_EXT_WRITE=2, PMIC_ARB_OP_RESET=3, PMIC_ARB_OP_SLEEP=4, PMIC_ARB_OP_SHUTDOWN=5, PMIC_ARB_OP_WAKEUP=6, PMIC_ARB_OP_AUTHENTICATE=7, PMIC_ARB_OP_MSTR_READ=8, PMIC_ARB_OP_MSTR_WRITE=9, PMIC_ARB_OP_EXT_READ=13, PMIC_ARB_OP_WRITE=14, PMIC_ARB_OP_READ=15, PMIC_ARB_OP_ZERO_WRITE=16,} cocci_id/* drivers/spmi/spmi-pmic-arb.c 66 */;
	bool *cocci_id/* drivers/spmi/spmi-pmic-arb.c 647 */;
	enum irqchip_irq_state cocci_id/* drivers/spmi/spmi-pmic-arb.c 646 */;
	struct irq_data *cocci_id/* drivers/spmi/spmi-pmic-arb.c 645 */;
	struct spmi_pmic_arb_qpnpint_type cocci_id/* drivers/spmi/spmi-pmic-arb.c 604 */;
	u8 cocci_id/* drivers/spmi/spmi-pmic-arb.c 584 */[2];
	enum pmic_arb_chnl_status{PMIC_ARB_STATUS_DONE=BIT(0), PMIC_ARB_STATUS_FAILURE=BIT(1), PMIC_ARB_STATUS_DENIED=BIT(2), PMIC_ARB_STATUS_DROPPED=BIT(3),} cocci_id/* drivers/spmi/spmi-pmic-arb.c 55 */;
	struct irq_chip *cocci_id/* drivers/spmi/spmi-pmic-arb.c 531 */;
	const struct pmic_arb_ver_ops *cocci_id/* drivers/spmi/spmi-pmic-arb.c 530 */;
	struct irq_desc *cocci_id/* drivers/spmi/spmi-pmic-arb.c 527 */;
	u32 cocci_id/* drivers/spmi/spmi-pmic-arb.c 508 */;
	unsigned int cocci_id/* drivers/spmi/spmi-pmic-arb.c 507 */;
	u8 cocci_id/* drivers/spmi/spmi-pmic-arb.c 488 */;
	u16 cocci_id/* drivers/spmi/spmi-pmic-arb.c 485 */;
	struct spmi_pmic_arb *cocci_id/* drivers/spmi/spmi-pmic-arb.c 485 */;
	int cocci_id/* drivers/spmi/spmi-pmic-arb.c 485 */;
	void cocci_id/* drivers/spmi/spmi-pmic-arb.c 485 */;
	struct spmi_pmic_arb_qpnpint_type {
		u8 type;
		u8 polarity_high;
		u8 polarity_low;
	}__packed cocci_id/* drivers/spmi/spmi-pmic-arb.c 453 */;
	enum qpnpint_regs{QPNPINT_REG_RT_STS=0x10, QPNPINT_REG_SET_TYPE=0x11, QPNPINT_REG_POLARITY_HIGH=0x12, QPNPINT_REG_POLARITY_LOW=0x13, QPNPINT_REG_LATCHED_CLR=0x14, QPNPINT_REG_EN_SET=0x15, QPNPINT_REG_EN_CLR=0x16, QPNPINT_REG_LATCHED_STS=0x18,} cocci_id/* drivers/spmi/spmi-pmic-arb.c 442 */;
	const u8 *cocci_id/* drivers/spmi/spmi-pmic-arb.c 390 */;
	u8 *cocci_id/* drivers/spmi/spmi-pmic-arb.c 337 */;
	size_t cocci_id/* drivers/spmi/spmi-pmic-arb.c 337 */;
	struct spmi_controller *cocci_id/* drivers/spmi/spmi-pmic-arb.c 323 */;
	unsigned long cocci_id/* drivers/spmi/spmi-pmic-arb.c 295 */;
	struct pmic_arb_ver_ops {
		const char *ver_str;
		int (*ppid_to_apid)(struct spmi_pmic_arb *pmic_arb, u16 ppid);
		int (*offset)(struct spmi_pmic_arb *pmic_arb, u8 sid,
			      u16 addr, enum pmic_arb_channel ch_type);
		u32 (*fmt_cmd)(u8 opc, u8 sid, u16 addr, u8 bc);
		int (*non_data_cmd)(struct spmi_controller *ctrl, u8 opc,
				    u8 sid);
		void __iomem *(*owner_acc_status)(struct spmi_pmic_arb *pmic_arb,
						  u8 m, u16 n);
		void __iomem *(*acc_enable)(struct spmi_pmic_arb *pmic_arb,
					    u16 n);
		void __iomem *(*irq_status)(struct spmi_pmic_arb *pmic_arb,
					    u16 n);
		void __iomem *(*irq_clear)(struct spmi_pmic_arb *pmic_arb,
					   u16 n);
		u32 (*apid_map_offset)(u16 n);
	} cocci_id/* drivers/spmi/spmi-pmic-arb.c 184 */;
	struct spmi_pmic_arb {
		void __iomem *rd_base;
		void __iomem *wr_base;
		void __iomem *intr;
		void __iomem *cnfg;
		void __iomem *core;
		resource_size_t core_size;
		raw_spinlock_t lock;
		u8 channel;
		int irq;
		u8 ee;
		u16 min_apid;
		u16 max_apid;
		u32 *mapping_table;
	DECLARE_BITMAP(mapping_table_valid,PMIC_ARB_MAX_PERIPHS)
		;
		struct irq_domain *domain;
		struct spmi_controller *spmic;
		const struct pmic_arb_ver_ops *ver_ops;
		u16 *ppid_to_apid;
		u16 last_apid;
		struct apid_data apid_data[PMIC_ARB_MAX_PERIPHS];
	} cocci_id/* drivers/spmi/spmi-pmic-arb.c 141 */;
	struct platform_driver cocci_id/* drivers/spmi/spmi-pmic-arb.c 1341 */;
	const struct of_device_id cocci_id/* drivers/spmi/spmi-pmic-arb.c 1335 */[];
	struct apid_data {
		u16 ppid;
		u8 write_ee;
		u8 irq_ee;
	} cocci_id/* drivers/spmi/spmi-pmic-arb.c 116 */;
	struct resource *cocci_id/* drivers/spmi/spmi-pmic-arb.c 1156 */;
	struct platform_device *cocci_id/* drivers/spmi/spmi-pmic-arb.c 1152 */;
	const struct irq_domain_ops cocci_id/* drivers/spmi/spmi-pmic-arb.c 1145 */;
	struct pmic_arb_ver_ops cocci_id/* drivers/spmi/spmi-pmic-arb.c 114 */;
	const struct pmic_arb_ver_ops cocci_id/* drivers/spmi/spmi-pmic-arb.c 1093 */;
	void __iomem *cocci_id/* drivers/spmi/spmi-pmic-arb.c 1029 */;
}
