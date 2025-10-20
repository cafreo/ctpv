# svg: convert

svg() {
	rsvg-convert -f png "${f}" -o "${cache_f}"
}

convert_and_show_image svg
