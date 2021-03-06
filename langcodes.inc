<?php
/**
 * Since every network provides other language sets we let the user choose every single one
 * 
 * http://www.facebook.com/translations/FacebookLocales.xml
 * https://dev.twitter.com/overview/general/adding-international-support-to-your-apps
 * https://developers.google.com/+/web/api/supported-languages
 */

function lazy_social_langcodes() {
	$langcodes = array();
	$langcodes['facebook'] = array(
		'af_ZA' => 'Afrikaans',
		'ar_AR' => 'Arabic',
		'az_AZ' => 'Azerbaijani',
		'be_BY' => 'Belarusian',
		'bg_BG' => 'Bulgarian',
		'bn_IN' => 'Bengali',
		'bs_BA' => 'Bosnian',
		'ca_ES' => 'Catalan',
		'cs_CZ' => 'Czech',
		'cx_PH' => 'Cebuano',
		'cy_GB' => 'Welsh',
		'da_DK' => 'Danish',
		'de_DE' => 'German',
		'el_GR' => 'Greek',
		'en_GB' => 'English (UK)',
		'en_PI' => 'English (Pirate)',
		'en_UD' => 'English (Upside Down)',
		'en_US' => 'English (US)',
		'eo_EO' => 'Esperanto',
		'es_ES' => 'Spanish (Spain)',
		'es_LA' => 'Spanish',
		'et_EE' => 'Estonian',
		'eu_ES' => 'Basque',
		'fa_IR' => 'Persian',
		'fb_LT' => 'Leet Speak',
		'fi_FI' => 'Finnish',
		'fo_FO' => 'Faroese',
		'fr_CA' => 'French (Canada)',
		'fr_FR' => 'French (France)',
		'fy_NL' => 'Frisian',
		'ga_IE' => 'Irish',
		'gl_ES' => 'Galician',
		'gn_PY' => 'Guarani',
		'gu_IN' => 'Gujarati',
		'he_IL' => 'Hebrew',
		'hi_IN' => 'Hindi',
		'hr_HR' => 'Croatian',
		'hu_HU' => 'Hungarian',
		'hy_AM' => 'Armenian',
		'id_ID' => 'Indonesian',
		'is_IS' => 'Icelandic',
		'it_IT' => 'Italian',
		'ja_JP' => 'Japanese',
		'ja_KS' => 'Japanese (Kansai)',
		'jv_ID' => 'Javanese',
		'ka_GE' => 'Georgian',
		'kk_KZ' => 'Kazakh',
		'km_KH' => 'Khmer',
		'kn_IN' => 'Kannada',
		'ko_KR' => 'Korean',
		'ku_TR' => 'Kurdish',
		'la_VA' => 'Latin',
		'lt_LT' => 'Lithuanian',
		'lv_LV' => 'Latvian',
		'mk_MK' => 'Macedonian',
		'ml_IN' => 'Malayalam',
		'mn_MN' => 'Mongolian',
		'mr_IN' => 'Marathi',
		'ms_MY' => 'Malay',
		'nb_NO' => 'Norwegian (bokmal)',
		'ne_NP' => 'Nepali',
		'nl_NL' => 'Dutch',
		'nn_NO' => 'Norwegian (nynorsk)',
		'pa_IN' => 'Punjabi',
		'pl_PL' => 'Polish',
		'ps_AF' => 'Pashto',
		'pt_BR' => 'Portuguese (Brazil)',
		'pt_PT' => 'Portuguese (Portugal)',
		'ro_RO' => 'Romanian',
		'ru_RU' => 'Russian',
		'si_LK' => 'Sinhala',
		'sk_SK' => 'Slovak',
		'sl_SI' => 'Slovenian',
		'sq_AL' => 'Albanian',
		'sr_RS' => 'Serbian',
		'sv_SE' => 'Swedish',
		'sw_KE' => 'Swahili',
		'ta_IN' => 'Tamil',
		'te_IN' => 'Telugu',
		'tg_TJ' => 'Tajik',
		'th_TH' => 'Thai',
		'tl_PH' => 'Filipino',
		'tr_TR' => 'Turkish',
		'uk_UA' => 'Ukrainian',
		'ur_PK' => 'Urdu',
		'uz_UZ' => 'Uzbek',
		'vi_VN' => 'Vietnamese',
		'zh_CN' => 'Simplified Chinese (China)',
		'zh_HK' => 'Traditional Chinese (Hong Kong)',
		'zh_TW' => 'Traditional Chinese (Taiwan)'
	);
	$langcodes['twitter'] = array(
		'en'		=> 'en',
		'hi'		=> 'hi',
		'zh-cn' => 'zh-cn',
		'fr' 		=> 'fr',
		'zh-tw' => 'zh-tw',
		'msa'		=> 'msa',
		'fil'		=> 'fil',
		'fi'		=> 'fi',
		'sv'		=> 'sv',
		'pl' 		=> 'pl',
		'ja' 		=> 'ja',
		'ko' 		=> 'ko',
		'de' 		=> 'de',
		'it' 		=> 'it',
		'pt' 		=> 'pt',
		'es' 		=> 'es',
		'ru' 		=> 'ru',
		'id' 		=> 'id',
		'tr' 		=> 'tr',
		'da' 		=> 'da',
		'no' 		=> 'no',
		'nl' 		=> 'nl',
		'hu' 		=> 'hu',
		'fa' 		=> 'fa',
		'ar' 		=> 'ar',
		'ur' 		=> 'ur',
		'he' 		=> 'he',
		'th' 		=> 'th'
	);
	$langcodes['google'] = array(
		'af' 		=> 'Afrikaans',
		'am' 		=> 'Amharic',
		'ar' 		=> 'Arabic',
		'eu' 		=> 'Basque',
		'bn' 		=> 'Bengali',
		'bg' 		=> 'Bulgarian',
		'ca' 		=> 'Catalan',
		'zh-HK' => 'Chinese (Hong Kong)',
		'zh-CN' => 'Chinese (Simplified)',
		'zh-TW' => 'Chinese (Traditional)',
		'hr'		=> 'Croatian',
		'cs'		=> 'Czech',
		'da'		=> 'Danish',
		'nl'		=> 'Dutch',
		'en-GB'	=> 'English (UK)',
		'en-US'	=> 'English (US)',
		'et' 		=> 'Estonian',
		'fil' 	=> 'Filipino',
		'fi' 		=> 'Finnish',
		'fr' 		=> 'French',
		'fr-CA' => 'French (Canadian)',
		'gl'		=> 'Galician',
		'de'		=> 'German',
		'el'		=> 'Greek',
		'gu'		=> 'Gujarati',
		'iw'		=> 'Hebrew',
		'hi'		=> 'Hindi',
		'hu'		=> 'Hungarian',
		'is'		=> 'Icelandic',
		'id'		=> 'Indonesian',
		'it'		=> 'Italian',
		'ja'		=> 'Japanese',
		'kn'		=> 'Kannada',
		'ko'		=> 'Korean',
		'lv'		=> 'Latvian',
		'lt'		=> 'Lithuanian',
		'ms'		=> 'Malay',
		'ml'		=> 'Malayalam',
		'mr'		=> 'Marathi',
		'no'		=> 'Norwegian',
		'fa'		=> 'Persian',
		'pl'		=> 'Polish',
		'pt-BR'	=> 'Portuguese (Brazil)',
		'pt-PT'	=> 'Portuguese (Portugal)',
		'ro'		=> 'Romanian',
		'ru'		=> 'Russian',
		'sr'		=> 'Serbian',
		'sk'		=> 'Slovak',
		'sl'		=> 'Slovenian',
		'es'		=> 'Spanish',
		'es-419'=> 'Spanish (Latin America)',
		'sw' 		=> 'Swahili',
		'sv' 		=> 'Swedish',
		'ta'		=> 'Tamil',
		'te'		=> 'Telugu',
		'th'		=> 'Thai',
		'tr'		=> 'Turkish',
		'uk'		=> 'Ukrainian',
		'ur'		=> 'Urdu',
		'vi'		=> 'Vietnamese',
		'zu'		=> 'Zulu'
	);
	return $langcodes;
}

function lazy_social_langcode_options($network) {
	$langcodes = lazy_social_langcodes();

	foreach ($langcodes as $set => $options) {
		asort($options);
		array_unshift($options, t('- Please choose -'));
		$langcodes[$set] = $options;
	}
	return $langcodes[$network];
}