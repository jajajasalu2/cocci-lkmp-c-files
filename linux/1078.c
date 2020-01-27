cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/cpufreq/brcmstb-avs-cpufreq.c 729 */;
	const struct of_device_id cocci_id/* drivers/cpufreq/brcmstb-avs-cpufreq.c 723 */[];
	struct cpufreq_driver cocci_id/* drivers/cpufreq/brcmstb-avs-cpufreq.c 682 */;
	struct freq_attr *cocci_id/* drivers/cpufreq/brcmstb-avs-cpufreq.c 672 */[];
	ssize_t cocci_id/* drivers/cpufreq/brcmstb-avs-cpufreq.c 659 */;
	struct pmap cocci_id/* drivers/cpufreq/brcmstb-avs-cpufreq.c 625 */;
	struct device *cocci_id/* drivers/cpufreq/brcmstb-avs-cpufreq.c 574 */;
	struct platform_device *cocci_id/* drivers/cpufreq/brcmstb-avs-cpufreq.c 572 */;
	struct cpufreq_frequency_table *cocci_id/* drivers/cpufreq/brcmstb-avs-cpufreq.c 571 */;
	struct cpufreq_policy *cocci_id/* drivers/cpufreq/brcmstb-avs-cpufreq.c 455 */;
	unsigned int *cocci_id/* drivers/cpufreq/brcmstb-avs-cpufreq.c 365 */;
	u32 cocci_id/* drivers/cpufreq/brcmstb-avs-cpufreq.c 338 */[AVS_MAX_CMD_ARGS];
	struct pmap *cocci_id/* drivers/cpufreq/brcmstb-avs-cpufreq.c 336 */;
	void cocci_id/* drivers/cpufreq/brcmstb-avs-cpufreq.c 318 */;
	char *cocci_id/* drivers/cpufreq/brcmstb-avs-cpufreq.c 303 */;
	irqreturn_t cocci_id/* drivers/cpufreq/brcmstb-avs-cpufreq.c 293 */;
	void *cocci_id/* drivers/cpufreq/brcmstb-avs-cpufreq.c 293 */;
	u32 cocci_id/* drivers/cpufreq/brcmstb-avs-cpufreq.c 205 */;
	unsigned int cocci_id/* drivers/cpufreq/brcmstb-avs-cpufreq.c 203 */;
	void __iomem *cocci_id/* drivers/cpufreq/brcmstb-avs-cpufreq.c 202 */;
	unsigned long cocci_id/* drivers/cpufreq/brcmstb-avs-cpufreq.c 201 */;
	u32 cocci_id/* drivers/cpufreq/brcmstb-avs-cpufreq.c 199 */[];
	bool cocci_id/* drivers/cpufreq/brcmstb-avs-cpufreq.c 198 */;
	struct private_data *cocci_id/* drivers/cpufreq/brcmstb-avs-cpufreq.c 198 */;
	int cocci_id/* drivers/cpufreq/brcmstb-avs-cpufreq.c 198 */;
	struct device_node *cocci_id/* drivers/cpufreq/brcmstb-avs-cpufreq.c 185 */;
	const char *cocci_id/* drivers/cpufreq/brcmstb-avs-cpufreq.c 183 */;
	struct private_data {
		void __iomem *base;
		void __iomem *avs_intr_base;
		struct device *dev;
		struct completion done;
		struct semaphore sem;
		struct pmap pmap;
	} cocci_id/* drivers/cpufreq/brcmstb-avs-cpufreq.c 174 */;
	struct pmap {
		unsigned int mode;
		unsigned int p1;
		unsigned int p2;
		unsigned int state;
	} cocci_id/* drivers/cpufreq/brcmstb-avs-cpufreq.c 167 */;
}
