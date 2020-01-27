cocci_test_suite() {
	const struct ocotp_devtype_data *cocci_id/* drivers/nvmem/imx-ocotp-scu.c 96 */;
	bool cocci_id/* drivers/nvmem/imx-ocotp-scu.c 93 */;
	struct ocotp_devtype_data cocci_id/* drivers/nvmem/imx-ocotp-scu.c 66 */;
	struct imx_sc_msg_misc_fuse_read {
		struct imx_sc_rpc_msg hdr;
		u32 word;
	}__packed cocci_id/* drivers/nvmem/imx-ocotp-scu.c 48 */;
	struct ocotp_priv {
		struct device *dev;
		const struct ocotp_devtype_data *data;
		struct imx_sc_ipc *nvmem_ipc;
	} cocci_id/* drivers/nvmem/imx-ocotp-scu.c 42 */;
	struct ocotp_devtype_data {
		int devtype;
		int nregs;
		u32 num_region;
		struct ocotp_region region[];
	} cocci_id/* drivers/nvmem/imx-ocotp-scu.c 35 */;
	struct ocotp_region {
		u32 start;
		u32 end;
		u32 flag;
	} cocci_id/* drivers/nvmem/imx-ocotp-scu.c 29 */;
	struct platform_driver cocci_id/* drivers/nvmem/imx-ocotp-scu.c 265 */;
	struct nvmem_device *cocci_id/* drivers/nvmem/imx-ocotp-scu.c 244 */;
	struct ocotp_priv *cocci_id/* drivers/nvmem/imx-ocotp-scu.c 243 */;
	struct device *cocci_id/* drivers/nvmem/imx-ocotp-scu.c 242 */;
	struct platform_device *cocci_id/* drivers/nvmem/imx-ocotp-scu.c 240 */;
	void *cocci_id/* drivers/nvmem/imx-ocotp-scu.c 234 */;
	const struct of_device_id cocci_id/* drivers/nvmem/imx-ocotp-scu.c 233 */[];
	struct nvmem_config cocci_id/* drivers/nvmem/imx-ocotp-scu.c 223 */;
	enum ocotp_devtype{IMX8QXP, IMX8QM,} cocci_id/* drivers/nvmem/imx-ocotp-scu.c 21 */;
	struct arm_smccc_res cocci_id/* drivers/nvmem/imx-ocotp-scu.c 185 */;
	u8 *cocci_id/* drivers/nvmem/imx-ocotp-scu.c 172 */;
	size_t cocci_id/* drivers/nvmem/imx-ocotp-scu.c 134 */;
	unsigned int cocci_id/* drivers/nvmem/imx-ocotp-scu.c 133 */;
	struct imx_sc_rpc_msg *cocci_id/* drivers/nvmem/imx-ocotp-scu.c 114 */;
	struct imx_sc_msg_misc_fuse_read cocci_id/* drivers/nvmem/imx-ocotp-scu.c 113 */;
	u32 *cocci_id/* drivers/nvmem/imx-ocotp-scu.c 111 */;
	u32 cocci_id/* drivers/nvmem/imx-ocotp-scu.c 110 */;
	struct imx_sc_ipc *cocci_id/* drivers/nvmem/imx-ocotp-scu.c 110 */;
	int cocci_id/* drivers/nvmem/imx-ocotp-scu.c 110 */;
}
