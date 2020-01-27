cocci_test_suite() {
	u8 cocci_id/* drivers/mfd/twl4030-audio.c 66 */;
	struct twl4030_audio {
		unsigned int audio_mclk;
		struct mutex mutex;
		struct twl4030_audio_resource resource[TWL4030_AUDIO_RES_MAX];
		struct mfd_cell cells[TWL4030_AUDIO_CELLS];
	} cocci_id/* drivers/mfd/twl4030-audio.c 33 */;
	struct platform_driver cocci_id/* drivers/mfd/twl4030-audio.c 275 */;
	struct twl4030_audio_resource {
		int request_count;
		u8 reg;
		u8 mask;
	} cocci_id/* drivers/mfd/twl4030-audio.c 27 */;
	const struct of_device_id cocci_id/* drivers/mfd/twl4030-audio.c 269 */[];
	struct platform_device *cocci_id/* drivers/mfd/twl4030-audio.c 25 */;
	struct twl4030_audio cocci_id/* drivers/mfd/twl4030-audio.c 192 */;
	struct mfd_cell *cocci_id/* drivers/mfd/twl4030-audio.c 183 */;
	struct device_node *cocci_id/* drivers/mfd/twl4030-audio.c 148 */;
	bool cocci_id/* drivers/mfd/twl4030-audio.c 147 */;
	struct twl4030_audio_data *cocci_id/* drivers/mfd/twl4030-audio.c 147 */;
	unsigned int cocci_id/* drivers/mfd/twl4030-audio.c 139 */;
	void cocci_id/* drivers/mfd/twl4030-audio.c 139 */;
	struct twl4030_audio *cocci_id/* drivers/mfd/twl4030-audio.c 109 */;
	enum twl4030_audio_res cocci_id/* drivers/mfd/twl4030-audio.c 107 */;
	int cocci_id/* drivers/mfd/twl4030-audio.c 107 */;
}
