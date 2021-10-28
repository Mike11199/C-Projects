from PIL import Image, ImageFilter
import cs50

before = Image.open("falcon9.jpg")
after = before.filter(ImageFilter.BoxBlur(10))
after.save("out.jpg")
