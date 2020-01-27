cocci_test_suite() {
	enum{INTEL_DSM_FNS=0, INTEL_DSM_V18_SWITCH=3, INTEL_DSM_V33_SWITCH=4, INTEL_DSM_HS_CAPS=8,} cocci_id/* drivers/mmc/host/sdhci-acpi.c 93 */;
	struct platform_driver cocci_id/* drivers/mmc/host/sdhci-acpi.c 880 */;
	void *cocci_id/* drivers/mmc/host/sdhci-acpi.c 78 */;
	struct sdhci_acpi_host cocci_id/* drivers/mmc/host/sdhci-acpi.c 702 */;
	struct sdhci_acpi_host {
		struct sdhci_host *host;
		const struct sdhci_acpi_slot *slot;
		struct platform_device *pdev;
		bool use_runtime_pm;
		unsigned long private[0]____cacheline_aligned;
	} cocci_id/* drivers/mmc/host/sdhci-acpi.c 70 */;
	resource_size_t cocci_id/* drivers/mmc/host/sdhci-acpi.c 669 */;
	struct resource *cocci_id/* drivers/mmc/host/sdhci-acpi.c 668 */;
	const struct sdhci_acpi_uid_slot *cocci_id/* drivers/mmc/host/sdhci-acpi.c 652 */;
	const struct sdhci_acpi_slot *cocci_id/* drivers/mmc/host/sdhci-acpi.c 650 */;
	const struct acpi_device_id cocci_id/* drivers/mmc/host/sdhci-acpi.c 632 */[];
	const struct sdhci_acpi_uid_slot cocci_id/* drivers/mmc/host/sdhci-acpi.c 611 */[];
	struct sdhci_acpi_uid_slot {
		const char *hid;
		const char *uid;
		const struct sdhci_acpi_slot *slot;
	} cocci_id/* drivers/mmc/host/sdhci-acpi.c 605 */;
	const struct sdhci_acpi_slot cocci_id/* drivers/mmc/host/sdhci-acpi.c 597 */;
	const struct sdhci_acpi_chip cocci_id/* drivers/mmc/host/sdhci-acpi.c 574 */;
	const struct sdhci_ops cocci_id/* drivers/mmc/host/sdhci-acpi.c 567 */;
	struct sdhci_host *cocci_id/* drivers/mmc/host/sdhci-acpi.c 553 */;
	struct mmc_ios *cocci_id/* drivers/mmc/host/sdhci-acpi.c 551 */;
	struct mmc_host *cocci_id/* drivers/mmc/host/sdhci-acpi.c 551 */;
	void cocci_id/* drivers/mmc/host/sdhci-acpi.c 551 */;
	struct sdhci_acpi_slot {
		const struct sdhci_acpi_chip *chip;
		unsigned int quirks;
		unsigned int quirks2;
		unsigned long caps;
		unsigned int caps2;
		mmc_pm_flag_t pm_caps;
		unsigned int flags;
		size_t priv_size;
		int (*probe_slot)(struct platform_device *,
				  struct acpi_device *);
		int (*remove_slot)(struct platform_device *);
		int (*free_slot)(struct platform_device *pdev);
		int (*setup_host)(struct platform_device *pdev);
	} cocci_id/* drivers/mmc/host/sdhci-acpi.c 55 */;
	int *cocci_id/* drivers/mmc/host/sdhci-acpi.c 533 */;
	struct mmc_card *cocci_id/* drivers/mmc/host/sdhci-acpi.c 531 */;
	irqreturn_t cocci_id/* drivers/mmc/host/sdhci-acpi.c 462 */;
	struct sdhci_acpi_chip {
		const struct sdhci_ops *ops;
		unsigned int quirks;
		unsigned int quirks2;
		unsigned long caps;
		unsigned int caps2;
		mmc_pm_flag_t pm_caps;
	} cocci_id/* drivers/mmc/host/sdhci-acpi.c 46 */;
	struct intel_host cocci_id/* drivers/mmc/host/sdhci-acpi.c 430 */;
	enum{SDHCI_ACPI_SD_CD=BIT(0), SDHCI_ACPI_RUNTIME_PM=BIT(1), SDHCI_ACPI_SD_CD_OVERRIDE_LEVEL=BIT(2),} cocci_id/* drivers/mmc/host/sdhci-acpi.c 40 */;
	struct sdhci_acpi_host *cocci_id/* drivers/mmc/host/sdhci-acpi.c 377 */;
	struct platform_device *cocci_id/* drivers/mmc/host/sdhci-acpi.c 375 */;
	struct acpi_device *cocci_id/* drivers/mmc/host/sdhci-acpi.c 375 */;
	unsigned long cocci_id/* drivers/mmc/host/sdhci-acpi.c 357 */;
	struct pci_dev *cocci_id/* drivers/mmc/host/sdhci-acpi.c 301 */;
	const struct x86_cpu_id cocci_id/* drivers/mmc/host/sdhci-acpi.c 236 */[];
	bool cocci_id/* drivers/mmc/host/sdhci-acpi.c 234 */;
	u8 cocci_id/* drivers/mmc/host/sdhci-acpi.c 200 */;
	u32 cocci_id/* drivers/mmc/host/sdhci-acpi.c 173 */;
	size_t cocci_id/* drivers/mmc/host/sdhci-acpi.c 122 */;
	union acpi_object *cocci_id/* drivers/mmc/host/sdhci-acpi.c 112 */;
	u32 *cocci_id/* drivers/mmc/host/sdhci-acpi.c 110 */;
	unsigned int cocci_id/* drivers/mmc/host/sdhci-acpi.c 110 */;
	struct intel_host *cocci_id/* drivers/mmc/host/sdhci-acpi.c 109 */;
	struct device *cocci_id/* drivers/mmc/host/sdhci-acpi.c 109 */;
	int cocci_id/* drivers/mmc/host/sdhci-acpi.c 109 */;
	const guid_t cocci_id/* drivers/mmc/host/sdhci-acpi.c 105 */;
	struct intel_host {
		u32 dsm_fns;
		u32 hs_caps;
	} cocci_id/* drivers/mmc/host/sdhci-acpi.c 100 */;
}
