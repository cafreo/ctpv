# video: ffmpegthumbnailer

video() {
	ffmpegthumbnailer -i "${f}" -o "${cache_f}" -c "jpeg" -s 0 -q 8 -s 0 -t 50% 2>/dev/null
}

convert_and_show_image video
