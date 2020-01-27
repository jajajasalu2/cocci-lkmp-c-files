cocci_test_suite() {
	struct resource *cocci_id/* sound/soc/intel/common/sst-acpi.c 82 */;
	const struct acpi_device_id *cocci_id/* sound/soc/intel/common/sst-acpi.c 76 */;
	int cocci_id/* sound/soc/intel/common/sst-acpi.c 68 */;
	struct snd_soc_acpi_mach *cocci_id/* sound/soc/intel/common/sst-acpi.c 54 */;
	struct sst_acpi_desc *cocci_id/* sound/soc/intel/common/sst-acpi.c 53 */;
	struct sst_pdata *cocci_id/* sound/soc/intel/common/sst-acpi.c 52 */;
	struct sst_acpi_priv *cocci_id/* sound/soc/intel/common/sst-acpi.c 51 */;
	struct device *cocci_id/* sound/soc/intel/common/sst-acpi.c 50 */;
	struct platform_device *cocci_id/* sound/soc/intel/common/sst-acpi.c 49 */;
	const struct firmware *cocci_id/* sound/soc/intel/common/sst-acpi.c 47 */;
	void *cocci_id/* sound/soc/intel/common/sst-acpi.c 47 */;
	void cocci_id/* sound/soc/intel/common/sst-acpi.c 47 */;
	struct sst_acpi_priv {
		struct platform_device *pdev_mach;
		struct platform_device *pdev_pcm;
		struct sst_pdata sst_pdata;
		struct sst_acpi_desc *desc;
		struct snd_soc_acpi_mach *mach;
	} cocci_id/* sound/soc/intel/common/sst-acpi.c 39 */;
	struct sst_acpi_desc {
		const char *drv_name;
		struct snd_soc_acpi_mach *machines;
		int resindex_lpe_base;
		int resindex_pcicfg_base;
		int resindex_fw_base;
		int irqindex_host_ipc;
		int resindex_dma_base;
		int sst_id;
		int dma_engine;
		int dma_size;
	} cocci_id/* sound/soc/intel/common/sst-acpi.c 23 */;
	struct platform_driver cocci_id/* sound/soc/intel/common/sst-acpi.c 224 */;
	unsigned long cocci_id/* sound/soc/intel/common/sst-acpi.c 215 */;
	const struct acpi_device_id cocci_id/* sound/soc/intel/common/sst-acpi.c 214 */[];
	struct sst_acpi_desc cocci_id/* sound/soc/intel/common/sst-acpi.c 202 */;
}
