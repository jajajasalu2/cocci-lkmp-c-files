cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/memory/brcmstb_dpfe.c 927 */;
	const struct of_device_id cocci_id/* drivers/memory/brcmstb_dpfe.c 915 */[];
	struct resource *cocci_id/* drivers/memory/brcmstb_dpfe.c 848 */;
	struct platform_device *cocci_id/* drivers/memory/brcmstb_dpfe.c 844 */;
	struct device_attribute *cocci_id/* drivers/memory/brcmstb_dpfe.c 813 */;
	unsigned long cocci_id/* drivers/memory/brcmstb_dpfe.c 762 */;
	const char *cocci_id/* drivers/memory/brcmstb_dpfe.c 757 */;
	size_t cocci_id/* drivers/memory/brcmstb_dpfe.c 757 */;
	u8 cocci_id/* drivers/memory/brcmstb_dpfe.c 728 */;
	char *cocci_id/* drivers/memory/brcmstb_dpfe.c 686 */;
	ssize_t cocci_id/* drivers/memory/brcmstb_dpfe.c 685 */;
	struct dpfe_firmware_header *cocci_id/* drivers/memory/brcmstb_dpfe.c 661 */;
	u32 cocci_id/* drivers/memory/brcmstb_dpfe.c 627 */[MSG_FIELD_MAX];
	const void *cocci_id/* drivers/memory/brcmstb_dpfe.c 619 */;
	struct init_data cocci_id/* drivers/memory/brcmstb_dpfe.c 618 */;
	struct device *cocci_id/* drivers/memory/brcmstb_dpfe.c 614 */;
	u32 __iomem *cocci_id/* drivers/memory/brcmstb_dpfe.c 561 */;
	bool cocci_id/* drivers/memory/brcmstb_dpfe.c 513 */;
	const struct dpfe_firmware_header *cocci_id/* drivers/memory/brcmstb_dpfe.c 511 */;
	void *cocci_id/* drivers/memory/brcmstb_dpfe.c 511 */;
	const struct firmware *cocci_id/* drivers/memory/brcmstb_dpfe.c 509 */;
	struct init_data *cocci_id/* drivers/memory/brcmstb_dpfe.c 508 */;
	const u32 *cocci_id/* drivers/memory/brcmstb_dpfe.c 429 */;
	u32 cocci_id/* drivers/memory/brcmstb_dpfe.c 427 */[];
	int cocci_id/* drivers/memory/brcmstb_dpfe.c 426 */;
	unsigned int cocci_id/* drivers/memory/brcmstb_dpfe.c 415 */;
	ssize_t *cocci_id/* drivers/memory/brcmstb_dpfe.c 375 */;
	const u32 cocci_id/* drivers/memory/brcmstb_dpfe.c 362 */[];
	void __iomem *cocci_id/* drivers/memory/brcmstb_dpfe.c 340 */;
	u32 cocci_id/* drivers/memory/brcmstb_dpfe.c 323 */;
	struct brcmstb_dpfe_priv *cocci_id/* drivers/memory/brcmstb_dpfe.c 321 */;
	void cocci_id/* drivers/memory/brcmstb_dpfe.c 321 */;
	const struct dpfe_api cocci_id/* drivers/memory/brcmstb_dpfe.c 269 */;
	struct attribute *cocci_id/* drivers/memory/brcmstb_dpfe.c 218 */[];
	ssize_t cocci_id/* drivers/memory/brcmstb_dpfe.c 205 */(struct device *,
								struct device_attribute *,
								char *);
	ssize_t cocci_id/* drivers/memory/brcmstb_dpfe.c 202 */(struct device *,
								struct device_attribute *,
								const char *,
								size_t);
	const char *cocci_id/* drivers/memory/brcmstb_dpfe.c 191 */[];
	struct brcmstb_dpfe_priv {
		void __iomem *regs;
		void __iomem *dmem;
		void __iomem *imem;
		struct device *dev;
		const struct dpfe_api *dpfe_api;
		struct mutex lock;
	} cocci_id/* drivers/memory/brcmstb_dpfe.c 182 */;
	struct dpfe_api {
		int version;
		const char *fw_name;
		const struct attribute_group **sysfs_attrs;
		u32 command[DPFE_CMD_MAX][MSG_FIELD_MAX];
	} cocci_id/* drivers/memory/brcmstb_dpfe.c 174 */;
	struct init_data {
		unsigned int dmem_len;
		unsigned int imem_len;
		unsigned int chksum;
		bool is_big_endian;
	} cocci_id/* drivers/memory/brcmstb_dpfe.c 166 */;
	struct dpfe_firmware_header {
		u32 magic;
		u32 sequence;
		u32 version;
		u32 imem_size;
		u32 dmem_size;
	} cocci_id/* drivers/memory/brcmstb_dpfe.c 157 */;
	enum dpfe_commands{DPFE_CMD_GET_INFO, DPFE_CMD_GET_REFRESH, DPFE_CMD_GET_VENDOR, DPFE_CMD_MAX,} cocci_id/* drivers/memory/brcmstb_dpfe.c 133 */;
	enum dpfe_msg_fields{MSG_HEADER, MSG_COMMAND, MSG_ARG_COUNT, MSG_ARG0, MSG_FIELD_MAX=16,} cocci_id/* drivers/memory/brcmstb_dpfe.c 125 */;
}
