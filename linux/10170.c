cocci_test_suite() {
	struct dsp_tone *cocci_id/* drivers/isdn/mISDN/dsp_tones.c 500 */;
	struct pattern *cocci_id/* drivers/isdn/mISDN/dsp_tones.c 498 */;
	struct dsp *cocci_id/* drivers/isdn/mISDN/dsp_tones.c 496 */;
	struct timer_list *cocci_id/* drivers/isdn/mISDN/dsp_tones.c 460 */;
	struct sk_buff *cocci_id/* drivers/isdn/mISDN/dsp_tones.c 440 */;
	u8 *cocci_id/* drivers/isdn/mISDN/dsp_tones.c 375 */;
	struct pattern {
		int tone;
		u8 *data[10];
		u32 *siz[10];
		u32 seq[10];
	} cocci_id/* drivers/isdn/mISDN/dsp_tones.c 235 */[];
	int cocci_id/* drivers/isdn/mISDN/dsp_tones.c 216 */;
	void cocci_id/* drivers/isdn/mISDN/dsp_tones.c 213 */;
	struct tones_samples cocci_id/* drivers/isdn/mISDN/dsp_tones.c 196 */[];
	struct tones_samples {
		u32 *len;
		u8 *data;
	} cocci_id/* drivers/isdn/mISDN/dsp_tones.c 192 */;
	u32 cocci_id/* drivers/isdn/mISDN/dsp_tones.c 134 */;
	u8 cocci_id/* drivers/isdn/mISDN/dsp_tones.c 117 */[];
}
