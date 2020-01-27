cocci_test_suite() {
	enum intel_pdi_type{INTEL_PDI_IN=0, INTEL_PDI_OUT=1, INTEL_PDI_BD=2,} cocci_id/* drivers/soundwire/intel.c 97 */;
	struct sdw_cdns_stream_config cocci_id/* drivers/soundwire/intel.c 920 */;
	struct platform_device *cocci_id/* drivers/soundwire/intel.c 918 */;
	struct sdw_master_ops cocci_id/* drivers/soundwire/intel.c 896 */;
	char cocci_id/* drivers/soundwire/intel.c 858 */[32];
	struct fwnode_handle *cocci_id/* drivers/soundwire/intel.c 857 */;
	struct sdw_master_prop *cocci_id/* drivers/soundwire/intel.c 856 */;
	bool cocci_id/* drivers/soundwire/intel.c 759 */;
	enum intel_pdi_type cocci_id/* drivers/soundwire/intel.c 758 */;
	struct snd_soc_dai_driver *cocci_id/* drivers/soundwire/intel.c 757 */;
	struct sdw_cdns *cocci_id/* drivers/soundwire/intel.c 756 */;
	const struct snd_soc_component_driver cocci_id/* drivers/soundwire/intel.c 752 */;
	const struct snd_soc_dai_ops cocci_id/* drivers/soundwire/intel.c 738 */;
	void *cocci_id/* drivers/soundwire/intel.c 727 */;
	struct sdw_cdns_dma_data *cocci_id/* drivers/soundwire/intel.c 698 */;
	struct sdw_port_config *cocci_id/* drivers/soundwire/intel.c 622 */;
	struct sdw_stream_config cocci_id/* drivers/soundwire/intel.c 621 */;
	struct sdw_cdns_pdi *cocci_id/* drivers/soundwire/intel.c 620 */;
	struct sdw_bus *cocci_id/* drivers/soundwire/intel.c 569 */;
	struct sdw_intel_link_res *cocci_id/* drivers/soundwire/intel.c 537 */;
	struct snd_pcm_hw_params *cocci_id/* drivers/soundwire/intel.c 535 */;
	struct snd_soc_dai *cocci_id/* drivers/soundwire/intel.c 534 */;
	struct snd_pcm_substream *cocci_id/* drivers/soundwire/intel.c 533 */;
	struct sdw_intel *cocci_id/* drivers/soundwire/intel.c 532 */;
	struct sdw_cdns_streams *cocci_id/* drivers/soundwire/intel.c 453 */;
	unsigned int *cocci_id/* drivers/soundwire/intel.c 438 */;
	struct sdw_cdns_stream_config *cocci_id/* drivers/soundwire/intel.c 371 */;
	unsigned int cocci_id/* drivers/soundwire/intel.c 291 */;
	void cocci_id/* drivers/soundwire/intel.c 276 */;
	struct dentry *cocci_id/* drivers/soundwire/intel.c 263 */;
	ssize_t cocci_id/* drivers/soundwire/intel.c 199 */;
	char *cocci_id/* drivers/soundwire/intel.c 198 */;
	struct seq_file *cocci_id/* drivers/soundwire/intel.c 193 */;
	size_t cocci_id/* drivers/soundwire/intel.c 181 */;
	u32 cocci_id/* drivers/soundwire/intel.c 137 */;
	void __iomem *cocci_id/* drivers/soundwire/intel.c 137 */;
	int cocci_id/* drivers/soundwire/intel.c 137 */;
	u16 cocci_id/* drivers/soundwire/intel.c 127 */;
	struct sdw_intel cocci_id/* drivers/soundwire/intel.c 112 */;
	struct sdw_intel {
		struct sdw_cdns cdns;
		int instance;
		struct sdw_intel_link_res *res;
#ifdef CONFIG_DEBUG_FS
		struct dentry *debugfs;
#endif
	} cocci_id/* drivers/soundwire/intel.c 103 */;
	struct platform_driver cocci_id/* drivers/soundwire/intel.c 1028 */;
}
