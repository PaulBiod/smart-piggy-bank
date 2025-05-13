const char * wifi_icon(float wifi_strength) {
    if (isnan(wifi_strength))
			return "\U000F092B"; // No-wifi
	else if (wifi_strength < 10)
			return "\U000F0920";  // low-wifi
	else if (wifi_strength < 30)
			return "\U000F091F"; // wifi-1
	else if (wifi_strength < 50)
			return "\U000F0922"; // wifi-2
	else if (wifi_strength < 75)
			return "\U000F0925"; // wifi-3
	else
			return "\U000F05A9"; // wifi-4
}