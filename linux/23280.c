cocci_test_suite() {
	struct wm8962_priv cocci_id/* sound/soc/codecs/wm8962.c 95 */;
	void *cocci_id/* sound/soc/codecs/wm8962.c 93 */;
	unsigned long cocci_id/* sound/soc/codecs/wm8962.c 93 */;
	struct notifier_block *cocci_id/* sound/soc/codecs/wm8962.c 92 */;
	struct wm8962_priv {
		struct wm8962_pdata pdata;
		struct regmap *regmap;
		struct snd_soc_component *component;
		int sysclk;
		int sysclk_rate;
		int bclk;
		int lrclk;
		struct completion fll_lock;
		int fll_src;
		int fll_fref;
		int fll_fout;
		struct mutex dsp2_ena_lock;
		u16 dsp2_ena;
		struct delayed_work mic_work;
		struct snd_soc_jack *jack;
		struct regulator_bulk_data supplies[WM8962_NUM_SUPPLIES];
		struct notifier_block disable_nb[WM8962_NUM_SUPPLIES];
		struct input_dev *beep;
		struct work_struct beep_work;
		int beep_rate;
#ifdef CONFIG_GPIOLIB
		struct gpio_chip gpio_chip;
#endif
		int irq;
	} cocci_id/* sound/soc/codecs/wm8962.c 51 */;
	const char *cocci_id/* sound/soc/codecs/wm8962.c 39 */[WM8962_NUM_SUPPLIES];
	struct i2c_driver cocci_id/* sound/soc/codecs/wm8962.c 3872 */;
	const struct of_device_id cocci_id/* sound/soc/codecs/wm8962.c 3866 */[];
	const struct i2c_device_id cocci_id/* sound/soc/codecs/wm8962.c 3860 */[];
	const struct dev_pm_ops cocci_id/* sound/soc/codecs/wm8962.c 3856 */;
	struct wm8962_pdata cocci_id/* sound/soc/codecs/wm8962.c 3555 */;
	const struct i2c_device_id *cocci_id/* sound/soc/codecs/wm8962.c 3534 */;
	struct i2c_client *cocci_id/* sound/soc/codecs/wm8962.c 3533 */;
	u32 cocci_id/* sound/soc/codecs/wm8962.c 3507 */;
	const struct device_node *cocci_id/* sound/soc/codecs/wm8962.c 3506 */;
	const struct regmap_config cocci_id/* sound/soc/codecs/wm8962.c 3491 */;
	const struct reg_sequence cocci_id/* sound/soc/codecs/wm8962.c 3485 */[];
	const struct snd_soc_component_driver cocci_id/* sound/soc/codecs/wm8962.c 3474 */;
	bool cocci_id/* sound/soc/codecs/wm8962.c 3408 */;
	const struct gpio_chip cocci_id/* sound/soc/codecs/wm8962.c 3357 */;
	unsigned cocci_id/* sound/soc/codecs/wm8962.c 3340 */;
	struct gpio_chip *cocci_id/* sound/soc/codecs/wm8962.c 3339 */;
	long int cocci_id/* sound/soc/codecs/wm8962.c 3219 */;
	const char *cocci_id/* sound/soc/codecs/wm8962.c 3216 */;
	size_t cocci_id/* sound/soc/codecs/wm8962.c 3216 */;
	struct device_attribute *cocci_id/* sound/soc/codecs/wm8962.c 3215 */;
	struct device *cocci_id/* sound/soc/codecs/wm8962.c 3214 */;
	ssize_t cocci_id/* sound/soc/codecs/wm8962.c 3214 */;
	struct input_dev *cocci_id/* sound/soc/codecs/wm8962.c 3190 */;
	struct work_struct *cocci_id/* sound/soc/codecs/wm8962.c 3153 */;
	void cocci_id/* sound/soc/codecs/wm8962.c 3153 */;
	int cocci_id/* sound/soc/codecs/wm8962.c 3149 */[];
	struct snd_soc_jack *cocci_id/* sound/soc/codecs/wm8962.c 3109 */;
	irqreturn_t cocci_id/* sound/soc/codecs/wm8962.c 3006 */;
	struct snd_soc_dai_driver cocci_id/* sound/soc/codecs/wm8962.c 2956 */;
	const struct snd_soc_dai_ops cocci_id/* sound/soc/codecs/wm8962.c 2949 */;
	struct _fll_div cocci_id/* sound/soc/codecs/wm8962.c 2813 */;
	struct _fll_div *cocci_id/* sound/soc/codecs/wm8962.c 2732 */;
	unsigned int cocci_id/* sound/soc/codecs/wm8962.c 2732 */;
	struct {
		unsigned int min;
		unsigned int max;
		u16 fll_fratio;
		int ratio;
	} cocci_id/* sound/soc/codecs/wm8962.c 2719 */[];
	struct _fll_div {
		u16 fll_fratio;
		u16 fll_outdiv;
		u16 fll_refclk_div;
		u16 n;
		u16 theta;
		u16 lambda;
	} cocci_id/* sound/soc/codecs/wm8962.c 2706 */;
	struct snd_soc_dai *cocci_id/* sound/soc/codecs/wm8962.c 2553 */;
	struct snd_pcm_hw_params *cocci_id/* sound/soc/codecs/wm8962.c 2552 */;
	struct snd_pcm_substream *cocci_id/* sound/soc/codecs/wm8962.c 2551 */;
	const struct {
		int rate;
		int reg;
	} cocci_id/* sound/soc/codecs/wm8962.c 2534 */[];
	enum snd_soc_bias_level cocci_id/* sound/soc/codecs/wm8962.c 2504 */;
	const int cocci_id/* sound/soc/codecs/wm8962.c 2394 */[];
	struct snd_soc_dapm_context *cocci_id/* sound/soc/codecs/wm8962.c 2357 */;
	struct wm8962_pdata *cocci_id/* sound/soc/codecs/wm8962.c 2356 */;
	const struct snd_soc_dapm_route cocci_id/* sound/soc/codecs/wm8962.c 2205 */[];
	const struct snd_soc_dapm_widget cocci_id/* sound/soc/codecs/wm8962.c 2178 */[];
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/wm8962.c 2077 */[];
	const struct snd_kcontrol_new cocci_id/* sound/soc/codecs/wm8962.c 2048 */;
	struct wm8962_priv *cocci_id/* sound/soc/codecs/wm8962.c 1990 */;
	struct snd_soc_component *cocci_id/* sound/soc/codecs/wm8962.c 1989 */;
	struct snd_kcontrol *cocci_id/* sound/soc/codecs/wm8962.c 1844 */;
	struct snd_soc_dapm_widget *cocci_id/* sound/soc/codecs/wm8962.c 1843 */;
	int cocci_id/* sound/soc/codecs/wm8962.c 1843 */;
	const char *cocci_id/* sound/soc/codecs/wm8962.c 1653 */[];
	struct snd_ctl_elem_value *cocci_id/* sound/soc/codecs/wm8962.c 1546 */;
	struct snd_ctl_elem_info *cocci_id/* sound/soc/codecs/wm8962.c 1534 */;
	u16 cocci_id/* sound/soc/codecs/wm8962.c 1482 */;
	const  cocci_id/* sound/soc/codecs/wm8962.c 1468 */(classd_tlv,
							    0,6,
							    TLV_DB_SCALE_ITEM(0,150,0),
							    7,7,
							    TLV_DB_SCALE_ITEM(1200,0,0));
	const  cocci_id/* sound/soc/codecs/wm8962.c 1454 */(mixinpga_tlv,
							    0,1,
							    TLV_DB_SCALE_ITEM(0,600,0),
							    2,2,
							    TLV_DB_SCALE_ITEM(1300,1300,0),
							    3,4,
							    TLV_DB_SCALE_ITEM(1800,200,0),
							    5,5,
							    TLV_DB_SCALE_ITEM(2400,0,0),
							    6,7,
							    TLV_DB_SCALE_ITEM(2700,300,0));
	const struct reg_default cocci_id/* sound/soc/codecs/wm8962.c 112 */[];
}
