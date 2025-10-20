# audio: ffmpegthumbnailer ffmpeg

meta="$(exiftool -d "%d.%m.%Y" -S -Title -Artist -Album -Band -Track -Duration -DateTimeOriginal -FileSize -AudioBitrate -SampleRate -ChannelMode -FileName -- "${f}")"
echo -e "${meta}\n"
    
y=$(( y + $(echo -e "${meta}\n" | wc -l) ))

audio() {
    
    ffmpegthumbnailer -i "${f}" -o "${cache_f}" -s 256 -c "jpg" -q 8 2>/dev/null
}

convert_and_show_image audio

