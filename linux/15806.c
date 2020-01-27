cocci_test_suite() {
	struct bcm2835_audio_driver cocci_id/* drivers/staging/vc04_services/bcm2835-audio/bcm2835.c 99 */;
	u32 cocci_id/* drivers/staging/vc04_services/bcm2835-audio/bcm2835.c 75 */;
	enum snd_bcm2835_route cocci_id/* drivers/staging/vc04_services/bcm2835-audio/bcm2835.c 74 */;
	const char *cocci_id/* drivers/staging/vc04_services/bcm2835-audio/bcm2835.c 73 */;
	struct bcm2835_chip *cocci_id/* drivers/staging/vc04_services/bcm2835-audio/bcm2835.c 72 */;
	int cocci_id/* drivers/staging/vc04_services/bcm2835-audio/bcm2835.c 72 */;
	struct bcm2835_audio_driver {
		struct device_driver driver;
		const char *shortname;
		const char *longname;
		int minchannels;
		bcm2835_audio_newpcm_func newpcm;
		bcm2835_audio_newctl_func newctl;
		enum snd_bcm2835_route route;
	} cocci_id/* drivers/staging/vc04_services/bcm2835-audio/bcm2835.c 62 */;
	int (*cocci_id/* drivers/staging/vc04_services/bcm2835-audio/bcm2835.c 60 */)(struct bcm2835_chip *chip);
	int (*cocci_id/* drivers/staging/vc04_services/bcm2835-audio/bcm2835.c 55 */)(struct bcm2835_chip *chip,
										      const char *name,
										      enum snd_bcm2835_route route,
										      u32 numchannels);
	struct bcm2835_vchi_ctx *cocci_id/* drivers/staging/vc04_services/bcm2835-audio/bcm2835.c 36 */;
	struct device *cocci_id/* drivers/staging/vc04_services/bcm2835-audio/bcm2835.c 34 */;
	struct platform_driver cocci_id/* drivers/staging/vc04_services/bcm2835-audio/bcm2835.c 333 */;
	pm_message_t cocci_id/* drivers/staging/vc04_services/bcm2835-audio/bcm2835.c 321 */;
	struct platform_device *cocci_id/* drivers/staging/vc04_services/bcm2835-audio/bcm2835.c 296 */;
	struct snd_card *cocci_id/* drivers/staging/vc04_services/bcm2835-audio/bcm2835.c 167 */;
	struct bcm2835_audio_driver *cocci_id/* drivers/staging/vc04_services/bcm2835-audio/bcm2835.c 163 */;
	void *cocci_id/* drivers/staging/vc04_services/bcm2835-audio/bcm2835.c 157 */;
	void cocci_id/* drivers/staging/vc04_services/bcm2835-audio/bcm2835.c 157 */;
	struct bcm2835_audio_drivers cocci_id/* drivers/staging/vc04_services/bcm2835-audio/bcm2835.c 142 */[];
	bool cocci_id/* drivers/staging/vc04_services/bcm2835-audio/bcm2835.c 14 */;
	struct bcm2835_audio_drivers {
		struct bcm2835_audio_driver *audio_driver;
		const bool *is_enabled;
	} cocci_id/* drivers/staging/vc04_services/bcm2835-audio/bcm2835.c 137 */;
}
